//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVExternalVideoPlayer.h>

#import <T1Twitter/PTVBroadcastWatcherObserver-Protocol.h>
#import <T1Twitter/PTVGuestWatchingMainPlayer-Protocol.h>
#import <T1Twitter/T1BroadcastContainerViewDelegate-Protocol.h>
#import <T1Twitter/TAVPlaybackObserver-Protocol.h>

@class NSDate, NSString, NSURL, T1VideoBitRateManager, TAVPlaybackState, TAVPlayer, TAVScribeContext, TFNTwitterAccount, TFNTwitterLiveEvent, TFSTwitterBroadcast;
@protocol T1WatchBroadcastExternalVideoPlayerDelegate, TFNTwitterCardDataSource;

@interface T1WatchBroadcastExternalVideoPlayer : PTVExternalVideoPlayer <TAVPlaybackObserver, T1BroadcastContainerViewDelegate, PTVBroadcastWatcherObserver, PTVGuestWatchingMainPlayer>
{
    CDUnknownBlockType _seekFinishedBlock;
    NSDate *_dateLastPaused;
    NSDate *_dateWhenLastReceivedNTPTimestamp;
    TAVPlaybackState *_currentPlaybackState;
    NSString *_lifecycleToken;
    NSString *_chatToken;
    NSString *_chatPermissionType;
    NSURL *_shareURL;
    _Bool _muted;
    _Bool _shouldAutoplay;
    _Bool _displayedAsGuestView;
    TFSTwitterBroadcast *_broadcast;
    id <T1WatchBroadcastExternalVideoPlayerDelegate> _delegate;
    TAVScribeContext *_scribeContext;
    TFNTwitterAccount *_account;
    id <TFNTwitterCardDataSource> _cardDataSource;
    TFNTwitterLiveEvent *_liveEvent;
    id _idleTimerToken;
    double _lastReceivedPlayerNTPValue;
    double _ntpValueWhenSeekingStarted;
    TAVPlaybackState *_lastKnownPlaybackState;
    T1VideoBitRateManager *_videoBitrateManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) T1VideoBitRateManager *videoBitrateManager; // @synthesize videoBitrateManager=_videoBitrateManager;
@property(retain, nonatomic) TAVPlaybackState *lastKnownPlaybackState; // @synthesize lastKnownPlaybackState=_lastKnownPlaybackState;
@property(nonatomic) double ntpValueWhenSeekingStarted; // @synthesize ntpValueWhenSeekingStarted=_ntpValueWhenSeekingStarted;
@property(nonatomic) double lastReceivedPlayerNTPValue; // @synthesize lastReceivedPlayerNTPValue=_lastReceivedPlayerNTPValue;
@property(retain, nonatomic) id idleTimerToken; // @synthesize idleTimerToken=_idleTimerToken;
@property(retain, nonatomic) TFNTwitterLiveEvent *liveEvent; // @synthesize liveEvent=_liveEvent;
@property(retain, nonatomic) id <TFNTwitterCardDataSource> cardDataSource; // @synthesize cardDataSource=_cardDataSource;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic, getter=isDisplayedAsGuestView) _Bool displayedAsGuestView; // @synthesize displayedAsGuestView=_displayedAsGuestView;
@property(retain, nonatomic) TAVScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) __weak id <T1WatchBroadcastExternalVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(retain, nonatomic) TFSTwitterBroadcast *broadcast; // @synthesize broadcast=_broadcast;
- (id)tavPlaybackState;
- (id)minimumSafeRPO;
- (id)relativePresentationOffset;
- (void)setTargetRelativePresentationOffset:(id)arg1;
- (void)captureStillImageOfVideoPlayer:(CDUnknownBlockType)arg1;
- (_Bool)shouldCaptureStillImageOfVideoPlayer;
- (long long)_t1_outputViewVideoGravity;
- (void)_t1_updatePlayerViewConfiguration;
- (void)_t1_dispose;
- (unsigned long long)_t1_ptvVideoPlaybackStateForTAVPlaybackState:(id)arg1;
- (void)_t1_dismissButtonPressedOnAdPlayer:(id)arg1;
- (void)_t1_playlistItemDidChange:(id)arg1;
- (void)_t1_updateBroadcastContainerView;
- (id)_t1_watchBroadcastExternalVideoView;
- (id)_t1_broadcastContainerView;
- (void)_t1_videoBitrateManagerDidUpdatePreferredBitrate:(id)arg1;
@property(readonly, nonatomic) _Bool canAdvance;
- (void)broadcastContainerView:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)broadcastContainerView:(id)arg1 didSetPlayer:(id)arg2;
- (void)private_updateNTPTimeWithJSONMetadataTXXXFrameValue:(id)arg1;
- (void)player:(id)arg1 didOutputTXXXFrameWithDescription:(id)arg2 value:(id)arg3;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)seekToTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canSeekToTime;
- (double)currentPlaybackTime;
- (double)videoDuration;
- (id)dateWhenVideoWasLastPaused;
- (id)programDateTime;
- (id)dateWhenLastReceivedNTPTimestamp;
- (double)lastReceivedNTPTimestamp;
- (_Bool)hasNTPData;
- (_Bool)canProvideTimingDataForSyncingComments;
- (struct CGSize)currentVideoPlayerSize;
- (void)setContentAreaGuide:(id)arg1;
- (_Bool)shouldAutoPlayVideo;
- (void)disconnectVideo;
- (void)pauseVideo;
- (void)playVideo;
- (void)enableIdleTimer;
- (void)disableIdleTimer;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
@property(readonly, nonatomic) TAVPlayer *player;
- (void)viewDidLoad;
- (void)loadView;
- (void)broadcastController:(id)arg1 didUpdatePlaybackPointFrom:(id)arg2;
- (id)tfs_debugStrings;
- (void)dealloc;
- (id)playerViewConfiguration;
- (id)initWithBroadcast:(id)arg1 account:(id)arg2 cardDataSource:(id)arg3 scribeContext:(id)arg4 liveEvent:(id)arg5 shouldAutoplay:(_Bool)arg6 delegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

