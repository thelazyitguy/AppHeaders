//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLCuepointObserver-Protocol.h>
#import <Module_Framework/YTAdsPlaybackCoordinator-Protocol.h>
#import <Module_Framework/YTAdsPlaybackProtocol-Protocol.h>
#import <Module_Framework/YTAdsSingleVideoObserverDelegate-Protocol.h>

@class GIMMe, NSString, YTAdsDriftLatencyState, YTAdsLatencyLoggerWrapper, YTDAIAdsCoordinator, YTGlobalConfig, YTInstreamAdSingleVideoObserver, YTInstreamContentSingleVideoObserver, YTPlayerCurrentAdsState, YTUserDefaults;
@protocol MLCuepointObserver, YTAdsPlaybackCoordinatorDelegate, YTResponder, YTSingleVideoObservable;

@interface YTExperimentalAdsPlaybackCoordinator : NSObject <MLCuepointObserver, YTAdsPlaybackCoordinator, YTAdsPlaybackProtocol, YTAdsSingleVideoObserverDelegate>
{
    unsigned long long _adRequestID;
    YTUserDefaults *_userDefaults;
    YTGlobalConfig *_globalConfig;
    _Bool _hasAdIntro;
    _Bool _cuepointsActivated;
    id <YTResponder> _parentResponder;
    id <YTSingleVideoObservable> _activeVideoPlayer;
    _Bool _shouldReportDriftLatency;
    double _lastProgressWallTime;
    double _lastProgressProductionTime;
    YTAdsLatencyLoggerWrapper *_adsLatencyLogger;
    YTAdsDriftLatencyState *_driftLatencyState;
    YTInstreamContentSingleVideoObserver *_contentVideoPlayerObserver;
    id <YTAdsPlaybackCoordinatorDelegate> _delegate;
    YTInstreamAdSingleVideoObserver *_adVideoPlayerObserver;
    GIMMe *_gimme;
    YTDAIAdsCoordinator *_DAIAdsCoordinator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTDAIAdsCoordinator *DAIAdsCoordinator; // @synthesize DAIAdsCoordinator=_DAIAdsCoordinator;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) YTInstreamAdSingleVideoObserver *adVideoPlayerObserver; // @synthesize adVideoPlayerObserver=_adVideoPlayerObserver;
@property(nonatomic) __weak id <YTAdsPlaybackCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)contentVideoPlayerObserver;
- (id)newActiveViewVideoMonitor;
- (id)newAdBreakTrackerWithAdBreak:(id)arg1;
- (id)currentAdRequestConfig;
- (double)currentSystemTime;
- (_Bool)isTransitionFromAdToContentWithVideoPlayer:(id)arg1;
- (_Bool)isTransitionFromAdToAdWithVideoPlayer:(id)arg1;
- (_Bool)isTransitionFromContentToAdWithVideoPlayer:(id)arg1;
- (int)getVideoStreamType;
- (double)timestampNow;
- (id)newAdToVideoLatencyLogger;
- (id)newAdToAdLatencyLogger;
- (id)newVideoToAdLatencyLogger;
- (void)handleTransitionToVideoPlayer:(id)arg1;
- (void)reportDriftLatency;
- (void)cuepointCollector:(id)arg1 hasCuepoints:(id)arg2 startTime:(double)arg3;
- (void)activateCuepointsFrom:(double)arg1;
- (id)instreamForcedAdParameters;
- (void)externalPlaybackActiveDidChange:(_Bool)arg1;
- (id)lastAdVideoID;
- (double)lastAdTotalMediaTime;
- (id)currentAd;
- (void)doneWithCurrentAdWithBreakType:(long long)arg1;
- (void)doneWithCurrentAd;
- (void)setPlayerViewLayout:(int)arg1;
- (id)debugParameters;
- (void)reset;
- (void)didPressSkipAdWithTouchPoint:(struct CGPoint)arg1;
- (void)willPlayNewVideoWithAutoplay:(_Bool)arg1;
- (void)didTapCompanionAd;
- (void)didFailToPlayAdWithPlaybackError:(id)arg1;
- (void)didSkipOrCompleteAd:(id)arg1;
- (void)didStopPlayingAd;
- (void)setContentSingleVideo:(id)arg1 playbackTimeline:(id)arg2;
- (void)startPostrollAdBreak;
- (void)startPrerollAdBreak;
- (id)coordinatorState;
- (void)setOverlayFactory:(id)arg1;
- (void)prepareOverlays;
- (void)startOverlay;
- (id)acquireOverlay;
- (void)playbackControllerWillActivatePrebufferingAdTransitionWithBufferedMediaTime:(double)arg1;
@property(readonly, nonatomic) id <MLCuepointObserver> adsCuepointObserver;
- (_Bool)supportsPlaybackForContentPlayerResponse:(id)arg1;
- (void)markLastFrameTimestamp;
- (void)setActiveSingleVideoObservable:(id)arg1;
- (void)singleVideoPlayerProgressWithMLTime:(id)arg1;
- (void)adPlaybackDidFailWithError:(id)arg1 withAdCPN:(id)arg2;
- (void)stopActiveViewReporterWithAdCPN:(id)arg1;
- (void)adVideoDidCompleteWithAdCPN:(id)arg1;
- (void)adDidPauseWithAdCPN:(id)arg1;
- (void)adDidPlayWithAdCPN:(id)arg1;
- (void)adDidProgressWithLocalTime:(double)arg1 withAdCPN:(id)arg2;
- (void)adDidProgressWithMLTime:(id)arg1 withAdCPN:(id)arg2;
- (void)removeAdStateWithAdCPN:(id)arg1;
- (void)clearCurrentAdStateWithAdCPN:(id)arg1;
- (void)restoreAdStateWithAdCPN:(id)arg1;
- (void)resetAdStates;
- (id)contentVideoThumbnails;
- (void)adSlotDidComplete;
- (void)adDidTapthroughWithTouchPoint:(struct CGPoint)arg1;
- (void)adDidSkipWithTouchPoint:(struct CGPoint)arg1;
- (void)adDidShowSkip;
@property(readonly, nonatomic) YTPlayerCurrentAdsState *lastAdsState;
@property(readonly, nonatomic) YTPlayerCurrentAdsState *currentAdsState;
- (id)contentVideoTitle;
- (id)newActiveViewVideoMonitorWithContentPlayerResponse:(id)arg1;
- (id)videoAdTrackingControllerWithAd:(id)arg1 adBreak:(id)arg2 activeViewVideoMonitor:(id)arg3;
- (id)getDriftLatencyState;
- (id)newAdBreakEventReporterWithAdState:(id)arg1;
- (id)newAdEventReporterWithAdState:(id)arg1;
- (void)updateAdStateMapWithAdState:(id)arg1;
- (id)initWithOfflineAdProvider:(id)arg1 offlineAdErrorProvider:(id)arg2 overlayFactory:(id)arg3 delegate:(id)arg4 parentResponder:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
