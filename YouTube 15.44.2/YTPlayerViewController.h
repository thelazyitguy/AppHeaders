//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTAudioTrackSwitchDelegate-Protocol.h>
#import <Module_Framework/YTCorePlaybackControllerDelegate-Protocol.h>
#import <Module_Framework/YTPlaybackController-Protocol.h>
#import <Module_Framework/YTPlaybackCoordinatorObserver-Protocol.h>
#import <Module_Framework/YTPlaybackUpsellControllerDelegate-Protocol.h>
#import <Module_Framework/YTPlayerPromoControllerProvider-Protocol.h>
#import <Module_Framework/YTPlayerViewDelegate-Protocol.h>
#import <Module_Framework/YTSingleVideoActiveCaptionTrackObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoAspectRatioObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoAudioFormatSelectionObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoAvailableCaptionTracksObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoBufferedMediaTimeObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoCaptionErrorObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoCaptionViewControllerObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoCurrentTimeObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoCurrentTimeSideEffectfulObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoForegroundAudioOnlyPlaybackStateObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoNerdStatsPlaybackDataObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoPeggedToLiveObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoPlaybackRateObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoRawMediaStateObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoRawMediaStateSideEffectfulObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoSeekableMediaTimeRangeObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoTotalMediaTimeObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoVideoFormatSelectionObserver-Protocol.h>
#import <Module_Framework/YTSpeedyGControllerDelegate-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>
#import <Module_Framework/YTVarispeedSwitchControllerDelegate-Protocol.h>
#import <Module_Framework/YTVideoPlayerOverlayDelegate-Protocol.h>
#import <Module_Framework/YTVideoQualitySwitchDelegate-Protocol.h>

@class GIMMe, MLDefaultViewportSizeProvider, NSError, NSHashTable, NSMutableDictionary, NSString, YTAudioTrackSwitchController, YTCPN, YTHotConfig, YTIWatchNextResponse, YTInteractionLoggingProxyButton, YTPlayabilityResolutionUserActionUIController, YTPlaybackUpsellController, YTPlayerEmptyOverlayViewController, YTPlayerOverlayWrapper, YTPlayerPromoController, YTPlayerResponse, YTPlayerView, YTSingleVideoTime, YTSpeedyGController, YTVarispeedSwitchController;
@protocol HAMClock, YTCorePlaybackController, YTGLSceneProtocol, YTPlaybackController, YTPlaybackControllerEventsDelegate, YTPlaybackControllerUIDelegate, YTPlaybackCoordinator, YTPlayerOverlayFactory, YTPlayerViewControllerConfig, YTResponder, YTSingleVideoObservable, YTStoryboardController, YTVideoPlayerOverlayProtocol, YTVideoQualitySwitchController;

@interface YTPlayerViewController : UIViewController <YTAudioTrackSwitchDelegate, YTCorePlaybackControllerDelegate, YTPlayerPromoControllerProvider, YTPlaybackCoordinatorObserver, YTPlaybackUpsellControllerDelegate, YTPlayerViewDelegate, YTSingleVideoActiveCaptionTrackObserver, YTSingleVideoAspectRatioObserver, YTSingleVideoAvailableCaptionTracksObserver, YTSingleVideoBufferedMediaTimeObserver, YTSingleVideoCaptionErrorObserver, YTSingleVideoCaptionViewControllerObserver, YTSingleVideoCurrentTimeObserver, YTSingleVideoCurrentTimeSideEffectfulObserver, YTSingleVideoForegroundAudioOnlyPlaybackStateObserver, YTSingleVideoVideoFormatSelectionObserver, YTSingleVideoAudioFormatSelectionObserver, YTSingleVideoNerdStatsPlaybackDataObserver, YTSingleVideoPeggedToLiveObserver, YTSingleVideoPlaybackRateObserver, YTSingleVideoRawMediaStateObserver, YTSingleVideoRawMediaStateSideEffectfulObserver, YTSingleVideoSeekableMediaTimeRangeObserver, YTSingleVideoTotalMediaTimeObserver, YTSpeedyGControllerDelegate, YTSystemNotificationsObserver, YTVarispeedSwitchControllerDelegate, YTVideoPlayerOverlayDelegate, YTVideoQualitySwitchDelegate, YTPlaybackController>
{
    id <YTCorePlaybackController> _playbackController;
    id <YTPlayerViewControllerConfig> _config;
    YTHotConfig *_hotConfig;
    id <YTPlayerOverlayFactory> _playerOverlayFactory;
    YTPlayerView *_playerView;
    YTPlayerPromoController *_promoController;
    id <HAMClock> _clock;
    double _scrubLastSeekAbsoluteTime;
    double _scrubMinSeekInterval;
    YTSingleVideoTime *_seekTime;
    float _expansionCoefficient;
    YTIWatchNextResponse *_watchNextResponse;
    _Bool _pinchToRotateEnabled;
    YTInteractionLoggingProxyButton *_dragDropProxyButton;
    YTInteractionLoggingProxyButton *_fullscreenEnterSwipeProxyButton;
    YTInteractionLoggingProxyButton *_fullscreenExitSwipeProxyButton;
    id <YTGLSceneProtocol> _GLScene;
    MLDefaultViewportSizeProvider *_viewportSizeProvider;
    _Bool _viewportSizeProviderNeedsUpdate;
    YTSpeedyGController *_speedyGController;
    NSMutableDictionary *_videoIdsToStoryboardControllers;
    YTPlayerOverlayWrapper *_activeVideoPlayerOverlayWrapper;
    YTPlayerOverlayWrapper *_contentVideoPlayerOverlayWrapper;
    YTPlaybackUpsellController *_playbackUpsellController;
    id <YTPlaybackCoordinator> _playbackCoordinator;
    YTPlayabilityResolutionUserActionUIController *_playabilityResolutionUIController;
    NSHashTable *_scrubbingObservers;
    NSHashTable *_errorObservers;
    _Bool _userScrubbing;
    _Bool _hasNextVideo;
    _Bool _hasPreviousVideo;
    _Bool _playlistControlsHidden;
    _Bool _switchesOnPlaybackRouteChange;
    id <YTResponder> _parentResponder;
    id <YTPlaybackControllerEventsDelegate> _eventsDelegate;
    id <YTPlaybackControllerUIDelegate> _UIDelegate;
    id <YTVideoQualitySwitchController> _videoQualityController;
    YTAudioTrackSwitchController *_audioTrackController;
    YTVarispeedSwitchController *_varispeedController;
    GIMMe *_gimme;
    YTPlayerEmptyOverlayViewController *_emptyOverlay;
    id <YTStoryboardController> _storyboardController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <YTStoryboardController> storyboardController; // @synthesize storyboardController=_storyboardController;
@property(retain, nonatomic) YTPlayerEmptyOverlayViewController *emptyOverlay; // @synthesize emptyOverlay=_emptyOverlay;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) _Bool switchesOnPlaybackRouteChange; // @synthesize switchesOnPlaybackRouteChange=_switchesOnPlaybackRouteChange;
@property(nonatomic) _Bool playlistControlsHidden; // @synthesize playlistControlsHidden=_playlistControlsHidden;
@property(nonatomic) _Bool hasPreviousVideo; // @synthesize hasPreviousVideo=_hasPreviousVideo;
@property(nonatomic) _Bool hasNextVideo; // @synthesize hasNextVideo=_hasNextVideo;
@property(readonly, nonatomic) _Bool userScrubbing; // @synthesize userScrubbing=_userScrubbing;
@property(nonatomic) __weak id <YTPlaybackControllerUIDelegate> UIDelegate; // @synthesize UIDelegate=_UIDelegate;
@property(nonatomic) __weak id <YTPlaybackControllerEventsDelegate> eventsDelegate; // @synthesize eventsDelegate=_eventsDelegate;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)storyboardControllerWithSingleVideo:(id)arg1;
- (void)updateViewportSizeProvider;
- (void)startObservingStateChangesOnActiveVideo;
- (void)resetAdOverlayAndActivate;
- (void)resetContentOverlay;
- (void)resetContentOverlayAndActivate;
- (void)acquireAndActivateNewOverlaysFromOverlayFactory;
- (void)updateActiveOverlayWithActiveVideoCurrentState;
- (void)updateUIStateWithActiveVideoCurrentState;
- (void)notifyEventsDelegateAboutNewActiveVideo:(id)arg1 withPlaybackData:(id)arg2;
- (void)setInfoCardDataForAdInterrupt:(id)arg1;
- (void)setInfoCardDataForContentVideo;
- (_Bool)isVideoFinished;
- (_Bool)handleNavigationEndpointResponderEvent:(id)arg1;
- (void)didPressRewindWithTimeInterval:(double)arg1;
- (void)didPressFastForwardWithTimeInterval:(double)arg1;
- (_Bool)handlePlayerControlsDidPressButtonResponderEvent:(id)arg1;
- (void)setPlayerDataOnContentOverlay;
- (void)clearActivePlayerOverlay;
- (void)updatePlayerViewWithActivePlayerOverlay;
- (void)activateOverlay:(id)arg1 updatePlayerView:(_Bool)arg2;
- (void)updateActiveOverlayWithPlaybackControllerState;
- (id)viewportSizeProvider;
- (void)playbackRouteDidChange;
- (void)didPressCardboardBackButton;
- (void)didPressCardboardButton;
- (int)playerViewLayoutForSpeedyGController:(id)arg1;
- (void)speedyGControllerWillDisplaySpeedyGAlert:(id)arg1;
- (void)singleVideo:(id)arg1 aspectRatioDidChange:(double)arg2;
- (void)singleVideo:(id)arg1 bufferedMediaTimeDidChange:(double)arg2;
- (void)singleVideo:(id)arg1 seekableMediaTimeRangeDidChangeToMinimumTime:(double)arg2 maximumTime:(double)arg3;
- (void)singleVideo:(id)arg1 playbackRateDidChange:(float)arg2;
- (void)singleVideo:(id)arg1 peggedToLiveDidChange:(_Bool)arg2;
- (void)singleVideo:(id)arg1 foregroundAudioOnlyPlaybackStateDidChange:(_Bool)arg2;
- (void)singleVideo:(id)arg1 totalMediaTimeDidChange:(double)arg2;
- (void)singleVideo:(id)arg1 didSelectAudioFormat:(id)arg2;
- (void)singleVideo:(id)arg1 didSelectVideoFormat:(id)arg2;
- (void)singleVideo:(id)arg1 nerdStatsPlaybackDataDidChange:(id)arg2;
- (void)singleVideo:(id)arg1 captionsDidFailWithError:(id)arg2;
- (void)singleVideo:(id)arg1 captionViewControllerDidChange:(id)arg2;
- (void)singleVideo:(id)arg1 availableCaptionTracksDidChange:(id)arg2;
- (void)singleVideo:(id)arg1 activeCaptionTrackDidChange:(id)arg2;
- (void)potentiallyMutatedSingleVideo:(id)arg1 currentVideoTimeDidChange:(id)arg2;
- (void)singleVideo:(id)arg1 currentVideoTimeDidChange:(id)arg2;
- (void)potentiallyMutatedSingleVideo:(id)arg1 rawMediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3 mediaPlayerInitiatedSeek:(_Bool)arg4;
- (void)singleVideo:(id)arg1 rawMediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3 mediaPlayerInitiatedSeek:(_Bool)arg4;
- (void)appWillEnterForeground:(id)arg1;
- (void)varispeedSwitchController:(id)arg1 didSelectRate:(float)arg2;
- (float)currentPlaybackRateForVarispeedSwitchController:(id)arg1;
- (void)audioTrackDidChange:(id)arg1;
- (id)selectedAudioTrack;
- (id)videoFormatConstraintForVideoQualitySwitchController:(id)arg1;
- (void)videoQualitySwitchController:(id)arg1 didSelectFormatConstraint:(id)arg2;
- (_Bool)isCurrentVideoVerticallyCropped;
- (void)didPressPlayerBarReplay;
- (void)didSeekToProductionTime:(double)arg1;
- (void)didSeekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)didEndScrubbing;
- (void)didScrubToProductionTime:(double)arg1;
- (void)didScrubToTime:(double)arg1;
- (void)didStartScrubbing;
- (void)didPressPlayerBarNext;
- (void)didTogglePlayPause;
- (void)didPressLiveSync;
- (void)didPressToggleFullscreen;
@property(readonly, nonatomic, getter=isMDXActive) _Bool MDXActive;
@property(readonly, nonatomic) YTVarispeedSwitchController *varispeedController; // @synthesize varispeedController=_varispeedController;
@property(readonly, nonatomic) id <YTVideoQualitySwitchController> videoQualityController; // @synthesize videoQualityController=_videoQualityController;
@property(readonly, nonatomic) YTAudioTrackSwitchController *audioTrackController; // @synthesize audioTrackController=_audioTrackController;
- (void)setUserAudioOnlyModeActive:(_Bool)arg1;
- (void)didSetNerdStatsEnabled:(_Bool)arg1;
- (void)userDidSelectCaptionTrack:(id)arg1;
- (void)didPressCopyDebugInfo;
- (void)didDismissModal;
- (void)setPinchToRotateEnabled:(_Bool)arg1;
- (void)setPlayerBackgroundColor:(id)arg1;
- (void)setRenderingViewCustomTranslation:(struct CGPoint)arg1 customScale:(double)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)setRenderingViewCustomFrame:(struct CGRect)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)didSwipeToEnterFullscreen;
- (void)didSwipeToExitFullscreen;
- (void)enableCaptionsIfAvailableWithUserAction:(_Bool)arg1;
- (void)playIfPermitted;
- (void)seekToEnd;
- (_Bool)isShowingLiveChat;
- (void)showLiveChat:(_Bool)arg1;
- (void)showAddToMenuFromView:(id)arg1;
- (void)playbackController:(id)arg1 requiresUserActionForPlayabilityResolutionWithUserActionRequest:(id)arg2;
- (void)playbackControllerDidLoadOfflineLiveStream:(id)arg1;
- (void)playbackController:(id)arg1 externalPlaybackActiveStateDidChange:(_Bool)arg2;
- (void)playbackController:(id)arg1 VRStateDidChange:(_Bool)arg2;
- (void)playbackControllerDidLoadPrerollAd:(id)arg1;
- (void)registerTooltipRenderersWithPlayerResponse:(id)arg1;
- (void)playbackController:(id)arg1 didLoadContentPlaybackData:(id)arg2;
- (void)playbackControllerStateDidChange:(id)arg1;
- (void)playbackController:(id)arg1 didFailWithError:(id)arg2;
- (void)playbackController:(id)arg1 willFailWithError:(id)arg2;
- (void)playbackControllerDidFinishPlayingAd:(id)arg1;
- (void)playbackControllerDidTransitionInternallyToNextPlayback:(id)arg1;
- (void)playbackController:(id)arg1 didFinishPlaybackAndWillInternallyTransitionToNextPlayback:(_Bool)arg2;
- (void)playbackControllerDidFinishPlayback:(id)arg1;
- (void)playbackController:(id)arg1 didReceiveAdMarkers:(id)arg2;
- (void)playbackController:(id)arg1 willResetToState:(int)arg2;
- (void)playbackController:(id)arg1 willStartAdSurveyWithAdInterrupt:(id)arg2;
- (id)overlayForVideo:(id)arg1;
- (void)playbackController:(id)arg1 didActivateVideo:(id)arg2 withPlaybackData:(id)arg3;
- (void)playbackController:(id)arg1 willActivateVideo:(id)arg2;
- (_Bool)isContentPanAllowedForPlayerView:(id)arg1;
- (void)playerViewViewportSizeDidChange:(id)arg1;
- (void)playerViewDidPinchToSmallscreen:(id)arg1;
- (void)playerViewDidPinchToFullscreen:(id)arg1;
- (_Bool)playerViewShouldStartDragDrop:(id)arg1;
- (void)playerViewDidDragDrop:(id)arg1;
- (id)dragDropShareURLForPlayerView:(id)arg1;
- (long long)playerStateForPromoController:(id)arg1;
- (_Bool)isExternalPlaybackActiveForPromoController:(id)arg1;
- (void)removeErrorObserver:(id)arg1;
- (void)addErrorObserver:(id)arg1;
- (void)removeScrubbingObserver:(id)arg1;
- (void)addScrubbingObserver:(id)arg1;
- (void)setUpcomingPlayerTransition:(id)arg1 playbackConfig:(id)arg2;
@property(nonatomic) _Bool zoomToFill;
- (id)playerSnapshotView;
@property(readonly, nonatomic) id <YTPlaybackController> internalPlaybackController;
@property(readonly, nonatomic) YTPlayerView *playerView;
@property(readonly, nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive;
@property(readonly, nonatomic) _Bool isVRModeActive;
@property(nonatomic, getter=isActivePlayback) _Bool activePlayback;
@property(nonatomic, getter=isExternalPlaybackAllowed) _Bool externalPlaybackAllowed;
- (void)scrubToProductionTime:(double)arg1;
- (void)scrubToTime:(double)arg1;
- (void)setAccountLinkState:(id)arg1;
- (void)setClipID:(id)arg1;
- (void)setBlackoutActive:(_Bool)arg1;
- (int)playerViewLayout;
- (void)setPlayerViewLayout:(int)arg1;
@property(readonly, nonatomic) id <YTSingleVideoObservable> contentVideo;
@property(readonly, nonatomic) id <YTSingleVideoObservable> activeVideo;
- (id)currentAd;
- (id)contentPlayerMacroState;
- (id)lastKnownAdPlayerMacroState;
@property(readonly, nonatomic) UIViewController<YTVideoPlayerOverlayProtocol> *contentVideoPlayerOverlay;
@property(readonly, nonatomic) UIViewController<YTVideoPlayerOverlayProtocol> *activeVideoPlayerOverlay;
- (void)setLiveCaptionsVerticalRatio:(double)arg1;
- (void)setExpansionCoefficient:(double)arg1;
- (_Bool)isInlinePlaybackActive;
- (void)switchToInlinePlayback:(_Bool)arg1;
- (void)setOverlayFactory:(id)arg1;
- (void)handleRemoteControlEvent:(long long)arg1;
@property(readonly, nonatomic) YTPlayerResponse *playerResponse;
- (void)setMuted:(_Bool)arg1;
- (void)setVolume:(float)arg1;
- (void)replay;
- (void)resumePlayback;
- (void)suspendPlayback;
- (_Bool)arePlayerControlsHidden;
- (void)didPressReplay;
- (void)didPressPause;
- (void)didPressPlay;
- (id)playbackDebugData;
- (void)didPressSkipAd;
- (void)didPressCompanionAd;
@property(readonly, nonatomic) _Bool isPlayingAdIntro;
@property(readonly, nonatomic) _Bool isPlayingAdSurvey;
@property(readonly, nonatomic) _Bool isPlayingAd;
@property(readonly, nonatomic) YTCPN *contentVideoCPN;
- (id)contentVideoCurrentTime;
@property(readonly, nonatomic) double contentVideoMediaTime;
@property(readonly, nonatomic) double currentVideoMediaTime;
@property(readonly, nonatomic) double currentVideoTotalMediaTime;
- (void)restoreToState:(id)arg1 playbackConfig:(id)arg2;
- (id)restorableState;
- (void)resetToLoading;
- (void)reset;
@property(readonly, nonatomic) int state;
@property(readonly, nonatomic) _Bool isPlaybackFinished;
@property(readonly, nonatomic) NSString *contentVideoID;
@property(readonly, nonatomic) NSString *currentVideoID;
- (_Bool)handlesAutoplayingInternally;
- (void)loadWithPlayerTransition:(id)arg1 playbackConfig:(id)arg2;
- (void)prepareToLoadWithPlayerTransition:(id)arg1 expectedLayout:(id)arg2;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long playerState;
@property(readonly, nonatomic) _Bool currentVideoIsLocal;
@property(readonly, nonatomic, getter=isCurrentVideoVertical) _Bool currentVideoVertical;
- (void)applyWatchNextResponse;
- (void)setWatchNextResponse:(id)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 overlayFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

