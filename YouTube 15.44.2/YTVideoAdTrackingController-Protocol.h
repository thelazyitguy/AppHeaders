//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSError;
@protocol YTAdsPlaybackCoordinatorDelegate;

@protocol YTVideoAdTrackingController <NSObject>
@property(nonatomic) __weak id <YTAdsPlaybackCoordinatorDelegate> delegate;
- (void)handleSurveyVideoDimiss;
- (void)handleAdBreakEnd;
- (void)handleAdBreakStart;
- (void)handleUnplayableAd;
- (void)handleAdSlotComplete;
- (void)handleAdEnterMiniState;
- (void)handleAdEnterNormalState;
- (void)handleAdExitFullscreen;
- (void)handleAdEnterFullscreen;
- (void)handleAdPlaybackFailWithError:(NSError *)arg1;
- (void)handleAdRequestFailWithError:(NSError *)arg1;
- (void)handleAdNotFoundForAdBreak;
- (void)handleAdTapCompanionAd;
- (void)handleAdTapChannel;
- (void)handleAdTapthroughWithTouchPoint:(struct CGPoint)arg1;
- (void)handleAdTapVideoTitleWithTouchPoint:(struct CGPoint)arg1;
- (void)handleAdSkipWithTouchPoint:(struct CGPoint)arg1;
- (void)handleAdShowSkip;
- (void)handleAdAbandon;
- (void)handleAdClose;
- (void)handleAdVideoComplete;
- (void)handleAdPlay;
- (void)handleAdPause;
- (void)handleAdProgressWithMediaTime:(double)arg1;
- (void)handleAdImpression;
- (void)setTotalTime:(double)arg1;
@end

