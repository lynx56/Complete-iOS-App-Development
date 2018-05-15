//
//  ViewController.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class CategoriesTableViewController: UITableViewController {
    
    var storage: Storage = StorageManager().getStorage()
    var categories: [Category] = []
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
       
        
        // Do any additional setup after loading the view, typically from a nib.
    }
    
    override func viewWillAppear(_ animated: Bool) {
        storage.categories { (result, error) in
            if error == nil{
                categories = result
            }else{
                print(error)
            }
        }
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    @IBAction func createCategory(_ sender: Any){
        let alert = UIAlertController(title: "Create a category", message: nil, preferredStyle: .alert)
        alert.addAction(UIAlertAction(title: "Create", style: .default, handler: { (action) in
            if let textfieldValue = alert.textFields?.first?.text{
                
                let newCategory = Category(id: UUID().uuidString, name: textfieldValue, colorHex: "", items: [])
             
                var changedCategories = self.categories
                changedCategories.append(newCategory)
                
                self.storage.saveCategories(changedCategories) { (added, error) in
                    if let error = error{
                        self.showError(title: "Error occur while creating category", error: error)
                    }
                    
                    self.categories = changedCategories
                    self.tableView.reloadData()
                }
                
            }}))
        
        alert.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: nil))
        
        alert.addTextField { (textField) in }
        
        self.present(alert, animated: true, completion: nil)
    }
    
    private func showError(title: String, error: Error){
        let ctr = UIAlertController(title: title, message: error.localizedDescription, preferredStyle: .alert)
        
        ctr.addAction(UIAlertAction(title: "Got it", style: .default, handler: nil))
        
        self.present(ctr, animated: true, completion: nil)
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "category", for: indexPath) as UITableViewCell
        
        cell.textLabel?.text = categories[indexPath.row].name
        
        return cell
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return categories.count
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if segue.identifier == "showItems"{
            let ctr = segue.destination as! ItemsTableViewController
            ctr.category = self.categories[self.tableView.indexPathForSelectedRow?.row ?? 0]
        }
    }
}
