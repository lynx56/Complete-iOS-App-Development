//
//  Stopwatch.swift
//  Sudoku
//
//  Created by lynx on 27/08/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation


protocol StopwatchDelegate{
    func updateTime(newTime: String)
}

class Stopwatch{
    var startDate: Date = Date()
    var timer: Timer?
    var time: String = ""
    var delegete: StopwatchDelegate?
    
    func startTimer(){
        startDate = Date()
        
        self.timer = Timer.scheduledTimer(timeInterval: 0.1, target: self, selector: #selector(self.timeHandler), userInfo: nil, repeats: true)
    }
    
    func pause(){
        self.timer?.invalidate()
    }
    
    func stop(){
        self.timer?.invalidate()
        self.timer = nil
    }
    
    @objc func timeHandler(){
        let elapsedTime = Int(abs(startDate.timeIntervalSinceNow))
        
        let hours = elapsedTime/3600
        
        let minutes = (elapsedTime/60)%60
        
        let seconds = elapsedTime % 60
        
        time = hours > 0 ? String(format: "%02i:%02i:%02i", hours, minutes, seconds) : String(format: "%02i:%02i", minutes, seconds)
        
        delegete?.updateTime(newTime: time)
    }
}
