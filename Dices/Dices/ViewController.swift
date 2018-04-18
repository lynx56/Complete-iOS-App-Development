//
//  ViewController.swift
//  Dices
//
//  Created by lynx on 18/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class ViewController: UIViewController{
    @IBOutlet weak var diceImageView1: UIImageView!
    @IBOutlet weak var diceImageView2: UIImageView!
    
    var diceImages = ["dice1", "dice2", "dice3", "dice4", "dice5", "dice6"]
    
    override func viewDidLoad() {
        super.viewDidLoad()
        updateDiceImages()
    }
    
    override var preferredStatusBarStyle: UIStatusBarStyle{
        return UIStatusBarStyle.lightContent
    }
    
    @IBAction func roll(_ sender: Any){
        updateDiceImages()
    }
    
    override func motionEnded(_ motion: UIEventSubtype, with event: UIEvent?) {
        updateDiceImages()
    }
    
    func updateDiceImages(){
        let randomImageIndex1 = Int(arc4random_uniform(6))
        let randomImageIndex2 = Int(arc4random_uniform(6))
        
        diceImageView1.image = UIImage(named: diceImages[randomImageIndex1])
        diceImageView2.image = UIImage(named: diceImages[randomImageIndex2])
    }
}

