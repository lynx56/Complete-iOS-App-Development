//
//  Storage.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

class StorageManager{
    enum StorageType{
        case realm
        case coreData
    }
    
    var type: StorageType
    init(_ type: StorageType){
        self.type = type
    }
    
    func getStorage()->Storage{
        //get from config
        //return PlistStorage.shared
        
        switch type {
        case .realm:
            return RealmStorage.shared
        case .coreData:
            return CoreDataStorage.shared
        }
    }
    
    func getCategory(by name: String)->[Category]{
        
        let predicate = NSPredicate(format: "name CONTAINS[c] %@", name)
        
        switch type {
        case .realm:
            return RealmStorage.shared.filterCategories(by: predicate, sortKey: "name")
        case .coreData:
            let sort = NSSortDescriptor(key: "name", ascending: true)
            
            return CoreDataStorage.shared.filterCategories(by: predicate, sort: [sort])
        }
    }
    
    func getItem(by name: String, in category: Category)->[Item]{
        
        let predicate = NSPredicate(format: "name CONTAINS[c] %@ AND category.id == %@", name, category.id)
        
        switch type {
        case .realm:
            return RealmStorage.shared.filterItems(by: predicate, sortKey: "name")
        case .coreData:
            let sort = NSSortDescriptor(key: "name", ascending: true)
            
            return CoreDataStorage.shared.filterItems(by: predicate, sort: [sort])
        }
    }
}
