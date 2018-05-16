//
//  RealmStorage.swift
//  Mojo
//
//  Created by lynx on 16/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation
import RealmSwift

class RealmStorage: Storage{
    
    static var shared = RealmStorage()
    
    private init(){}
    
    private func realm()->Realm?{
        do{
            let realm = try Realm()
            NSLog(realm.configuration.fileURL?.absoluteString ?? "no url")
            return realm
        }
        catch{
            print(error)
        }
        return nil
    }

    func categoryToCategoryRealm(_ categories: [Category]) -> [CategoryRealm]{
        return categories.map({CategoryRealm(id: $0.id, name: $0.name, color: $0.colorHex, items:  $0.items.map({TaskRealm(id: $0.id, name: $0.name, color: $0.colorHex, done: $0.done)}) )})
    }
    
    func saveCategories(_ categories: [Category], handler: (Bool, Error?) -> Void) {
        if let realm = realm(){
            do{
               try realm.write {
                let categoriesRealm = categoryToCategoryRealm(categories)
                  realm.add(categoriesRealm, update: true)
                }
            }
            catch{
                print(error)
            }
        }
    }
    
    func categories(handler: ([Category], Error?) -> Void) {
        if let realm = realm(){
            let categories = realm.objects(CategoryRealm.self)
            let result: [Category] = categories.map({ Category(id: $0.id, name: $0.name, colorHex: $0.colorHex, items: $0.items.map({Item(id: $0.id, name: $0.name, colorHex: $0.colorHex, done: $0.done)}))})
            handler(result, nil)
        }
    }
    
    func filterCategories(by predicate: NSPredicate?, sortKey: String) -> [Category]{
        if let realm = realm(){
            
            let result = realm.objects(CategoryRealm.self).filter(predicate!).sorted(byKeyPath: sortKey, ascending: true)
            
            return result.map({ Category(id: $0.id, name: $0.name, colorHex: $0.colorHex, items: $0.items.map({Item(id: $0.id, name: $0.name, colorHex: $0.colorHex, done: $0.done)}))})
        }
        
        return []
    }
    
    func filterItems(by predicate: NSPredicate?, sortKey: String) -> [Item]{
        if let realm = realm(){
            
            let result = realm.objects(TaskRealm.self).filter(predicate!).sorted(byKeyPath: sortKey, ascending: true)
            
            return result.map({Item(id: $0.id, name: $0.name, colorHex: $0.colorHex, done: $0.done)})
        }
        
        return []
    }
    
    func saveItems(_ items: [Item], to category: Category, handler: (Bool, Error?) -> Void) {
        if let realm = realm(){
            do{
                try realm.write {
                    if let categoryRealm = realm.object(ofType: CategoryRealm.self, forPrimaryKey: category.id){
                    let items = items.map({TaskRealm(id: $0.id, name: $0.name, color: $0.colorHex, done: $0.done, category: categoryRealm)})
                    realm.add(items, update: true)
                    }
                    
                    handler(true, nil)
                }
            }
            catch{
                print(error)
                handler(false, error)
            }
        }
    }
    
    func items(handler: ([Item], Error?) -> Void) {
        if let realm = realm(){
            let tasks = realm.objects(TaskRealm.self)
            let result: [Item] = tasks.map({Item(id: $0.id, name: $0.name, colorHex: $0.colorHex, done: $0.done)})
            handler(result, nil)
        }
    }
    
    
}

class CategoryRealm: Object{
    @objc dynamic var id: String = ""
    @objc dynamic var name: String = ""
    @objc dynamic var colorHex: String = ""
    
    var items = List<TaskRealm>()
    
    func primaryKey()->String{
        return "id"
    }
    
    override static func primaryKey() -> String? {
        return "id"
    }
    
    convenience init(id: String, name: String, color: String, items: [TaskRealm]) {
        self.init()
        self.id = id
        self.name = name
        self.colorHex = color
        self.items = List<TaskRealm>()
        
        items.forEach({self.items.append($0)})
    }
    
}

class TaskRealm: Object{
    @objc dynamic var id: String = ""
    @objc dynamic var name: String = ""
    @objc dynamic var colorHex: String = ""
    @objc dynamic var done: Bool = false
    
    var category: CategoryRealm?
    
    override static func primaryKey() -> String? {
        return "id"
    }
    
    convenience init(id: String, name: String, color: String, done: Bool, category: CategoryRealm? = nil) {
        self.init()
        self.id = id
        self.name = name
        self.colorHex = color
        self.done = done
        self.category = category
    }
}
