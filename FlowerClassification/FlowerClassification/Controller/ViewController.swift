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
import SDWebImage

class ViewController: UIViewController, UIImagePickerControllerDelegate, UINavigationControllerDelegate {

    @IBOutlet weak var imageView: UIImageView!
    @IBOutlet weak var activityIndicator: UIActivityIndicatorView!
    @IBOutlet weak var descriptionLabel: UILabel!
    @IBOutlet weak var urlLabel: UILabel!
    @IBOutlet weak var thumbnailImage: UIImageView!
    
    var pickerViewController: UIImagePickerController!
    @IBOutlet weak var shareButton: UIButton!
    @IBOutlet weak var cameraButton: UIBarButtonItem!
    @IBOutlet weak var libraryButton: UIBarButtonItem!
    
  //  var master: ImageRecognitionMasterProtocol = BlumixRecognitionMaster()
    var master: ImageRecognitionMasterProtocol = ImageRecognitionMasterInception()
        //ImageRecognitionMaster()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        pickerViewController = UIImagePickerController()
        
        self.pickerViewController.delegate = self
        self.pickerViewController.allowsEditing = false
        self.shareButton.isHidden = true
        self.setActivityNavigationBarButtons(isEnabled: true)
        
        self.urlLabel.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(openUrl)))
        self.urlLabel.isUserInteractionEnabled = true
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
        let text = "My flower is \(navigationItem.title!)"
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
                 
                    if let identifier = array.first?.id{
                        self.navigationItem.title = identifier.capitalized
                        self.getWikiDescription(flowerName: identifier)
                         self.navigationController?.navigationBar.titleTextAttributes = [NSAttributedStringKey.foregroundColor : UIColor.black]
                    }else{
                        self.navigationItem.title = "Unknown"
                        self.navigationController?.navigationBar.titleTextAttributes = [NSAttributedStringKey.foregroundColor : UIColor.red]
                        self.urlLabel.text = nil
                        self.descriptionLabel.text = nil
                        self.thumbnailImage.image = nil
                    }
                     self.shareButton.isHidden = false
                     self.setActivityNavigationBarButtons(isEnabled: true)
                }
            })
        }
        
        pickerViewController.dismiss(animated: true, completion: nil)
    }
    
    func getWikiDescription(flowerName: String){
        self.activityIndicator.startAnimating()
        WikiApi().getDescriptionForFlower(flowerName: flowerName) { (info, error) in
            if error == nil{
                DispatchQueue.main.async {
                self.descriptionLabel.text = info?.name
                self.descriptionLabel.sizeToFit()
                self.urlLabel.text = info?.url?.absoluteString
                self.thumbnailImage.sd_setImage(with: info?.url)
                self.descriptionLabel.setNeedsLayout()
                self.activityIndicator.stopAnimating()
                }
            }
        }
    }
    
    @objc func openUrl(_ gesture: UITapGestureRecognizer){
        if gesture.state == .ended{
            if let text = self.urlLabel.text, let url = URL(string: text){
                UIApplication.shared.open(url, options: [:], completionHandler: nil)
        }
    }
}
}

