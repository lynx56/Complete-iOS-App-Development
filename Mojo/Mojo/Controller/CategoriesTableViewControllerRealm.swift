//
//  ViewController.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit
import ChameleonFramework

class CategoriesTableViewController: UITableViewController, UISearchBarDelegate {
    @IBOutlet weak var searchbar: UISearchBar!
   
    var state: CategoriesTableViewControllerState = CoreDataSource()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        searchbar.delegate = self
        
        self.navigationController?.navigationBar.barTintColor = UIColor.flatBlue
        self.navigationController?.navigationBar.tintColor = .white
        self.navigationController?.navigationBar.titleTextAttributes = [NSAttributedStringKey.foregroundColor : UIColor.white]
        self.tableView.rowHeight = 100
        self.tableView.separatorStyle = .none
        
         searchbar.barTintColor = self.navigationController?.navigationBar.barTintColor
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    @IBAction func createCategory(_ sender: Any){
        let alert = UIAlertController(title: "Create a category", message: nil, preferredStyle: .alert)
        alert.addAction(UIAlertAction(title: "Create", style: .default, handler: { (action) in
            if let textfieldValue = alert.textFields?.first?.text{
                
                self.state.createCategoryHandler!(textfieldValue){ (success, error) in
                    if let error = error{
                        self.showError(title: "Error occur while creating category", error: error)
                    }
                    
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
        let category = self.state.getCategory!(indexPath.row)
        
        cell.textLabel?.text = category.name
        cell.backgroundColor = UIColor(hexString: category.colorHex) ?? .white
        cell.textLabel?.textColor = UIColor(contrastingBlackOrWhiteColorOn: cell.backgroundColor!, isFlat: true)
       
        return cell
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return self.state.countCategories!()
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if segue.identifier == "showItems"{
            let ctr = segue.destination as! ItemsTableViewController
            self.state.setSelectedCategory!(tableView.indexPathForSelectedRow!.row)
            ctr.state = self.state as! ItemsTableViewControllerState
            if let selectedRow = tableView.indexPathForSelectedRow{
                tableView.deselectRow(at: selectedRow, animated: false)
            }
        }
    }
    
    func searchBar(_ searchBar: UISearchBar, textDidChange searchText: String) {
        self.state.setCategoriesFilter!(searchbar.text)
        self.tableView.reloadData()
    }
    
    func searchBarCancelButtonClicked(_ searchBar: UISearchBar) {
        self.state.setCategoriesFilter!(nil)
        self.tableView.reloadData()
    }
}
