//
//  DataViewController.h
//  test
//
//  Created by Jared Friedman on 1/9/14.
//  Copyright (c) 2014 Jared Friedman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
