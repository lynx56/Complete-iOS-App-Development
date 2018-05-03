//
//  Calculator.swift
//  CalculatorBMI
//
//  Created by lynx on 27/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

class Calculator{
    
    func calculateBMI(weight: Measurement<UnitMass>, height: Measurement<UnitLength>, handler: (_ bmi: Double?, _ error: Error?)->Void){
        
        let weightKg = weight.converted(to: UnitMass.kilograms)
        let heightMeters = height.converted(to: UnitLength.meters)
        
        let bmi = weightKg.value / pow(heightMeters.value, 2)
        //todo
        handler(bmi, nil)
    }
}
