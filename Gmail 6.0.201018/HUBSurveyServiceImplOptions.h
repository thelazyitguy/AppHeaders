//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HUBSurveyServiceImplOptions : NSObject
{
    _Bool _allowSurveyTesting;
    NSString *_chatOptOutTriggerID;
    NSString *_meetOptOutTriggerID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allowSurveyTesting; // @synthesize allowSurveyTesting=_allowSurveyTesting;
@property(readonly, nonatomic) NSString *meetOptOutTriggerID; // @synthesize meetOptOutTriggerID=_meetOptOutTriggerID;
@property(readonly, nonatomic) NSString *chatOptOutTriggerID; // @synthesize chatOptOutTriggerID=_chatOptOutTriggerID;
- (id)initWithChatOptOutTriggerID:(id)arg1 meetOptOutTriggerID:(id)arg2 allowSurveyTesting:(_Bool)arg3;

@end
