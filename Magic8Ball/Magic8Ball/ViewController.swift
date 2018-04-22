//
//  ViewController.swift
//  Magic8Ball
//
//  Created by lynx on 21/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    var balls = ["yes", "no", "noIdea", "askAgain", "answerIsYes"]
    
    @IBOutlet weak var ballAnswer: UIImageView!
    @IBOutlet weak var ballImageView: UIImageView!
    @IBOutlet weak var ballAnswerCenterYConstraint: NSLayoutConstraint!
    
    //так как центр ответа не совпадает с центром картинки шара, то опытным путем найдем
    //смещение, например для картинки шара с высотой 270px это смещение равно 12px
    //дальше это соотношение понадобится для рассчета смещения для неизвестной высоты картинки
    //другими словами это размер единицы смещения
    private var centerAnswerShift = CGFloat(12.0/270.0)
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }
    
    override func viewWillLayoutSubviews() {
         ballAnswerCenterYConstraint.constant = -ballImageView.bounds.height * centerAnswerShift
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @IBAction func ask(_ sender: Any){
        generateAnswer()
    }
    
    override func motionEnded(_ motion: UIEventSubtype, with event: UIEvent?) {
        generateAnswer()
    }
    
    private func generateAnswer(){
        let randomIndex = Int(arc4random_uniform(5))
        ballAnswer.alpha = 0
        ballAnswer.image = UIImage(named: balls[randomIndex])
        UIView.animate(withDuration: 2) {
            self.ballAnswer.alpha = 100
        }
        
    }
}

