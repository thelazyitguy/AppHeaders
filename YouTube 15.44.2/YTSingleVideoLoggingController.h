//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTSingleVideoCurrentTimeObserver-Protocol.h>

@class GIMMe, MLQOEError, MLQOEPingController, NSString, YTPlaybackData, YTPlaybackTrackingController, YTSingleVideoOfflineLoggingController, YTVSSControllerState;
@protocol YTSingleVideoLoggingControllerDelegate, YTSingleVideoObservable, YTVSSController;

@interface YTSingleVideoLoggingController : NSObject <YTSingleVideoCurrentTimeObserver>
{
    long long _state;
    id <YTSingleVideoLoggingControllerDelegate> _playbackLoggingDelegate;
    id <YTSingleVideoObservable> _singleVideoObservable;
    YTPlaybackData *_playbackData;
    MLQOEPingController *_QOEController;
    id <YTVSSController> _VSSController;
    YTPlaybackTrackingController *_playbackTrackingController;
    YTSingleVideoOfflineLoggingController *_offlineSingleVideoLoggingController;
    YTPlaybackTrackingController *_suspendedPlaybackTrackingController;
    _Bool _playerExternalPlayback;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)playerResponse;
- (void)shutDownPlaybackTrackingController;
- (void)suspendPlaybackTrackingController;
- (void)activatePlaybackTrackingControllerWithPlaybackTrackingDelegate:(id)arg1;
- (void)shutDownVSSController;
- (void)suspendVSSController;
- (void)activateVSSControllerWithPlayerStatus:(id)arg1 playlistID:(id)arg2 autoplay:(_Bool)arg3;
- (void)shutDownQOEController;
- (void)singleVideo:(id)arg1 currentVideoTimeDidChange:(id)arg2;
- (void)setPlayerItem:(id)arg1;
- (void)appDidEnterBackgroundWithUnbackgroundableVideo;
- (void)appDidEnterBackgroundAndWillNotBeSuspended;
- (void)appWillBeSuspended;
- (void)recordClientIssueFeedbackEvent;
- (void)recordUserIntentToPlayWithTime:(double)arg1;
- (void)recordSpeedyGAlert;
- (void)recordNonMediaPlaybackError:(id)arg1;
- (void)playerStatusDidChange:(id)arg1;
- (void)recordAdPlaybackDidStartWithCPN:(id)arg1 adFormat:(id)arg2 adBreakType:(long long)arg3;
- (void)shutDown;
- (void)suspendPlaybackLogging;
- (void)activatePlaybackLoggingWithPlayerStatus:(id)arg1 playlistID:(id)arg2 autoplay:(_Bool)arg3 playbackLoggingDelegate:(id)arg4;
@property(readonly, nonatomic) YTVSSControllerState *VSSControllerStateCopy;
@property(readonly, nonatomic) MLQOEError *fatalError;
- (id)initWithPlayerItem:(id)arg1 playbackData:(id)arg2 singleVideoObservable:(id)arg3 playerVisibility:(int)arg4 isPrefetch:(_Bool)arg5 isPrebuffer:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

