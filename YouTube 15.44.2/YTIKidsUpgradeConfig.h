//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIRenderer;

@interface YTIKidsUpgradeConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *announcementRenderer; // @dynamic announcementRenderer;
@property(nonatomic) _Bool hasAnnouncementRenderer; // @dynamic hasAnnouncementRenderer;
@property(nonatomic) _Bool hasPromptHoldoffSeconds; // @dynamic hasPromptHoldoffSeconds;
@property(nonatomic) long long promptHoldoffSeconds; // @dynamic promptHoldoffSeconds;

@end

