//
//  ChatTableViewController.swift
//  PrivateChat
//
//  Created by lynx on 05/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class ChatTableViewController: UIViewController, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate{

    @IBOutlet weak var heightConstraint: NSLayoutConstraint!
    
    @IBOutlet weak var tableView: UITableView!
    @IBOutlet weak var message: UITextField!
    
    var messages: [(message: Message, from: User)] = []
    public var user: User?
    var storage = FirebaseStorage.shared
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        message.delegate = self
        self.tableView.dataSource = self
        self.tableView.delegate = self
        self.tableView.estimatedRowHeight = 120
        self.tableView.rowHeight = UITableViewAutomaticDimension
        
        self.tableView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(focusOnTable)))
        
        storage.newMessageEvent = newMessage
    }
    
    func newMessage( message: Message, user: User)->Void{
            messages.append((message, user))
            self.tableView.reloadData()
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

    private func showError(title: String, error: Error){
        let ctr = UIAlertController(title: title, message: error.localizedDescription, preferredStyle: .alert)
        
        ctr.addAction(UIAlertAction(title: "Got it", style: .default, handler: nil))
        
        self.present(ctr, animated: true, completion: nil)
    }
    
    @IBAction func sendMessage(_ sender: UIButton) {
        sender.isEnabled = false
        self.message.endEditing(true)
        if let text = self.message.text{
            let newMessage = Message(authorId:  self.user!.id, text: text, id: UUID().uuidString)
            
            self.storage.sendMessage(message: newMessage) { (success, error) in
                self.message.text = nil
                sender.isEnabled = true
                
                if !success{
                    self.showError(title: "Error occur while sending message", error: error!)
                }
            }
        }
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let userMessage = messages[indexPath.row]
        guard let user = user else {
            return UITableViewCell(style: .default, reuseIdentifier: nil)
        }
        
        let cell = tableView.dequeueReusableCell( withIdentifier : user.id == userMessage.message.authorId ? "MyCell" : "InterlocutorCell", for: indexPath) as! MessageTableViewCell
        
        let userPic = userMessage.from.photo
        cell.logo.image = UIImage(named: userPic)
        cell.bubble.image = UIImage(named: user.id == userMessage.message.authorId ? "chat_bubble_sent" : "chat_bubble_received")?.resizableImage(withCapInsets:
            UIEdgeInsetsMake(17, 21, 17, 21), resizingMode: .stretch)
            .withRenderingMode(.alwaysTemplate)
        
        cell.bubble.tintColor = user.id == userMessage.message.authorId ? UIColor.blue : UIColor.green
        cell.message.text = userMessage.message.text
        
        return cell
    }
}
