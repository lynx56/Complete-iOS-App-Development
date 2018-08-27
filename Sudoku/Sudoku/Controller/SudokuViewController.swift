//
//  SudokuViewController.swift
//  Sudoku
//
//  Created by lynx on 20/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class SudokuViewController: UIViewController,  StopwatchDelegate{
    var cells: [DrawableImageView] = []
    var selectedCell: DrawableImageView?
    var previewCells: [UILabel] = []
    var results: [Int: Int?] = [:]
    var puzzle: Puzzle!{
        didSet{
            self.difficultyLabel.text = puzzle.difficulty.title
        }
    }
    var master: ImageRecognitionMaster3!
    var generator = SudokuGenerator()
    
    @IBOutlet weak var difficultyLabel: UILabel!
    @IBOutlet weak var timeLabel: UILabel!
    @IBOutlet weak var gridView: UIView!
    var grid: UIView!
 
    override func viewDidLoad() {
        super.viewDidLoad()
        master = ImageRecognitionMaster3()
        puzzle = generator.generate(PuzzleDifficultyEasy)!
        timer.delegete = self
    }
 
    override func viewDidLayoutSubviews() {
        if grid?.bounds.size != self.gridView.bounds.size{
            createGrid(puzzle.grid)
        }
    }
    
    var timer = Stopwatch()
    
    func updateTime(newTime: String) {
        DispatchQueue.main.async {
            self.timeLabel.text = newTime
        }
    }

    func createGrid(_ solution: Solution){
        DispatchQueue.main.async {
                self.timer.startTimer()
        }
       cells.removeAll()
       grid = UIView(frame: self.gridView.bounds)
        
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
                        
                        let subviewFrame = CGRect(origin: .zero, size: frame.size)
                        let subview: UIView!
                        
                        if (pos.value.intValue != 0 && !pos.temporary){
                            subview = createTextViewOn(frame: subviewFrame, andText: pos.value.stringValue)
                        }else{
                           let draggabbleView = createDrawingView(on: subviewFrame, andTag: label.tag)
                            draggabbleView.gestureBegan = { (dv) in
                                self.selectedCell?.layer.borderWidth = 0
                                dv.layer.borderColor = UIColor.blue.cgColor
                                dv.layer.borderWidth = 3
                                self.selectedCell = dv
                            }
                            subview = draggabbleView
                            cells.append(draggabbleView)
                        }
                    
                        label.addSubview(subview)
                        label.frame = frame
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
        
        self.gridView.addSubview(grid)
    }
    
    func createTextViewOn(frame: CGRect, andText text: String)->UILabel{
        let textLabel = UILabel(frame: frame)
        textLabel.text = text
        textLabel.textAlignment = NSTextAlignment.center
        textLabel.font = UIFont.systemFont(ofSize: 27)

        return textLabel
    }
    
    func createDrawingView(on frame: CGRect, andTag tag: Int)->DrawableImageView{
        let drawView = DrawableImageView(frame: frame)
        drawView.isUserInteractionEnabled = true
        drawView.valueChanged = { (newValue) in
            self.puzzle.grid.position(at: UInt(tag)).value = NSNumber(value: newValue ?? 0)
        }
        drawView.tag = tag
        
        drawView.endDrawing = { (view) in
            DispatchQueue.main.asyncAfter(deadline: .now() + 1){
                view.alpha = 0.5
                self.process(image: view.image!) { (result, error) in
                    view.value = result
                    let label = UILabel(frame: view.frame)
                    label.text = "\(result!)"
                    label.font = UIFont.boldSystemFont(ofSize: 40)
                    label.textAlignment = NSTextAlignment.center
                
                    UIView.animate(withDuration: 2, animations: {
                        view.alpha = 0
                    })
        
                    view.superview!.addSubview(label)
                }
            }
        }
        
        return drawView
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    @IBAction func newPuzzle(_ sender: UIBarButtonItem) {
        let optionsController = PuzzleDifficultOptionsTableViewController(style: .plain)
        optionsController.options = [ (value: PuzzleDifficultyEasy, title: "Easy"),
                                      (value: PuzzleDifficultyMedium, title: "Medium"),
                                      (value: PuzzleDifficultyHard, title: "Hard") ]
        
        optionsController.optionSelected = { (option) in
            self.puzzle = self.generator.generate(option.value)
            self.grid?.removeFromSuperview()
            self.createGrid(self.puzzle.grid)
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
    
    @IBAction func setNumber(sender: UIButton){
        guard let selectedCell = self.selectedCell
            else { return }
        
        selectedCell.clear()
        selectedCell.value = sender.tag
        let index = cells.first(where: {$0.tag == selectedCell.tag})!.tag
        
        self.puzzle.grid.position(at: UInt(index)).value = NSNumber(value: sender.tag)
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
    
    @IBAction func erase(_ sender: Any) {
        
    }
    
    @IBAction func undo(_ sender: Any) {
    }
    
    func process(image: UIImage, completion: @escaping (Int?, ImageRecognitionError?)->Void){
        master.recognize(image: image, completion:completion)
    }
}


extension PuzzleDifficulty{
    var title: String{
        switch self{
        case PuzzleDifficultyEasy:
            return "Easy"
        case PuzzleDifficultyMedium:
            return "Medium"
        case PuzzleDifficultyHard:
            return "Hard"
        default:
            return "Unknown"
        }
    }
}

