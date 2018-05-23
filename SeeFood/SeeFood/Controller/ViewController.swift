//
//  ViewController.swift
//  SeeFood
//
//  Created by lynx on 18/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit
import Vision
import Social

class ViewController: UIViewController, UIImagePickerControllerDelegate, UINavigationControllerDelegate {

    @IBOutlet weak var imageView: UIImageView!
    @IBOutlet weak var activityIndicator: UIActivityIndicatorView!
    
    @IBOutlet weak var hotdogThumbnail: UIImageView!
    var pickerViewController: UIImagePickerController!
    @IBOutlet weak var shareButton: UIButton!
    @IBOutlet weak var cameraButton: UIBarButtonItem!
    @IBOutlet weak var libraryButton: UIBarButtonItem!
    
  //  var master: ImageRecognitionMasterProtocol = BlumixRecognitionMaster()
    var master: ImageRecognitionMasterProtocol = ImageRecognitionMaster()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        pickerViewController = UIImagePickerController()
        
        self.pickerViewController.delegate = self
        self.pickerViewController.allowsEditing = false
        self.shareButton.isHidden = true
        self.setActivityNavigationBarButtons(isEnabled: true)
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
    
    @IBAction func share(_ sender: Any) {
        let text = "My food is \(navigationItem.title!)"
        let image = imageView.image!
        
        let activityViewController = UIActivityViewController(activityItems: [text, image], applicationActivities: nil)
        
        self.popoverPresentationController?.sourceView = sender as? UIView
        
        self.present(activityViewController, animated: true, completion: nil)
    }
    
    func  setActivityNavigationBarButtons(isEnabled: Bool){
        self.cameraButton.isEnabled = isEnabled
        self.libraryButton.isEnabled = isEnabled
    }
    
    func imagePickerController(_ picker: UIImagePickerController, didFinishPickingMediaWithInfo info: [String : Any]) {
        if let image = info[UIImagePickerControllerOriginalImage] as? UIImage{
            DispatchQueue.main.async {
                self.imageView.image = image
                self.activityIndicator.startAnimating()
            }
            setActivityNavigationBarButtons(isEnabled: false)
            master.recognize(image: image, completion: { (results, error) in
                DispatchQueue.main.async {
                    self.activityIndicator.stopAnimating()
                    let array = results.filter({$0.confidence != nil}).sorted(by: {$0.confidence! > $1.confidence! }).filter({$0.confidence != nil && $0.confidence! > 0.7})
                 
                    if array.contains(where: {$0.id.contains("hotdog")}){
                        self.navigationItem.title = "Hot Dog!"
                        self.navigationController?.navigationBar.barTintColor = #colorLiteral(red: 0.2078431373, green: 0.9843137255, blue: 0.1529411765, alpha: 1)
                        self.hotdogThumbnail.image = #imageLiteral(resourceName: "hotdog")
                        self.navigationController?.navigationBar.titleTextAttributes = [NSAttributedStringKey.foregroundColor : UIColor.yellow, NSAttributedStringKey.font : UIFont.systemFont(ofSize: 30)]
                    }else{
                        self.navigationItem.title = "Not Hot Dog!"
                        self.navigationController?.navigationBar.barTintColor = #colorLiteral(red: 0.9098039216, green: 0.2666666667, blue: 0.2352941176, alpha: 1)
                        self.hotdogThumbnail.image = #imageLiteral(resourceName: "not-hotdog")
                        self.navigationController?.navigationBar.titleTextAttributes = [NSAttributedStringKey.foregroundColor : UIColor.yellow, NSAttributedStringKey.font : UIFont.systemFont(ofSize: 30)]
                        
                    }
                    
                     self.shareButton.isHidden = false
                     self.setActivityNavigationBarButtons(isEnabled: true)
                }
            })
        }
        
        pickerViewController.dismiss(animated: true, completion: nil)
    }
    
}

