//
//  MasterViewController.h
//  TestSubmodules
//
//  Created by Satyajit Malugu on 10/2/13.
//  Copyright (c) 2013 Satyajit Malugu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
