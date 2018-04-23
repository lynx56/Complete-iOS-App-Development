//
//  ViewController.swift
//  Quizzz
//
//  Created by lynx on 22/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var scoreLabel: UILabel!
    @IBOutlet weak var questionContent: UITextView!
    @IBOutlet weak var progressView: UIView!
    @IBOutlet weak var questionsProgress: UILabel!
    
    var questionList: LinkedList<Question>!
    var currentQuestion: Node<Question>?
    var score: Int = 0
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let questionSource = QuestionStaticSource()
        
        questionList = LinkedList<Question>(questionSource.questions)!
        currentQuestion = questionList.head
        updateUI()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    @IBAction func `true`(_ sender: Any) {
        answer(choosen: true)
    }
    
    @IBAction func `false`(_ sender: Any) {
        answer(choosen: false)
    }
    
    private func answer(choosen: Bool){
        if let correctAnswer = currentQuestion?.data.correctAnswer{
            if correctAnswer == choosen{
                score += 1
                ProgressHUD.showSuccess()
            }else{
                ProgressHUD.showError()
            }
        }
        
        next()
    }
    
    private func next(){
        currentQuestion = currentQuestion?.next
        
        updateUI()
    }
    
    func updateUI(){
        if currentQuestion != nil{
            self.questionContent.text = currentQuestion!.data.text
            self.questionsProgress.text = "\(String(describing: currentQuestion!.position))/\(questionList.count - 1)"
            self.questionsProgress.sizeToFit()
            let progressWidth = (self.view.bounds.width / CGFloat(questionList.count) * CGFloat(currentQuestion!.position))
            self.progressView.frame = CGRect(origin: .zero, size: CGSize(width: progressWidth, height: self.progressView.bounds.height))
            
        }else{
            let alert = UIAlertController(title: "Congratulation!", message: "The questions is over.", preferredStyle: .alert)
            alert.addAction(UIAlertAction(title: "Restart", style: .default, handler: { (action) in self.restart() }))
            alert.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler:  nil))
            
            self.present(alert, animated: true, completion: nil)
        }
        
        scoreLabel.text = String(score)
    }
    
    func restart(){
        currentQuestion = questionList.head
        score = 0
        updateUI()
    }
}

