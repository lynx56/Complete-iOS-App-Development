//
//  File.swift
//  Mojo
//
//  Created by lynx on 17/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

protocol ItemsTableViewControllerState {
    var createTaskHandler: ((_ name: String, _ handler: (Bool, Error?)->Void)->Void)? { get }
    var countTasks: (()->Int)? { get }
    var setTasksFilter: ((String?)->Void)? { get }
    var category: (()->CategoryProtocol)? { get }
    var task: ((Int)->ItemProtocol)? { get }
}
