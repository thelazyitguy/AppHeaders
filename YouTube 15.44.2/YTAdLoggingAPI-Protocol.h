//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, YTDiscoveryAdTrackingController;
@protocol YTInstreamAd, YTInstreamAdBreak, YTResponder, YTVideoAdTrackingController;

@protocol YTAdLoggingAPI <NSObject>
- (id <YTResponder>)CSILoggingResponder;
- (YTDiscoveryAdTrackingController *)discoveryAdTrackingControllerFromTrackingURLs:(NSArray *)arg1;
- (id <YTVideoAdTrackingController>)adTrackingControllerFromAd:(id <YTInstreamAd>)arg1 adBreak:(id <YTInstreamAdBreak>)arg2;
- (id <YTVideoAdTrackingController>)adBreakTrackingControllerFromAdBreak:(id <YTInstreamAdBreak>)arg1;
@end
