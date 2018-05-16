//
//  Storage.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

class PlistStorage: Storage {
    func items(handler: ([Item], Error?) -> Void) {
        fatalError()
    }
    
    func categories(handler: ([Category], Error?) -> Void) {
        do{
            let decoder = PropertyListDecoder()
            
            let data = try Data(contentsOf: URL(string: path)!)
   
            let result = try decoder.decode([Category].self, from: data)

            handler(result, nil)
        }catch{
            handler([], error)
        }
    }
    
    static var shared = PlistStorage()
    var path: String
    
    private init(){
        let documentDirectory = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first!
        path = documentDirectory.appendingPathComponent("MojoDB.plist").absoluteString
        if !FileManager.default.fileExists(atPath: path){
            FileManager.default.createFile(atPath: path, contents: nil, attributes: nil)
        }
        
        print(path)
    }
    
    func saveCategories(_ categories: [Category], handler: (Bool, Error?) -> Void) {
        do{
            let encoder = PropertyListEncoder()
            
            let data = try encoder.encode(categories)
            try data.write(to: URL(string: path)!)
            handler(true, nil)
        }catch{
            handler(false, error)
        }
    }
    
    func saveItems(_ items: [Item], to category: Category, handler: (Bool, Error?)->Void) {
        do{
            let decoder = PropertyListDecoder()
            
            let categoriesData = try Data(contentsOf: URL(string: path)!)
            
            var result = try decoder.decode([Category].self, from: categoriesData)
           
            if let idx = result.index(where: {$0.id == category.id}){
                result[idx].items = items
                
                let data = try PropertyListEncoder().encode(result)
                
                try data.write(to: URL(string: path)!)
                
                handler(true, nil)
            }else{
                 handler(false, StorageError.categoryNotExists)
            }
        }catch{
            handler(false, error)
        }
    }
}

enum StorageError: Error{
    case categoryNotExists
}
