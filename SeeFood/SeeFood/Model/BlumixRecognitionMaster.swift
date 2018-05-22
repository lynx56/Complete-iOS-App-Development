//
//  File.swift
//  SeeFood
//
//  Created by lynx on 22/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation
import UIKit
import VisualRecognitionV3

class BlumixRecognitionMaster: ImageRecognitionMasterProtocol{
    func recognize(image: UIImage, completion: @escaping ([RecognitionResult], Error?) -> Void) {
        let fileSavingDirectory = FileManager.default.urls(for: .cachesDirectory, in: .userDomainMask).first!
        
        let imageJpeg = UIImageJPEGRepresentation(image, 0.01)
        
        let fileName = "recognition".addingUniqueSuffix()
        
        let url = fileSavingDirectory.appendingPathComponent("\(fileName).jpg")
        
        try! imageJpeg?.write(to: url)
        
        let dateFormatter = DateFormatter()
        
        dateFormatter.dateFormat = "YYYY-MM-dd"
        
        let visualRecognition = VisualRecognition(apiKey: Blumix.key, version: dateFormatter.string(from: Date()))
        
        visualRecognition.classify(imagesFile: url, url: nil, threshold: nil, owners: nil, classifierIDs: nil, acceptLanguage: nil, headers: nil, failure: { (error) in
            completion([], error)
        }) { (classifiedImages) in
            
           let results = classifiedImages.images.first?.classifiers.first?.classes.map({ RecognitionResult(id: $0.className, confidence: $0.score)})
            
            completion(results ?? [], nil)
        }
    }
}
