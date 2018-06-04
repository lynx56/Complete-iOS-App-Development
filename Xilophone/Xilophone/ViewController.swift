//
//  ViewController.swift
//  Xilophone
//
//  Created by lynx on 04/06/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit
import AVFoundation

class ViewController: UIViewController {
    
    var sounds = ["note1", "note2", "note3", "note4", "note5", "note6", "note7", "note8"]

    var audioPlayer : AVAudioPlayer!
    
    override func viewDidLoad() {
        super.viewDidLoad()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    @IBAction func play(_ sender: UIButton) {
        
        let selectedSoundFileName = sounds[sender.tag - 1]
        
        let soundURL = Bundle.main.url(forResource: selectedSoundFileName, withExtension: "wav")
        
        audioPlayer = try! AVAudioPlayer(contentsOf: soundURL!)
        
        audioPlayer.play()
    }
    
}

