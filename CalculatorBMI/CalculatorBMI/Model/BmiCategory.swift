//
//  File.swift
//  CalculatorBMI
//
//  Created by lynx on 03/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

enum BmiCategory{
    case verySeverelyUnderweight
    case severelyUnderweight
    case underweight
    case normal
    case overweight
    case obeseClass1
    case obeseClass2
    case obeseClass3
    
    func description()->String{
        switch self {
        case .verySeverelyUnderweight: return "very severely underweight"
        case .severelyUnderweight: return "severely underweight"
        case .underweight: return "underweight"
        case .normal: return "healthy weight"
        case .overweight: return "overweight"
        case .obeseClass1: return "moderately obese"
        case .obeseClass2: return "severely obese"
        case .obeseClass3: return "very severely obese"
        }
    }
    
    func risk(bmi: Double)->String{
        switch self {
        case .verySeverelyUnderweight: fallthrough
        case .severelyUnderweight: fallthrough
        case .underweight: return "Risk of developing problems such as nutritional deficiency and osteoporosis"
        case .normal: if bmi > 18.5 && bmi < 23{
            return "Low Risk"
        }else{
            return "Moderate risk of developing heart disease, high blood pressure, stroke, diabetes"
            }
        case .overweight:
            if bmi < 27.5{
                return "Moderate risk of developing heart disease, high blood pressure, stroke, diabetes"
            }else{
                return "High risk of developing heart disease, high blood pressure, stroke, diabetes"
            }
        case .obeseClass1: fallthrough
        case .obeseClass2: fallthrough
        case .obeseClass3: return "High risk of developing heart disease, high blood pressure, stroke, diabetes"
        }
    }
}

