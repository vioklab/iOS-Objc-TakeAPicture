//
//  ViewController.h
//  TakeAPicture
//
//  Created by bbluue IMac on 2/16/16.
//  Copyright © 2016 bbluue. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController{
    IBOutlet UIView *frameforcapture;
    IBOutlet UIImageView *imageView;
}

- (IBAction)takephoto:(id)sender;

@end

