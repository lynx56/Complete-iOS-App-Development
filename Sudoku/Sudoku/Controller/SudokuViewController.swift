//
//  SudokuViewController.swift
//  Sudoku
//
//  Created by lynx on 20/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class SudokuViewController: UIViewController {
    
 //   @IBOutlet weak var mainStack: UIStackView!
  //  @IBOutlet weak var previewStack: UIStackView!
    
    
    var cells: [DrawableImageView] = []
    var previewCells: [UILabel] = []
    var grid: UIView!
    var results: [Int: Int?] = [:]
    var puzzle: Puzzle!
    var master: ImageRecognitionMaster3!
    var generator = SudokuGenerator()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        master = ImageRecognitionMaster3()
        
        puzzle = generator.generate(PuzzleDifficultyEasy)!
        
        createGrid(puzzle.grid)
        
        let buttonView = UIView(frame: CGRect(x: 0, y: grid.frame.maxY + 20, width: self.view.bounds.width/3, height: self.view.bounds.width/3))
        
        self.addButtonsPanel(to: buttonView)
        
        self.view.addSubview(buttonView)
    }
    
    func createGrid(_ solution: Solution){
        var size = min(self.view.bounds.width, self.view.bounds.height)
        
        let origin = CGPoint(x: self.view.safeAreaInsets.left, y: self.view.safeAreaInsets.top + UIApplication.shared.statusBarFrame.height + CGFloat(self.navigationController?.navigationBar.frame.height ?? 0.0))
        grid = UIView(frame: CGRect(origin: origin, size: CGSize(width: size, height: size)))
        let sizeOfSquares = (grid.bounds.width - 2.0) / 9.0
        
        for bigViewRow in 0..<3{
            for bigRowColumn in 0..<3{
                let bigViewFrame = CGRect(x: CGFloat(bigRowColumn) * sizeOfSquares * 3, y: CGFloat(bigViewRow) * sizeOfSquares * 3, width: sizeOfSquares*3 + 2.0, height: sizeOfSquares*3 + 2.0)
                
                let bigView = UIView(frame: bigViewFrame)
                for i in 0..<3{
                    for j in 0..<3{
                        var label = UIView()
                        
                        let globalPosition = i * 9 + j + bigRowColumn * 3 + bigViewRow * 27
                        
                        let pos = solution.getAtX(UInt(j + bigRowColumn * 3), y: UInt(i + bigViewRow * 3))!
                        
                        let frame = CGRect(x: CGFloat(j) * sizeOfSquares, y: CGFloat(i) * sizeOfSquares, width: sizeOfSquares + 2.0, height: sizeOfSquares + 2.0)
                        
                        label.tag = globalPosition
                     
                        if (pos.value.intValue != 0 && !pos.temporary){
                            label = UIView()
                            let textLabel = UILabel(frame: CGRect(origin: .zero, size: frame.size))
                            textLabel.text = pos.value.stringValue
                            textLabel.textAlignment = NSTextAlignment.center
                            textLabel.font = UIFont.systemFont(ofSize: 27)
                            label.addSubview(textLabel)
                            label.frame = frame
                        }else{
                            let drawView = DrawableImageView(frame: CGRect(origin: .zero, size: frame.size))
                            drawView.isUserInteractionEnabled = true
                            drawView.tag = label.tag
                            label.isUserInteractionEnabled = true
                            label.addSubview(drawView)
                            let preview = UILabel(frame: CGRect(origin: .zero, size: CGSize(width: 20, height: 20)))
                            preview.text = ""
                            drawView.valueChanged = { (newValue) in
                                preview.text = newValue?.description
                                self.puzzle.grid.position(at: UInt(label.tag)).value = NSNumber(value: newValue ?? 0)
                            }
                            label.addSubview(preview)
                            label.frame = frame
                        }
                        
                        label.layer.borderColor = UIColor.lightGray.cgColor
                        label.layer.borderWidth = 2
                        
                        bigView.addSubview(label)
                    }
                }
                bigView.layer.borderColor = UIColor.darkGray.cgColor
                bigView.layer.borderWidth = 2
                grid.addSubview(bigView)
            }
        }
        
        self.view.addSubview(grid)
    }
    
    func addButtonsPanel(to buttonView: UIView){
        let sizeOfSquares = (buttonView.bounds.width - 2.0) / 5.0
       
        for i in 0..<2{
            for j in 0..<5{
                let frame = CGRect(x: CGFloat(j) * sizeOfSquares, y: CGFloat(i) * sizeOfSquares, width: sizeOfSquares + 2.0, height: sizeOfSquares + 2.0)
                let view = UIView(frame: frame)
                let tag = i * 5 + j + 1
                
                let textLabel = UILabel(frame: CGRect(origin: .zero, size: frame.size))
                textLabel.text = tag == 10 ? "X": tag.description
                textLabel.textAlignment = NSTextAlignment.center
                textLabel.font = UIFont.systemFont(ofSize: 27)
                textLabel.tag = tag
                view.tag = tag
                view.addSubview(textLabel)
                
                view.layer.borderColor = UIColor.lightGray.cgColor
                view.layer.borderWidth = 2
                
                buttonView.addSubview(view)
            }
        }
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    @IBAction func check(_ sender: Any) {
        if let drawableCells = (grid.findSubviewsOfType(DrawableImageView.self) as? [DrawableImageView])?.filter({$0.image != nil && $0.value == nil}){
            let group = DispatchGroup()
            for cell in drawableCells{
                group.enter()
                process(image: cell.image!) { (result, error) in
                    cell.value = result
                    group.leave()
                }
            }
            group.notify(queue: .main) {
                self.validate()
            }
        }
    }
    
    @IBAction func newPuzzle(_ sender: UIBarButtonItem) {
        let optionsController = PuzzleDifficultOptionsTableViewController(style: .plain)
        optionsController.options = [ (value: PuzzleDifficultyEasy, title: "Easy"),
                                      (value: PuzzleDifficultyMedium, title: "Medium"),
                                      (value: PuzzleDifficultyHard, title: "Hard") ]
        
        optionsController.optionSelected = { (option) in
            self.puzzle = self.generator.generate(option.value)
            self.grid.removeFromSuperview()
            self.createGrid(self.puzzle.grid)
            self.title = option.title
        }
        
        optionsController.modalPresentationStyle = .popover
        
        optionsController.popoverPresentationController?.barButtonItem = sender
        optionsController.preferredContentSize = CGSize(width: 200, height: 120)
      //  optionsController.titleForSection = "Сhoose complexity"
       
        self.present(optionsController, animated: true, completion: nil)
    }
    
    func validate(){
        for userEditedView in (self.grid.findSubviewsOfType(DrawableImageView.self) as? [DrawableImageView])!{
                let tag = UInt(userEditedView.tag)
                
                let isValid = puzzle.grid.position(at: tag).value.intValue == puzzle.solution.position(at: tag).value.intValue || userEditedView.value == nil
                
                let color = isValid ? UIColor.white : UIColor.red
                userEditedView.backgroundColor = color
        }
    }
    
    
    func process(image: UIImage, completion: @escaping (Int?, ImageRecognitionError?)->Void){
        master.recognize(image: image, completion:completion)
    }
}
