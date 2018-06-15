//
//  DraggableView.swift
//  Sudoku
//
//  Created by lynx on 09/06/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation


import UIKit

class DraggableView: UIView {
    var lastLocation:CGPoint = CGPoint.zero
    var firstLocation:CGPoint = CGPoint.zero
    
    var releaseOnLocation: ((DraggableView, CGPoint)->Void)?
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        // Initialization code
        let panRecognizer = UIPanGestureRecognizer(target: self, action: #selector(detectPan))
        self.gestureRecognizers = [panRecognizer]
        
        firstLocation = CGPoint(x: self.center.x, y: self.center.y)
    }
    
    required init(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    @objc func detectPan(recognizer:UIPanGestureRecognizer) {
        if recognizer.state == .changed || recognizer.state == .began{
            let translation  = recognizer.translation(in: self.superview!)
            self.center = CGPoint(x: lastLocation.x + translation.x, y: lastLocation.y + translation.y)
        }else{
             self.center = firstLocation
        }
        
        if recognizer.state == .ended{
            let translation  = recognizer.translation(in: self.superview!.superview!)
            releaseOnLocation?(self, translation)
        }
    }
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        // Promote the touched view
        self.superview?.bringSubview(toFront: self)
        // Remember original location
        lastLocation = self.center
    }
}
