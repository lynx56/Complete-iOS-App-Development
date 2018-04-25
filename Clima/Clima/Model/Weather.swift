//
//  File.swift
//  Clima
//
//  Created by lynx on 25/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

struct Weather{
    var temperature:  Measurement<UnitTemperature>
    var humidity: Int
    var pressure: Measurement<UnitPressure>
    var city: String
    var condition: Int
}

