//
//  ViewController.swift
//  ArRuler
//
//  Created by lynx on 05/06/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit
import SceneKit
import ARKit

class ViewController: UIViewController, ARSCNViewDelegate {

    @IBOutlet var sceneView: ARSCNView!
    var mesurePoints = [SCNNode]()
    var textNode = SCNNode()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Set the view's delegate
        sceneView.delegate = self
        
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        let configuration = ARWorldTrackingConfiguration()
        
        sceneView.session.run(configuration)
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
        sceneView.session.pause()
    }
    
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        if let touchLocation = touches.first?.location(in: sceneView){
            if let hitTestResult = sceneView.hitTest(touchLocation, types: .featurePoint).first{
                addDot(at: hitTestResult)
            }
        }
    }
    
    func addDot(at hitTestResult: ARHitTestResult){
        if mesurePoints.count >= 2{
            for node in mesurePoints{
                node.removeFromParentNode()
            }
            
            mesurePoints = []
        }
        
        let geometry = SCNSphere(radius: 0.005)
        let material = SCNMaterial()
        material.diffuse.contents = UIColor.red
        
        geometry.materials = [material]
        
        let node = SCNNode(geometry: geometry)
        let location = hitTestResult.worldTransform.columns.3
        node.position = SCNVector3(location.x, location.y, location.z)
        
        sceneView.scene.rootNode.addChildNode(node)
        
        mesurePoints.append(node)
        
        mesure()
    }
    
    func mesure(){
        if let first = mesurePoints.first?.position, let last = mesurePoints.last?.position{
            let a = last.x - first.x
            let b = last.y - first.y
            let c = last.z - first.z
            let distance = abs(sqrt(sqr(a) + sqr(b) + sqr(c)))
            
            let textPosition = SCNVector3(a/2.0, last.y + 0.01, last.z)
            
            updateText("\(distance)", at: textPosition)
        }
    }
    
    func updateText(_ text: String, at location: SCNVector3){
        let textGeometry = SCNText(string: text, extrusionDepth: 1)
        textGeometry.materials.first?.diffuse.contents = UIColor.red
        
        textNode.removeFromParentNode()
        
        textNode = SCNNode(geometry: textGeometry)
        textNode.scale = SCNVector3(0.01, 0.01, 0.01)
        textNode.position = location
        
        sceneView.scene.rootNode.addChildNode(textNode)
    }
}

func sqr(_ val: Float)->Float{
    return pow(val, 2)
}
