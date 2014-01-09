//
//  RootViewController.h
//  test
//
//  Created by Jared Friedman on 1/9/14.
//  Copyright (c) 2014 Jared Friedman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end
