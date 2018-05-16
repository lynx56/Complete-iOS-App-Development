//
//  CoreDataStorage.swift
//  Mojo
//
//  Created by lynx on 15/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation
import CoreData

class CoreDataStorage: Storage{
    lazy var persistentContainer: NSPersistentContainer = {
        let container = NSPersistentContainer(name: "StorageModel")
        container.loadPersistentStores(completionHandler: { (storeDescription, error) in
            if let error = error as NSError? {
                    fatalError("Unresolved error \(error), \(error.userInfo)")
            }
        })
        container.viewContext.mergePolicy = NSMergeByPropertyObjectTrumpMergePolicy
        
        return container
    }()
    
    static var shared = CoreDataStorage()
    
    private init(){
        print(FileManager.default.urls(for: .documentDirectory, in: .userDomainMask))
    }
    
    func saveCategories(_ categories: [Category], handler: (Bool, Error?) -> Void) {
        for category in categories{
            let categoryCoreData = CategoryCoreData(context: persistentContainer.viewContext)
            categoryCoreData.id = category.id
            categoryCoreData.name = category.name
            categoryCoreData.colorHex = category.colorHex
            
            var tasks = [TaskCoreData]()
            
            for task in category.items{
                let t = TaskCoreData(context: self.persistentContainer.viewContext)
                t.colorHex = task.colorHex
                t.done = task.done
                t.id = task.id
                t.name = task.name
                
                tasks.append(t)
            }
            
            categoryCoreData.tasks = NSSet(array: tasks)
        }
        
        self.saveContext()
        
        handler(true, nil)
    }
    
    func categoryCoreDataToCategory(result: [CategoryCoreData])->[Category]{
        return result.map({Category(id: $0.id ?? "", name: $0.name ?? "", colorHex: $0.colorHex ?? "", items: $0.tasks == nil ? [] : $0.tasks!.map({(tt) -> Item in
            let t = tt as! TaskCoreData
            return Item(id: t.id ?? "",
                        name: t.name ?? "",
                        colorHex: t.colorHex ?? "",
                        done: t.done )
        }))})
    }
    
    func taskCoreDataToItem(result: [TaskCoreData])->[Item]{
        return result.map({ Item(id: $0.id ?? "", name: $0.name ?? "", colorHex: $0.colorHex ?? "", done: $0.done ) })
    }
    
    func filterCategories(by predicate: NSPredicate?, sort: [NSSortDescriptor]?) -> [Category]{
        let request: NSFetchRequest<CategoryCoreData> = CategoryCoreData.fetchRequest()
        request.predicate = predicate
        request.sortDescriptors = sort
        do{
            let result = try persistentContainer.viewContext.fetch(request)
            return categoryCoreDataToCategory(result: result)
        
        }catch{
            print(error)
        }
        
        return []
    }
    
    func filterItems(by predicate: NSPredicate?, sort: [NSSortDescriptor]?) -> [Item]{
        let request: NSFetchRequest<TaskCoreData> = TaskCoreData.fetchRequest()
        request.predicate = predicate
        request.sortDescriptors = sort
        do{
            let result = try persistentContainer.viewContext.fetch(request)
            return taskCoreDataToItem(result: result)
            
        }catch{
            print(error)
        }
        
        return []
    }
    
    func items(handler: ([Item], Error?) -> Void) {
        handler(filterItems(by: nil, sort: nil), nil)
    }
    
    func categories(handler: ([Category], Error?) -> Void) {
        let request: NSFetchRequest<CategoryCoreData> = CategoryCoreData.fetchRequest()
        
        if let result = try? persistentContainer.viewContext.fetch(request){
     
            let k = result.map({Category(id: $0.id ?? "", name: $0.name ?? "", colorHex: $0.colorHex ?? "", items: $0.tasks == nil ? [] : $0.tasks!.map({(tt) -> Item in
            let t = tt as! TaskCoreData
            return Item(id: t.id ?? "",
             name: t.name ?? "",
             colorHex: t.colorHex ?? "",
             done: t.done )
        }))})
        
            handler(k, nil)}else{
            handler([], nil)
        }
    }
    
    func saveItems(_ items: [Item], to category: Category, handler: (Bool, Error?) -> Void) {
        for item in items{
            let d = TaskCoreData(context: self.persistentContainer.viewContext)
            let categoryCoreData = CategoryCoreData(context: self.persistentContainer.viewContext)
            categoryCoreData.id =  category.id
            categoryCoreData.name = category.name
            categoryCoreData.colorHex = category.colorHex
            
            d.id = item.id
            d.name = item.name
            d.done = item.done
            d.colorHex = item.colorHex
            d.category = categoryCoreData
            
            self.saveContext()
        }
        
        handler(true, nil)
    }
    
    func saveContext () {
        let context = persistentContainer.viewContext
        if context.hasChanges {
            do {
                try context.save()
            } catch {
                // Replace this implementation with code to handle the error appropriately.
                // fatalError() causes the application to generate a crash log and terminate. You should not use this function in a shipping application, although it may be useful during development.
                let nserror = error as NSError
                fatalError("Unresolved error \(nserror), \(nserror.userInfo)")
            }
        }
    }
}
