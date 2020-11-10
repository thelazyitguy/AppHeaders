//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIButtonRenderer, YTIFlexibleBoxRenderer, YTIFlexibleTextRenderer, YTIFlexibleThumbnailRenderer, YTIThumbnailLandscapePortraitRenderer;

@interface YTIFlexibleScrollPromoContentSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonRenderer *buttonRenderer; // @dynamic buttonRenderer;
@property(retain, nonatomic) YTIFlexibleBoxRenderer *flexibleBoxRenderer; // @dynamic flexibleBoxRenderer;
@property(retain, nonatomic) YTIFlexibleTextRenderer *flexibleTextRenderer; // @dynamic flexibleTextRenderer;
@property(retain, nonatomic) YTIFlexibleThumbnailRenderer *flexibleThumbnailRenderer; // @dynamic flexibleThumbnailRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTIThumbnailLandscapePortraitRenderer *thumbnailLandscapePortraitRenderer; // @dynamic thumbnailLandscapePortraitRenderer;

@end

