//
//  File.swift
//  SeeFood
//
//  Created by lynx on 22/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

extension String{
    func addingUniqueSuffix()->String{
        let date = Date()
        let formatter = DateFormatter()
        formatter.dateFormat = "dd-MM-yyyy-hh-mm-ss"
        
        let dateString = formatter.string(from: date)
        
        return "\(self)\(dateString)"
    }
}
