//
//  ViewController.swift
//  CalculatorBMI
//
//  Created by lynx on 27/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    @IBOutlet weak var maleBackground: UIImageView!
    @IBOutlet weak var maleIcon: UIImageView!
    
    @IBOutlet weak var femaleBackground: UIImageView!
    @IBOutlet weak var femaleIcon: UIImageView!
    
    @IBOutlet weak var ageLabel: UILabel!
    
    @IBOutlet weak var heightLabel: UILabel!
    
    @IBOutlet weak var weightLabel: UILabel!
    
    @IBOutlet weak var heightMesure: UILabel!
    
    @IBOutlet weak var weightMesure: UILabel!
    
    @IBOutlet weak var calculateBMIButton: UIButton!
    
    @IBOutlet weak var middleView: UIView!
    @IBOutlet weak var ageUp: UIButton!
    @IBOutlet weak var ageDown: UIButton!
    
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
        
        updateAge(value: 27)
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
        updateAge(value: age + count)
    }
    
    override func viewDidLayoutSubviews() {
        updateGenderIcons()
        makeRoundByHeight(view: maleBackground)
        makeRoundByHeight(view: femaleBackground)
        makeRoundByHeight(view: calculateBMIButton)
        
        addHorizontalGradient(view: calculateBMIButton)
        addBorderLines(view: middleView)
    }
    
    func updateGenderIcons(){
        if gender == .male{
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
            self.gender = gesture.gender
            DispatchQueue.main.async {
                self.updateGenderIcons()
            }
        }
    }
    
    
    @IBAction func calculateBMI(_ sender: Any){
    }
    
    func updateAge(value: Int){
        if value >= self.ageBounds.lowerBound && value <= self.ageBounds.upperBound{
            self.age = value
            self.ageLabel.text = String(age)
        }
    }
    
    @IBAction func ageUp(_ sender: Any) {
        updateAge(value: age + 1)
    }
    
    @IBAction func ageDown(_ sender: Any) {
        updateAge(value: age - 1)
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
    
    var gender: Gender = .male
    var age: Int = 0
    var ageBounds: Range<Int> = Range<Int>(uncheckedBounds: (lower: 1, upper: 99))
    
}

enum Gender{
    case male
    case female
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

