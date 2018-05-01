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
    
    @IBOutlet weak var femaleBackground: UIImageView!
    
    @IBOutlet weak var ageLabel: UILabel!
    
    @IBOutlet weak var heightLabel: UILabel!
    
    @IBOutlet weak var weightLabel: UILabel!
    
    @IBOutlet weak var heightMesure: UILabel!
    
    @IBOutlet weak var weightMesure: UILabel!
    
    @IBOutlet weak var calculateBMIButton: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }
    
    override func viewDidLayoutSubviews() {
        if gender == .male{
            addGradient(to: maleBackground)
            femaleBackground.backgroundColor = .black
        }else{
            addGradient(to: femaleBackground)
            maleBackground.backgroundColor = .black
        }
        
        makeRound(imageView: maleBackground)
        makeRound(imageView: femaleBackground)
        
        let gradient = CAGradientLayer()
        gradient.frame = calculateBMIButton.bounds
        gradient.colors = gradientColors
        
        gradient.startPoint = CGPoint(x: 1, y: 1)
        gradient.endPoint = CGPoint(x: 0, y: 0)
        
        calculateBMIButton.layer.cornerRadius = calculateBMIButton.bounds.height / 2.0
        calculateBMIButton.clipsToBounds = true
        calculateBMIButton.layer.insertSublayer(gradient, at: 0)
    
    }
    
    func makeRound(imageView: UIImageView){
        imageView.clipsToBounds = true
        imageView.layer.cornerRadius = maleBackground.bounds.height / 2.0
    }
    
    var gradientColors = [#colorLiteral(red: 0.3725490196, green: 0.8039215686, blue: 0.4431372549, alpha: 1).cgColor, #colorLiteral(red: 0.3450980392, green: 0.8784313725, blue: 0.631372549, alpha: 1).cgColor, #colorLiteral(red: 0.7764705882, green: 1, blue: 0.9764705882, alpha: 1).cgColor]
    
    func addGradient(to imageView: UIImageView){
        let gradient = CAGradientLayer()
        gradient.frame = imageView.bounds
        gradient.colors = gradientColors
        
        gradient.startPoint = CGPoint(x: 1, y: 0)
        gradient.endPoint = CGPoint(x: 0, y: 1)
        
        imageView.layer.addSublayer(gradient)
    }
    
    @IBAction func calculateBMI(_ sender: Any){
    }
    @IBAction func ageUp(_ sender: Any) {
    }
    
    @IBAction func ageDown(_ sender: Any) {
    }
    
    var gender: Gender = .male

    enum Gender{
        case male
        case female
    }
}

