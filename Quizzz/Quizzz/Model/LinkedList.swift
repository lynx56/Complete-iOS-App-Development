//
//  LinkedList.swift
//  Quizzz
//
//  Created by lynx on 23/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

class Node<T>{
    var data: T
    var next: Node<T>?
    var position: Int
    
    init(withData data: T, andPosition position: Int){
        self.data = data
        self.position = position
    }
}

class LinkedList<T>{
    var head: Node<T>?
    var tail: Node<T>?
    var count: Int = 0
    
    init(withHeadData data: T){
        head = Node<T>(withData: data, andPosition: count)
        head!.next = tail
        count = 1
    }
    
    convenience init?(_ array: [T]){
        if array.isEmpty{
            return nil
        }
        
        self.init(withHeadData: array[0])
        for i in 1..<array.count{
            self.add(value: array[i])
        }
    }
    
    func add(value: T){
        let newNode = Node<T>(withData: value, andPosition: count)
        
        if tail == nil{
            tail = newNode
            head?.next = tail
        }else{
            tail!.next = newNode
            tail = newNode
        }
        
        count = count + 1
    }
    
    func print() -> String{
        var node = head
        var result: String = ""
        while node != nil {
            result.append("\(node!.data)\(node?.next != nil ? " -> ": "")")
            node = node?.next
        }
        
        return result
    }
}
