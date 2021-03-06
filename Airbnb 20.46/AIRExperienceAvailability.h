//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSDate, NSString;

@interface AIRExperienceAvailability : AIRModel
{
    NSString *_scheduledTemplateId;
    NSString *_startTimeDescription;
    NSDate *_startTime;
    NSDate *_endTime;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(readonly, copy, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSString *startTimeDescription; // @synthesize startTimeDescription=_startTimeDescription;
@property(readonly, copy, nonatomic) NSString *scheduledTemplateId; // @synthesize scheduledTemplateId=_scheduledTemplateId;

@end

