//
//  ViewController.swift
//  CalculatorBMI
//
//  Created by lynx on 27/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class UserViewController: UIViewController, UITextFieldDelegate{
    
    @IBOutlet weak var maleBackground: UIImageView!
    @IBOutlet weak var maleIcon: UIImageView!
    
    @IBOutlet weak var femaleBackground: UIImageView!
    @IBOutlet weak var femaleIcon: UIImageView!
    
    @IBOutlet weak var ageLabel: UILabel!
    
    @IBOutlet weak var heightMesure: UILabel!
    
    @IBOutlet weak var weightMesure: UILabel!
    
    @IBOutlet weak var calculateBMIButton: UIButton!
    
    @IBOutlet weak var middleView: UIView!
    @IBOutlet weak var ageUp: UIButton!
    @IBOutlet weak var ageDown: UIButton!
    @IBOutlet weak var weightField: UITextField!
    @IBOutlet weak var heightField: UITextField!
    @IBOutlet weak var scrollView: UIScrollView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let maleGesture = GenderChooseGesture(target: self, action: #selector(chooseGender), gender: .male)
        maleBackground.addGestureRecognizer(maleGesture)
        maleIcon.addGestureRecognizer(maleGesture)
    
        let femaleGesture = GenderChooseGesture(target: self, action: #selector(chooseGender), gender: .female)
        femaleBackground.addGestureRecognizer(femaleGesture)
        femaleIcon.addGestureRecognizer(femaleGesture)
        
        ageUp.addGestureRecognizer(AgeAppendLongPressGestureRecognizer(target: self, action: #selector(longPressHandler), appendCountToAge: 1, bounds: self.ageBounds))
        ageDown.addGestureRecognizer(AgeAppendLongPressGestureRecognizer(target: self, action: #selector(longPressHandler), appendCountToAge: -1, bounds: self.ageBounds))
        
        weightField.addTarget(self, action: #selector(changeWeight), for: .allEditingEvents)
        heightField.addTarget(self, action: #selector(changeHeight), for: .allEditingEvents)
        
        weightField.delegate = self
        heightField.delegate = self
        
        updateAge(value: 27)
        
        NotificationCenter.default.addObserver(self, selector: #selector(keyboardWillShow), name: NSNotification.Name.UIKeyboardWillShow, object: nil)
        
        NotificationCenter.default.addObserver(self, selector: #selector(keyboardWillHide), name: NSNotification.Name.UIKeyboardWillHide, object: nil)
        
        self.view.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(viewEndEditing)))
        
        self.weightField.addDoneCancelToolbar(onDone: (target: self, action: #selector(calculate)), onCancel: nil)
        
        self.heightField.addDoneCancelToolbar(onDone: (target: self, action: #selector(focusOnWeight)), onCancel: nil)
        
    }
    
    var height: CGFloat = 0
    
    @objc func focusOnWeight(){
        self.weightField.becomeFirstResponder()
    }
    
    deinit {
        NotificationCenter.default.removeObserver(self)
    }
    
    @objc func keyboardWillShow(_ notification: Notification){
        let keyboardSize = (notification.userInfo![UIKeyboardFrameBeginUserInfoKey] as! CGRect).size
       
        var contentInsets: UIEdgeInsets
    
        if UIApplication.shared.statusBarOrientation == .portrait{
            contentInsets = UIEdgeInsets(top: 0, left: 0, bottom: keyboardSize.height + self.height, right: 0)
        }else{
            contentInsets = UIEdgeInsets(top: 0, left: 0, bottom: keyboardSize.width + self.height, right: 0)
        }
        
        
        self.scrollView.contentInset = contentInsets
        self.scrollView.scrollIndicatorInsets = contentInsets
    }
    
    @objc func viewEndEditing(){
        self.view.endEditing(true)
    }
    
    @objc func keyboardWillHide(_ notification: Notification){
        let rate = notification.userInfo![UIKeyboardAnimationDurationUserInfoKey] as! Double
        UIView.animate(withDuration: rate) {
            self.scrollView.contentInset = UIEdgeInsets.zero
            self.scrollView.scrollIndicatorInsets = UIEdgeInsets.zero
        }
    }
    
    var timer: Timer?
    
    @objc func longPressHandler(gesture: AgeAppendLongPressGestureRecognizer) {
        if gesture.state == .began {
            timer = Timer.scheduledTimer(timeInterval: 0.1, target: self, selector: #selector(handleTimer), userInfo: gesture.appendCountToAge, repeats: true)
        } else if gesture.state == .ended || gesture.state == .cancelled {
            timer?.invalidate()
            timer = nil
        }
    }
    
    @objc func handleTimer(timer: Timer) {
        let count = timer.userInfo as! Int
        updateAge(value: user.age + count)
    }
    
    @objc func changeWeight(_ sender: UITextField){
        if let text = sender.text{
            user.weight = Float(text)
        }else{
            user.weight = nil
        }
    }
    
    @objc func changeHeight(_ sender: UITextField){
        if let text = sender.text{
            user.height = Int(text)
        }else{
            user.height = nil
        }
    }
    
    override func viewDidLayoutSubviews() {
        updateGenderIcons()
        makeRoundByHeight(view: maleBackground)
        makeRoundByHeight(view: femaleBackground)
        makeRoundByHeight(view: calculateBMIButton)
        
        addHorizontalGradient(view: calculateBMIButton)
        addBorderLines(view: middleView)
        
        self.height = self.weightField.inputAccessoryView?.bounds.height ?? 0
    }
    
    func updateGenderIcons(){
        if user.gender == .male{
            addGradient(to: maleBackground)
            femaleBackground.backgroundColor = .black
            removeGradient(from: femaleBackground)
        }else{
            addGradient(to: femaleBackground)
            removeGradient(from: maleBackground)
            maleBackground.backgroundColor = .black
        }
    }
    
    func makeRoundByHeight(view: UIView){
        view.clipsToBounds = true
        view.layer.cornerRadius = view.bounds.height / 2.0
    }
    
    var gradientColors = [#colorLiteral(red: 0.3725490196, green: 0.8039215686, blue: 0.4431372549, alpha: 1).cgColor, #colorLiteral(red: 0.3450980392, green: 0.8784313725, blue: 0.631372549, alpha: 1).cgColor, #colorLiteral(red: 0.7764705882, green: 1, blue: 0.9764705882, alpha: 1).cgColor]
    
    func addGradient(to imageView: UIImageView){
        removeGradient(from: imageView)
        
        let gradient = CAGradientLayer()
        gradient.frame = imageView.bounds
        gradient.colors = gradientColors
        
        gradient.startPoint = CGPoint(x: 1, y: 0)
        gradient.endPoint = CGPoint(x: 0, y: 1)
        gradient.name = "gradient"
        imageView.layer.addSublayer(gradient)
    }
    
    func removeGradient(from view: UIView){
        if let gradientLayer = view.layer.sublayers?.index(where: {$0.name == "gradient"}){
            view.layer.sublayers?.remove(at: gradientLayer)
        }
    }
    
    func addHorizontalGradient(view: UIView){
        let gradient = CAGradientLayer()
        gradient.frame = calculateBMIButton.bounds
        gradient.colors = gradientColors
        
        gradient.startPoint = CGPoint(x: 1, y: 1)
        gradient.endPoint = CGPoint(x: 0, y: 0)
        view.layer.insertSublayer(gradient, at: 0)
    }
    
    @objc func chooseGender(gesture: GenderChooseGesture){
        if gesture.state == .ended{
            self.user.gender = gesture.gender
            DispatchQueue.main.async {
                self.updateGenderIcons()
            }
        }
    }
    
    
    @IBAction func calculateBMI(_ sender: Any){
        calculate()
    }
    
    @objc func calculate(){
        self.view.endEditing(true)
        let calculator = Calculator()
        let weight = Measurement<UnitMass>(value: Double(self.user.weight ?? 0), unit: .kilograms)
        let height = Measurement<UnitLength>(value: Double(self.user.height ?? 0), unit: .centimeters)
        calculator.calculateBMI(weight: weight, height: height){ (bmi, error) in
            if let error = error{
                self.showCalculationError(error: error)
                return
            }
            
            if let bmi = bmi{
                let ctr = storyboard?.instantiateViewController(withIdentifier: "CalculationResultViewController") as! CalculationResultViewController
                ctr.user = self.user
                ctr.bmi = bmi
                self.navigationController?.pushViewController(ctr, animated: true)
            }else{
                showCalculationError(error: .unknown)
            }
        }
    }
    
    func showCalculationError(error: CalculatorError){
        var message: String = ""
        switch error{
        case .heightMustBeBiggerThanZero:
            message = "Height should not be zero"
        case .unknown:
            message = "Error occur while calculating body mass index"
        case .weightMustBeBiggerThanZero:
            message = "Weight should not be zero"
        }
        
        
        let alert = UIAlertController(title: nil, message: message, preferredStyle: .alert)
        alert.addAction(UIAlertAction(title: "Ok", style: .default, handler: nil))
        
        self.present(alert, animated: true, completion: nil)
    }
    
    func updateAge(value: Int){
        if value >= self.ageBounds.lowerBound && value <= self.ageBounds.upperBound{
            self.user.age = value
            self.ageLabel.text = String(user.age)
        }
    }
    
    @IBAction func ageUp(_ sender: Any) {
        updateAge(value: user.age + 1)
    }
    
    @IBAction func ageDown(_ sender: Any) {
        updateAge(value: user.age - 1)
    }
    
    func addBorderLines(view: UIView){
        let topLine = Line(withColor:#colorLiteral(red: 0.3215686275, green: 0.3254901961, blue: 0.3411764706, alpha: 1) ).top(bounds: view.bounds, leftOffset: 20, rightOffset: 20)
        topLine.name = "top"
        let bottomLine = Line(withColor: #colorLiteral(red: 0.3215686275, green: 0.3254901961, blue: 0.3411764706, alpha: 1)).bottom(bounds: view.bounds, leftOffset: 20, rightOffset: 20)
        bottomLine.name = "bottom"
        
        if let topLayer = view.layer.sublayers?.index(where: {$0.name == "top"}){
            view.layer.sublayers?.remove(at: topLayer)
        }
        
        if let bottomLayer = view.layer.sublayers?.index(where: {$0.name == "bottom"}){
            view.layer.sublayers?.remove(at: bottomLayer)
        }
        
        view.layer.addSublayer(topLine)
        view.layer.addSublayer(bottomLine)
    }
    
    var user = UserModel(gender: .male, age: 0, height: nil, weight: nil)
    
  /*  var gender: Gender = .male
    var age: Int = 0*/
    var ageBounds: Range<Int> = Range<Int>(uncheckedBounds: (lower: 1, upper: 99))
  /*  var height: Int?
    var weight: Float?*/
    
}


class GenderChooseGesture: UITapGestureRecognizer{
    var gender: Gender
    
    init(target: Any?, action: Selector?, gender: Gender) {
        self.gender = gender
        super.init(target: target, action: action)
    }
}

class AgeAppendLongPressGestureRecognizer: UILongPressGestureRecognizer{
    var appendCountToAge: Int
    var bounds: Range<Int>
    
    init(target: Any?, action: Selector?, appendCountToAge: Int, bounds: Range<Int>){
        self.appendCountToAge = appendCountToAge
        self.bounds = bounds
        super.init(target: target, action: action)
    }
}



