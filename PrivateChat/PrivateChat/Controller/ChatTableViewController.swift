//
//  ChatTableViewController.swift
//  PrivateChat
//
//  Created by lynx on 05/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit
import Firebase

class ChatTableViewController: UIViewController, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate{

    @IBOutlet weak var heightConstraint: NSLayoutConstraint!
    
    @IBOutlet weak var tableView: UITableView!
    @IBOutlet weak var message: UITextField!
    
    var messages: [Message] = []
    public var user: User?
    var database: DatabaseReference!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        message.delegate = self
        self.tableView.dataSource = self
        self.tableView.delegate = self
        self.tableView.estimatedRowHeight = 120
        self.tableView.rowHeight = UITableViewAutomaticDimension
        
        self.tableView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(focusOnTable)))
        database = Database.database().reference()
        loadMessages()
        loadUserPicture(userId: user!.id)
        // Uncomment the following line to preserve selection between presentations
        // self.clearsSelectionOnViewWillAppear = false

        // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
        // self.navigationItem.rightBarButtonItem = self.editButtonItem
    }
    
    func loadMessages(){
        database.child("Messages").observe(.childAdded) { (snapshot) in
            let messages = snapshot.value as! [String: String]
            
            let message = Message(authorId: messages["autorId"]!, text: messages["text"]!, id: "")
            
            self.messages.append(message)
            
            self.loadUserPicture(userId: messages["autorId"]!)
            
            self.tableView.reloadData()
        }
    }
    
    var preloadUserPictures: [String: String] = [:]
    func loadUserPicture(userId: String){
            if preloadUserPictures[userId] == nil{
                database.child("Users").child(userId).observe(.value) { (snap) in
                    let uservalues = snap.value as! [String: String]
                    self.preloadUserPictures[userId] = uservalues["photo"]
                    
                    self.tableView.reloadData()
                }
        }
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @objc func focusOnTable(_ gesture: UITapGestureRecognizer){
        if gesture.state == .ended{
            self.view.endEditing(true)
        }
    }
    
    // MARK: - Table view data source
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
        return messages.count
    }
    
    func textFieldDidBeginEditing(_ textField: UITextField) {
        UIView.animate(withDuration: 0.5) {
            self.heightConstraint.constant = 315
            self.view.layoutIfNeeded()
        }
    }
    
    func textFieldDidEndEditing(_ textField: UITextField) {
        UIView.animate(withDuration: 0.5) {
            self.heightConstraint.constant = 44
            self.view.layoutIfNeeded()
        }
    }

    @IBAction func sendMessage(_ sender: UIButton) {
        sender.isEnabled = false
        self.message.endEditing(true)
        if let text = self.message.text{
            database.child("Messages").childByAutoId().setValue(["autorId":  self.user!.id, "text": text], withCompletionBlock: { (error, db) in
                if error != nil{
                    print(error)
                }else{
                    print("message saved")
                }
                self.message.text = nil
                sender.isEnabled = true
            })
        }
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let message = messages[indexPath.row]
        guard let user = user else {
            return UITableViewCell(style: .default, reuseIdentifier: nil)
        }
        
        let cell = tableView.dequeueReusableCell( withIdentifier : user.id == message.authorId ? "MyCell" : "InterlocutorCell", for: indexPath) as! MessageTableViewCell
        
        if let userPic = preloadUserPictures[message.authorId]{
            cell.logo.image = UIImage(named: userPic)
            cell.bubble.image = UIImage(named: user.id == message.authorId ? "chat_bubble_sent" : "chat_bubble_received")?.resizableImage(withCapInsets:
                UIEdgeInsetsMake(17, 21, 17, 21), resizingMode: .stretch)
                .withRenderingMode(.alwaysTemplate)
            
            cell.bubble.tintColor = user.id == message.authorId ? UIColor.blue : UIColor.green
        }
        else{
            cell.logo.image = nil
            cell.bubble.image = nil
        }
        
        cell.message.text = message.text
        
        return cell
    }
    

    /*
    // Override to support conditional editing of the table view.
    override func tableView(_ tableView: UITableView, canEditRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the specified item to be editable.
        return true
    }
    */

    /*
    // Override to support editing the table view.
    override func tableView(_ tableView: UITableView, commit editingStyle: UITableViewCellEditingStyle, forRowAt indexPath: IndexPath) {
        if editingStyle == .delete {
            // Delete the row from the data source
            tableView.deleteRows(at: [indexPath], with: .fade)
        } else if editingStyle == .insert {
            // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
        }    
    }
    */

    /*
    // Override to support rearranging the table view.
    override func tableView(_ tableView: UITableView, moveRowAt fromIndexPath: IndexPath, to: IndexPath) {

    }
    */

    /*
    // Override to support conditional rearranging of the table view.
    override func tableView(_ tableView: UITableView, canMoveRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the item to be re-orderable.
        return true
    }
    */

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
