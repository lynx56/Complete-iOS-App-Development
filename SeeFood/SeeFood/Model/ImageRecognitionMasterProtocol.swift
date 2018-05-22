//
//  File.swift
//  SeeFood
//
//  Created by lynx on 22/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation
import UIKit

protocol ImageRecognitionMasterProtocol{
    func recognize(image: UIImage, completion: @escaping ([RecognitionResult], Error?)->Void)
}
