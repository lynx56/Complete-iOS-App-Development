//
//  File.swift
//  CalculatorBMI
//
//  Created by lynx on 03/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

//Source: "Anthropometric Reference Data for Children and Adults: United States" from CDC DHHS
//Body Mass Index values for males and females aged 20 and over, and selected percentiles by age: United States, 2011–2014.
class PercentileCDC{
    var man: [[Double]] = [[20.7, 22.2, 23.0, 24.6, 27.7, 31.6, 34.0, 36.1, 39.8],
                           [19.3,20.5,21.2,22.5,25.5,30.5,33.1,35.1,39.2],
                           [21.1,22.4,23.3,24.8,27.5,31.9,35.1,36.5,39.3],
                           [21.9,23.4,24.3,25.7,28.5,31.9,34.4,36.5,40.0],
                           [21.6,22.7,23.6,25.4,28.3,32.0,34.0,35.2,40.3],
                           [21.6,22.7,23.6,25.3,28.0,32.4,35.3,36.9,41.2],
                           [21.5,23.2,23.9,25.4,27.8,30.9,33.1,34.9,38.9],
                           [20.0,21.5,22.5,24.1,26.3,29.0,31.1,32.3,33.8]]
    
    
    var women: [[Double]] = [[19.6,21.0,22.0,23.6,27.7,33.2,36.5,39.3,43.3],
                             [18.6,19.8,20.7,21.9,25.6,31.8,36.0,38.9,42.0],
                             [19.8,21.1,22.0,23.3,27.6,33.1,36.6,40.0,44.7],
                             [20.0,21.5,22.5,23.7,28.1,33.4,37.0,39.6,44.5],
                             [19.9,21.5,22.2,24.5,28.6,34.4,38.3,40.7,45.2],
                             [20.0,21.7,23.0,24.5,28.9,33.4,36.1,38.7,41.8],
                             [20.5,22.1,22.9,24.6,28.3,33.4,36.5,39.1,42.9],
                             [19.3,20.4,21.3,23.3,26.1,29.7,30.9,32.8,35.2]]
    
    var ages:[Any] = [0...19, 20...29, 30...39, 40...49, 50...59, 60...69, 70...79, 80...100]
    var percents: [Int] = [ 5, 10, 15, 25, 50, 75, 85, 90, 95 ]
    
    func find(gender: Gender, age: Int, bmi: Double)->Int{
        var array : [[Double]]
        if gender == .male{
            array = man
        }else{
            array = women
        }
        
        let idx = ages.index(where: {($0 as! CountableClosedRange).contains(age)})!
        let subrange = array[idx]
        
        var i = 0
        var tmp: Double = 0
        repeat{
            tmp = subrange[i]
            i = i + 1
        }while (bmi > tmp && i < subrange.count)
        
        let p = i - 1
        
        let percent = percents[p > 0 ? p - 1 : p]
        return percent
        
    }
}

