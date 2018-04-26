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
    
    @IBOutlet weak var activity: UIActivityIndicatorView!
    var weatherProvider: WeatherProvider = OpenWeatherMapWeatherProvider()
    var locationManager = CLLocationManager()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        locationManager.delegate = self
        locationManager.desiredAccuracy = kCLLocationAccuracyHundredMeters
        locationManager.requestWhenInUseAuthorization()
        // Do any additional setup after loading the view, typically from a nib.
    
        navigationItem.rightBarButtonItem?.setTitleTextAttributes([NSAttributedStringKey.font : UIFont.systemFont(ofSize: 20)], for: .normal)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    
    func locationManager(_ manager: CLLocationManager, didFailWithError error: Error) {
        cityName.text = "No defined"
        weatherIcon.image = nil
    }
    
    func locationManager(_ manager: CLLocationManager, didChangeAuthorization status: CLAuthorizationStatus) {
        switch status {
        case .notDetermined:  locationManager.requestWhenInUseAuthorization()
        case .denied:
            let alert = UIAlertController(title: "Unable to access the location", message: "To enable access, go to Settings > Clima > Location and check While using the App", preferredStyle: .alert)
            if let url = NSURL(string: UIApplicationOpenSettingsURLString) as URL? {
              
            alert.addAction(UIAlertAction(title: "Go to Settings", style: .default, handler: { (action) in
                UIApplication.shared.open(url, options: [:], completionHandler: nil)
            }))
            }
            
            alert.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: { (action) in
                self.updateUI(weather: nil)
            }))
            
            self.present(alert, animated: true, completion: nil)
            
        case .authorizedAlways: fallthrough
        case .authorizedWhenInUse: locationManager.startUpdatingLocation()
        case .restricted:
            print("restricted")
            updateUI(weather: nil)
        }
    }
    
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
        if !locations.isEmpty{
            let location = locations[0]
            locationManager.stopUpdatingLocation()
           // locationManager.delegate = nil
            
            DispatchQueue.global(qos: .default).async {
                self.updateWeatherByCoordinates(location.coordinate)
            }
            
        }
    }
    
    var userInputCity: String?
    func cityChanged(to: String) {
        DispatchQueue.global(qos: .userInitiated).async {
            
            DispatchQueue.main.async {
                self.activity.startAnimating()
            }
            
            self.weatherProvider.getWeatherByCity(name: to) { (weather, error) in
                if let error = error{
                    print(error)
                }
                self.userInputCity = to
                self.updateUI(weather: weather)
            }
        }
    }
    
    func updateWeatherByCoordinates(_ coordinates: CLLocationCoordinate2D){
        weatherProvider.getWeatherByLocation(longitude: coordinates.longitude, latitude: coordinates.latitude) { (weather, errors) in
            if let error = errors{
                print(error)
            }
            
            self.updateUI(weather: weather)
        }
    }

    
    func updateUI(weather: Weather?){
        DispatchQueue.main.async {
            self.activity.stopAnimating()
            
            guard let weather = weather else{
                self.cityName.text = "Unknown location"
                self.cityName.sizeToFit()
                self.weatherIcon.image = nil
                self.temperatureLabel.text = ""
                
                return
            }
            
            self.temperatureLabel.text = String(Int(weather.temperature.converted(to: UnitTemperature.celsius).value)) + "°"
            self.weatherIcon.image = UIImage(named: self.getWeatherIconName(condition: weather.condition))
            self.cityName.text = weather.city
        }
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

