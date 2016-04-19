//
//  PABaseViewController.h
//  PassApp
//
//  Created by Alex Anegon on 23/02/16.
//  Copyright © 2016 i2a. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PABaseMenuSwipeControllerDelegate;

@protocol PABaseMenuSwipeControllerDelegate <NSObject>

- (void)baseViewController:(id)controller offset:(CGFloat)offset;

@end

@interface PABaseViewController : UIViewController

@property (weak, nonatomic) id<PABaseMenuSwipeControllerDelegate> delegate;

@end