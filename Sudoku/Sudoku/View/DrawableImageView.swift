//
//  DrawableImageView.swift
//  Sudoku
//
//  Created by lynx on 20/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class DrawableImageView: UIView, UserEditedView{
    var value: Int?{
        didSet{
            valueChanged?(value)
        }
    }
    
    var image: UIImage?{
        get{
            return preRenderImage
        }
    }
    
    var valueChanged: ((Int?)->Void)?
    var endDrawing: ((DrawableImageView)->Void)?
    
    var drawColor = UIColor.black    // Color for drawing
    var lineWidth: CGFloat = 5                // Line width
    
    private var lastPoint: CGPoint!            // Point for storing the last position
    private var bezierPath: UIBezierPath!    // Bezier path
    private var pointCounter: Int = 0        // Counter of ponts
    private let pointLimit: Int = 128        // Limit of points
    private var preRenderImage: UIImage!    // Pre render image
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.backgroundColor = .white
        initBezierPath()
    }
    
    required init(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)!
        
        initBezierPath()
    }
    
    func initBezierPath() {
        bezierPath = UIBezierPath()
        bezierPath.lineCapStyle = .round
        bezierPath.lineJoinStyle = .round
    }
    
    func renderToImage() {
        
        UIGraphicsBeginImageContextWithOptions(self.bounds.size, false, 0.0)
        if preRenderImage != nil {
            preRenderImage.draw(in: self.bounds)
        }
        
        bezierPath.lineWidth = lineWidth
        self.drawColor.setFill()
        drawColor.setStroke()
        bezierPath.stroke()
        
        preRenderImage = UIGraphicsGetImageFromCurrentImageContext()
        
        UIGraphicsEndImageContext()
    }
    
    override func draw(_ rect: CGRect) {
        super.draw(rect)
        
        if preRenderImage != nil {
            preRenderImage.draw(in: self.bounds)
        }
        
        bezierPath.lineWidth = lineWidth
        drawColor.setFill()
        drawColor.setStroke()
        bezierPath.stroke()
    }
    
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        let touch: AnyObject? = touches.first
        lastPoint = touch!.location(in: self)
        pointCounter = 0
    }
    
    override func touchesMoved(_ touches: Set<UITouch>, with event: UIEvent?){
        let touch: AnyObject? = touches.first
        var newPoint = touch!.location(in: self)
        
        bezierPath.move(to: lastPoint)
        bezierPath.addLine(to: newPoint)
        lastPoint = newPoint
        
        pointCounter = pointCounter + 1
        
        if pointCounter == pointLimit {
            pointCounter = 0
            renderToImage()
            setNeedsDisplay()
            bezierPath.removeAllPoints()
        }
        else {
            setNeedsDisplay()
        }
    }
    
    override func touchesEnded(_ touches: Set<UITouch>, with event: UIEvent?) {
        pointCounter = 0
        renderToImage()
        setNeedsDisplay()
        bezierPath.removeAllPoints()
        endDrawing?(self)
    }
    
    override func touchesCancelled(_ touches: Set<UITouch>, with event: UIEvent?)  {
        touchesEnded(touches, with: event)
    }
    
    func clear() {
        preRenderImage = nil
        bezierPath.removeAllPoints()
        setNeedsDisplay()
    }
    
    func hasLines() -> Bool {
        return preRenderImage != nil || !bezierPath.isEmpty
    }
}

protocol UserEditedView{
    var value: Int? { get }
    var tag: Int { get }
}

