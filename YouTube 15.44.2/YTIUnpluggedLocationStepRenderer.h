//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIButtonSupportedRenderers, YTIFormattedString, YTIThumbnailDetails, YTIUnpluggedAnimationDetails;

@interface YTIUnpluggedLocationStepRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTIUnpluggedAnimationDetails *animation; // @dynamic animation;
@property(retain, nonatomic) YTIThumbnailDetails *bodyImage; // @dynamic bodyImage;
@property(retain, nonatomic) YTIFormattedString *bodyText; // @dynamic bodyText;
@property(retain, nonatomic) YTIButtonSupportedRenderers *dismissButton; // @dynamic dismissButton;
@property(nonatomic) _Bool fullscreen; // @dynamic fullscreen;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasAnimation; // @dynamic hasAnimation;
@property(nonatomic) _Bool hasBodyImage; // @dynamic hasBodyImage;
@property(nonatomic) _Bool hasBodyText; // @dynamic hasBodyText;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasFullscreen; // @dynamic hasFullscreen;
@property(nonatomic) _Bool hasLearnMoreButton; // @dynamic hasLearnMoreButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIButtonSupportedRenderers *learnMoreButton; // @dynamic learnMoreButton;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

