//
//  DetailViewController.h
//  testbots
//
//  Created by Satyajit Malugu on 10/2/13.
//  Copyright (c) 2013 Satyajit Malugu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
