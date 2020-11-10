//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/HAMPlayerInternalDelegate-Protocol.h>
#import <Module_Framework/MLHAMPlayerItemPlayerBridge-Protocol.h>
#import <Module_Framework/MLHAMPlayerProtocol-Protocol.h>
#import <Module_Framework/MLHAMQueuePlayerSegmentListDelegate-Protocol.h>
#import <Module_Framework/MLQueuePlayer-Protocol.h>
#import <Module_Framework/MLViewportSizeObserver-Protocol.h>
#import <Module_Framework/YTAudioSessionInterruptionObserver-Protocol.h>
#import <Module_Framework/YTAudioSessionOutputDeviceUnavailableObserver-Protocol.h>
#import <Module_Framework/YTAudioSessionRouteChangeObserver-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class GIMMe, HAMEventCenter, HAMPlayerContext, HAMPlayerInternal, HAMQueueingRootSampleBufferSource, MLAudioSession, MLFormat, MLHAMPlayerItemSegment, MLHAMQueuePlayerSegmentList, MLPIPController, MLPlayerEventCenter, MLPlayerStickySettings, MLSegmentTimeline, MLVideo, MLVideoDecoderFactory, MLViewportSize, NSArray, NSData, NSDictionary, NSError, NSString, UIView, YTIHamplayerHotConfig, YTSystemNotifications;
@protocol HAMAudioTrackRenderer, HAMClock, HAMFrameSourceDelegate, HAMVideoTrackRenderer, MLAudioFormatConstraint, MLCaptionDisplayController, MLCaptionTrack, MLCuepointCollector, MLHAMPlayerViewProtocol, MLPlayerCaptionDelegate, MLPlayerConfig, MLPlayerDelegate, MLPlayerItemInternal, MLQueuePlayerDelegate, MLQueuePlayerViewProvider, MLTextTrackRenderer, MLVideoFormatConstraint, MLVideoSplicer, MLViewportSizeProvider, OS_dispatch_queue;

@interface MLHAMQueuePlayer : NSObject <HAMPlayerInternalDelegate, MLHAMQueuePlayerSegmentListDelegate, MLViewportSizeObserver, YTAudioSessionInterruptionObserver, YTAudioSessionOutputDeviceUnavailableObserver, YTAudioSessionRouteChangeObserver, YTSystemNotificationsObserver, MLHAMPlayerItemPlayerBridge, MLHAMPlayerProtocol, MLQueuePlayer>
{
    MLAudioSession *_audioSession;
    id <HAMFrameSourceDelegate> _frameSourceDelegate;
    NSObject<OS_dispatch_queue> *_playerQueue;
    HAMEventCenter *_hamEventCenter;
    YTIHamplayerHotConfig *_hamplayerHotConfig;
    YTSystemNotifications *_systemNotifications;
    id <HAMClock> _clock;
    MLPlayerStickySettings *_stickySettings;
    id <MLQueuePlayerViewProvider> _playerViewProvider;
    HAMPlayerInternal *_player;
    MLVideoDecoderFactory *_videoDecoderFactory;
    id <HAMVideoTrackRenderer> _videoTrackRenderer;
    id <HAMAudioTrackRenderer> _audioTrackRenderer;
    id <MLTextTrackRenderer> _textTrackRenderer;
    _Bool _foregroundAudioOnly;
    long long _pendingSeeks;
    double _initialSeekTime;
    double _initialSeekToleranceBefore;
    double _initialSeekToleranceAfter;
    _Bool _isInBackground;
    NSError *_playerError;
    long long _playerStatus;
    NSArray *_startedTrackRenderers;
    int _activeTrackRendererType;
    int _startedTrackRendererMediaContentType;
    _Bool _userRequestedPlay;
    double _lastReportedCurrentTime;
    CDStruct_d60ef703 _currentTime;
    _Bool _isAutoSeeking;
    HAMQueueingRootSampleBufferSource *_rootVideoSampleBufferSource;
    HAMQueueingRootSampleBufferSource *_rootAudioSampleBufferSource;
    HAMQueueingRootSampleBufferSource *_rootTextSampleBufferSource;
    MLHAMPlayerItemSegment *_currentSegment;
    long long _periodCount;
    MLHAMQueuePlayerSegmentList *_segmentList;
    float _preferredRate;
    id <MLQueuePlayerDelegate> _delegate;
    id <MLViewportSizeProvider> _viewportSizeProvider;
    CDStruct_343d2dac _playerConfiguration;
    _Bool _forceMute;
    MLPIPController *_pipController;
    _Bool _muted;
    _Bool _externalPlaybackFullscreen;
    _Bool _externalPlaybackAllowed;
    float _rate;
    float _volume;
    NSError *_error;
    MLPlayerEventCenter *_playerEventCenter;
    long long _state;
    HAMPlayerContext *_context;
    UIView<MLHAMPlayerViewProtocol> *_playerView;
    id <MLPlayerCaptionDelegate> _captionDelegate;
    GIMMe *_gimme;
    CDUnknownBlockType _playerInternalCreationBlock;
    CDUnknownBlockType _audioSampleBufferSourceCreationBlock;
    CDUnknownBlockType _videoSampleBufferSourceCreationBlock;
    CDUnknownBlockType _textSampleBufferSourceCreationBlock;
    CDUnknownBlockType _audioTrackRendererCreationBlock;
    CDUnknownBlockType _videoTrackRendererCreationBlock;
    CDUnknownBlockType _textTrackRendererCreationBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType textTrackRendererCreationBlock; // @synthesize textTrackRendererCreationBlock=_textTrackRendererCreationBlock;
@property(copy, nonatomic) CDUnknownBlockType videoTrackRendererCreationBlock; // @synthesize videoTrackRendererCreationBlock=_videoTrackRendererCreationBlock;
@property(copy, nonatomic) CDUnknownBlockType audioTrackRendererCreationBlock; // @synthesize audioTrackRendererCreationBlock=_audioTrackRendererCreationBlock;
@property(copy, nonatomic) CDUnknownBlockType textSampleBufferSourceCreationBlock; // @synthesize textSampleBufferSourceCreationBlock=_textSampleBufferSourceCreationBlock;
@property(copy, nonatomic) CDUnknownBlockType videoSampleBufferSourceCreationBlock; // @synthesize videoSampleBufferSourceCreationBlock=_videoSampleBufferSourceCreationBlock;
@property(copy, nonatomic) CDUnknownBlockType audioSampleBufferSourceCreationBlock; // @synthesize audioSampleBufferSourceCreationBlock=_audioSampleBufferSourceCreationBlock;
@property(copy, nonatomic) CDUnknownBlockType playerInternalCreationBlock; // @synthesize playerInternalCreationBlock=_playerInternalCreationBlock;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) _Bool externalPlaybackAllowed; // @synthesize externalPlaybackAllowed=_externalPlaybackAllowed;
@property(nonatomic) _Bool externalPlaybackFullscreen; // @synthesize externalPlaybackFullscreen=_externalPlaybackFullscreen;
@property(nonatomic) __weak id <MLPlayerCaptionDelegate> captionDelegate; // @synthesize captionDelegate=_captionDelegate;
@property(readonly, nonatomic) UIView<MLHAMPlayerViewProtocol> *playerView; // @synthesize playerView=_playerView;
@property(readonly, nonatomic) HAMPlayerContext *context; // @synthesize context=_context;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(readonly, nonatomic) MLPlayerEventCenter *playerEventCenter; // @synthesize playerEventCenter=_playerEventCenter;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) __weak id <HAMFrameSourceDelegate> frameSourceDelegate;
- (void)updateActiveTrackRenderers:(id)arg1;
- (id)trackRenderersToActive;
- (_Bool)internalSeekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 inSegment:(id)arg4 error:(id *)arg5;
- (void)removeSegmentInternal:(id)arg1 retryCount:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tryToResyncTracks;
- (id)liveHeadSegmentForItem:(id)arg1;
- (void)forceRemoveSegment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)itemForError:(id)arg1;
- (void)terminatePlayerWithError:(id)arg1;
- (void)maybeSwitchToAVPlayer;
- (void)internalSetRate;
- (void)failWithError:(id)arg1;
- (void)updateForegroundAudioOnlyPlaybackState;
- (void)setUpCaptionDisplayController;
- (void)setState:(long long)arg1;
- (void)updateActiveTrackRenderers;
- (void)internalSeekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)onNonFatalErrorEvent:(id)arg1;
- (void)onFormatSelectionEvent:(id)arg1;
- (void)registerWithEventCenter;
- (void)setupText;
- (void)setupVideo;
- (void)setupAudio;
- (void)updateVolume;
- (_Bool)hasPendingSeek;
- (_Bool)userRequestedPlay;
- (long long)currentPlayerState;
- (void)playerItemRequestSwitchToAVPlayer:(id)arg1;
- (void)playerItem:(id)arg1 didFailWithError:(id)arg2;
- (void)playerItem:(id)arg1 peggedToLiveDidChange:(_Bool)arg2;
- (void)playerItemRequestSeekingToEnd:(id)arg1 autoSeeking:(_Bool)arg2;
- (void)playerItem:(id)arg1 requestSeekingTo:(double)arg2 toleranceBefore:(double)arg3 toleranceAfter:(double)arg4;
- (void)playerItemVideoTrackDisabledDidChange:(id)arg1;
- (void)playerItemTextTrackDisabledDidChange:(id)arg1 forceDisable:(_Bool)arg2;
- (void)playerItemAudioTrackDidChange:(id)arg1;
- (int)startedTrackRendererMediaContentType;
- (void)screenCapturedStatusDidChange;
- (void)appDidBecomeActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)viewportSizeDidChange:(id)arg1;
- (void)outputRouteDidChange;
- (void)outputDeviceDidBecomeUnavailable;
- (void)didReceiveAudioSessionInterruptionWithType:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)requestSeekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 inSegment:(id)arg4 autoSeeking:(_Bool)arg5;
- (void)segmentListDidFailWithError:(id)arg1;
- (void)setCurrentSegment:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setStartedTrackRenderers:(id)arg1;
- (void)setSeekableTimeRange:(CDStruct_e83c9415)arg1;
- (void)setCurrentTime:(CDStruct_576a8307)arg1;
- (void)playerWillFailWithError:(id)arg1;
- (void)trackRenderer:(id)arg1 didFailWithError:(id)arg2;
- (void)playerDidTerminate;
@property(readonly, nonatomic) NSString *playerViewDebugType;
@property(readonly, nonatomic) id <MLPlayerItemInternal> currentPlayerItem;
@property(readonly, nonatomic) MLViewportSize *viewportSize;
- (void)setPlayerCaptionsTextStyleRule:(id)arg1;
- (void)enablePlayerCaptionsWithOption:(id)arg1;
- (void)disablePlayerCaptions;
- (void)setViewportSizeProvider:(id)arg1;
@property(readonly, nonatomic) id <MLVideoSplicer> videoSplicer;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekToTime:(double)arg1;
- (void)seekToProductionTime:(double)arg1;
- (void)seekToEnd;
- (void)replay;
- (void)playASAP;
- (void)play;
- (void)pause;
- (void)load;
- (void)terminate;
- (void)makeActivePlayer;
@property(readonly, nonatomic) int playerType;
@property(readonly, nonatomic) NSDictionary *debugParameters;
@property(readonly, nonatomic) NSData *debugLogs;
@property(readonly, nonatomic) _Bool externalPlaybackActive;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 inSegment:(id)arg4 segments:(id)arg5;
- (void)setSegments:(id)arg1;
- (void)clipSegment:(id)arg1 atTime:(double)arg2 replaceSubsequentSegmentsWith:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addSegments:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <MLPlayerDelegate> delegate;
- (_Bool)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 inSegment:(id)arg4 error:(id *)arg5;
- (void)clipSegment:(id)arg1 toStart:(double)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (id)segmentsForPlayerItem:(id)arg1;
- (id)allSegments;
- (id)currentSegment;
- (void)removeAllSegments;
- (void)removeSegment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addSegment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createSegmentWithPlayerItem:(id)arg1 error:(id *)arg2;
- (id)createSegmentWithPlayerItem:(id)arg1 startTime:(double)arg2 duration:(double)arg3 error:(id *)arg4;
- (id)createPlayerItem:(id)arg1 playerConfig:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) CDStruct_d60ef703 currentTime;
- (void)registerQOEController:(id)arg1;
- (void)setLiveCaptionsVerticalRatio:(double)arg1;
- (void)setActiveCaptionTrack:(id)arg1;
- (void)enableCaptionsIfAvailableWithUserAction:(_Bool)arg1;
@property(readonly, nonatomic) id <MLCuepointCollector> cuepointCollector;
@property(readonly, nonatomic) _Bool peggedToLive;
@property(readonly, nonatomic) MLFormat *selectedVideoFormat;
@property(readonly, nonatomic) MLFormat *selectedAudioFormat;
@property(readonly, nonatomic) NSArray *selectableVideoFormats;
@property(readonly, nonatomic) NSArray *selectableAudioFormats;
@property(readonly, nonatomic) long long itemState;
@property(retain, nonatomic) id <MLAudioFormatConstraint> audioFormatConstraint;
@property(retain, nonatomic) id <MLVideoFormatConstraint> videoFormatConstraint;
@property(readonly, nonatomic) MLSegmentTimeline *segmentTimeline;
@property(readonly, nonatomic) _Bool currentVideoIsLocal;
@property(readonly, nonatomic) id <MLPlayerConfig> config;
@property(readonly, nonatomic) MLVideo *video;
- (void)setPeakBitrateFraction:(float)arg1;
- (void)setPreferredMaxReadahead:(double)arg1;
@property(readonly, nonatomic) NSArray *availableCaptionTracks;
@property(readonly, nonatomic) id <MLCaptionTrack> activeCaptionTrack;
@property(readonly, nonatomic) double maximumSeekableTime;
@property(readonly, nonatomic) double minimumSeekableTime;
@property(readonly, nonatomic) double totalMediaTime;
@property(readonly, nonatomic) double bufferedMediaTime;
@property(readonly, nonatomic) id <MLCaptionDisplayController> captionDisplayController;
- (id)initWithStickySettings:(id)arg1 playerViewProvider:(id)arg2 playerConfiguration:(CDStruct_343d2dac)arg3;
- (id)initWithStickySettings:(id)arg1 playerViewProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

