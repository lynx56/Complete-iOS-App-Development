//
//  UIViewController+.swift
//  Clima
//
//  Created by lynx on 25/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

extension UIViewController{
    var content: UIViewController{
        get{
            if let navigationController = self as? UINavigationController{
                return navigationController.topViewController!
            }else{
                return self
            }
        }
    }
}
