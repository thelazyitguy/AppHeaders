//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTINavigateToArForward, YTINavigateToCaptureFallback, YTINavigateToFallbackCarousel, YTINavigateToLiveCamera, YTIResetCaptureState, YTISetActiveItem, YTIWebConfig, YTIWebContext;

@interface YTIMessageToWeb : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTISetActiveItem *activeItem; // @dynamic activeItem;
@property(readonly, nonatomic) int commandOneOfCase; // @dynamic commandOneOfCase;
@property(retain, nonatomic) YTIWebConfig *config; // @dynamic config;
@property(retain, nonatomic) YTIWebContext *context; // @dynamic context;
@property(retain, nonatomic) YTINavigateToArForward *navigateToArForward; // @dynamic navigateToArForward;
@property(retain, nonatomic) YTINavigateToCaptureFallback *navigateToCaptureFallback; // @dynamic navigateToCaptureFallback;
@property(retain, nonatomic) YTINavigateToFallbackCarousel *navigateToFallbackCarousel; // @dynamic navigateToFallbackCarousel;
@property(retain, nonatomic) YTINavigateToLiveCamera *navigateToLiveCamera; // @dynamic navigateToLiveCamera;
@property(retain, nonatomic) YTIResetCaptureState *resetCaptureState; // @dynamic resetCaptureState;

@end

