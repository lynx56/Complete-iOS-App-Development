//
//  Storage.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

protocol CategoryProtocol{
    var id: String { get }
    var name: String { get }
    var colorHex: String { get }
}

struct Category: Codable, CategoryProtocol{
    var id: String
    var name: String
    var colorHex: String
    
    var items: [Item]
}
