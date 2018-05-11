//
//  LoginViewController.swift
//  LoginCritter
//
//  Created by Christopher Goldsby on 3/30/18.
//  Copyright © 2018 Christopher Goldsby. All rights reserved.
//

import UIKit
import Firebase
import FirebaseAuth

final class LoginViewController: UIViewController, UITextFieldDelegate {

    @IBOutlet weak var critterView: CritterView!
    @IBOutlet weak var passwordTextField: UITextField!
    @IBOutlet weak var emailTextField: UITextField!
    
    @IBOutlet weak var textfieldLeadingMargin: NSLayoutConstraint!
    var storage: Storage = FirebaseStorage.shared
    
    private let notificationCenter: NotificationCenter = .default

    deinit {
        notificationCenter.removeObserver(self)
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        
        setup(textfield: emailTextField)
        setup(textfield: passwordTextField)
        
        passwordTextField.rightView = UIView()
        passwordTextField.rightView = showHidePasswordButton
        passwordTextField.rightViewMode = .always
        showHidePasswordButton.isHidden = true
        
        setUpGestures()
        setUpNotification()
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
        }else if textField == passwordTextField {
            DispatchQueue.main.asyncAfter(deadline: deadlineTime) { // 🎩✨ Magic to ensure animation starts
                self.critterView.isShy = true
                self.showHidePasswordButton.isHidden = false
            }
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
        passwordDidResignAsFirstResponder()
    }
    
    private func passwordDidResignAsFirstResponder() {
        critterView.isPeeking = false
        critterView.isShy = false
        showHidePasswordButton.isHidden = true
        showHidePasswordButton.isSelected = false
        passwordTextField.isSecureTextEntry = true
    }
    
    private lazy var showHidePasswordButton: UIButton = {
        let button = UIButton(type: .custom)
        let h = passwordTextField.bounds.height
        button.imageEdgeInsets = UIEdgeInsets(top: 0, left: 0, bottom: 0, right: 8)
        button.frame = CGRect(x: 0, y: 0, width: 26, height: 26)
        button.tintColor = .text
        button.setImage(#imageLiteral(resourceName: "do visible"), for: .normal)
        button.setImage(#imageLiteral(resourceName: "undo visible"), for: .selected)
        button.addTarget(self, action: #selector(togglePasswordVisibility(_:)), for: .touchUpInside)
        return button
    }()
    
    @objc private func togglePasswordVisibility(_ sender: UIButton) {
        let isPasswordVisible = !sender.isSelected
        sender.isSelected = isPasswordVisible
        passwordTextField.isSecureTextEntry = !isPasswordVisible
        critterView.isPeeking = isPasswordVisible
        
        // 🎩✨ Magic to fix cursor position when toggling password visibility
        if let textRange = passwordTextField.textRange(from: passwordTextField.beginningOfDocument, to: passwordTextField.endOfDocument), let password = passwordTextField.text {
            passwordTextField.replace(textRange, withText: password)
        }
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

    
    @IBAction func login(_ sender: Any) {
        if let login = self.emailTextField.text, let password = self.passwordTextField.text{
            storage.login(email: login, password: password) { (user, error) in
                if let error = error{
                    self.showError(title: "Log In is failed", error: error)
                    return
                }
                
                if let user = user{
                    self.showChat(user: user)
                }
                
            }
        }
    }
    
    private func showChat(user: User){
        performSegue(withIdentifier: "goToChat", sender: user)

    }
    
    private func showError(title: String, error: Error){
        let ctr = UIAlertController(title: title, message: error.localizedDescription, preferredStyle: .alert)
        
        ctr.addAction(UIAlertAction(title: "Got it", style: .default, handler: nil))
            
        self.present(ctr, animated: true, completion: nil)
    }
    
    @IBAction func signup(_ sender: Any) {
        if let login = self.emailTextField.text, let password = self.passwordTextField.text{
            let randomImageIdx = Int(arc4random_uniform(UInt32(self.userpics.count)))
            let randomPhoto = self.userpics[randomImageIdx]
            
            self.storage.signup(email: login, password: password, photo: randomPhoto) { (user, error) in
                if let error = error{
                    self.showError(title: "Sign up is failed", error: error)
                    return
                }
                
                if let user = user{
                    let ctr = UIAlertController(title: nil, message: "Creating account is successful.", preferredStyle: .alert)
                    ctr.addAction(UIAlertAction(title: "Go to chat", style: .cancel, handler: { (action) in
                        self.showChat(user: user)
                    }))
                    ctr.addAction(UIAlertAction(title: "Leave here", style: .default, handler: nil))
                    
                    self.present(ctr, animated: true, completion: nil)
                }
                
            }
        }
    }
    
    @objc private func applicationDidEnterBackground() {
        stopHeadRotation()
    }
    
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if segue.identifier == "goToChat"{
            if let destination = segue.destination.content as? ChatTableViewController, let user = sender as? User{
                destination.user = user
            }
            
            self.passwordTextField.text = nil
        }
    }
    
var userpics = ["anteater","baboon","bear","beaver","bee","beetle","bison","boar","bug","bulldog","bullfinch","butterfly-1","butterfly","capybara","cat","centipede","chameleon","chimpanzee","cock","colibri","cow","crab","crane","crocodile","deadlock","deer","dog","dolphin","dove","dragonfly","duck","eagle","elephant","fennec","flounder","fly","fox","frog","giraffe","globefish","goat-1","goat","guinea-pig","hedgehog","hippopotamus","horse","hyena","kangaroo","koala","ladybug","lemur","lion","llama","mink","mite","mole","moose","moray","mosquito","mouse","orca","ostrich","owl","panda-bear","parrot","penguin","pig","pike","piranha","platypus","rabbit","salmon","scorpio","sea-urchin","seal","shark","sheep","shrimp","silverfish","skunk","sloth","snake","sparrow","spider","squid","squirrel","starfish","swan","swordfish","tiger","tuna","turtle","wasp","wolf","zander"]
}
