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
    
    func loadMessages(){
        messageDb.observe(.childAdded) { (snapshot) in
            let messages = snapshot.value as! [String: String]
            
            let message = Message(authorId: messages["autorId"]!, text: messages["text"]!, id: "")
            
            if self.preloadUserPictures[messages["autorId"]!] == nil{
                self.userDb.child(messages["autorId"]!).observe(.value) { (snap) in
                    let uservalues = snap.value as! [String: String]
                    self.preloadUserPictures[messages["autorId"]!] = uservalues["photo"]
                    self.newMessageEvent!(message, User(id: messages["autorId"]!, photo: uservalues["photo"]!))
                }
            }else{
                self.newMessageEvent!(message, User(id: messages["autorId"]!, photo: self.preloadUserPictures[messages["autorId"]!]!))
            }
        }
    }
    
    func sendMessage(message: Message, completeHandler: @escaping (Bool, Error?)->Void) {
            messageDb.childByAutoId().setValue(["autorId":  message.authorId, "text": message.text], withCompletionBlock: { (error, db) in
                if error != nil{
                    completeHandler(false, error)
                }else{
                    completeHandler(true, nil)
                }
            })
    }
    
    
    var preloadUserPictures: [String: String] = [:]
}
