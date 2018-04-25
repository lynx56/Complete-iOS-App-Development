//
//  OpenWeatherMapWeatherProvider.swift
//  Clima
//
//  Created by lynx on 25/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

protocol WeatherProvider{
    func getWeatherByCity(name: String, handler: @escaping ((Weather?, ProviderErrors?)->Void))
    func getWeatherByLocation(longitude: Double, latitude: Double, handler: @escaping ((Weather?, ProviderErrors?)->Void))
}

enum ProviderErrors: LocalizedError{
    case connectionProblem
    case responseIsWrong
    case unknown
}
