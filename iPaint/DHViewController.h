//
//  DHViewController.h
//  iPaint
//
//  Created by binaryboy on 6/7/14.
//  Copyright (c) 2014 AhmedHamdy. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "WEPopoverController.h"
#import "ColorViewController.h"
#import "Canvas.h"

@interface DHViewController : UIViewController  <WEPopoverControllerDelegate, UIPopoverControllerDelegate, ColorViewControllerDelegate>{
    CGFloat red;
    CGFloat green;
    CGFloat blue;
}
@property (nonatomic, strong) WEPopoverController *wePopoverController;

@property (strong, nonatomic) IBOutlet Canvas *CanvasView;

@end
