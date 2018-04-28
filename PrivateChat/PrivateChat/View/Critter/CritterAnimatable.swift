//
//  CritterAnimatable.swift
//  LoginCritter
//
//  Created by Christopher Goldsby on 4/15/18.
//  Copyright © 2018 Christopher Goldsby. All rights reserved.
//

import UIKit

typealias SavedState = () -> Void

protocol CritterAnimatable {
    func currentState() -> SavedState
    func applyActiveStartState()
    func applyActiveEndState()
    func applyInactiveState()
}

extension CritterAnimatable where Self: UIView {
    
    func currentState() -> SavedState {
        let currentState = layer.transform
        return {
            self.layer.transform = currentState
        }
    }
    
    func applyInactiveState() {
        layer.transform = .identity
    }
}

extension Sequence where Iterator.Element == CritterAnimatable {

    func applyActiveStartState() {
        forEach { $0.applyActiveStartState() }
    }

    func applyActiveEndState() {
        forEach { $0.applyActiveEndState() }
    }

    func applyInactiveState() {
        forEach { $0.applyInactiveState() }
    }
}
