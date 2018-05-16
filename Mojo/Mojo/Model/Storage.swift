//
//  Storage.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

protocol Storage{
    func saveCategories(_ categories: [Category], handler: (Bool, Error?) -> Void)
    func categories( handler: ([Category], Error?)->Void)
    func saveItems(_ items: [Item], to category: Category, handler: (Bool, Error?)->Void)
    func items(handler: ([Item], Error?)->Void)
}
