//
//  BitcoinPriceProvider.swift
//  BitcoinTicker
//
//  Created by lynx on 27/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

protocol BitcoinPriceProvider{
    
    func currentRate(in currency: String, completionHandler:  @escaping (Money?, BitcoinPriceProviderError?)->Void)
}


enum BitcoinPriceProviderError{
    case networkProblem
    case unavalableCurrency
    case unknown
}

struct Money{
    var value: Double
    var currency: String
}
