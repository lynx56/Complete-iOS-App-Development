//
//  ViewExtensions.swift
//  MakeMaker
//
//  Created by lynx on 19/05/2017.
//  Copyright © 2017 Zerotech. All rights reserved.
//

import UIKit
import CoreGraphics

extension CGColor{
    var UIColor: UIColor{
        get{
            let color = UIKit.UIColor(cgColor: self)
            return color
        }
    }
}
