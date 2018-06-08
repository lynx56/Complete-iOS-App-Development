//
//  ViewController.swift
//  ArDicee
//
//  Created by lynx on 08/06/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit
import SceneKit
import ARKit

class ViewController: UIViewController, ARSCNViewDelegate {

    @IBOutlet var sceneView: ARSCNView!
    var dices = [SCNNode]()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Set the view's delegate
        sceneView.delegate = self
        
        // Show statistics such as fps and timing information
        sceneView.showsStatistics = true
        
       // sceneView.debugOptions = [ARSCNDebugOptions.showFeaturePoints]
        // Create a new scene
        let scene = SCNScene(named: "art.scnassets/scene.scn")!
        
        // Set the scene to the view
        sceneView.scene = scene
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        // Create a session configuration
        let configuration = ARWorldTrackingConfiguration()
        
        configuration.planeDetection = .horizontal

        // Run the view's session
        sceneView.session.run(configuration)
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
        // Pause the view's session
        sceneView.session.pause()
    }
    
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        if let touch = touches.first{
            let location = touch.location(in: self.sceneView)
            let hitTestResult = self.sceneView.hitTest(location, types: ARHitTestResult.ResultType.existingPlaneUsingExtent)
            
            if let hitResult = hitTestResult.first{
                let diceScene = SCNScene(named: "art.scnassets/diceCollada.scn")
                
                if let diceNode = diceScene?.rootNode.childNode(withName: "Dice", recursively: true){
                    diceNode.position = SCNVector3.init(
                        x: hitResult.worldTransform.columns.3.x,
                        y: hitResult.worldTransform.columns.3.y + diceNode.boundingSphere.radius,
                        z: hitResult.worldTransform.columns.3.z)
                    
                    sceneView.scene.rootNode.addChildNode(diceNode)
                    
                    rollDice(diceNode)
                    
                    self.dices.append(diceNode)
                }
                
            }
        }
    }
    
    func renderer(_ renderer: SCNSceneRenderer, didAdd node: SCNNode, for anchor: ARAnchor) {
        if let planeAnchor = anchor as? ARPlaneAnchor{
            print("plane detected")
            let plane = SCNPlane(width: CGFloat(planeAnchor.extent.x), height: CGFloat(planeAnchor.extent.z))
            
            let planeNode = SCNNode()
            planeNode.position = SCNVector3(x: planeAnchor.center.x, y:0, z: planeAnchor.center.z)
            planeNode.transform = SCNMatrix4MakeRotation(-Float.pi/2, 1, 0, 0)
            let gridMaterial = SCNMaterial()
            gridMaterial.diffuse.contents = UIImage(named: "art.scnassets/grid.png")
            
            plane.materials = [gridMaterial]
            planeNode.geometry = plane
            
            node.addChildNode(planeNode)
    
        }else{
            return
        }
    }
    
 
    @IBAction func roll(_ sender: Any) {
        for dice in dices{
            rollDice(dice)
        }
    }
    
    private func rollDice(_ dice: SCNNode){
        let randomX = CGFloat(Float(arc4random_uniform(4) + 5) * (Float.pi/2))
        let randomZ = CGFloat(Float(arc4random_uniform(4) + 5) * (Float.pi/2))
        
        dice.runAction(SCNAction.rotateBy(x: randomX, y: 0, z: randomZ, duration: 0.5))
    }
   
    @IBAction func removeDices(_ sender: Any) {
         for dice in dices{
            dice.removeFromParentNode()
        }
        
        dices.removeAll()
    }
    
}
