//
//  ViewController.swift
//  Clima
//
//  Created by lynx on 25/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit
import Alamofire
import SwiftyJSON
import CoreLocation

class WeatherViewController: UIViewController, CLLocationManagerDelegate, ChangeCityDelegate{
  
    @IBOutlet weak var temperatureLabel: UILabel!
    @IBOutlet weak var weatherIcon: UIImageView!
    @IBOutlet weak var cityName: UILabel!
    
    var weatherProvider: WeatherProvider = OpenWeatherMapWeatherProvider()
    var locationManager = CLLocationManager()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        locationManager.delegate = self
        locationManager.desiredAccuracy = kCLLocationAccuracyHundredMeters
        locationManager.requestWhenInUseAuthorization()
        locationManager.startUpdatingLocation()
        
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    
    func locationManager(_ manager: CLLocationManager, didFailWithError error: Error) {
        print(error)
    }
    
    func locationManager(_ manager: CLLocationManager, didChangeAuthorization status: CLAuthorizationStatus) {
        
    }
    
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
        if !locations.isEmpty{
            let location = locations[0]
            locationManager.stopUpdatingLocation()
           // locationManager.delegate = nil
            
           updateWeatherByCoordinates(location.coordinate)
            
        }
    }
    
    func cityChanged(to: String) {
        weatherProvider.getWeatherByCity(name: to) { (weather, error) in
            if let error = error{
                print(error)
                return
            }
            if let weather = weather{
                self.updateUI(weather: weather)
            }
        }
    }
    
    func updateWeatherByCoordinates(_ coordinates: CLLocationCoordinate2D){
        weatherProvider.getWeatherByLocation(longitude: coordinates.longitude, latitude: coordinates.latitude) { (weather, errors) in
            if let error = errors{
                print(error)
            }
            
            self.updateUI(weather: weather!)
        }
    }

    
    func updateUI(weather: Weather){
        temperatureLabel.text = String(Int(weather.temperature.converted(to: UnitTemperature.celsius).value)) + "°"
        weatherIcon.image = UIImage(named: getWeatherIconName(condition: weather.condition))
        cityName.text = weather.city
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if segue.identifier == "ShowChangeCity"{
            if let destination = (segue.destination.content as? ChangeCityViewController){
                destination.delegate = self
            }
        }
    }
    
    func getWeatherIconName(condition: Int)->String{
            switch (condition) {
        
                case 0...300 :
                    return "tstorm1"
        
                case 301...500 :
                    return "light_rain"
        
                case 501...600 :
                    return "shower3"
        
                case 601...700 :
                    return "snow4"
        
                case 701...771 :
                    return "fog"
        
                case 772...799 :
                    return "tstorm3"
        
                case 800 :
                    return "sunny"
        
                case 801...804 :
                    return "cloudy2"
        
                case 900...903, 905...1000  :
                    return "tstorm3"
        
                case 903 :
                    return "snow5"
        
                case 904 :
                    return "sunny"
        
                default :
                    return "dunno"
                }
        
            }
}

