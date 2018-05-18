//
//  RealmStorage.swift
//  Mojo
//
//  Created by lynx on 16/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation
import RealmSwift

class CategoryRealm: Object, CategoryProtocol{
    @objc dynamic var id: String = ""
    @objc dynamic var name: String = ""
    @objc dynamic var colorHex: String = ""
  
    let items = List<TaskRealm>()
    
    override static func primaryKey() -> String? {
        return "id"
    }
    
    convenience init(id: String, name: String, color: String) {
        self.init()
        self.id = id
        self.name = name
        self.colorHex = color
    }
    
}

class TaskRealm: Object, ItemProtocol{
    @objc dynamic var id: String = ""
    @objc dynamic var name: String = ""
    @objc dynamic var done: Bool = false
    var parentCategory = LinkingObjects(fromType: CategoryRealm.self, property: "items")
    
    override static func primaryKey() -> String? {
        return "id"
    }
    
    convenience init(id: String, name: String, done: Bool) {
        self.init()
        self.id = id
        self.name = name
        self.done = done
    }
}
