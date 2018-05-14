//
//  Storage.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

struct Category: Codable{
    var id: String
    var name: String
    var colorHex: String
    
    var items: [Item]
}
