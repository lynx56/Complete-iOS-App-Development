//
//  Calculator.swift
//  CalculatorBMI
//
//  Created by lynx on 27/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

class Calculator{
    
    func calculateBMI(weight: Measurement<UnitMass>, height: Measurement<UnitLength>)->Double{
        
        let weightKg = weight.converted(to: UnitMass.kilograms)
        let heightMeters = height.converted(to: UnitLength.meters)
        
        return weightKg.value / pow(heightMeters.value, 2)
    }
}
