//
//  WikiApi.swift
//  FlowerClassification
//
//  Created by lynx on 24/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation
import UIKit
import SwiftyJSON

class WikiApi{
    var url = "https://en.wikipedia.org/w/api.php"
    
    func getDescriptionForFlower(flowerName: String, completion: @escaping (WikiItem?, Error?)->Void ){
        let session = URLSession(configuration: URLSessionConfiguration.default)
        
        let query = ["format" : "json", "action" : "query", "prop" : "extracts|pageimages|info", "exintro" : "", "explaintext" : "", "titles" : flowerName, "indexpageids" : "", "redirects" : "1", "pithumbsize" : "500", "inprop" : "url"]
     
        var urlComponents = URLComponents(string: url)
        urlComponents?.queryItems = query.map({URLQueryItem(name: $0.key, value: $0.value)})
        
        let request = URLRequest(url: urlComponents!.url!)
        
        let task = session.dataTask(with: request){ (responseData, response, responseError) in
            guard responseError == nil else{
                completion( nil, responseError)
                return
            }
            
            if let data = responseData{
                let json = JSON(data)
                if let page = json["query"]["pageids"].array?.first?.string{
                    var result = WikiItem(name: "", image: nil, url: nil)
                    result.name = json["query"]["pages"][page]["extract"].string ?? ""
                    result.image = json["query"]["pages"][page]["thumbnail"].url
                    result.url = json["query"]["pages"][page]["fullurl"].url
                    
                    completion(result, nil)
                    return
                }else{
                    completion(nil, WikiErrors.invalidJSON)
                }
            }else{
                completion(nil, WikiErrors.invalidData)
            }
        }
        
        task.resume()
    }
}

struct WikiItem{
    var name: String
    var image: URL?
    var url: URL?
}

enum WikiErrors: Error{
    case invalidData
    case invalidJSON
}
