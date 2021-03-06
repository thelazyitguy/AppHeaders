//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UVSSurveyAPI-Protocol.h"

@class NSString;

@interface UVSSurveyAPIImpl : NSObject <UVSSurveyAPI>
{
}

+ (_Bool)isValidAuthParams:(id)arg1;
+ (id)sharedInstance;
- (void)notifyListener:(id)arg1 onPresentSurveyError:(id)arg2 surveyData:(id)arg3;
- (void)clearCachedData;
- (void)syncWithUserVoiceWithParams:(id)arg1;
- (void)dismissSurvey:(id)arg1;
- (void)presentSurveyWithParams:(id)arg1 listener:(id)arg2;
- (void)requestSurveyWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

