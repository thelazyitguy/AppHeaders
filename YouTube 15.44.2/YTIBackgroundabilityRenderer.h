//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIBackgroundPlaybackControls, YTIBackgroundabilityRenderer_BackgroundabilityInfoSupportedRenderers;

@interface YTIBackgroundabilityRenderer : GPBMessage
{
}

+ (id)descriptor;
- (id)backgroundUpsell;

// Remaining properties
@property(retain, nonatomic) YTIBackgroundPlaybackControls *backgroundPlaybackControls; // @dynamic backgroundPlaybackControls;
@property(nonatomic) _Bool backgroundable; // @dynamic backgroundable;
@property(nonatomic) _Bool hasBackgroundPlaybackControls; // @dynamic hasBackgroundPlaybackControls;
@property(nonatomic) _Bool hasBackgroundable; // @dynamic hasBackgroundable;
@property(nonatomic) _Bool hasInfoRenderer; // @dynamic hasInfoRenderer;
@property(retain, nonatomic) YTIBackgroundabilityRenderer_BackgroundabilityInfoSupportedRenderers *infoRenderer; // @dynamic infoRenderer;

@end

