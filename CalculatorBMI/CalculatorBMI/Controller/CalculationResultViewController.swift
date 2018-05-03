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
            self.index.text = NumberFormatter.localizedString(from: NSNumber(value: bmi), number: .decimal)
            let cat = category(for: bmi)
            self.analysis.text = "You have \(cat.description()). \(percentLessBMI)% have less BMI in your age"
            self.risk.text = "Risk: \(cat.risk(bmi: bmi))"
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
