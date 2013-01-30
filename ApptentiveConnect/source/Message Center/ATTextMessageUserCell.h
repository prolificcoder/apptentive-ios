//
//  ATTextMessageUserCell.h
//  ApptentiveConnect
//
//  Created by Andrew Wooster on 10/9/12.
//  Copyright (c) 2012 Apptentive, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ATMessageCenterCell.h"
#import "TTTAttributedLabel.h"

typedef enum {
	ATTextMessageCellTypeUser,
	ATTextMessageCellTypeDeveloper,
} ATTextMessageCellType;

@interface ATTextMessageUserCell : UITableViewCell <ATMessageCenterCell>
@property (retain, nonatomic) IBOutlet UILabel *dateLabel;
@property (retain, nonatomic) IBOutlet UIView *chatBubbleContainer;
@property (retain, nonatomic) IBOutlet UIImageView *userIcon;
@property (retain, nonatomic) IBOutlet UIImageView *messageBubbleImage;
@property (retain, nonatomic) IBOutlet TTTAttributedLabel *messageText;
@property (retain, nonatomic) IBOutlet UIImageView *composingBubble;
@property (nonatomic, assign, getter = isComposing) BOOL composing;
@property (nonatomic, assign, getter = shouldShowDateLabel) BOOL showDateLabel;
@property (nonatomic, assign) ATTextMessageCellType cellType;
@end
