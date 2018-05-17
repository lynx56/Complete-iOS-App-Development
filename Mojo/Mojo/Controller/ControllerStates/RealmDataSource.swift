//
//  ViewController.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit
import ChameleonFramework
import RealmSwift

//todo: to nonullable struct
class RealmDataSource: CategoriesTableViewControllerState, ItemsTableViewControllerState{
    var setSelectedCategory: ((Int) -> Void)?
    
    //MARK: CategoriesTableViewControllerState
    var createCategoryHandler: ((_ name: String, _ handler: (Bool, Error?)->Void)->Void)?
    var countCategories: (()->Int)?
    var getCategory: ((Int)->CategoryProtocol)?
    var setCategoriesFilter: ((String?)->Void)?
    var selectedCategory: CategoryRealm?{
        didSet{
            loadTasks(predicate: nil)
        }
    }
    var categories: Results<CategoryRealm>?
    var tasks: Results<TaskRealm>?
    
    let realm = try! Realm()
    
    init(){
        createCategoryHandler = saveCategory
        countCategories = { return self.categories?.count ?? 0 }
        getCategory = { (idx) in return self.categories![idx] }
        load(predicate: nil)
        setSelectedCategory = { selectedCategory in self.selectedCategory = self.categories![selectedCategory]}
        setCategoriesFilter = setFilter
            
        createTaskHandler = saveTask
        countTasks = { return self.tasks?.count ?? 0 }
        setTasksFilter = filterTasks
        category = { return self.selectedCategory! }
        task = { idx in return self.tasks![idx] }
        
        NSLog(realm.configuration.fileURL?.absoluteString ?? "no url")
    }
    
    func setFilter(categoryName: String?)->Void{
        load(predicate: categoryName == nil || categoryName!.isEmpty ? nil : NSPredicate(format: "name CONTAINS[c] %@", categoryName!))
    }
    
    func filterTasks(taskName: String?)->Void{
        loadTasks(predicate: taskName == nil || taskName!.isEmpty ? nil : NSPredicate(format: "name CONTAINS[c] %@", taskName!))
    }
    
    func load(predicate: NSPredicate?){
        if predicate != nil{
            categories = realm.objects(CategoryRealm.self).filter(predicate!).sorted(byKeyPath: "name", ascending: true)
        }else{
            categories = realm.objects(CategoryRealm.self).sorted(byKeyPath: "name", ascending: true)
        }
    }
    
    func loadTasks(predicate: NSPredicate?){
        if predicate != nil{
            tasks = tasks?.filter(predicate!)
        }else{
            tasks = selectedCategory?.items.sorted(byKeyPath: "name")
        }
    }


    func saveCategory(name: String, handler: (Bool, Error?)->Void){
            do{
                try realm.write {
                    let categoryRealm = CategoryRealm(id: UUID().uuidString, name: name, color: UIColor.randomFlat.hexValue())
                    realm.add(categoryRealm, update: true)
                }
                handler(true, nil)
            }
            catch{
                print(error)
                handler(false, error)
            }
    }
    
    func saveTask(name: String, handler: (Bool, Error?)->Void){
        do{
            try realm.write {
                let task = TaskRealm(id: UUID().uuidString, name: name, done: false)
                selectedCategory!.items.append(task)
                realm.add(task)
            }
            
            handler(true, nil)
        }
        catch{
            print(error)
            handler(false, error)
        }
    }
    
    //MARK: ItemsTableViewControllerState
    
    var createTaskHandler: ((String, (Bool, Error?) -> Void) -> Void)?
    
    var countTasks: (() -> Int)?
    
    var setTasksFilter: ((String?) -> Void)?
    
    var category: (() -> CategoryProtocol)?
    
    var task: ((Int) -> ItemProtocol)?
}
