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

struct RecognitionResult{
    var id: String
    var confidence: Float?
}

class ImageRecognitionMaster{
    func recognize(image: UIImage, completion: @escaping ([RecognitionResult], Error?)->Void){
        guard let ciImage = CIImage(image: image) else {
            completion([], ImageRecognitionError.invalidImage)
            return
        }
        
        guard let visionModel = try? VNCoreMLModel(for: Inceptionv3().model) else {
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
            
            completion(results.map({RecognitionResult(id: $0.identifier, confidence: $0.confidence)}) , nil)
              
        }
            
            let handler = VNImageRequestHandler(ciImage: ciImage)
            
            do{
                try handler.perform([request])
            }catch{
                completion([], error)
            }
        }
    }

enum ImageRecognitionError: Error{
    case modelInvalid
    case processImageFailed
    case invalidImage
}
