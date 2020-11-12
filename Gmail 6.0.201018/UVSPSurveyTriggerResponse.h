//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSMutableArray, NSString, UVSPPayload, UVSPSession;

@interface UVSPSurveyTriggerResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *errorArray; // @dynamic errorArray;
@property(readonly, nonatomic) unsigned long long errorArray_Count; // @dynamic errorArray_Count;
@property(nonatomic) _Bool hasSession; // @dynamic hasSession;
@property(nonatomic) _Bool hasSurveyPayload; // @dynamic hasSurveyPayload;
@property(copy, nonatomic) NSString *noAvailableSurveyReason; // @dynamic noAvailableSurveyReason;
@property(retain, nonatomic) UVSPSession *session; // @dynamic session;
@property(copy, nonatomic) NSString *surveyId; // @dynamic surveyId;
@property(retain, nonatomic) UVSPPayload *surveyPayload; // @dynamic surveyPayload;

@end
