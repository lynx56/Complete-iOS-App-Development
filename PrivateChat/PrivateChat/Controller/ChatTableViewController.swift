//
//  ChatTableViewController.swift
//  PrivateChat
//
//  Created by lynx on 05/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class ChatTableViewController: UIViewController, UITableViewDelegate, UITableViewDataSource, UITextViewDelegate{

    @IBOutlet weak var heightConstraint: NSLayoutConstraint!
    
    @IBOutlet weak var tableView: UITableView!
    @IBOutlet weak var message: UITextView!
    @IBOutlet weak var messageView: UIView!
    @IBOutlet weak var textHeight: NSLayoutConstraint!
    var originalTextHeight: CGFloat = 0
    
    var messages: [UserMessage] = []
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
        self.navigationController?.navigationBar.barTintColor = #colorLiteral(red: 0.1294117647, green: 0.7450980392, blue: 0.7176470588, alpha: 1)
        self.originalTextHeight = textHeight.constant
        self.message.layer.cornerRadius = 4.07
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        self.heightConstraint.constant = self.navigationController!.navigationBar.bounds.height + UIApplication.shared.statusBarFrame.height
        
        storage.history { (result, error) in
            self.messages = result
            self.messages.sort(by: {$0.message.timestamp < $1.message.timestamp})
            self.tableView.reloadData()
            self.storage.newMessageEvent = self.newMessage
            self.scrollToLastMessage()
        }
        
        subscribeToKeyboardEvents()
    }
    
    func subscribeToKeyboardEvents(){
        NotificationCenter.default.addObserver(self, selector: #selector(keyboardWillShow), name: NSNotification.Name.UIKeyboardWillShow, object: nil)
        
        NotificationCenter.default.addObserver(self, selector: #selector(keyboardWillHide), name: NSNotification.Name.UIKeyboardWillHide, object: nil)
    }
    
    deinit {
        NotificationCenter.default.removeObserver(self)
    }
    
    @objc func keyboardWillShow(_ notification: Notification){
        let keyboardSize = (notification.userInfo![UIKeyboardFrameEndUserInfoKey] as! CGRect).size
        
        if self.heightConstraint.constant < keyboardSize.height{
            self.heightConstraint.constant = keyboardSize.height + self.messageView.bounds.height
            self.view.layoutIfNeeded()
        }
    }
    
    @objc func keyboardWillHide(_ notification: Notification){
        let rate = notification.userInfo![UIKeyboardAnimationDurationUserInfoKey] as! Double
        UIView.animate(withDuration: rate) {
            self.heightConstraint.constant = self.navigationController!.navigationBar.bounds.height + UIApplication.shared.statusBarFrame.height
            self.view.layoutIfNeeded()
        }
    }
    
    func textViewDidChange(_ textView: UITextView) {
        let textHeight = textView.textHeight(withWidth: textView.bounds.width)
        if  textHeight > textView.bounds.height && textView.bounds.height < 55{
            self.textHeight.constant = textHeight
            textView.layoutIfNeeded()
        }
    }
    
    func scrollToLastMessage(){
        if self.messages.count > 0{
            self.tableView.scrollToRow(at: IndexPath(row: self.messages.count - 1, section: 0), at: .bottom, animated: true)
        }
    }
    
    func newMessage(_ userMessage: UserMessage)->Void{
            messages.append(userMessage)
            messages.sort(by: {$0.message.timestamp < $1.message.timestamp})
            self.tableView.reloadData()
    }
    
    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        NotificationCenter.default.removeObserver(self)
    }
  
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @objc func focusOnTable(_ gesture: UITapGestureRecognizer){
        if gesture.state == .ended{
            self.message.endEditing(true)
        }
    }
    
    // MARK: - Table view data source
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
        return messages.count
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
            let newMessage = Message(authorId:  self.user!.id, text: text, id: UUID().uuidString, timestamp: Date().timeIntervalSince1970 * 1000)
            
            self.storage.sendMessage(message: newMessage) { (success, error) in
                self.message.text = nil
                self.textHeight.constant = self.originalTextHeight
                self.message.layoutIfNeeded()
                sender.isEnabled = true
                self.scrollToLastMessage()
                
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
        
        let userPic = userMessage.user.photo
        cell.logo.image = UIImage(named: userPic)
        cell.message.text = userMessage.message.text
        
        let bubbleImage: UIImage
        
        if userMessage.fromAuthor(user.id){
            bubbleImage = UIImage(named: "chat_bubble_sent")!
            cell.bubble.tintColor = #colorLiteral(red: 0.9606800675, green: 0.9608443379, blue: 0.9606696963, alpha: 1)
        }else{
            bubbleImage = UIImage(named: "chat_bubble_received")!
            cell.bubble.tintColor = #colorLiteral(red: 0.7764705882, green: 1, blue: 0.9764705882, alpha: 1)
        }
        
        cell.message.textColor = #colorLiteral(red: 0.3215686275, green: 0.3254901961, blue: 0.3411764706, alpha: 1)
        cell.bubble.image = bubbleImage.resizableImage(withCapInsets:
            UIEdgeInsetsMake(17, 21, 17, 21), resizingMode: .stretch)
            .withRenderingMode(.alwaysTemplate)
    
        cell.message.sizeToFit()
        
        return cell
    }
    
    @IBAction func logout(_ sender: Any) {
        if let error = storage.logOut(){
            showError(title: "Log Out error", error: error)
        }else{
            user = nil
            dismiss(animated: true, completion: nil)
        }
    }
}

struct UserMessage{
    var user: User
    var message: Message
}

extension UserMessage{
    func fromAuthor(_ id: String)->Bool{
        return self.message.authorId == id
    }
}

