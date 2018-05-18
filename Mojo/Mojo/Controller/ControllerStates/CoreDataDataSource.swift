//
//  ViewController.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit
import ChameleonFramework
import CoreData

class CoreDataSource: CategoriesTableViewControllerState, ItemsTableViewControllerState{
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
    
    
    //MARK: CategoriesTableViewControllerState
    var createCategoryHandler: ((_ name: String, _ handler: (Bool, Error?)->Void)->Void)?
    var countCategories: (()->Int)?
    var getCategory: ((Int)->CategoryProtocol)?
    var setCategoriesFilter: ((String?)->Void)?
    var selectedCategory: CategoryCoreData?{
        didSet{
            filterTasks(taskName: nil)
        }
    }
    var setSelectedCategory: ((Int) -> Void)?
    
    var categories: [CategoryCoreData] = []
    var tasks: [TaskCoreData] = []
    
    init(){
        createCategoryHandler = saveCategory
        countCategories = { return self.categories.count }
        getCategory = { (idx) in return self.categories[idx] }
        filterCategories(by: nil, sort: nil)
        setSelectedCategory = { selectedCategory in self.selectedCategory = self.categories[selectedCategory]}
        setCategoriesFilter = setFilter
            
        createTaskHandler = saveTask
        countTasks = { return self.tasks.count ?? 0 }
        setTasksFilter = filterTasks
        category = { return self.selectedCategory! }
        task = { idx in return self.tasks[idx] }
        
        print(FileManager.default.urls(for: .documentDirectory, in: .userDomainMask))
    }
    
    func setFilter(categoryName: String?)->Void{
        var predicate: NSPredicate?
        
        if let name = categoryName, !name.isEmpty{
            predicate = NSPredicate(format: "categoryName CONTAINS[c] %@", name)
        }
        
        let sort = NSSortDescriptor(key: "categoryName", ascending: true)
        
        filterCategories(by: predicate, sort: [sort])
    }
    
    func filterTasks(taskName: String?)->Void{
        var predicate: NSPredicate = NSPredicate(format: "category.categoryId == %@", selectedCategory!.id)
        if let name = taskName, !name.isEmpty{
            let namePredicate = NSPredicate(format: "taskName CONTAINS[c] %@", name)
            predicate = NSCompoundPredicate(andPredicateWithSubpredicates: [predicate, namePredicate])
        }
        
        filterItems(by: predicate, sort: [NSSortDescriptor(key: "taskName", ascending: true)])
    }
    
    func filterCategories(by predicate: NSPredicate?, sort: [NSSortDescriptor]?){
        let request: NSFetchRequest<CategoryCoreData> = CategoryCoreData.fetchRequest()
        request.predicate = predicate
        request.sortDescriptors = sort
        do{
            categories = try persistentContainer.viewContext.fetch(request)
        }catch{
            print(error)
        }
    }
    
    func filterItems(by predicate: NSPredicate?, sort: [NSSortDescriptor]?){
        let request: NSFetchRequest<TaskCoreData> = TaskCoreData.fetchRequest()
        request.predicate = predicate
        request.sortDescriptors = sort
        do{
            let result = try persistentContainer.viewContext.fetch(request)
            tasks = result
            
        }catch{
            print(error)
        }
    }

    func saveCategory(name: String, handler: (Bool, Error?)->Void){
        let categoryCoreData = CategoryCoreData(context: persistentContainer.viewContext)
        categoryCoreData.categoryId = UUID().uuidString
        categoryCoreData.categoryName = name
        categoryCoreData.categoryColorHex = UIColor.randomFlat.hexValue()
        
        categories.append(categoryCoreData)
     
        self.saveContext()
        
        handler(true, nil)
    }
    
    func saveTask(name: String, handler: (Bool, Error?)->Void){
        let newTask = TaskCoreData(context: self.persistentContainer.viewContext)
        newTask.taskId = UUID().uuidString
        newTask.taskName = name
        newTask.taskDone = false
        newTask.category = selectedCategory!
        selectedCategory?.addToTasks(newTask)
        
        tasks.append(newTask)
        
        self.saveContext()
        
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
    
    //MARK: ItemsTableViewControllerState
    
    var createTaskHandler: ((String, (Bool, Error?) -> Void) -> Void)?
    
    var countTasks: (() -> Int)?
    
    var setTasksFilter: ((String?) -> Void)?
    
    var category: (() -> CategoryProtocol)?
    
    var task: ((Int) -> ItemProtocol)?
}


extension CategoryCoreData: CategoryProtocol{
    var id: String {
        get{
            return self.categoryId ?? ""
        }
    }
    
    var name: String {
        get{
        return self.categoryName ?? ""
        }
    }
    
    var colorHex: String {
        get{
        return self.categoryColorHex ?? ""
        }
    }
}

extension TaskCoreData: ItemProtocol{
    var id: String {
        get{
            return self.taskId ?? ""
        }
    }
    
    var name: String {
        get{
            return self.taskName ?? ""
        }
    }
    
    var done: Bool {
        get{
            return self.taskDone ?? false
        }
    }
    
    
}
