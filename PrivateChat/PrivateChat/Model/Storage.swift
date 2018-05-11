//
//  Storage.swift
//  PrivateChat
//
//  Created by lynx on 08/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation
import Firebase
import FirebaseAuth

protocol Storage{
    func login(email: String, password: String, completeHandler: @escaping (_ user: User?, _ error: Error?) -> Void )
    func signup(email: String, password: String, photo: String, completeHandler: @escaping (_ user: User?, _ error: Error?) -> Void)
}

class FirebaseStorage: NSObject, Storage{
    var database: DatabaseReference!
    var userDb: DatabaseReference!
    var messageDb: DatabaseReference!
    
    static let shared = FirebaseStorage()
    
    var newMessageEvent: ((Message, User)->Void)?{
        didSet{
            loadMessages()
        }
    }
    
    private override init(){
      //  FirebaseApp.configure()
        database = Database.database().reference()
        userDb = database.child("Users")
        messageDb = database.child("Messages")
    }
    
    func reinit(){
        database = Database.database().reference()
        userDb = database.child("Users")
        messageDb = database.child("Messages")
    }
    
    func login(email: String, password: String, completeHandler: @escaping (_ user: User?, _ error: Error?) -> Void ){
        Auth.auth().signInAndRetrieveData(withEmail: email, password: password) { (user, error) in
            if let error = error{
                completeHandler(nil, error)
                return
            }
            
            if let user = user{
                self.userDb.child(user.user.uid).observe(.value, with: { (snap) in
                    let userPhoto = snap.value as! [String: String]
                    
                    completeHandler(User(id: user.user.uid, photo: userPhoto["photo"]!), nil)
                    
                    return
                    
                })
                
            }
        }
    }
    
    func signup(email: String, password: String, photo: String, completeHandler: @escaping (_ user: User?, _ error: Error?) -> Void) {
        Auth.auth().createUser(withEmail: email, password: password) { (user, error) in
                if let error = error{
                    completeHandler(nil, error)
                    return
                }
                
                if let user = user{
                    let dic = ["photo": photo]
                    self.userDb.child(user.uid).setValue(dic, withCompletionBlock: { (error, ref) in
                        if error != nil{
                            completeHandler(nil, error)
                            return
                        }else{
                            completeHandler(User(id: user.uid, photo: photo), nil)
                            return
                        }
                    })
                }
            }
    }
    
    
    func timestamp()->Double{
        return Date().timeIntervalSince1970 * 1000
    }
    
    func loadMessages(){
        messageDb.queryOrdered(byChild: "timestamp").queryStarting(atValue: timestamp()).observe(.childAdded) { (snapshot) in
            let messages = snapshot.value as! [String: Any]
            
            let message = Message(authorId: messages["autorId"]! as! String, text: messages["text"]! as! String, id: messages["id"]!   as! String, timestamp: messages["timestamp"]! as! Double)
            
            self.getUser(message: message, handle: { (user) in
                 self.newMessageEvent!(message, user)
            })
        }
    }
    
    func getUser(message: Message, handle: @escaping (User)->Void){
        if self.preloadUserPictures[message.authorId] == nil{
            self.userDb.child(message.authorId).observe(.value) { (snap) in
                let uservalues = snap.value as! [String: String]
                self.preloadUserPictures[message.authorId] = uservalues["photo"]
                handle(User(id: message.authorId, photo: uservalues["photo"]!))
            }
        }else{
            handle(User(id: message.authorId, photo: self.preloadUserPictures[message.authorId]! ))
        }
    }
    
    func sendMessage(message: Message, completeHandler: @escaping (Bool, Error?)->Void) {
        messageDb.childByAutoId().setValue(["autorId":  message.authorId, "text": message.text, "id": message.id, "timestamp" : message.timestamp], withCompletionBlock: { (error, db) in
                if error != nil{
                    completeHandler(false, error)
                }else{
                    completeHandler(true, nil)
                }
            })
    }
    
    func history(completeHandler: @escaping ([(message: Message, user: User)], Error?)->Void) {
        messageDb.observeSingleEvent(of: .value) { (snapshot) in
            if snapshot.childrenCount == 0{
                completeHandler([],nil)
                return
            }
            
            let messages = snapshot.value as! [String: AnyObject]
            let group = DispatchGroup()
            var result: [(message: Message, user: User)] = []
            
            for message in messages{
                group.enter()
                let newMessage = Message(authorId: message.value["autorId"]! as! String, text: message.value["text"]! as! String, id: message.value["id"]! as! String, timestamp: message.value["timestamp"] as! Double)
                self.getUser(message: newMessage, handle: { (user) in
                    result.append((message: newMessage, user: user))
                    group.leave()
                })
                
            }
            
            group.notify(queue: DispatchQueue.main){
                completeHandler(result, nil)
            }
        }
    }
    
    func logOut()->Error?{
        do{
            try Auth.auth().signOut()
        }catch{
            return error
        }
        
        return nil
    }
    
    
    var preloadUserPictures: [String: String] = [:]
}

