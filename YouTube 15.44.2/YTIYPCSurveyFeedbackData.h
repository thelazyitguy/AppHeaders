//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface YTIYPCSurveyFeedbackData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientScreenNonce; // @dynamic clientScreenNonce;
@property(retain, nonatomic) NSMutableArray *feedbackTokensArray; // @dynamic feedbackTokensArray;
@property(readonly, nonatomic) unsigned long long feedbackTokensArray_Count; // @dynamic feedbackTokensArray_Count;
@property(nonatomic) _Bool hasClientScreenNonce; // @dynamic hasClientScreenNonce;

@end

