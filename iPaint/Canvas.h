//
//  Canvas.h
//  Drawi
//
//  Created by damian on 05/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Canvas : UIImageView {
    CGPoint location;
    UIColor *pencilColor;
}

@property CGPoint location;
@property  UIColor *pencilColor;
@end
