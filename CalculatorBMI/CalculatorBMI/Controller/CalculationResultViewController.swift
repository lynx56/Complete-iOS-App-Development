//
//  CalculationResultViewController.swift
//  CalculatorBMI
//
//  Created by lynx on 03/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class CalculationResultViewController: UIViewController {
    
    var user: UserModel?
    var bmi: Double?
    
    @IBOutlet weak var index: UILabel!
    @IBOutlet weak var analysis: UILabel!
    @IBOutlet weak var risk: UILabel!
    
    var percentille = PercentileCDC()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        updateUI()
        // Do any additional setup after loading the view.
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    func updateUI(){
        if let bmi = bmi, let user = user{
            let percentLessBMI = percentille.find(gender: user.gender, age: user.age, bmi: bmi)
            self.index.text = String(format: "%.1f", locale: Locale.current, bmi)
            let cat = category(for: bmi)
            self.analysis.text = "You have \(cat.description()). \(percentLessBMI)% have less BMI in your age"
            self.risk.text = "Health risk: \(cat.risk(bmi: bmi))"
            switch cat{
            case .normal: self.risk.textColor = UIColor.white
            case .obeseClass1:  self.risk.textColor = #colorLiteral(red: 0.9074795842, green: 0.2969527543, blue: 0.2355833948, alpha: 1)
            case .obeseClass2: self.risk.textColor = #colorLiteral(red: 0.9074795842, green: 0.2969527543, blue: 0.2355833948, alpha: 1)
            case .obeseClass3: self.risk.textColor = #colorLiteral(red: 0.9074795842, green: 0.2969527543, blue: 0.2355833948, alpha: 1)
            case .overweight: self.risk.textColor = #colorLiteral(red: 0.9824495912, green: 0.3732793927, blue: 0.217633903, alpha: 1)
            case .underweight: self.risk.textColor = #colorLiteral(red: 0.1294117647, green: 0.7450980392, blue: 0.7176470588, alpha: 1)
            case .verySeverelyUnderweight: self.risk.textColor = #colorLiteral(red: 0.7764705882, green: 1, blue: 0.9764705882, alpha: 1)
            case .severelyUnderweight: self.risk.textColor = #colorLiteral(red: 0.1294117647, green: 0.7450980392, blue: 0.7176470588, alpha: 1)
            }
            
        }else{
            self.index.text = nil
            self.analysis.text = nil
            self.risk.text = nil
        }
    }
    
    func category(for bmi: Double)->BmiCategory{
        switch (bmi){
        case 0...14:
            return .verySeverelyUnderweight
        case 15..<16:
            return .severelyUnderweight
        case 16..<18.5:
            return .underweight
        case 18.5..<25:
            return .normal
        case 25..<30:
            return .overweight
        case 30..<35:
            return .obeseClass1
        case 35..<40:
            return .obeseClass2
        default:
            return .obeseClass3
        }
    }
}
