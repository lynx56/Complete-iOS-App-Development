//
//  Line.swift
//  CalculatorBMI
//
//  Created by lynx on 02/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class Line{
    var width: CGFloat = 1
    
    var color: UIColor = UIColor.white
    
    var opacity: Float = 1
    
    var lineCapStyle: CGLineCap?
    
    convenience init(withColor: UIColor){
        self.init()
        self.color = withColor
    }
    
    func draw(from: CGPoint, to: CGPoint)->CALayer{
        let line = CAShapeLayer()
        let linePath = UIBezierPath()
        
        linePath.move(to: from)
        linePath.addLine(to: to)
        linePath.lineWidth = width
        
        if lineCapStyle != nil{
            linePath.lineCapStyle = lineCapStyle!
        }
        line.path = linePath.cgPath
        line.fillColor = nil
        line.opacity = opacity
        line.borderWidth = width
        line.strokeColor = color.cgColor
        line.borderColor = color.cgColor
        return line
    }
    
    func bottom(bounds: CGRect, leftOffset: CGFloat = 0, rightOffset: CGFloat = 0)->CALayer{
        return draw(from: CGPoint(x: bounds.minX + leftOffset, y: bounds.maxY - width), to: CGPoint(x: bounds.maxX - rightOffset, y: bounds.maxY - width))
    }
    
    func top(bounds: CGRect, leftOffset: CGFloat = 0, rightOffset: CGFloat = 0)->CALayer{
        return draw(from: CGPoint(x: bounds.minX + leftOffset, y: bounds.minY + width), to: CGPoint(x: bounds.maxX - rightOffset, y: bounds.minY + width))
    }
}
