//
//  Storage.swift
//  Mojo
//
//  Created by lynx on 14/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

class StorageManager{
    func getStorage()->Storage{
        //get from config
        return PlistStorage.shared
    }
}
