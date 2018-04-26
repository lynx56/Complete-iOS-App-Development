//
//  OpenWeatherMapWeatherProvider.swift
//  Clima
//
//  Created by lynx on 25/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation
import Alamofire
import SwiftyJSON

class OpenWeatherMapWeatherProvider: WeatherProvider{
    let URL = "http://api.openweathermap.org/data/2.5/weather"
    let API_KEY = "a654d28a55508178760673a829095080"
    
    func getWeatherByCity(name cityName: String, handler: @escaping ((Weather?, ProviderErrors?) -> Void)) {
         getWeather(params: ["q": cityName, "APPID" : API_KEY], handler: handler)
    }
    
    func getWeatherByLocation(longitude: Double, latitude: Double, handler: @escaping ((Weather?, ProviderErrors?) -> Void)) {
        getWeather(params: ["lat": String(latitude), "lon": String(longitude), "APPID" : API_KEY], handler: handler)
    }
    
    private func getWeather(params: [String: String], handler: @escaping ((Weather?, ProviderErrors?) -> Void)){
        self.sendRequest(by: URL, params: params) { (json, error) in
            if let json = json{
                let weather = self.parseWeather(json: json)
                if weather == nil{
                    handler(nil, ProviderErrors.responseIsWrong)
                    return
                }else{
                    handler(weather, nil)
                    return
                }
            }else if error != nil{
                handler(nil, ProviderErrors.connectionProblem)
            }else{
                handler(nil, ProviderErrors.unknown)
            }
        }
    }
    
    
    private func sendRequest(by url: String, params: [String:String], completeHandler: @escaping ((JSON?, Error?)->Void)){
        let parameters:Parameters = params
        
        Alamofire.request(url, parameters: parameters).responseJSON { (response) in
            switch response.result {
            case .success(let value):
                completeHandler(JSON(value), nil)
            case .failure(let error):
                print(error)
                completeHandler(nil, error)
            }
        }
    }
    
    private func parseWeather(json: JSON)->Weather?{
        if let temp = json["main"]["temp"].double,
            let humidity = json["main"]["humidity"].int,
            let pressure = json["main"]["pressure"].double,
            let city = json["name"].string,
            let condition = json["weather"][0]["id"].int{
            
            let weather = Weather(temperature: Measurement(value: temp, unit: UnitTemperature.kelvin), humidity: humidity, pressure: Measurement<UnitPressure>(value: pressure, unit: UnitPressure.hectopascals), city: city, condition: condition)
            
            return weather
        }
        
        return nil
    }
}
