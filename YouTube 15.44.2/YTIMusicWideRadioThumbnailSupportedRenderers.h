//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIAnimatedThumbnailRenderer, YTISimpleVideoThumbnailRenderer, YTIThumbnailSequenceRenderer;

@interface YTIMusicWideRadioThumbnailSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAnimatedThumbnailRenderer *animatedThumbnailRenderer; // @dynamic animatedThumbnailRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTISimpleVideoThumbnailRenderer *simpleVideoThumbnailRenderer; // @dynamic simpleVideoThumbnailRenderer;
@property(retain, nonatomic) YTIThumbnailSequenceRenderer *thumbnailSequenceRenderer; // @dynamic thumbnailSequenceRenderer;

@end

