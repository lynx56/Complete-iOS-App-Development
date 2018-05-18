//
//  PlistDataSource.swift
//  Mojo
//
//  Created by lynx on 18/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation
import ChameleonFramework

class PlistDataSource: CategoriesTableViewControllerState, ItemsTableViewControllerState{
    var deleteCategory: ((CategoryProtocol, (Bool, Error?) -> Void) -> Void)?
    
    var deleteItem: ((ItemProtocol, (Bool, Error?) -> Void) -> Void)?
    
    var setTaskDone: ((ItemProtocol, Bool, (Bool, Error?) -> Void) -> Void)?
    
    var createCategoryHandler: ((String, (Bool, Error?) -> Void) -> Void)?
    
    var countCategories: (() -> Int)?
    
    var getCategory: ((Int) -> CategoryProtocol)?
    
    var setCategoriesFilter: ((String?) -> Void)?
    
    var setSelectedCategory: ((Int) -> Void)?
    
    var createTaskHandler: ((String, (Bool, Error?) -> Void) -> Void)?
    
    var countTasks: (() -> Int)?
    
    var setTasksFilter: ((String?) -> Void)?
    
    var category: (() -> CategoryProtocol)?
    
    var task: ((Int) -> ItemProtocol)?
    
    var path: String
    var allCategories: [Category] = []
    var categories: [Category] = []
    var selectedCategory: Category?
    
    init(){
        let documentDirectory = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first!
        path = documentDirectory.appendingPathComponent("MojoDB.plist").absoluteString
        if !FileManager.default.fileExists(atPath: path){
            FileManager.default.createFile(atPath: path, contents: nil, attributes: nil)
        }
        
        print(path)
        setTaskDone = self.updateTask
        createCategoryHandler = creatCategory
        countCategories = { return self.categories.count }
        getCategory = { (idx) in return self.categories[idx] }
        setSelectedCategory = { (idx) in self.selectedCategory = self.categories[idx] }
        setCategoriesFilter = { (name) in
            if name.nilOrEmpty{
                self.categories = self.allCategories
            }else{
                self.categories = self.allCategories.filter({$0.name.containsIgnoringCase(find: name!)})
            }
        }
        
        createTaskHandler = createTask
        countTasks = { return self.selectedCategory!.items.count }
        setTasksFilter = { (name) in
            let index = self.allCategories.index(where: {$0.id == self.selectedCategory!.id})!
            
            if name.nilOrEmpty{
                 self.selectedCategory!.items = self.allCategories[index].items
            }else{
                self.selectedCategory?.items = self.allCategories[index].items.filter({$0.name.containsIgnoringCase(find: name!)})
            }
        }
        
        category = { return self.selectedCategory! }
        task = { (idx) in self.selectedCategory!.items[idx] }
        
        loadCategories()
        self.categories = allCategories
        
        deleteCategory = { (cat, handler) in
            let idx = self.categories.index(where: {$0.id == cat.id})
            self.categories.remove(at: idx!)
            
            let absoluteidx = self.allCategories.index(where: {$0.id == cat.id})
            self.allCategories.remove(at: absoluteidx!)
            
            self.saveCategories(handler: handler)
        }
        
        deleteItem = { (item, handler) in
            let index = self.allCategories.index(where: {$0.id == self.selectedCategory!.id})!
            let taskIndex = self.allCategories[index].items.index(where: {$0.id == item.id })!
            
            self.allCategories[index].items.remove(at: taskIndex)
            self.selectedCategory!.items = self.allCategories[index].items
            
            self.saveCategories(handler: handler)
        }
    }

    func loadCategories(){
        let decoder = PropertyListDecoder()
        
        do{
            let categoriesData = try Data(contentsOf: URL(string: path)!)
             allCategories = try decoder.decode([Category].self, from: categoriesData)
        }catch{
            print(error)
        }
    }
    
    func creatCategory(name: String, handler: (Bool, Error?) -> Void) -> Void{
        let newCat = Category(id: UUID().uuidString, name: name, colorHex: UIColor.randomFlat.hexValue(), items: [])
        self.allCategories.append(newCat)
        self.categories = self.allCategories
        saveCategories(handler: handler)
    }
    
    func createTask(name: String, handler: (Bool, Error?) -> Void) -> Void{
        let index = self.allCategories.index(where: {$0.id == self.selectedCategory!.id})!
        self.allCategories[index].items.append(Item(id: UUID().uuidString, name: name, done: false))
        self.selectedCategory = self.allCategories[index]
        saveCategories(handler: handler)
    }
    
    func updateTask(_ task: ItemProtocol, done: Bool, _ handler: (Bool, Error?) -> Void){
        let index = self.allCategories.index(where: {$0.id == self.selectedCategory!.id})!
        let taskIndex = self.allCategories[index].items.index(where: {$0.id == task.id })!
        var item = (task as! Item)
        item.done = done
        self.allCategories[index].items[taskIndex] = item
        self.selectedCategory!.items = self.allCategories[index].items
        saveCategories(handler: handler)
    }
    
    func saveCategories(handler: (Bool, Error?) -> Void){
        do{
            let encoder = PropertyListEncoder()
            
            let data = try encoder.encode(self.allCategories)
            try data.write(to: URL(string: path)!)
            handler(true, nil)
        }catch{
            handler(false, error)
        }
    }
    
}

extension String{
    func containsIgnoringCase(find: String) -> Bool{
        return self.range(of: find, options: .caseInsensitive) != nil
    }
}

extension Optional where Wrapped == String {
  
    var nilOrEmpty: Bool{
        get{
            return (self == nil || self!.isEmpty)
        }
    }
}
