//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GHMQuestion, GPBFieldMask;

@interface GHMUpdateQuestionRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasQuestion; // @dynamic hasQuestion;
@property(nonatomic) _Bool hasUpdateMask; // @dynamic hasUpdateMask;
@property(retain, nonatomic) GHMQuestion *question; // @dynamic question;
@property(retain, nonatomic) GPBFieldMask *updateMask; // @dynamic updateMask;

@end

