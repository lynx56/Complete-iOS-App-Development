//
//  ViewController.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class ItemsTableViewController: UITableViewController, UISearchBarDelegate {
    
    var storageManager = StorageManager(.realm)
    var storage: Storage!
    var category: Category?
    var items: [Item] = []
    
    @IBOutlet weak var searchbar: UISearchBar!
    override func viewDidLoad() {
        super.viewDidLoad()
        self.storage = storageManager.getStorage()
        self.items = category?.items ?? []
        searchbar.delegate = self
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    @IBAction func createItem(_ sender: Any){
        let alert = UIAlertController(title: "Create a item", message: nil, preferredStyle: .alert)
        alert.addAction(UIAlertAction(title: "Create", style: .default, handler: { (action) in
            if let textfieldValue = alert.textFields?.first?.text{
                
                let newItem = Item(id: UUID().uuidString, name: textfieldValue, colorHex: "", done: false)
             
                var changedItems = self.items
                changedItems.append(newItem)
                
                self.storage.saveItems(changedItems, to: self.category!){ (added, error) in
                    if let error = error{
                        self.showError(title: "Error occur while creating category", error: error)
                    }else{
                        self.items = changedItems
                        self.tableView.reloadData()
                    }
                    
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
        let cell = tableView.dequeueReusableCell(withIdentifier: "item", for: indexPath) as UITableViewCell
        
        cell.textLabel?.text = items[indexPath.row].name
        
        return cell
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return items.count
    }
    
    func searchBar(_ searchBar: UISearchBar, textDidChange searchText: String) {
        if let text = searchbar.text, !text.isEmpty{
            self.items = self.storageManager.getItem(by: text, in: category!)
            self.tableView.reloadData()
        }else{
            storage.items(handler: { (res, error) in
                self.items = res
                self.tableView.reloadData()
            })
        }
    }
    
    func searchBarCancelButtonClicked(_ searchBar: UISearchBar) {
        storage.items(handler: { (res, error) in
            self.items = res
            self.tableView.reloadData()
        })
    }
}

