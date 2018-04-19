//
//  ViewController.swift
//  IAmRich
//
//  Created by lynx on 19/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var mindForm: UITextView!
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    var timer: Timer!

    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        Timer.scheduledTimer(withTimeInterval: 10, repeats: false) { (timer) in
            DispatchQueue.main.async {
                self.mindForm.alpha = 0
                UIView.animate(withDuration: 2, animations: {
                    self.mindForm.isHidden = false
                    self.mindForm.alpha = 100
                })
            }
        }
    }
}

