//
//  Storage.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

class StorageManager{
    func getStorage()->Storage{
        //get from config
        //return PlistStorage.shared
        
        return CoreDataStorage.shared
    }
    
    func getCategory(by name: String)->[Category]{
        
        let predicate = NSPredicate(format: "name CONTAINS[c] %@", name)
        
        let sort = NSSortDescriptor(key: "name", ascending: true)
        
        return CoreDataStorage.shared.filterCategories(by: predicate, sort: [sort])
    }
    
    func getItem(by name: String, in category: Category)->[Item]{
        
        let predicate = NSPredicate(format: "name CONTAINS[c] %@ AND category.id == %@", name, category.id)
        
        let sort = NSSortDescriptor(key: "name", ascending: true)
        
        return CoreDataStorage.shared.filterItems(by: predicate, sort: [sort])
    }
}
