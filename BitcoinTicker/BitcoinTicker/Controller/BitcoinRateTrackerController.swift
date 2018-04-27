//
//  ViewController.swift
//  BitcoinTicker
//
//  Created by lynx on 27/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class BitcoinRateTrackerController: UIViewController, UIPickerViewDelegate, UIPickerViewDataSource{
   
    @IBOutlet weak var lastValue: UILabel!
    @IBOutlet weak var currencyPicker: UIPickerView!
    
    var currencies = ["AUD", "BRL","CAD","CNY","EUR","GBP","HKD","IDR","ILS","INR","JPY","MXN","NOK","NZD","PLN","RON","RUB","SEK","SGD","USD","ZAR"]
    var bitcoinPriceProvider: BitcoinPriceProvider?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        currencyPicker.delegate = self
        currencyPicker.dataSource = self
        currencyPicker.layer.cornerRadius = 12
        currencyPicker.backgroundColor = UIColor(red: 0, green: 0, blue: 0, alpha: 0.8)
        bitcoinPriceProvider = BitcoinAverageProvider()
        // Do any additional setup after loading the view, typically from a nib.
        
        changeCurrency(currencies.first!)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    func numberOfComponents(in pickerView: UIPickerView) -> Int {
        return 1
    }
    
    func pickerView(_ pickerView: UIPickerView, numberOfRowsInComponent component: Int) -> Int {
        return currencies.count
    }
    
    func pickerView(_ pickerView: UIPickerView, attributedTitleForRow row: Int, forComponent component: Int) -> NSAttributedString? {
        
        return NSAttributedString(string: currencies[row], attributes: [NSAttributedStringKey.foregroundColor : UIColor.white])
    }
    
    func pickerView(_ pickerView: UIPickerView, didSelectRow row: Int, inComponent component: Int) {
        changeCurrency(currencies[row])
    }
    
    func changeCurrency(_ currency: String){
        bitcoinPriceProvider?.currentRate(in: currency, completionHandler: { (money, error) in
            if let money = money, money.currency == self.currencies[self.currencyPicker.selectedRow(inComponent: 0)]{
                let numberFormatter = NumberFormatter()
                numberFormatter.locale = Locale.current
                numberFormatter.allowsFloats = true
                numberFormatter.numberStyle = .currency
                numberFormatter.currencySymbol = ""

                self.lastValue.text = numberFormatter.string(from: NSNumber(value: money.value))
            }
        })
    }
}

