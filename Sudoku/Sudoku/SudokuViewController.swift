//
//  SudokuViewController.swift
//  Sudoku
//
//  Created by lynx on 20/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class SudokuViewController: UIViewController {
    
    @IBOutlet weak var mainStack: UIStackView!
    @IBOutlet weak var previewStack: UIStackView!
    
    
    var cells: [DrawableImageView] = []
    var previewCells: [UILabel] = []
    
    var results: [Int: Int?] = [:]
    
    var master: ImageRecognitionMaster3!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        master = ImageRecognitionMaster3()
        
        cells = mainStack.findSubviewsOfType(DrawableImageView.self).sorted(by: {$0!.tag < $1!.tag}) as! [DrawableImageView]
        
        previewCells = previewStack.findSubviewsOfType(UILabel.self).sorted(by: {$0!.tag < $1!.tag}) as! [UILabel]
        
        previewStack.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(recognize)))
        
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    @objc func recognize(gesture: UITapGestureRecognizer){
        if gesture.state == .ended{
            for cell in cells.filter({$0.image != nil}){
                let cellTag = cell.tag
                process(image: cell.image!) { (result, error) in
                    self.results[cellTag] = result
                    self.previewCells.first(where: {$0.tag == cellTag})?.text = result == nil ? "" : "\(result!)"
                }
            }
        }
    }
    
    func process(image: UIImage, completion: @escaping (Int?, ImageRecognitionError?)->Void){
        master.recognize(image: image, completion:completion)
    }
}
