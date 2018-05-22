//
//  ImageRecognitionMaster.swift
//  SeeFood
//
//  Created by lynx on 18/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation
import UIKit
import CoreML
import Accelerate
import CoreImage

class ImageRecognitionMaster3{
    let imageSizeForInfering = CGSize(width: 28, height: 28)
    
    lazy var w12:[[Double]] = { return
        self.parseFile(name: "w12")
    }()
    
    lazy var w23:[[Double]] = { return
        self.parseFile(name: "w23")
    }()
    
    lazy var bias2 = [-0.0633006, -0.0418159, -0.0292446, -0.0323065, 0.00221278, -0.0278404, -0.00791415, 0.0124632, 0.030351, -0.00484282, -0.0460673, -0.0026825, 0.0294806, -0.0413984, -0.0060944, 0.00281647, -0.0619822, -0.00374689, -0.0157603, 0.0818672, 0.0143995, 0.0267434, -0.0112351, -0.016749, -0.00245278, 0.00130963, -0.0416777, -0.00542217, 0.0425161, 0.00493176, -0.0795951, -0.0302055, -0.0366191, 0.0374089, 0.0118828, -0.0190014, 0.0421214, -0.0231519, -0.00211014, 0.00476896, 0.00580436, -0.00717958, 0.0264596, 0.0077013, -0.0388625, -0.0138198, -0.0315171, -0.0570684, -0.0130602, -0.0229921, -0.0433778, -0.0617789, -0.0387618, -0.0769713, -0.00489525, -0.00641164, -0.0132602, 0.0306565, -0.0520935, -0.00726957, 0.0278002, -0.0337394, -0.00501575, 0.016234, 0.0167014, -0.0180725, -0.043352, -0.0526436, 0.0256309, -0.0265647, -0.00803962, -0.0264755, -0.0188262, 0.0314631, -0.0672101, 0.0127842, -0.00206525, 0.0287476, -0.000386656, 0.0014221, 0.00780434, -0.00299454, -0.014739, 0.0038017, -0.0101926, -0.010871, 0.00412415, 0.00188518, 0.0410688, -0.00500294, -0.023415, -0.0329038, -0.0413629, -0.0138103, 0.0146244, 0.0120582, 2.80456e-05, -0.0155289, -0.00892651, -0.0355384, -0.0309591, -0.0322386, -0.0109248, 0.00630611, -0.0418586, 0.00939031, -0.0259257, 0.00656013, 0.0197991, 0.00307299, -0.0434023, -0.027037, -0.0185477, -0.0124305, 0.000381289, 0.00802051, -0.0403603, -0.00308617, 0.0378199, -0.0347361, 0.00502067, 0.0503896, -0.0168651, -0.0106661, 5.73335e-07, -0.00123949, 0.000490727, -0.0177619, 0.00690026, -0.00516103, 0.0247955, -0.00728451, -0.0420092, 0.0306911, -0.0336546, -0.0569515, -0.00651976, 0.00154402, 0.0265394, -0.0211394, 0.0119942, -0.00266765, -0.0399261, -0.0265902, -0.0032733, -0.0162165, 0.0171161, -0.0214966, -0.0558496, -0.0141408, -0.0530243, 0.0313306, -0.0325508, 0.0293212, -0.0128736, 0.00676127, -0.0308541, -0.0438594, -0.0210305, -0.023505, -0.0242789, -0.0365151, -0.0264361, 0.00518916, -0.019748, -0.0342612, -0.0125643, -0.0410482, -0.0265985, -0.00707559, -0.0126861, 0.0520124, -0.0229763, -0.0381632, -0.0379556, 0.0369291, -0.00277884, 0.00246002, -0.0221447, -0.00434961, -0.0520586, 0.00445966, -0.00761488, -0.000651425, -0.0318532, -0.0343559, -0.0223518, -0.0487809, 0.0204658, 0.00793036, -0.00254415, -0.0583817, -0.0273782, -0.048006, 0.00121273, 0.0503765, -0.0137381, -0.0257147, 0.0156179, -0.0292101]
    
     lazy var bias3 = [-0.0972961, 0.0300511, -0.0173903, -0.00445253, 0.0983954, -0.211495, -0.157007, 0.113646, 0.259432, -0.0774153]
    
    init(){
    }
    
    func parseFile(name: String)->[[Double]]{
        let resultSource = Bundle.main.path(forResource: name, ofType: "txt")
       
        let content = try! String(contentsOf:  URL(fileURLWithPath: resultSource!), encoding: .utf8)
        let lines = content.components(separatedBy: .newlines)
        var result = [[Double]]()
        var i = 0
        for line in lines{
            if line.isEmpty{
                continue
            }
          
            let components = line.components(separatedBy: ",").filter({!$0.isEmpty})
            
            let array: [Double] = components.map({Double($0.trimmingCharacters(in: .whitespacesAndNewlines))! })
            result.append(array)
        }
        
        return result
    }
    
    func recognize(image imageOriginal: UIImage, completion: @escaping (Int?, ImageRecognitionError?)->Void){
       /* guard let resizedImage = image.resize(to: imageSizeForInfering) else {
            completion(nil, .invalidImage)
            return
        }
        
        guard let pixelBuffer = resizedImage.buffer() else {
            completion(nil, .invalidImage)
            return
        }*/
    
        //let imageData = self.data(from: image)!
     
        let copy = UIImage(cgImage: imageOriginal.cgImage!.copy()!)
        
        var image: UIImage
        if imageOriginal.size.height < 200{
            image = copy.resizeOnly(to: CGSize(width: 280, height: 280))!
        }else{
            image = copy
        }
        
        var height = Int(image.size.height)
        var width = Int(image.size.width)
       
        let grayScaledImage = self.imageDataToGrayscale(cgImage: image.cgImage!, height: height, width: width)
        var boundingRectangle = self.getBoundingRectangle(img: grayScaledImage, threshold: 0.01)
        var scaleRect = self.centerImage(img: grayScaledImage, height: height, width: width)
       
        let cgImage = image.cgImage!
        
        if let bitmapContext = CGContext(data: nil, width: width, height: height, bitsPerComponent:  cgImage.bitsPerComponent, bytesPerRow: cgImage.bytesPerRow, space: cgImage.colorSpace!, bitmapInfo: cgImage.bitmapInfo.rawValue){
            
            var brW = boundingRectangle.width + 1
            var brH = boundingRectangle.height + 1
            var scaling = 190 / ( brW > brH ? brW : brH )
          //  var scaling = 70 / ( brW > brH ? brW : brH )
            
            bitmapContext.translateBy(x: image.size.width/2.0, y: image.size.height/2.0)
            bitmapContext.scaleBy(x: scaling, y: scaling)
            bitmapContext.translateBy(x: (-image.size.width/2.0), y: (-image.size.height/2.0))
            bitmapContext.translateBy(x: scaleRect.transX, y: -scaleRect.transY)
        
            bitmapContext.draw(cgImage, in: CGRect(origin: .zero, size: image.size))
    
            let newImageCg = bitmapContext.makeImage()!
        
            let uiimage = UIImage(cgImage: newImageCg)
            let grayscaled = self.imageDataToGrayscale(cgImage: uiimage.cgImage!, height: Int(newImageCg.height), width: Int(newImageCg.width))
            
            let sfactor = newImageCg.width / 28
            
            var nnInput = [Double](repeating: 0, count: 784)
            for y in 0..<28{
                for x in 0..<28{
                    var mean = 0.0
                    for v in 0..<sfactor{
                        for h in 0..<sfactor{
                            mean += grayscaled[y*sfactor + v][x*sfactor + h]
                        }
                    }
                    mean = (1.0 - mean / 100.0); // average and invert
                    nnInput[x*28+y] = (mean - 0.5) / 0.5;
                }
            }
        
        let computed = nn(data: nnInput, w12: w12, bias2: bias2, w23: w23, bias3: bias3)
        
        var maxIndex: Int
        
        let maximum = computed.max()!
        let idx = computed.index(of: maximum)
        
        print(idx)
        completion(idx, nil)
            return
        }else{
            completion(nil, nil)
        }
    }
    
    func nn(data: [Double], w12: [[Double]], bias2: [Double], w23: [[Double]], bias3: [Double])->[Double] {
        let t1 = Date()
        
        // compute layer2 output
        var out2 = [Double](repeating: 0, count: w12.count)
        for i in 0..<w12.count{
            out2[i] = bias2[i]
            for j in 0..<w12[i].count{
                out2[i] += data[j] * w12[i][j]
            }
            out2[i] = 1 / (1 + exp(-out2[i]));
        }
        
        //compute layer3 activation
        var out3 = [Double](repeating: 0, count: w23.count)
        for  i in 0..<w23.count{
            out3[i] = bias3[i]
            for j in 0..<w23[i].count{
                out3[i] += out2[j] * w23[i][j]
            }
        }
        
        
        
    // compute layer3 output (softmax)
        let max3 = out3.reduce(0) { (p, c) -> Double in return p > c ? p : c }
    
        let nominators = out3.map{ exp( $0 - max3 ) }
        
        let denominator = nominators.reduce(0) { (p, c) -> Double in return p + c }
        let output = nominators.map{ $0 / denominator }
    
    // timing measurement
        let dt = Date().timeIntervalSince(t1)
        print("NN time: \(dt )ms")
        return output
    }
    
    func data(from image: UIImage)->UnsafeMutablePointer<RGBA32>?{
        guard let inputCGImage = image.cgImage else {
            print("unable to get cgImage")
            return nil
        }
        let colorSpace       = CGColorSpaceCreateDeviceRGB()
        let width            = inputCGImage.width
        let height           = inputCGImage.height
        let bytesPerPixel    = 4
        let bitsPerComponent = 8
        let bytesPerRow      = bytesPerPixel * width
        let bitmapInfo       = RGBA32.bitmapInfo
        
        guard let context = CGContext(data: nil, width: width, height: height, bitsPerComponent: bitsPerComponent, bytesPerRow: bytesPerRow, space: colorSpace, bitmapInfo: bitmapInfo) else {
            print("unable to create context")
            return nil
        }
        
        context.draw(inputCGImage, in: CGRect(x: 0, y: 0, width: width, height: height))
        
        guard let buffer = context.data else {
            print("unable to get context data")
            return nil
        }
        
        let pixelBuffer = buffer.bindMemory(to: RGBA32.self, capacity: width * height)
        
        return pixelBuffer
    }
    
    func imageDataToGrayscale(cgImage: CGImage, height: Int, width: Int)->[[Double]]{
        var grayscaleImg = [[Double]](repeating: [Double](repeating: 0, count: width), count: height)
        
        let colorSpace       = CGColorSpaceCreateDeviceRGB()
        let bytesPerPixel    = 4
        let bitsPerComponent = 8
        let bytesPerRow      = bytesPerPixel * width
        let bitmapInfo       = RGBA32.bitmapInfo
        
        guard let context = CGContext(data: nil, width: width, height: height, bitsPerComponent: bitsPerComponent, bytesPerRow: bytesPerRow, space: colorSpace, bitmapInfo: bitmapInfo) else {
            print("unable to create context")
            return grayscaleImg
        }
        
        context.draw(cgImage, in: CGRect(x: 0, y: 0, width: width, height: height))
        
        guard let buffer = context.data else {
            print("unable to get context data")
            return grayscaleImg
        }
        
        let pixelBuffer = buffer.bindMemory(to: RGBA32.self, capacity: width * height)
        
        for y in 0..<height{
            for x in 0..<width{
                let offset = y * width + x
                if ( pixelBuffer[offset].alphaComponent == 0) {
                    pixelBuffer[offset] = .white
                }
                
              //  pixelBuffer[offset] = RGBA32(red: pixelBuffer[offset].redComponent, green: pixelBuffer[offset].greenComponent, blue: pixelBuffer[offset].blueComponent, alpha: 255)
                // simply take red channel value. Not correct, but works for
                // black or white images.
               // let gray = (0.2126 * Double(pixelBuffer[offset].redComponent) + 0.7152 * Double(pixelBuffer[offset].greenComponent) + 0.0722 * Double(pixelBuffer[offset].blueComponent))/255.0
                grayscaleImg[y][x] = Double(pixelBuffer[offset].redComponent) / 255.0
            }
        }
        
        return grayscaleImg
    }
    
    // computes center of mass of digit, for centering
    // note 1 stands for black (0 white) so we have to invert.
    func centerImage(img: [[Double]], height: Int, width: Int)->(transX: CGFloat, transY: CGFloat) {
        var meanX = 0.0
        var meanY = 0.0
        var rows = img.count
        var columns = img[0].count
        var sumPixels = 0.0
        for y in 0..<rows{
            for x in 0..<columns{
                var pixel = Double(1 - img[y][x])
                sumPixels += pixel
                meanY += Double(y) * pixel
                meanX += Double(x) * pixel
            }
        }
        meanX /= sumPixels
        meanY /= sumPixels

        let dY = round(CGFloat(rows)/2 - CGFloat(meanY))
        let dX = round(CGFloat(columns)/2 - CGFloat(meanX))
        return (transX: dX, transY: dY)
    }
    
    func getBoundingRectangle(img: [[Double]], threshold: Double)->CGRect{
        let rows = img.count
        let columns = img[0].count
        var minX = columns
        var minY = rows
        var maxX = -1
        var maxY = -1
        for y in 0..<rows{
            for  x in 0..<columns{
                if (img[y][x] < threshold) {
                    if (minX > x) { minX = x }
                    if (maxX < x) { maxX = x }
                    if (minY > y) { minY = y }
                    if (maxY < y) { maxY = y }
                }
            }
        }
        
        return CGRect(x: minX, y: minY, width: maxX - minX, height: maxY - minY)
    }
    
    
    
    func pixelFrom(x: Int, y: Int, movieFrame: CVPixelBuffer) -> (r: UInt8, g: UInt8, b: UInt8) {
       let baseAddress = CVPixelBufferGetBaseAddress(movieFrame)
        
        let bytesPerRow = CVPixelBufferGetBytesPerRow(movieFrame)
        let buffer = baseAddress!.assumingMemoryBound(to: UInt8.self)
        
        let index = x+y*bytesPerRow
        let b = buffer[index]
        let g = buffer[index+1]
        let r = buffer[index+2]
        
        return (r, g, b)
    }
    
    func toImage(pixelBuffer: CVPixelBuffer)->UIImage?{
        let w = CVPixelBufferGetWidth(pixelBuffer)
        let h = CVPixelBufferGetHeight(pixelBuffer)
        let r = CVPixelBufferGetBytesPerRow(pixelBuffer)
        let bytesPerPixel = r/w
        
        let baseAddress = CVPixelBufferGetBaseAddress(pixelBuffer)
        let buffer = baseAddress!.assumingMemoryBound(to: UInt8.self)
        
        UIGraphicsBeginImageContext(CGSize(width: w, height: h))
        
        let data = baseAddress!.assumingMemoryBound(to: UInt8.self)
    
            let maxY = h
            for y in 0..<maxY{
                for x in 0..<w{
                    let offset = bytesPerPixel*((w*y)+x);
                    data[offset] = buffer[offset];     // R
                    data[offset+1] = buffer[offset+1]; // G
                    data[offset+2] = buffer[offset+2]; // B
                    data[offset+3] = buffer[offset+3]; // A
                }
            }
        
        let img = UIGraphicsGetImageFromCurrentImageContext()
        
        UIGraphicsEndImageContext()
        
        return img
    }
}

struct RGBA32: Equatable {
    private var color: UInt32
    
    var redComponent: UInt8 {
        return UInt8((color >> 24) & 255)
    }
    
    var greenComponent: UInt8 {
        return UInt8((color >> 16) & 255)
    }
    
    var blueComponent: UInt8 {
        return UInt8((color >> 8) & 255)
    }
    
    var alphaComponent: UInt8 {
        return UInt8((color >> 0) & 255)
    }
    
    init(red: UInt8, green: UInt8, blue: UInt8, alpha: UInt8) {
        let red   = UInt32(red)
        let green = UInt32(green)
        let blue  = UInt32(blue)
        let alpha = UInt32(alpha)
        color = (red << 24) | (green << 16) | (blue << 8) | (alpha << 0)
    }
    
    static let red     = RGBA32(red: 255, green: 0,   blue: 0,   alpha: 255)
    static let green   = RGBA32(red: 0,   green: 255, blue: 0,   alpha: 255)
    static let blue    = RGBA32(red: 0,   green: 0,   blue: 255, alpha: 255)
    static let white   = RGBA32(red: 255, green: 255, blue: 255, alpha: 255)
    static let black   = RGBA32(red: 0,   green: 0,   blue: 0,   alpha: 255)
    static let clear   = RGBA32(red: 0,   green: 0,   blue: 0,   alpha: 0)
    static let magenta = RGBA32(red: 255, green: 0,   blue: 255, alpha: 255)
    static let yellow  = RGBA32(red: 255, green: 255, blue: 0,   alpha: 255)
    static let cyan    = RGBA32(red: 0,   green: 255, blue: 255, alpha: 255)
    
    static let bitmapInfo = CGImageAlphaInfo.premultipliedLast.rawValue | CGBitmapInfo.byteOrder32Little.rawValue
    
    static func ==(lhs: RGBA32, rhs: RGBA32) -> Bool {
        return lhs.color == rhs.color
    }
}



enum ImageRecognitionError: Error{
    case modelInvalid
    case processImageFailed
    case invalidImage
}

extension UIImage {
    func resizeOnly(to size: CGSize) -> UIImage?{
        let cgImage = self.cgImage!
        
        let width = Int(size.width)
        let height = Int(size.height)
        
        let colorSpace = CGColorSpaceCreateDeviceRGB()
        let bytesPerPixel:Int = 4
        let bytesPerRow = bytesPerPixel * width
        let bitsPerComponent = 8
        let bitmapInfo: UInt32 = CGImageAlphaInfo.premultipliedLast.rawValue | CGBitmapInfo.byteOrder32Big.rawValue
        
        guard let context = CGContext(data: nil, width: width, height: height, bitsPerComponent: bitsPerComponent, bytesPerRow: bytesPerRow, space: colorSpace, bitmapInfo: bitmapInfo)
            else {
                return self
        }
        
        context.draw(self.cgImage!, in: CGRect(x: 0, y: 0, width: width, height: height))
        
        let scaledImage = UIImage( cgImage: context.makeImage()!)
        
        return scaledImage
    }
    
    
    func resize(to size: CGSize) -> UIImage? {
        let image = self.cropAlpha()
        guard let cgImage = image.cgImage
            else { return nil }
        
        let bitsPerComponent = cgImage.bitsPerComponent
        let bytesPerRow = cgImage.bytesPerRow
        let colorSpace = cgImage.colorSpace
        let bitmapInfo = cgImage.bitmapInfo
        
        let context = CGContext(data: nil, width: Int(size.width), height: Int(size.height), bitsPerComponent: bitsPerComponent, bytesPerRow: bytesPerRow, space: colorSpace!, bitmapInfo: bitmapInfo.rawValue)!
        
        context.interpolationQuality = .high
        
        context.draw(cgImage, in: CGRect(origin: CGPoint.zero , size: size))
        let scaledImage = UIImage( cgImage: context.makeImage()!)
        return scaledImage.changeColors()
    }
    
    
    
    func buffer() -> CVPixelBuffer? {
        var pixelBuffer: CVPixelBuffer?
        let width = Int(self.size.width)
        let height = Int(self.size.height)
        
        let status = CVPixelBufferCreate(kCFAllocatorDefault, width, height, kCVPixelFormatType_OneComponent8, nil, &pixelBuffer)
        guard let pxBuffer = pixelBuffer, status == kCVReturnSuccess else {
            return nil
        }
        
        CVPixelBufferLockBaseAddress(pxBuffer, CVPixelBufferLockFlags(rawValue:0))
        let pixelData = CVPixelBufferGetBaseAddress(pxBuffer)
        let colorSpace = CGColorSpaceCreateDeviceGray()
        
        let bytesPerRow = CVPixelBufferGetBytesPerRow(pxBuffer)
        
        if let bitmapContext = CGContext(data: pixelData, width: width, height: height, bitsPerComponent: 8, bytesPerRow:bytesPerRow, space: colorSpace, bitmapInfo: CGImageAlphaInfo.none.rawValue), let cgImage = self.cgImage {
            let rect = CGRect(x: 0, y: 0, width: width, height: height)
            bitmapContext.draw(cgImage, in: rect)
            
            return pxBuffer
        } else {
            return nil
        }
    }
    
    func newBuffer() -> CVPixelBuffer? {
        var pixelBuffer: CVPixelBuffer?
        let width = Int(self.size.width)
        let height = Int(self.size.height)
        
        let status = CVPixelBufferCreate(kCFAllocatorDefault, width, height, kCVPixelFormatType_OneComponent8, nil, &pixelBuffer)
        guard let pxBuffer = pixelBuffer, status == kCVReturnSuccess else {
            return nil
        }
        
        CVPixelBufferLockBaseAddress(pxBuffer, CVPixelBufferLockFlags(rawValue:0))
        let pixelData = CVPixelBufferGetBaseAddress(pxBuffer)
        let colorSpace = CGColorSpaceCreateDeviceGray()
        
        let bytesPerRow = CVPixelBufferGetBytesPerRow(pxBuffer)
        
        if let bitmapContext = CGContext(data: pixelData, width: width, height: height, bitsPerComponent: 8, bytesPerRow:bytesPerRow, space: colorSpace, bitmapInfo: CGImageAlphaInfo.none.rawValue), let cgImage = self.cgImage {
            let rect = CGRect(x: 0, y: 0, width: width, height: height)
            bitmapContext.draw(cgImage, in: rect)
            
            return pxBuffer
        } else {
            return nil
        }
    }
    
    
    func changeColors() -> UIImage? {
        guard let inputCGImage = self.cgImage else {
            print("unable to get cgImage")
            return nil
        }
        let colorSpace       = CGColorSpaceCreateDeviceRGB()
        let width            = inputCGImage.width
        let height           = inputCGImage.height
        let bytesPerPixel    = 4
        let bitsPerComponent = 8
        let bytesPerRow      = bytesPerPixel * width
        let bitmapInfo       = RGBA32.bitmapInfo
        
        guard let context = CGContext(data: nil, width: width, height: height, bitsPerComponent: bitsPerComponent, bytesPerRow: bytesPerRow, space: colorSpace, bitmapInfo: bitmapInfo) else {
            print("unable to create context")
            return nil
        }
        context.draw(inputCGImage, in: CGRect(x: 0, y: 0, width: width, height: height))
        
        guard let buffer = context.data else {
            print("unable to get context data")
            return nil
        }
        
        let pixelBuffer = buffer.bindMemory(to: RGBA32.self, capacity: width * height)
        
        for row in 0 ..< Int(height) {
            for column in 0 ..< Int(width) {
                let offset = row * width + column
                if pixelBuffer[offset] == .black {
                    pixelBuffer[offset] = .white
                }else if pixelBuffer[offset] == .clear{
                    pixelBuffer[offset] = .black
                }
            }
        }
        
        let outputCGImage = context.makeImage()!
        let outputImage = UIImage(cgImage: outputCGImage, scale: self.scale, orientation: self.imageOrientation)
        
        return outputImage
    }
    
    struct RGBA32: Equatable {
        private var color: UInt32
        
        var redComponent: UInt8 {
            return UInt8((color >> 24) & 255)
        }
        
        var greenComponent: UInt8 {
            return UInt8((color >> 16) & 255)
        }
        
        var blueComponent: UInt8 {
            return UInt8((color >> 8) & 255)
        }
        
        var alphaComponent: UInt8 {
            return UInt8((color >> 0) & 255)
        }
        
        init(red: UInt8, green: UInt8, blue: UInt8, alpha: UInt8) {
            let red   = UInt32(red)
            let green = UInt32(green)
            let blue  = UInt32(blue)
            let alpha = UInt32(alpha)
            color = (red << 24) | (green << 16) | (blue << 8) | (alpha << 0)
        }
        
        static let red     = RGBA32(red: 255, green: 0,   blue: 0,   alpha: 255)
        static let green   = RGBA32(red: 0,   green: 255, blue: 0,   alpha: 255)
        static let blue    = RGBA32(red: 0,   green: 0,   blue: 255, alpha: 255)
        static let white   = RGBA32(red: 255, green: 255, blue: 255, alpha: 255)
        static let black   = RGBA32(red: 0,   green: 0,   blue: 0,   alpha: 255)
        static let clear   = RGBA32(red: 0,   green: 0,   blue: 0,   alpha: 0)
        static let magenta = RGBA32(red: 255, green: 0,   blue: 255, alpha: 255)
        static let yellow  = RGBA32(red: 255, green: 255, blue: 0,   alpha: 255)
        static let cyan    = RGBA32(red: 0,   green: 255, blue: 255, alpha: 255)
        
        static let bitmapInfo = CGImageAlphaInfo.premultipliedLast.rawValue | CGBitmapInfo.byteOrder32Little.rawValue
        
        static func ==(lhs: RGBA32, rhs: RGBA32) -> Bool {
            return lhs.color == rhs.color
        }
    }
    
    func cropAlpha() -> UIImage {
        
        let cgImage = self.cgImage!
        
        let width = cgImage.width
        let height = cgImage.height
        
        let colorSpace = CGColorSpaceCreateDeviceRGB()
        let bytesPerPixel:Int = 4
        let bytesPerRow = bytesPerPixel * width
        let bitsPerComponent = 8
        let bitmapInfo: UInt32 = CGImageAlphaInfo.premultipliedLast.rawValue | CGBitmapInfo.byteOrder32Big.rawValue
        
        guard let context = CGContext(data: nil, width: width, height: height, bitsPerComponent: bitsPerComponent, bytesPerRow: bytesPerRow, space: colorSpace, bitmapInfo: bitmapInfo),
            let ptr = context.data?.assumingMemoryBound(to: UInt8.self) else {
                return self
        }
        
        context.draw(self.cgImage!, in: CGRect(x: 0, y: 0, width: width, height: height))
        
        var minX = width
        var minY = height
        var maxX: Int = 0
        var maxY: Int = 0
        
        for x in 1 ..< width {
            for y in 1 ..< height {
                
                let i = bytesPerRow * Int(y) + bytesPerPixel * Int(x)
                let a = CGFloat(ptr[i + 3]) / 255.0
                
                if(a>0) {
                    if (x < minX) { minX = x };
                    if (x > maxX) { maxX = x };
                    if (y < minY) { minY = y};
                    if (y > maxY) { maxY = y};
                }
            }
        }
        
        var rect: CGRect
        let cropX = CGFloat(maxX-minX) + 4
        let cropY = CGFloat(maxY-minY) + 4
        if cropX > cropY{
            rect = CGRect(x: CGFloat(minX), y: CGFloat(minY) - cropX/2.0 + cropY/2.0, width: cropX, height: cropX)
        }else{
            rect = CGRect(x: CGFloat(minX) - cropY/2.0 + cropX/2.0, y: CGFloat(minY), width: cropY, height: cropY)
        }
        
        let imageScale:CGFloat = self.scale
        let croppedImage =  self.cgImage!.cropping(to: rect)!
        
        let ret = UIImage(cgImage: croppedImage, scale: imageScale, orientation: self.imageOrientation)
        
        return ret;
    }
    
}



extension CGImage{
    func resize(to size: CGSize) -> CGImage?{
        let width = Int(size.width)
        let height = Int(size.height)
        
        let colorSpace = CGColorSpaceCreateDeviceRGB()
        let bytesPerPixel:Int = 4
        let bytesPerRow = bytesPerPixel * width
        let bitsPerComponent = 8
        let bitmapInfo: UInt32 = CGImageAlphaInfo.premultipliedLast.rawValue | CGBitmapInfo.byteOrder32Big.rawValue
        
        guard let context = CGContext(data: nil, width: width, height: height, bitsPerComponent: bitsPerComponent, bytesPerRow: bytesPerRow, space: colorSpace, bitmapInfo: bitmapInfo)
            else {
                return self
        }
        
        context.draw(self, in: CGRect(x: 0, y: 0, width: width, height: height))
        
        return context.makeImage()
    }
}


