//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFormattedString;

@interface YTICreateCommentReplyEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *commentText; // @dynamic commentText;
@property(copy, nonatomic) NSString *createReplyParams; // @dynamic createReplyParams;
@property(nonatomic) _Bool fromCivilityReminderDialog; // @dynamic fromCivilityReminderDialog;
@property(nonatomic) _Bool hasCommentText; // @dynamic hasCommentText;
@property(nonatomic) _Bool hasCreateReplyParams; // @dynamic hasCreateReplyParams;
@property(nonatomic) _Bool hasFromCivilityReminderDialog; // @dynamic hasFromCivilityReminderDialog;
@property(nonatomic) _Bool hasMaxReplyLength; // @dynamic hasMaxReplyLength;
@property(nonatomic) _Bool hasPlaceholderText; // @dynamic hasPlaceholderText;
@property(nonatomic) int maxReplyLength; // @dynamic maxReplyLength;
@property(retain, nonatomic) YTIFormattedString *placeholderText; // @dynamic placeholderText;

@end

