//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTReachabilityNetworkPropertiesObserver-Protocol.h>
#import <Module_Framework/YTReachabilityObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoAccumulatedMediaTimeObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoAudioFormatSelectionObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoCurrentTimeObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoMediaStateObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoPlaybackRateObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoVideoFormatSelectionObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoVolumeObserver-Protocol.h>
#import <Module_Framework/YTVSSController-Protocol.h>

@class GIMMe, NSString, YTBasePingController, YTDeviceClassificationURLDecorator, YTHotConfig, YTIPlaybackTracking, YTPlayerStatus, YTVSSControllerState;
@protocol HAMClock, YTAudioSession, YTIdentityProvider, YTInnerTubeConfig, YTLastActionProvider, YTPingControllerConfig, YTReachabilityController, YTSingleVideoObservable;

@interface YTVSS2PlaybackPingController : NSObject <YTReachabilityNetworkPropertiesObserver, YTReachabilityObserver, YTSingleVideoAccumulatedMediaTimeObserver, YTSingleVideoCurrentTimeObserver, YTSingleVideoVideoFormatSelectionObserver, YTSingleVideoAudioFormatSelectionObserver, YTSingleVideoMediaStateObserver, YTSingleVideoPlaybackRateObserver, YTSingleVideoVolumeObserver, YTVSSController>
{
    YTBasePingController *_pingController;
    YTIPlaybackTracking *_playbackTracking;
    id <YTReachabilityController> _reachabilityController;
    id <YTLastActionProvider> _lastActionProvider;
    id <YTIdentityProvider> _identityProvider;
    id <YTPingControllerConfig> _config;
    YTDeviceClassificationURLDecorator *_deviceClassificationURLDecorator;
    id <YTAudioSession> _audioSession;
    id <YTInnerTubeConfig> _innerTubeConfig;
    double _playbackDelay;
    YTVSSControllerState *_state;
    YTPlayerStatus *_playerStatus;
    int _connectionType;
    float _playbackRate;
    _Bool _muted;
    float _mediaPlayerVolume;
    id <HAMClock> _clock;
    YTHotConfig *_hotConfig;
    id <YTSingleVideoObservable> _singleVideoObservable;
    _Bool _doubleLogging;
    long long _lifecycleState;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) long long lifecycleState; // @synthesize lifecycleState=_lifecycleState;
@property(nonatomic) _Bool doubleLogging; // @synthesize doubleLogging=_doubleLogging;
- (id)currentCaptionTrackVSSID;
- (id)currentAudioTrackID;
- (void)startObservingVideoObservable;
- (void)updateLiveIngestionOffsetUsingMediaTime:(id)arg1;
- (void)setCommonVSSParametersToComponents:(id)arg1;
- (_Bool)hasRecentWatchtimeActivity:(_Bool)arg1;
- (void)setPlaybackParametersToComponents:(id)arg1;
- (void)performSignedHTTPRequestWithComponents:(id)arg1;
- (void)reportVSSDelayedPlayback;
- (void)reportVSSPlayback;
- (int)currentRealOutputVolume;
- (double)wallTime;
- (void)reachabilityDidChange;
- (void)reachabilityNetworkPropertiesDidChange:(id)arg1;
- (void)playerStatusDidChange:(id)arg1;
- (void)videoDidProgressAtTime:(id)arg1;
- (void)videoDidFinishAtTime:(id)arg1;
- (void)videoDidBufferAtTime:(id)arg1;
- (void)videoDidPauseOrSeekAtTime:(id)arg1;
- (void)singleVideo:(id)arg1 accumulatedMediaTimeDidChange:(double)arg2;
- (void)videoDidPlayAtTime:(id)arg1;
- (void)singleVideo:(id)arg1 volumeDidChange:(float)arg2;
- (void)singleVideo:(id)arg1 playbackRateDidChange:(float)arg2;
- (void)singleVideo:(id)arg1 didSelectAudioFormat:(id)arg2;
- (void)singleVideo:(id)arg1 didSelectVideoFormat:(id)arg2;
- (void)singleVideo:(id)arg1 currentVideoTimeDidChange:(id)arg2;
- (void)singleVideo:(id)arg1 mediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)flush;
- (void)shutDown;
- (void)suspend;
- (id)stateCopy;
- (void)activateWithPlaybackData:(id)arg1 singleVideoObservable:(id)arg2 playerStatus:(id)arg3 playlistID:(id)arg4 autoplay:(_Bool)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

