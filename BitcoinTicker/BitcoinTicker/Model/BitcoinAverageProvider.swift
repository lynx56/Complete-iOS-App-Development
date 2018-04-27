//
//  BitcoinPriceProvider.swift
//  BitcoinTicker
//
//  Created by lynx on 27/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation
import Alamofire
import SwiftyJSON

class BitcoinAverageProvider: SessionDelegate, BitcoinPriceProvider{
     func currentRate(in currency: String, completionHandler: @escaping (Money?, BitcoinPriceProviderError?)->Void){
        Alamofire.request( Private.ApiUrl + currency ).responseJSON { (response) in
            switch response.result {
            case .success(let value):
                let json = JSON(value)
                
                if let lastValue = json.array?.first?["price_\(currency.lowercased())"].string, let parsedValue = Double(lastValue){
                     completionHandler(Money(value: parsedValue, currency: currency), nil)
                }else{
                     completionHandler(nil, BitcoinPriceProviderError.unavalableCurrency)
                }
            case .failure(let error):
                if let httpStatusCode = response.response?.statusCode{
                    switch(httpStatusCode) {
                    case 404:
                        completionHandler(nil, BitcoinPriceProviderError.unavalableCurrency)
                    default:
                        completionHandler(nil, BitcoinPriceProviderError.unknown)
                    }
                }
            }
        }
        
    }
}
