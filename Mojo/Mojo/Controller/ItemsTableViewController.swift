//
//  ViewController.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit
import SwipeCellKit

class ItemsTableViewController: UITableViewController, UISearchBarDelegate, SwipeTableViewCellDelegate {
   
    var state: ItemsTableViewControllerState!
    
    @IBOutlet weak var searchbar: UISearchBar!
    override func viewDidLoad() {
        super.viewDidLoad()
        searchbar.delegate = self
        self.tableView.separatorStyle = .none
        self.tableView.rowHeight = 100
        self.navigationItem.title = self.state.category?().name
        originalColorNavBar =
            self.navigationController?.navigationBar.barTintColor
        originalTintColorNavBar =
            self.navigationController?.navigationBar.tintColor
        originalTitleAttributes = self.navigationController?.navigationBar.titleTextAttributes ?? [:]
        
        self.tableView.tableFooterView = UIView()
        
    }
    
    var originalColorNavBar: UIColor?
    var originalTintColorNavBar: UIColor?
    var originalTitleAttributes: [NSAttributedStringKey: Any] = [:]
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        self.navigationController?.navigationBar.barTintColor = UIColor(hexString: self.state.category!().colorHex) ?? .white
        let textColor = UIColor(contrastingBlackOrWhiteColorOn: self.navigationController!.navigationBar.barTintColor!, isFlat: true)
        self.navigationController?.navigationBar.tintColor = textColor
        self.navigationController?.navigationBar.titleTextAttributes = [NSAttributedStringKey.foregroundColor : textColor]
        searchbar.barTintColor = self.navigationController?.navigationBar.barTintColor
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
        self.navigationController?.navigationBar.barTintColor = originalColorNavBar
         self.navigationController?.navigationBar.tintColor = originalTintColorNavBar
        self.navigationController?.navigationBar.titleTextAttributes = originalTitleAttributes
    }

    @IBAction func createItem(_ sender: Any){
        let alert = UIAlertController(title: "Create a item", message: nil, preferredStyle: .alert)
        alert.addAction(UIAlertAction(title: "Create", style: .default, handler: { (action) in
            if let textfieldValue = alert.textFields?.first?.text{
                
                self.state.createTaskHandler!(textfieldValue){ (success, error) in
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
    
    func tableView(_ tableView: UITableView, editActionsForRowAt indexPath: IndexPath, for orientation: SwipeActionsOrientation) -> [SwipeAction]? {
        guard orientation == .right else { return nil }
        
        let deleteAction = SwipeAction(style: .destructive, title: "Delete") { action, indexPath in
            self.state.deleteItem!(self.state.task!(indexPath.row)){(success, error) in
                if let error = error{
                    self.showError(title: "Cant delete item", error: error)
                }else{
                    self.tableView.reloadData()
                }
            }
        }
        
        // customize the action appearance
        deleteAction.image = UIImage(named: "delete")
        
        return [deleteAction]
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "item", for: indexPath) as! SwipeTableViewCell
        
        cell.delegate = self
        
        let item = self.state.task!(indexPath.row)
        
        cell.textLabel?.text = item.name
        
        var itemColor = UIColor.white
        if let categoryColor = UIColor(hexString: self.state.category!().colorHex)
        {
            itemColor = categoryColor.darken(byPercentage: CGFloat(CGFloat(indexPath.row)/CGFloat(self.state.countTasks!()))) ?? .white
        }
        
        if item.done{
            cell.accessoryType = .checkmark
        }else{
            cell.accessoryType = .none
        }
        
        cell.backgroundColor = itemColor
        
        cell.textLabel?.textColor = UIColor(contrastingBlackOrWhiteColorOn: cell.backgroundColor!, isFlat: true)
        
        return cell
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return self.state.countTasks!()
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        var item = self.state.task!(indexPath.row)
        let selectedIndexPath = indexPath
        let done: Bool = !item.done
        self.state.setTaskDone!(item, done){ (result, error) in
            if let error = error{
                self.showError(title: "Cant change task", error: error)
            }else{
                if selectedIndexPath == indexPath{
                    self.tableView.reloadRows(at: [selectedIndexPath], with: .automatic)
                }else{
                    self.tableView.reloadData()
                }
            }
        }
    }
    
    func searchBar(_ searchBar: UISearchBar, textDidChange searchText: String) {
        self.state.setTasksFilter!(searchBar.text)
        tableView.reloadData()
    }
    
    func searchBarCancelButtonClicked(_ searchBar: UISearchBar) {
        self.state.setTasksFilter!(nil)
        tableView.reloadData()
    }
}

