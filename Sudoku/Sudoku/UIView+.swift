//
//  ViewExtensions.swift
//  MakeMaker
//
//  Created by lynx on 19/05/2017.
//  Copyright © 2017 Zerotech. All rights reserved.
//

import UIKit
import CoreGraphics

extension UIView{
    func findSubviewOfType<T>(_ type: T.Type)->T?{
        if self is T{
            return (self as! T)
        }
        else{
            for subview in self.subviews{
                return subview.findSubviewOfType(type)
            }
        }
        
        return nil
    }
    
    func findSuperViewOfType<T>(_ type: T.Type)->T?{
        if self is T{
            return (self as! T)
        }
        else{
            return superview?.findSuperViewOfType(type)
        }
        
        return nil
    }
}
