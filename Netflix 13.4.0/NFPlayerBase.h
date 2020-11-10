//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NFPlayerBoundaryObserver-Protocol.h>
#import <Nbp/NFPlayerInternal-Protocol.h>
#import <Nbp/NfPlaybackDelegate-Protocol.h>

@class AVPlayer, AVPlayerItem, AVTextStyleRule, NSMutableArray, NSMutableDictionary, NSString, TimePitchAlgorithmManager;
@protocol NFPlayerDelegate, NFPlayerFactory, NFPlayerViewProvider, NfPlaybackLoggingController, NfSubtitleAudioController;

@interface NFPlayerBase : NSObject <NFPlayerBoundaryObserver, NFPlayerInternal, NfPlaybackDelegate>
{
    _Bool _doNotShareBoundaryRegistrations;
    _Bool _startPlaybackCalled;
    _Bool _closePlaybackCalled;
    _Bool _presentationPending;
    _Bool _isImageBasedSubtitleStall;
    _Bool _shouldPlayWhenImageBasedSubtitlesRecoverFromStall;
    _Bool _shouldSnapRate;
    _Bool _shouldFixRate;
    _Bool _playgraphPlayerSupportsRecreateAVObjects;
    _Bool _playgraphPlayerDisableRangeObservationInBackground;
    _Bool _pipActive;
    float _persistentRate;
    double _preferredVideoNominalBps;
    AVPlayer *_avPlayer;
    id <NFPlayerFactory> _playerFactory;
    id <NFPlayerDelegate> _delegate;
    id <NFPlayerViewProvider> _presentingViewProvider;
    NSMutableArray *_boundaryObserverRegistrations;
    NSString *_uuid;
    AVTextStyleRule *_percentSubtitleFontSizeRule;
    AVTextStyleRule *_percentSubtitlePositionRule;
    NSMutableDictionary *_observableRanges;
    TimePitchAlgorithmManager *_timePitchManager;
    NSString *_uniqueRequestId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *uniqueRequestId; // @synthesize uniqueRequestId=_uniqueRequestId;
@property(nonatomic) _Bool pipActive; // @synthesize pipActive=_pipActive;
@property(nonatomic) _Bool playgraphPlayerDisableRangeObservationInBackground; // @synthesize playgraphPlayerDisableRangeObservationInBackground=_playgraphPlayerDisableRangeObservationInBackground;
@property(nonatomic) _Bool playgraphPlayerSupportsRecreateAVObjects; // @synthesize playgraphPlayerSupportsRecreateAVObjects=_playgraphPlayerSupportsRecreateAVObjects;
@property(retain, nonatomic) TimePitchAlgorithmManager *timePitchManager; // @synthesize timePitchManager=_timePitchManager;
@property(nonatomic) _Bool shouldFixRate; // @synthesize shouldFixRate=_shouldFixRate;
@property(nonatomic) _Bool shouldSnapRate; // @synthesize shouldSnapRate=_shouldSnapRate;
@property(nonatomic) float persistentRate; // @synthesize persistentRate=_persistentRate;
@property(nonatomic) _Bool shouldPlayWhenImageBasedSubtitlesRecoverFromStall; // @synthesize shouldPlayWhenImageBasedSubtitlesRecoverFromStall=_shouldPlayWhenImageBasedSubtitlesRecoverFromStall;
@property(nonatomic) _Bool isImageBasedSubtitleStall; // @synthesize isImageBasedSubtitleStall=_isImageBasedSubtitleStall;
@property(retain, nonatomic) NSMutableDictionary *observableRanges; // @synthesize observableRanges=_observableRanges;
@property(retain, nonatomic) AVTextStyleRule *percentSubtitlePositionRule; // @synthesize percentSubtitlePositionRule=_percentSubtitlePositionRule;
@property(retain, nonatomic) AVTextStyleRule *percentSubtitleFontSizeRule; // @synthesize percentSubtitleFontSizeRule=_percentSubtitleFontSizeRule;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSMutableArray *boundaryObserverRegistrations; // @synthesize boundaryObserverRegistrations=_boundaryObserverRegistrations;
@property(nonatomic) __weak id <NFPlayerViewProvider> presentingViewProvider; // @synthesize presentingViewProvider=_presentingViewProvider;
@property(nonatomic) _Bool presentationPending; // @synthesize presentationPending=_presentationPending;
@property(nonatomic) __weak id <NFPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <NFPlayerFactory> playerFactory; // @synthesize playerFactory=_playerFactory;
@property(nonatomic) _Bool closePlaybackCalled; // @synthesize closePlaybackCalled=_closePlaybackCalled;
@property(nonatomic) _Bool startPlaybackCalled; // @synthesize startPlaybackCalled=_startPlaybackCalled;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property double preferredVideoNominalBps; // @synthesize preferredVideoNominalBps=_preferredVideoNominalBps;
@property(nonatomic) _Bool doNotShareBoundaryRegistrations; // @synthesize doNotShareBoundaryRegistrations=_doNotShareBoundaryRegistrations;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)stopObservingBackgroundState;
- (void)startObservingBackgroundState;
- (void)pipDidStop;
- (void)pipDidStart;
- (void)updateAuxiliaryLogInfo:(id)arg1;
@property(readonly, nonatomic) NSString *xid;
@property(readonly, nonatomic) NSString *playbackId;
@property(readonly, nonatomic) NSString *movieId;
@property(readonly, nonatomic) double minimalVideoFps;
@property(readonly, nonatomic) id <NfSubtitleAudioController> subtitleAudioController;
@property(readonly, nonatomic) id <NfPlaybackLoggingController> loggingController;
@property(readonly, nonatomic) _Bool allowsExternalPlayback;
- (void)player:(id)arg1 didExitRange:(id)arg2 withContext:(id)arg3;
- (void)player:(id)arg1 didEnterRange:(id)arg2 withContext:(id)arg3;
- (void)player:(id)arg1 didReachBoundary:(double)arg2 withContext:(id)arg3;
- (void)removeRangeObserver:(id)arg1 forRange:(id)arg2;
- (void)addRangeObserver:(id)arg1 forRange:(id)arg2 withContext:(id)arg3;
- (void)resumeObservationForAllRanges;
- (void)suspendObservationForAllRanges;
- (void)resumeObservationForRange:(id)arg1;
- (void)suspendObservationForRange:(id)arg1;
- (void)undefineTimeRangeNamed:(id)arg1;
- (void)defineTimeRangeNamed:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3;
- (void)notifyBoundaryObserver:(id)arg1;
- (void)notifyBoundaryObservers;
- (id)lookupRegistrationFor:(id)arg1 atTime:(double)arg2 withContext:(id)arg3;
- (void)adjustPlaybackStreamLimits;
- (void)removeBoundaryObserver:(id)arg1;
- (void)removeBoundaryObserver:(id)arg1 atTime:(double)arg2;
- (id)addBoundaryObserver:(id)arg1 atTime:(double)arg2 withContext:(id)arg3;
- (_Bool)canAddBoundaryObservers;
@property(readonly, nonatomic) AVPlayerItem *playerItem;
- (_Bool)shouldExpectPresentationAfterPlaybackStarts;
- (void)nflxPlaybackDidRecreateAVPlayer:(id)arg1 item:(id)arg2;
- (void)nflxPlaybackWillRecreateAVObjects;
- (_Bool)supportsRecreateAVObjects;
- (void)notifyDelegateImageBasedSubtitlesRecoveredFromStall;
- (void)nflxImageBasedSubtitlesRecoveredFromStall;
- (void)notifyDelegateImageBasedSubtitlesStalled;
- (void)nflxImageBasedSubtitlesStalled;
- (id)nflxAVPlayerForItem:(id)arg1;
- (void)nflxMovieOpened:(id)arg1 withChoiceMap:(id)arg2 withExpiration:(id)arg3 andError:(id)arg4;
- (void)nflxSelectedSubtitleOptionChanged:(id)arg1 forAvailableSubtitleOptions:(id)arg2;
- (void)nflxSelectedAudioOptionChanged:(id)arg1;
- (_Bool)nflxHandlesAudioSubtitleOptions;
- (void)nflxStreamSelectedMediaType:(id)arg1 downloadableId:(id)arg2;
- (void)nflxMovieReadyToPlay:(id)arg1;
- (void)nflxMovieReadyToPlay;
- (void)nflxMoviePlaybackBegan;
- (void)nflxPlaybackLikelyToKeepupChanged:(_Bool)arg1;
- (void)nflxPlayerEffectiveRateChangedFrom:(float)arg1 to:(float)arg2;
- (void)nflxPlayerRateChangedFrom:(float)arg1 to:(float)arg2;
- (void)nflxUpdatePlaybackPts:(double)arg1;
- (void)nflxPlayerEndCreditStarted:(double)arg1;
- (void)nflxPlayerItemEnded:(id)arg1;
- (void)nflxMovieOpened:(id)arg1 andError:(id)arg2;
- (void)handleNetworkInterfaceChange:(id)arg1;
- (void)removePlayerObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)externalPlaybackActiveChanged;
- (void)addPlayerObservers;
@property(readonly, nonatomic) _Bool currentItemPlaybackLikelyToKeepUp;
- (void)applySubtitleStyleRule:(id)arg1 forExistingStyleRule:(id)arg2;
- (id)aspectDetails;
- (void)percentSubtitleFontSize:(double)arg1;
- (void)positionSubtitleWithPercent:(double)arg1;
- (void)pause;
- (void)play;
@property(nonatomic) float volume;
@property(nonatomic) float rate;
@property(readonly, nonatomic) _Bool externalPlaybackActive;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
- (void)stop;
- (_Bool)seekFrom:(double)arg1 to:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginScrubbing;
- (void)closePlayback;
- (void)startPlaybackWithTrackingInfo:(id)arg1;
- (void)presentAVPlayer;
- (void)presentAVPlayerIfNeeded;
- (void)prepareForPresentation;
- (void)dealloc;
- (void)checkAllRangesForTime:(double)arg1;
@property(readonly, nonatomic) _Bool playbackWasStarted;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

