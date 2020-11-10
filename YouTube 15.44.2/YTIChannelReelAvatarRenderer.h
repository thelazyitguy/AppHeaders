//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIAccessibilitySupportedDatas, YTICommand, YTIIcon, YTIRenderer, YTIThumbnailDetails;

@interface YTIChannelReelAvatarRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibilityForStatusEmpty; // @dynamic accessibilityForStatusEmpty;
@property(retain, nonatomic) YTIThumbnailDetails *avatar; // @dynamic avatar;
@property(retain, nonatomic) YTIIcon *channelBadgeIcon; // @dynamic channelBadgeIcon;
@property(retain, nonatomic) YTICommand *clickAction; // @dynamic clickAction;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasAccessibilityForStatusEmpty; // @dynamic hasAccessibilityForStatusEmpty;
@property(nonatomic) _Bool hasAvatar; // @dynamic hasAvatar;
@property(nonatomic) _Bool hasChannelBadgeIcon; // @dynamic hasChannelBadgeIcon;
@property(nonatomic) _Bool hasClickAction; // @dynamic hasClickAction;
@property(nonatomic) _Bool hasHintRenderer; // @dynamic hasHintRenderer;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *hintRenderer; // @dynamic hintRenderer;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

