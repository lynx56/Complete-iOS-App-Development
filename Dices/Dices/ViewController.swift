//
//  ViewController.swift
//  Dices
//
//  Created by lynx on 18/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit
import AudioToolbox

class ViewController: UIViewController{
    @IBOutlet weak var diceImageView1: UIImageView!
    @IBOutlet weak var diceImageView2: UIImageView!
    
    var diceImages = ["dice1", "dice2", "dice3", "dice4", "dice5", "dice6"]
    var sound: SystemSoundID = 0
    
    override func viewDidLoad() {
        super.viewDidLoad()
        updateDiceImages()
        initSound()
    }
    
    func initSound(){
        let soundUrl = Bundle.main.url(forResource: "DICE", withExtension: "mp3")! as NSURL
        AudioServicesCreateSystemSoundID(soundUrl, &sound)
    }
    
    override var preferredStatusBarStyle: UIStatusBarStyle{
        return UIStatusBarStyle.lightContent
    }
    
    @IBAction func roll(_ sender: Any){
        updateDiceImages()
    }
    
    let queue = DispatchQueue(label: "audio")
    override func motionBegan(_ motion: UIEventSubtype, with event: UIEvent?) {
        if motion != .motionShake{
            return
        }
     
        queue.async(execute: { AudioServicesPlaySystemSound(self.sound) })
    }
    
    override func motionEnded(_ motion: UIEventSubtype, with event: UIEvent?) {
        if motion != .motionShake{
            return
        }
        
        updateDiceImages()
    }
    
    func updateDiceImages(){
        let randomImageIndex1 = Int(arc4random_uniform(6))
        let randomImageIndex2 = Int(arc4random_uniform(6))
        
        diceImageView1.image = UIImage(named: diceImages[randomImageIndex1])
        diceImageView2.image = UIImage(named: diceImages[randomImageIndex2])
    }
}

