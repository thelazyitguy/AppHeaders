//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFormattedString;

@interface YTIShowCommentRepliesEngagementPanelCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *commentFeedId; // @dynamic commentFeedId;
@property(retain, nonatomic) YTIFormattedString *contextualInfo; // @dynamic contextualInfo;
@property(nonatomic) _Bool hasCommentFeedId; // @dynamic hasCommentFeedId;
@property(nonatomic) _Bool hasContextualInfo; // @dynamic hasContextualInfo;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool hasShouldInvalidateCache; // @dynamic hasShouldInvalidateCache;
@property(nonatomic) _Bool hasSourcePanelIdentifier; // @dynamic hasSourcePanelIdentifier;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTypeId; // @dynamic hasTypeId;
@property(copy, nonatomic) NSString *params; // @dynamic params;
@property(nonatomic) _Bool shouldInvalidateCache; // @dynamic shouldInvalidateCache;
@property(copy, nonatomic) NSString *sourcePanelIdentifier; // @dynamic sourcePanelIdentifier;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(nonatomic) int typeId; // @dynamic typeId;

@end

