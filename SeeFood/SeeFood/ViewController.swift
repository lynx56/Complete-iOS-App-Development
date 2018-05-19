//
//  ViewController.swift
//  SeeFood
//
//  Created by lynx on 18/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit
import Vision

class ViewController: UIViewController, UIImagePickerControllerDelegate, UINavigationControllerDelegate {

    @IBOutlet weak var imageView: UIImageView!
    @IBOutlet weak var activityIndicator: UIActivityIndicatorView!
    
    var pickerViewController: UIImagePickerController!
    
    var master = ImageRecognitionMaster()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        pickerViewController = UIImagePickerController()
        
        self.pickerViewController.delegate = self
        self.pickerViewController.allowsEditing = false
        // Do any additional setup after loading the view, typically from a nib.
    }


    @IBAction func showCamera(_ sender: Any) {
        self.pickerViewController.sourceType = .camera
        present(pickerViewController, animated: true, completion: nil)
    }
    
    
    @IBAction func showPhotoLibrary(_ sender: Any) {
        self.pickerViewController.sourceType = .photoLibrary
        present(pickerViewController, animated: true, completion: nil)
    }
    
    func imagePickerController(_ picker: UIImagePickerController, didFinishPickingMediaWithInfo info: [String : Any]) {
        if let image = info[UIImagePickerControllerOriginalImage] as? UIImage{
            DispatchQueue.main.async {
                self.imageView.image = image
                self.activityIndicator.startAnimating()
            }
            master.recognize(image: image, completion: { (results, error) in
                DispatchQueue.main.async {
                    self.activityIndicator.stopAnimating()
                    let array = results.filter({$0.confidence != nil}).sorted(by: {$0.confidence! > $1.confidence! }).prefix(3)
                    print(array)
                    if array.contains(where: {$0.id.contains("hotdog")}){
                        self.navigationItem.title = "Hot Dog!"
                        self.navigationController?.navigationBar.titleTextAttributes = [NSAttributedStringKey.foregroundColor : UIColor.blue]
                    }else{
                        self.navigationItem.title = "Not Hot Dog!"
                        self.navigationController?.navigationBar.titleTextAttributes = [NSAttributedStringKey.foregroundColor : UIColor.red]
                        
                    }
                }
            })
        }
        
        pickerViewController.dismiss(animated: true, completion: nil)
    }
    
}

