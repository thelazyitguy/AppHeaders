//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MDXSessionObserver-Protocol.h>
#import <Module_Framework/MDXVideoProgressObserver-Protocol.h>
#import <Module_Framework/MLCaptionControllerDelegate-Protocol.h>
#import <Module_Framework/YTSingleVideoData-Protocol.h>
#import <Module_Framework/YTSingleVideoObservable-Protocol.h>

@class MDXSession, MDXVideoProgressController, MLFormat, MLNerdStatsPlaybackData, NSArray, NSData, NSDictionary, NSError, NSString, YTAdInterrupt, YTCPN, YTCaptionViewController, YTPlaybackData, YTPlayerResponse, YTSingleVideoEventCenter, YTSingleVideoTime;
@protocol MLAudioFormatConstraint, MLCaptionConfig, MLCaptionController, MLCaptionDisplaySettingsProvider, MLCaptionTrack, MLPlayerConfig, MLVideoFormatConstraint, YTSingleVideoData;

@interface MDXSingleVideoController : NSObject <MDXSessionObserver, MDXVideoProgressObserver, MLCaptionControllerDelegate, YTSingleVideoData, YTSingleVideoObservable>
{
    MDXSession *_session;
    id <MLCaptionController> _captionController;
    _Bool _shouldSetCaptionTrackOnVideoLoad;
    id <MLCaptionConfig> _captionConfig;
    id <MLCaptionDisplaySettingsProvider> _captionDisplaySettingsProvider;
    _Bool _lastReportedIsPeggedToLive;
    double _lastReportedMinimumSeekableMediaTime;
    double _lastReportedMaximumSeekableMediaTime;
    MDXVideoProgressController *_videoProgressController;
    _Bool _externalPlaybackAllowed;
    double _accumulatedMediaTime;
    id <MLCaptionTrack> _activeCaptionTrack;
    YTAdInterrupt *_adInterrupt;
    YTSingleVideoEventCenter *_eventCenter;
    long long _lifecycleState;
    long long _mediaState;
    NSData *_playerDebugLogs;
    NSDictionary *_playerDebugParameters;
    NSError *_playerError;
    long long _videoType;
    YTPlayerResponse *_playerResponse;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTPlayerResponse *playerResponse; // @synthesize playerResponse=_playerResponse;
@property(readonly, nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(readonly, nonatomic) NSError *playerError; // @synthesize playerError=_playerError;
@property(readonly, nonatomic) NSDictionary *playerDebugParameters; // @synthesize playerDebugParameters=_playerDebugParameters;
@property(readonly, nonatomic) NSData *playerDebugLogs; // @synthesize playerDebugLogs=_playerDebugLogs;
@property(readonly, nonatomic) long long mediaState; // @synthesize mediaState=_mediaState;
@property(readonly, nonatomic) long long lifecycleState; // @synthesize lifecycleState=_lifecycleState;
@property(readonly, nonatomic, getter=isExternalPlaybackAllowed) _Bool externalPlaybackAllowed; // @synthesize externalPlaybackAllowed=_externalPlaybackAllowed;
@property(readonly, nonatomic) YTSingleVideoEventCenter *eventCenter; // @synthesize eventCenter=_eventCenter;
@property(readonly, nonatomic) YTAdInterrupt *adInterrupt; // @synthesize adInterrupt=_adInterrupt;
@property(readonly, nonatomic) id <MLCaptionTrack> activeCaptionTrack; // @synthesize activeCaptionTrack=_activeCaptionTrack;
@property(readonly, nonatomic) double accumulatedMediaTime; // @synthesize accumulatedMediaTime=_accumulatedMediaTime;
- (_Bool)isContentVideoLoadedOnScreen;
- (id)localCaptionTrackForRemoteCaptionTrack:(id)arg1;
- (void)updateLifecycleState:(long long)arg1;
- (long long)mediaStateForMDXPlayerState:(long long)arg1;
- (void)videoDidProgressToTime:(double)arg1;
- (void)didLoadFormat3Captions:(id)arg1;
- (void)captionControllerDidFailWithError:(id)arg1;
- (void)availableCaptionTracksDidChange:(id)arg1;
- (void)activeCaptionTrackDidChange:(id)arg1;
- (void)segmentNumberAndDurationAtMediaTime:(double)arg1 shouldApproximateSegment:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)productionTimeFromMediaTime:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool supportsSegmentTimelineQueries;
@property(readonly, nonatomic) MLNerdStatsPlaybackData *nerdStatsPlaybackData;
@property(readonly, nonatomic) YTCaptionViewController *captionViewController;
@property(readonly, nonatomic) id <MLVideoFormatConstraint> videoFormatConstraint;
@property(readonly, nonatomic) MLFormat *selectedVideoFormat;
@property(readonly, nonatomic) _Bool isCurrentAspectRatioVertical;
@property(readonly, nonatomic) double currentAspectRatio;
@property(readonly, nonatomic) double bufferedMediaTime;
@property(readonly, nonatomic) _Bool supportsChangingPlaybackRate;
@property(readonly, nonatomic) float playbackRate;
@property(readonly, nonatomic) _Bool attemptingToPlay;
@property(readonly, nonatomic) NSArray *availableCaptionTracks;
@property(readonly, nonatomic) id <MLAudioFormatConstraint> audioFormatConstraint;
@property(readonly, nonatomic) MLFormat *selectedAudioFormat;
@property(readonly, nonatomic) NSArray *selectableVideoFormats;
@property(readonly, nonatomic) NSArray *selectableAudioFormats;
@property(readonly, nonatomic) int mediaPlayerType;
- (_Bool)isAtLiveHead;
@property(readonly, nonatomic) _Bool isPeggedToLive;
@property(readonly, nonatomic) _Bool isCurrentlyBackgroundable;
@property(readonly, nonatomic) _Bool isExternalPlaybackActive;
@property(readonly, nonatomic) _Bool currentVideoIsLocal;
@property(readonly, nonatomic) double maximumSeekableMediaTime;
@property(readonly, nonatomic) double minimumSeekableMediaTime;
@property(readonly, nonatomic) double totalMediaTime;
@property(readonly, nonatomic) YTSingleVideoTime *localTime;
@property(readonly, nonatomic) YTSingleVideoTime *currentVideoTime;
@property(readonly, nonatomic) long long rawMediaState;
@property(readonly, nonatomic) id <YTSingleVideoData> videoData;
@property(readonly, nonatomic) _Bool needsGLRendering;
@property(readonly, nonatomic) _Bool supportsVRMode;
@property(readonly, nonatomic) YTPlaybackData *playbackData;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic) _Bool isMuted;
@property(readonly, nonatomic) id <MLPlayerConfig> playerConfig;
@property(readonly, nonatomic) int interstitialReplayPolicy;
@property(readonly, nonatomic) long long playbackPlacement;
@property(readonly, nonatomic) _Bool isPlayableInPictureInPicture;
@property(readonly, nonatomic) _Bool isLivePlayback;
@property(readonly, nonatomic) NSString *videoId;
@property(readonly, nonatomic) YTCPN *CPN;
- (void)MDXSession:(id)arg1 subtitlesTrackDidChange:(id)arg2;
- (void)audioTrackDidChangeInMDXSession:(id)arg1;
- (void)MDXSession:(id)arg1 audioTrackListDidChange:(id)arg2;
- (void)MDXSession:(id)arg1 playerStateDidChange:(long long)arg2;
- (void)startAdOverlay;
- (void)setActiveCaptionTrack:(id)arg1;
- (void)updateMediaStateOnPlayer;
- (void)activate;
- (void)stopObserving;
- (void)suspend;
- (id)initWithSession:(id)arg1 playerResponse:(id)arg2 videoProgressController:(id)arg3 ad:(id)arg4 adOverlay:(id)arg5;
- (id)init;
- (id)initWithSession:(id)arg1 playerResponse:(id)arg2 videoProgressController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

