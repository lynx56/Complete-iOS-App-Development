//
//  MessageTableViewCell.swift
//  PrivateChat
//
//  Created by lynx on 05/05/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import UIKit

class MessageTableViewCell: UITableViewCell {

    @IBOutlet weak var message: UILabel!
    @IBOutlet weak var logo: UIImageView!
    @IBOutlet weak var bubble: UIImageView!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
