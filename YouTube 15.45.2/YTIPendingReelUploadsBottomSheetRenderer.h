//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIFormattedString, YTIRenderer;

@interface YTIPendingReelUploadsBottomSheetRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *creationRenderer; // @dynamic creationRenderer;
@property(nonatomic) _Bool hasCreationRenderer; // @dynamic hasCreationRenderer;
@property(nonatomic) _Bool hasReelAvatar; // @dynamic hasReelAvatar;
@property(nonatomic) _Bool hasReelAvatarLabel; // @dynamic hasReelAvatarLabel;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *reelAvatar; // @dynamic reelAvatar;
@property(retain, nonatomic) YTIFormattedString *reelAvatarLabel; // @dynamic reelAvatarLabel;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
