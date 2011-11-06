//
//  ATSurveyViewController.h
//  ApptentiveSurveys
//
//  Created by Andrew Wooster on 11/5/11.
//  Copyright (c) 2011 Apptentive. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ATDefaultTextView.h"

@class ATCellTextView;
@class ATSurvey;
@class ATSurveyQuestion;

@interface ATSurveyViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate> {
@private
	ATSurvey *survey;
	UITableView *tableView;
	UITableViewCell *activeTextEntryCell;
	ATCellTextView *activeTextView;
}
- (id)initWithSurvey:(ATSurvey *)survey;
@end


@interface ATCellTextView : ATDefaultTextView {
@private
    NSIndexPath *cellPath;
	ATSurveyQuestion *question;
}
@property (nonatomic, retain) NSIndexPath *cellPath;
@property (nonatomic, retain) ATSurveyQuestion *question;
@end
