//
//  ATSurveyResponse.h
//  ApptentiveSurveys
//
//  Created by Andrew Wooster on 11/4/11.
//  Copyright (c) 2011 Apptentive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATRecord.h"

@class ATSurveyQuestionResponse;

@interface ATSurveyResponse : ATRecord {
	NSMutableArray *questionResponses;
}
@property (nonatomic, retain) NSString *identifier;

- (void)addQuestionResponse:(ATSurveyQuestionResponse *)response;
- (NSDictionary *)apiDictionary;
@end


@interface ATSurveyQuestionResponse : NSObject <NSCoding> {
@private
}
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *response;
@end