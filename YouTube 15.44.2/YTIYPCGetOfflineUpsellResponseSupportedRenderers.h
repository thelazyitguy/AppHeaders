//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIFullScreenOverlayRenderer, YTIOfflinePromoRenderer;

@interface YTIYPCGetOfflineUpsellResponseSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFullScreenOverlayRenderer *fullScreenOverlayRenderer; // @dynamic fullScreenOverlayRenderer;
@property(retain, nonatomic) YTIOfflinePromoRenderer *offlinePromoRenderer; // @dynamic offlinePromoRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;

@end

