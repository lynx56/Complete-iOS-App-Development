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
    @IBOutlet weak var progressViewWidthConstraint: NSLayoutConstraint!
    @IBOutlet weak var questionNumber: UILabel!
    
    var questionList: LinkedList<Question>!
    var currentQuestion: Node<Question>?
    var score: Int = 0
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let questionSource = QuestionStaticSource()
        
        questionList = LinkedList<Question>(questionSource.questions)!
        currentQuestion = questionList.head
        
        let gradient = CAGradientLayer()
        gradient.frame = view.frame
        gradient.colors = [#colorLiteral(red: 0.9349222716, green: 0.08037676937, blue: 0.4038850846, alpha: 1).cgColor,#colorLiteral(red: 0.3490196078, green: 0.01568627451, blue: 0.2392156863, alpha: 1).cgColor, #colorLiteral(red: 0.168627451, green: 0.007843137255, blue: 0.1960784314, alpha: 1).cgColor]

        gradient.startPoint = CGPoint(x: 1, y: 1)
        gradient.endPoint = CGPoint(x: 0, y: 0)
        
        
        view.layer.insertSublayer(gradient, at: 0)
        
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
            let qnum = String(describing: currentQuestion!.position + 1)
            self.questionsProgress.text = "\(qnum)/\(questionList.count)"
            self.questionsProgress.sizeToFit()
            let progressWidth = (self.view.bounds.width / CGFloat(questionList.count - 1) * CGFloat(currentQuestion!.position))
            
            progressViewWidthConstraint.constant = progressWidth
            self.progressView.setNeedsLayout()
            
            questionNumber.text = "QUESTION \(qnum)"
            
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

