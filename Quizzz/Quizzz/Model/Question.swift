//
//  Question.swift
//  Quizzz
//
//  Created by lynx on 22/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

class Question{
    var text: String
    var correctAnswer: Bool
    var comment: String?
    
    init(withText text: String, andAnswer answer: Bool){
        self.text = text
        self.correctAnswer = answer
    }
    
    convenience init(withText text: String, andAnswer answer: Bool, andComment comment: String) {
        self.init(withText: text, andAnswer: answer)
        self.comment = comment
    }
}
