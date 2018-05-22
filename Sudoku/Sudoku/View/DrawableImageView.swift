//
//  DrawableImageView.swift
//  Sudoku
//
//  Created by lynx on 20/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class DrawableImageView: UIView, UserEditedView{
    func setValid(_ valid: Bool) {
        if !valid{
            print("set color red")
        }else{
            print("set color black")
        }
    }
    
    
    var lastPoint = CGPoint.zero
    var color: UIColor = UIColor.black
    var brushWidth: CGFloat = 2.0
    var opacity: CGFloat = 1.0
    var swiped = false
    var value: Int?{
        didSet{
            valueChanged?(value)
        }
    }
    
    var valueChanged: ((Int?)->Void)?
    
    var mainImageView: UIImageView!
    var tempImageView: UIImageView!
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        
        mainImageView = UIImageView(frame: frame)
        tempImageView = UIImageView(frame: frame)
        mainImageView.isUserInteractionEnabled = true
        tempImageView.isUserInteractionEnabled = true
        self.addSubview(mainImageView)
        self.addSubview(tempImageView)
        
        //brushWidth = min(self.frame.size.width, self.frame.size.height) / 35.0
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        if let touch = touches.first {
            lastPoint = touch.location(in: self)
        }
    }
    
    func drawLineFrom(fromPoint: CGPoint, toPoint: CGPoint) {
        
        if self.frame.height - self.frame.width > 5{
            return
        }
        
        // 1
        UIGraphicsBeginImageContext(self.frame.size)
        let context = UIGraphicsGetCurrentContext()
        self.tempImageView.image?.draw(in: CGRect(x: 0, y: 0, width: self.frame.size.width, height: self.frame.size.height))
        
        // 2
        context?.move(to: fromPoint)
        context?.addLine(to: toPoint)
        
        // 3
        context?.setLineCap(.round)
        context?.setLineWidth(brushWidth)
        context?.setStrokeColor(UIColor.black.cgColor)
        
        context?.setBlendMode(.normal)
        
        // 4
        context?.strokePath()
        
        // 5
        self.tempImageView.image = UIGraphicsGetImageFromCurrentImageContext()
        self.alpha = opacity
        UIGraphicsEndImageContext()
        
    }
    
    override func touchesMoved(_ touches: Set<UITouch>, with event: UIEvent?) {
        // 6
        swiped = true
        if let touch = touches.first {
            let currentPoint = touch.location(in: self)
            drawLineFrom(fromPoint: lastPoint, toPoint: currentPoint)
          //  print("from\(lastPoint) to: \(currentPoint)")
            // 7
            lastPoint = currentPoint
        }
    }
    
    override func touchesEnded(_ touches: Set<UITouch>, with event: UIEvent?) {
        if !swiped {
            // draw a single point
            drawLineFrom(fromPoint: lastPoint, toPoint: lastPoint)
        }
        
        // Merge tempImageView into mainImageView
        UIGraphicsBeginImageContext(mainImageView.frame.size)
        mainImageView.image?.draw(in: CGRect(x: 0, y: 0, width: self.frame.size.width, height: self.frame.size.height), blendMode: .normal, alpha: 1.0)
        tempImageView.image?.draw(in: CGRect(x: 0, y: 0, width: self.frame.size.width, height: self.frame.size.height), blendMode: .normal, alpha: opacity)
        mainImageView.image = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()
        
        tempImageView.image = nil
    }
}

protocol UserEditedView{
    var value: Int? { get }
    var tag: Int { get }
    func setValid(_ :Bool)
}

