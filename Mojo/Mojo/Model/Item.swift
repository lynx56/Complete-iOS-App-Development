//
//  Storage.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

struct Item: Codable, ItemProtocol{
    var id: String
    var name: String
    var done: Bool
}

protocol ItemProtocol{
    var id: String { get }
    var name: String { get }
    var done: Bool { get }
}
