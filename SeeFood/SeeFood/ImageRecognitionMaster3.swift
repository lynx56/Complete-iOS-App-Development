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

class ImageRecognitionMaster{
    var model: MLModel
    let imageSizeForInfering = CGSize(width: 28, height: 28)
    
    init(){
        model = MNIST().model
    }
    
    func recognize(image: UIImage, completion: @escaping (Int?, ImageRecognitionError?)->Void){
        guard let resizedImage = image.resize(to: imageSizeForInfering) else {
            completion(nil, .invalidImage)
            return
        }
        
        guard let pixelBuffer = resizedImage.buffer() else {
            completion(nil, .invalidImage)
            return
        }
    
        guard let result = try? model.prediction(from: MNISTInput(image: pixelBuffer)) else {
             completion(nil, .processImageFailed)
            return
        }
        
        if let predictions = result.featureValue(for: "prediction")?.dictionaryValue as? [Int64 : Double]{
            let sortedPredictions = predictions.sorted(by: {$0.value > $1.value})
            print(result.featureValue(for: "classLabel"))
            print(sortedPredictions.prefix(5).description)
            completion(Int(sortedPredictions.first!.key), nil)
        }else{
            completion(nil, nil)
        }
    }
}

class ImageRecognitionMaster2{
    var model: MLModel
    let imageSizeForInfering = CGSize(width: 28, height: 28)
    
    init(){
      
        model = MN().model
    }
    
    func recognize(image: UIImage, completion: @escaping (Int?, ImageRecognitionError?)->Void){
        guard let resizedImage = image.resize(to: imageSizeForInfering) else {
            completion(nil, .invalidImage)
            return
        }
        
        guard let pixelBuffer = resizedImage.buffer() else {
            completion(nil, .invalidImage)
            return
        }
        
        guard let result = try? model.prediction(from: MNISTInput(image: pixelBuffer)) else {
            completion(nil, .processImageFailed)
            return
        }
        
        if let predictions = result.featureValue(for: "output")?.dictionaryValue as? [String : Double]{
            let sortedPredictions = predictions.sorted(by: {$0.value > $1.value})
            print(result.featureValue(for: "classLabel"))
            print(sortedPredictions.prefix(5).description)
            completion(Int(sortedPredictions.first!.key), nil)
        }else{
            completion(nil, nil)
        }
    }
}

enum ImageRecognitionError: Error{
    case modelInvalid
    case processImageFailed
    case invalidImage
}

    extension UIImage {
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
                      //  pixelBuffer[offset] = .clear
                        
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
