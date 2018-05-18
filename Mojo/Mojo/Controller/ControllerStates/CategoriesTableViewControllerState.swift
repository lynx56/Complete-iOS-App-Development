//
//  File.swift
//  Mojo
//
//  Created by lynx on 17/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

protocol CategoriesTableViewControllerState {
    var createCategoryHandler: ((_ name: String, _ handler: (Bool, Error?)->Void)->Void)? { get }
    var countCategories: (()->Int)? { get }
    var getCategory: ((Int)->CategoryProtocol)? { get }
    var setCategoriesFilter: ((String?)->Void)? { get }
    var setSelectedCategory: ((Int)->Void)? { get }    
    var deleteCategory: ((CategoryProtocol, (Bool, Error?)->Void) -> Void)? { get }
}
