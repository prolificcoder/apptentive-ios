//
//  ATFakeMessageCell.h
//  ApptentiveConnect
//
//  Created by Andrew Wooster on 10/19/12.
//  Copyright (c) 2012 Apptentive, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ATMessageCenterCell.h"
#import "TTTAttributedLabel.h"

@interface ATFakeMessageCell : UITableViewCell <ATMessageCenterCell>
@property (retain, nonatomic) IBOutlet UIView *containerView;
@property (retain, nonatomic) IBOutlet UILabel *dateLabel;
@property (retain, nonatomic) IBOutlet TTTAttributedLabel *subjectText;
@property (retain, nonatomic) IBOutlet UIView *grayLineView;
@property (retain, nonatomic) IBOutlet TTTAttributedLabel *messageText;
@property (nonatomic, assign, getter = shouldShowDateLabel) BOOL showDateLabel;

@end
