//
//  PuzzleDifficultOptionsTableViewController.swift
//  Sudoku
//
//  Created by lynx on 23/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class PuzzleDifficultOptionsTableViewController: UITableViewController {
    typealias Option = (value: PuzzleDifficulty, title: String)
    
    var options: [Option] = []
    var optionSelected: ((Option)->Void)!
    var titleForSection: String = ""
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        tableView.register(UITableViewCell.self, forCellReuseIdentifier: "cell")
        tableView.tableFooterView = UIView()
        tableView.rowHeight = 40
        tableView.separatorStyle = .none
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }

    // MARK: - Table view data source

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
        return options.count
    }
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }

    override func tableView(_ tableView: UITableView, titleForHeaderInSection section: Int) -> String? {
        return titleForSection
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "cell", for: indexPath)

        cell.textLabel?.text = options[indexPath.row].title
        
        return cell
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        optionSelected(options[indexPath.row])
        
        self.dismiss(animated: true, completion: nil)
    }
}

