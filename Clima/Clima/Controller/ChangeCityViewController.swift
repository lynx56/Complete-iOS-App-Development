//
//  ChangeCityViewController.swift
//  Clima
//
//  Created by lynx on 25/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit
import MapKit

class ChangeCityViewController: UIViewController, ACEAutocompleteDataSource, ACEAutocompleteDelegate {
  
    @IBOutlet weak var cityName: UITextField!
    var delegate: ChangeCityDelegate?
    
    override func viewDidLoad() {
        super.viewDidLoad()

        cityName.autocorrectionType = .no
        cityName.setAutocompleteWith(self, delegate: self) { (view) in
            view?.font = UIFont.systemFont(ofSize: 20)
            view?.textColor = UIColor.white
            view?.backgroundColor = UIColor(red: 0.2, green: 0.3, blue: 0.9, alpha: 0.8)
            
        }
        // Do any additional setup after loading the view.
    }
    
    override func viewWillAppear(_ animated: Bool) {
        cityName.becomeFirstResponder()
    }
    
    func minimumCharacters(toTrigger inputView: ACEAutocompleteInputView!) -> UInt {
        return 1
    }
    
    func inputView(_ inputView: ACEAutocompleteInputView!, itemsFor query: String!, result resultBlock: (([Any]?) -> Void)!) {
        if resultBlock != nil{
               
        DispatchQueue.global(qos: .default).async {
             if self.cityName.isFirstResponder{
                let request = MKLocalSearchRequest(completion: MKLocalSearchCompletion())
                request.naturalLanguageQuery = query
                
                let search = MKLocalSearch(request: request)
                
                search.start(completionHandler: { (response, error) in
                    if error == nil, response != nil{
                        let result = Set(response!.mapItems.map({($0.placemark.locality ?? "")}))
                        DispatchQueue.main.async {
                            resultBlock(Array(result))
                        }
                    }else{
                        DispatchQueue.main.async {
                            resultBlock(nil)
                        }
                    }
                })
            }
        }
        }
    }
    
    func textField(_ textField: UITextField!, didSelect object: Any!, in inputView: ACEAutocompleteInputView!) {
        self.cityName.text = object as? String
    }
    


    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @IBAction func changeCity(_ sender: Any) {
        if let city = cityName.text, !city.isEmpty{
            delegate?.cityChanged(to: city)
            if self.navigationController != nil{
                self.navigationController?.popViewController(animated: true)
            }else{
                self.dismiss(animated: true, completion: nil)
            }
        }
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}

protocol ChangeCityDelegate{
    func cityChanged(to: String)
}
