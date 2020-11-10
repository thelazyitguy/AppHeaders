//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIFullScreenOverlayRenderer, YTIInterstitialPromoRenderer, YTILiveChatErrorMessageRenderer, YTIMusicFullscreenPromoRenderer, YTIUnlimitedFamilyMessageInterstitialRenderer, YTIYPCPostIapRenderer, YTIYPCTransactionErrorMessageRenderer, YTIYPCUnpluggedWelcomeRenderer;

@interface YTIPostIapSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIYPCTransactionErrorMessageRenderer *errorMessageRenderer; // @dynamic errorMessageRenderer;
@property(retain, nonatomic) YTIFullScreenOverlayRenderer *fullScreenOverlayRenderer; // @dynamic fullScreenOverlayRenderer;
@property(retain, nonatomic) YTIInterstitialPromoRenderer *interstitialPromoRenderer; // @dynamic interstitialPromoRenderer;
@property(retain, nonatomic) YTILiveChatErrorMessageRenderer *liveChatErrorMessageRenderer; // @dynamic liveChatErrorMessageRenderer;
@property(retain, nonatomic) YTIMusicFullscreenPromoRenderer *musicFullscreenPromoRenderer; // @dynamic musicFullscreenPromoRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTIUnlimitedFamilyMessageInterstitialRenderer *unlimitedFamilyMessageInterstitialRenderer; // @dynamic unlimitedFamilyMessageInterstitialRenderer;
@property(retain, nonatomic) YTIYPCPostIapRenderer *ypcPostIapRenderer; // @dynamic ypcPostIapRenderer;
@property(retain, nonatomic) YTIYPCUnpluggedWelcomeRenderer *ypcUnpluggedWelcomeRenderer; // @dynamic ypcUnpluggedWelcomeRenderer;

@end

