//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString, UIViewController, YTIForceAdParameters, YTPlaybackTimeline, YTPlayerResponse;
@protocol MLCuepointObserver, YTAdVideoPlayerOverlayProtocol, YTInstreamAd, YTPlayerOverlayFactory, YTSingleVideoObservable;

@protocol YTAdsPlaybackCoordinator <NSObject>
@property(readonly, nonatomic) id <MLCuepointObserver> adsCuepointObserver;
- (NSDictionary *)debugParameters;
- (void)externalPlaybackActiveDidChange:(_Bool)arg1;
- (void)setPlayerViewLayout:(int)arg1;
- (YTIForceAdParameters *)instreamForcedAdParameters;
- (NSString *)lastAdVideoID;
- (double)lastAdTotalMediaTime;
- (id <YTInstreamAd>)currentAd;
- (void)reset;
- (void)doneWithCurrentAd;
- (void)willPlayNewVideoWithAutoplay:(_Bool)arg1;
- (void)didPressSkipAdWithTouchPoint:(struct CGPoint)arg1;
- (void)didTapCompanionAd;
- (void)didFailToPlayAdWithPlaybackError:(NSError *)arg1;
- (void)didSkipOrCompleteAd:(id <YTInstreamAd>)arg1;
- (void)didStopPlayingAd;
- (void)setContentSingleVideo:(id <YTSingleVideoObservable>)arg1 playbackTimeline:(YTPlaybackTimeline *)arg2;
- (void)startPostrollAdBreak;
- (void)startPrerollAdBreak;
- (void)setOverlayFactory:(id <YTPlayerOverlayFactory>)arg1;
- (void)prepareOverlays;
- (void)startOverlay;
- (UIViewController<YTAdVideoPlayerOverlayProtocol> *)acquireOverlay;
- (void)playbackControllerWillActivatePrebufferingAdTransitionWithBufferedMediaTime:(double)arg1;
- (_Bool)supportsPlaybackForContentPlayerResponse:(YTPlayerResponse *)arg1;
@end
