//
//  ImageRecognitionMaster.swift
//  SeeFood
//
//  Created by lynx on 18/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation
import UIKit
import Vision
import CoreML

class ImageRecognitionMaster: ImageRecognitionMasterProtocol{
    func recognize(image: UIImage, completion: @escaping ([RecognitionResult], Error?)->Void){
         guard let ciImage = CIImage(image: image) else {
            completion([], ImageRecognitionError.invalidImage)
            return
        }
        
    let mlmodel = FlowerClassifier2()
        
        guard let visionModel = try? VNCoreMLModel(for: mlmodel.model) else {
            completion([], ImageRecognitionError.modelInvalid)
            return
        }
        
        let request = VNCoreMLRequest(model: visionModel) { (request, error) in
            if let error = error{
                completion([], error)
            }
            
            guard let results = request.results as? [VNClassificationObservation] else{
                completion([], ImageRecognitionError.processImageFailed)
                return
            }
            
            print(results)
            
            completion(results.map({RecognitionResult(id: $0.identifier, confidence: Double($0.confidence))}) , nil)
              
        }
            
            let handler = VNImageRequestHandler(ciImage: ciImage)
            
            do{
                try handler.perform([request])
            }catch{
                print(error)
                completion([], error)
            }
        }
    }


extension UIImage {
    func resize(to size: CGSize) -> UIImage?{
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
    }}


