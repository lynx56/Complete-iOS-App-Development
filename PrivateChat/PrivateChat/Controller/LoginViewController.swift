//
//  LoginViewController.swift
//  LoginCritter
//
//  Created by Christopher Goldsby on 3/30/18.
//  Copyright © 2018 Christopher Goldsby. All rights reserved.
//

import UIKit
import FirebaseAuth
import Firebase

final class LoginViewController: UIViewController, UITextFieldDelegate {

    @IBOutlet weak var critterView: CritterView!
    @IBOutlet weak var passwordTextField: UITextField!
    @IBOutlet weak var emailTextField: UITextField!
    
    @IBOutlet weak var textfieldLeadingMargin: NSLayoutConstraint!
    
    private let notificationCenter: NotificationCenter = .default

    deinit {
        notificationCenter.removeObserver(self)
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        
        setup(textfield: emailTextField)
        setup(textfield: passwordTextField)
        setUpGestures()
        setUpNotification()
        database = Database.database().reference()
    }
    
    private func setup(textfield: UITextField){
        textfield.layer.cornerRadius = 4.07
        textfield.addTarget(self, action: #selector(textFieldDidChange(_:)), for: .editingChanged)
        textfield.delegate = self
    }

    // MARK: - UITextFieldDelegate

    func textFieldDidBeginEditing(_ textField: UITextField) {
        let deadlineTime = DispatchTime.now() + .milliseconds(100)

        if textField == emailTextField {
            DispatchQueue.main.asyncAfter(deadline: deadlineTime) { // 🎩✨ Magic to ensure animation starts
                let fractionComplete = self.fractionComplete(for: textField)
                self.critterView.startHeadRotation(startAt: fractionComplete)
            }
        }

        DispatchQueue.main.asyncAfter(deadline: deadlineTime) { // 🎩✨ Magic to ensure animation starts
            self.critterView.isShy = textField == self.passwordTextField
        }
    }

    func textFieldShouldReturn(_ textField: UITextField) -> Bool {
        if textField == emailTextField {
            passwordTextField.becomeFirstResponder()
        }
        else {
            passwordTextField.resignFirstResponder()
        }
        return true
    }

    func textFieldDidEndEditing(_ textField: UITextField) {
        if textField == emailTextField {
            critterView.stopHeadRotation()
        }
    }

    @objc private func textFieldDidChange(_ textField: UITextField) {
        guard !critterView.isActiveStartAnimating, textField == emailTextField else { return }

        let fractionComplete = self.fractionComplete(for: textField)
        critterView.updateHeadRotation(to: fractionComplete)

        if let text = textField.text {
            critterView.isEcstatic = text.range(of: "@") != nil
        }
    }

    private func fractionComplete(for textField: UITextField) -> Float {
        guard let text = textField.text, let font = textField.font else { return 0 }
        
        let textFieldWidth = textField.bounds.width
        return min(Float(text.size(withAttributes: [NSAttributedStringKey.font : font]).width / textFieldWidth), 1)
    }

    private func stopHeadRotation() {
        emailTextField.resignFirstResponder()
        passwordTextField.resignFirstResponder()
        critterView.stopHeadRotation()
        critterView.isShy = false
    }

    // MARK: - Gestures

    private func setUpGestures() {
        let tapGesture = UITapGestureRecognizer(target: self, action: #selector(handleTap))
        view.addGestureRecognizer(tapGesture)
    }

    @objc private func handleTap() {
        stopHeadRotation()
    }

    // MARK: - Notifications

    private func setUpNotification() {
        notificationCenter.addObserver(self, selector: #selector(applicationDidEnterBackground), name: .UIApplicationDidEnterBackground, object: nil)
    }

    var database: DatabaseReference!
    
    @IBAction func login(_ sender: Any) {
        if let login = self.emailTextField.text, let password = self.passwordTextField.text{
            Auth.auth().signInAndRetrieveData(withEmail: login, password: password) { (user, error) in
                if let error = error{
                    print(error)
                    return
                }
                
                if let user = user{
                    print("login")
                    
                    let chatController = self.storyboard?.instantiateViewController(withIdentifier: "ChatTableViewController") as! ChatTableViewController
                    
                    _ = self.database.child("Users").child(user.user.uid).observe(.value, with: { (snap) in
                        let userPhoto = snap.value as! [String: String]
                        
                        chatController.user = User(id: user.user.uid, photo: userPhoto["photo"]!)
                        
                        self.navigationController?.pushViewController(chatController, animated: true)
                        
                    })

                    
                    
                }
            }
        }
        
    }
    @IBAction func signup(_ sender: Any) {
        if let login = self.emailTextField.text, let password = self.passwordTextField.text{
            Auth.auth().createUser(withEmail: login, password: password) { (user, error) in
                if let error = error{
                    print(error)
                    return
                }
                
                if let user = user{
                    let userDb = self.database.child("Users")
                    let randomImageIdx = Int(arc4random_uniform(UInt32(self.userpics.count)))
                    let dic = ["photo": self.userpics[randomImageIdx] ]
                    userDb.child(user.uid).setValue(dic, withCompletionBlock: { (error, ref) in
                        if error == nil{
                             print("update photo")
                        }
                    })
                    
                    print("register ok")
                }
            }
        }
    }
    @objc private func applicationDidEnterBackground() {
        stopHeadRotation()
    }
    
var userpics = ["anteater","baboon","bear","beaver","bee","beetle","bison","boar","bug","bulldog","bullfinch","butterfly-1","butterfly","capybara","cat","centipede","chameleon","chimpanzee","cock","colibri","cow","crab","crane","crocodile","deadlock","deer","dog","dolphin","dove","dragonfly","duck","eagle","elephant","fennec","flounder","fly","fox","frog","giraffe","globefish","goat-1","goat","guinea-pig","hedgehog","hippopotamus","horse","hyena","kangaroo","koala","ladybug","lemur","lion","llama","mink","mite","mole","moose","moray","mosquito","mouse","orca","ostrich","owl","panda-bear","parrot","penguin","pig","pike","piranha","platypus","rabbit","salmon","scorpio","sea-urchin","seal","shark","sheep","shrimp","silverfish","skunk","sloth","snake","sparrow","spider","squid","squirrel","starfish","swan","swordfish","tiger","tuna","turtle","wasp","wolf","zander"]
}
