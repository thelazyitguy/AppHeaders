//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVPlayer, AVPlayerItem, AVURLAsset, MLFormat, NSDate, NSError, NSURL, YTIIosAvPlayerConfig, YTIIosAvPlayerHotConfig;
@protocol AVAssetResourceLoaderDelegate, HAMClock, MLAVAssetPlayerDelegate, MLFairPlayContentKeySession, MLPlayerConfig, NSObject;

@interface MLAVAssetPlayer : NSObject
{
    AVURLAsset *_asset;
    NSURL *_assetURL;
    id <HAMClock> _clock;
    id <NSObject> _timeObserver;
    CDStruct_1b6d18a9 _lastReportedPlaybackTime;
    unsigned long long _HLSErrorCount;
    NSDate *_HLSErrorObserverStartDate;
    _Bool _seekWillRetry;
    double _savedSeekTime;
    NSDate *_savedSeekDate;
    double _savedSeekToleranceBefore;
    double _savedSeekToleranceAfter;
    CDUnknownBlockType _savedSeekCompletionHandler;
    id <MLPlayerConfig> _config;
    YTIIosAvPlayerConfig *_AVPlayerConfig;
    YTIIosAvPlayerHotConfig *_AVPlayerHotConfig;
    double _externalPlaybackBecameActiveWhilePlayingTime;
    id <MLFairPlayContentKeySession> _keySession;
    struct TimeMapper _productionTimeConverter;
    _Bool _externalPlaybackActive;
    _Bool _observeSeekableTimeRange;
    float _rate;
    double _preferredForwardBufferDuration;
    long long _preferredPeakBitRate;
    MLFormat *_format;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    NSError *_error;
    long long _state;
    id <MLAVAssetPlayerDelegate> _delegate;
    id <AVAssetResourceLoaderDelegate> _resourceLoaderDelegate;
    double _bufferedTime;
    double _duration;
    id _HLSErrorObserver;
    unsigned long long _HLSErrorObserverLogIndex;
    double _initialMediaTime;
    unsigned long long _pendingSeeks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long pendingSeeks; // @synthesize pendingSeeks=_pendingSeeks;
@property(nonatomic) double initialMediaTime; // @synthesize initialMediaTime=_initialMediaTime;
@property(nonatomic) unsigned long long HLSErrorObserverLogIndex; // @synthesize HLSErrorObserverLogIndex=_HLSErrorObserverLogIndex;
@property(retain, nonatomic) id HLSErrorObserver; // @synthesize HLSErrorObserver=_HLSErrorObserver;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double bufferedTime; // @synthesize bufferedTime=_bufferedTime;
@property(nonatomic) __weak id <AVAssetResourceLoaderDelegate> resourceLoaderDelegate; // @synthesize resourceLoaderDelegate=_resourceLoaderDelegate;
@property(nonatomic) __weak id <MLAVAssetPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool observeSeekableTimeRange; // @synthesize observeSeekableTimeRange=_observeSeekableTimeRange;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(readonly, nonatomic) _Bool externalPlaybackActive; // @synthesize externalPlaybackActive=_externalPlaybackActive;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) MLFormat *format; // @synthesize format=_format;
@property(nonatomic) long long preferredPeakBitRate; // @synthesize preferredPeakBitRate=_preferredPeakBitRate;
@property(nonatomic) double preferredForwardBufferDuration; // @synthesize preferredForwardBufferDuration=_preferredForwardBufferDuration;
- (void)setPlayerItem:(id)arg1;
- (void)nativeSeekToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isTerminated;
- (_Bool)timeIsNearMediaEndTime:(double)arg1;
- (void)currentTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)createTimeObserver;
- (id)captionsMediaSelectionGroup;
- (void)checkForHLSErrors;
- (void)removePlayerItemErrorLogObserver;
- (void)addPlayerItemErrorLogObserver;
- (void)setState:(long long)arg1;
- (void)failWithError:(id)arg1;
- (_Bool)isPlaybackLikelyToKeepUp;
- (_Bool)isPlaybackBufferNearEmpty;
- (_Bool)isPlaybackAlmostFinished;
- (id)debugLogs;
- (void)playerItemSeekableTimeRangesDidChange:(id)arg1;
- (void)playerItemLoadedTimeRangesDidChange:(id)arg1;
- (void)playerItemPlaybackLikelyToKeepUpStatusDidChange:(id)arg1;
- (void)playerItemDurationDidChange:(id)arg1;
- (void)playerExternalPlaybackActiveDidChange:(id)arg1;
- (void)playerRateDidChange:(id)arg1;
- (void)playerItemStatusDidChange:(id)arg1;
- (void)playbackDidFailToPlayToEndTime:(id)arg1;
- (void)playbackDidStall:(id)arg1;
- (void)playbackDidReachEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removePlayerObservers;
- (void)addPlayerObservers;
- (void)setCurrentKeySession:(id)arg1;
- (void)selectAudibleMediaWithTitle:(id)arg1;
- (void)setPlayerCaptionsTextStyleRule:(id)arg1;
- (void)setCaptionsMediaSelectionOption:(id)arg1;
- (void)loadCaptionsOptionsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) float volume;
- (void)seekToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)pause;
- (void)play;
- (void)bufferThenPlay;
@property(readonly, nonatomic) double maximumSeekableTime;
@property(readonly, nonatomic) NSDate *currentDate;
@property(readonly, nonatomic) double currentTime;
- (void)terminate;
- (void)load;
- (void)dealloc;
- (id)initWithAssetURL:(id)arg1 format:(id)arg2 player:(id)arg3 config:(id)arg4 externalPlaybackActive:(_Bool)arg5;

@end

