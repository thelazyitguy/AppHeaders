//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTICommentBadgeColorSupportedDatas, YTIFormattedString, YTIIcon;

@interface YTIPinnedCommentBadgeRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommentBadgeColorSupportedDatas *color; // @dynamic color;
@property(nonatomic) _Bool hasColor; // @dynamic hasColor;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;

@end

