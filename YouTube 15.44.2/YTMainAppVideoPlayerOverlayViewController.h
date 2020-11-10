//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MLNerdStatsOverlayViewControllerDelegate-Protocol.h"
#import "YTAdjustableAccessibilityProtocol-Protocol.h"
#import "YTAnnotationsViewControllerDelegate-Protocol.h"
#import "YTAudioTrackSwitchUIObserver-Protocol.h"
#import "YTAutonavEndscreenControllerDelegate-Protocol.h"
#import "YTAutonavPreviewViewDelegate-Protocol.h"
#import "YTCaptionTrackSwitchDelegate-Protocol.h"
#import "YTClipOverlayProtocol-Protocol.h"
#import "YTCreatorEndscreenControllerDelegate-Protocol.h"
#import "YTDoubleTapToSeekControllerDelegate-Protocol.h"
#import "YTDownAndOutControllerDelegate-Protocol.h"
#import "YTFullscreenEngagementOverlayControllerDelegate-Protocol.h"
#import "YTHotConfigObserver-Protocol.h"
#import "YTInfoCardDrawerOverlayDelegate-Protocol.h"
#import "YTInnerTubeCollectionAppearanceResponderProvider-Protocol.h"
#import "YTInstreamAdCtaViewControllerDelegate-Protocol.h"
#import "YTKeyCommandOverlayProtocol-Protocol.h"
#import "YTLegalReportMediaTimeResponderProvider-Protocol.h"
#import "YTLiveOfflineSlateDelegate-Protocol.h"
#import "YTMacroMarkersControllerObserver-Protocol.h"
#import "YTMainAppControlsOverlayViewEventsDelegate-Protocol.h"
#import "YTMainAppPlayerToastControllerDelegate-Protocol.h"
#import "YTOfflineModeObserver-Protocol.h"
#import "YTOverflowMenuViewControllerDelegate-Protocol.h"
#import "YTOverlayAutonavProtocol-Protocol.h"
#import "YTPlaybackRouteButtonVisibilityObserver-Protocol.h"
#import "YTPlayerBarControllerDelegate-Protocol.h"
#import "YTPlayerOverflowInfoCardProvider-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTUpForFullControllerDelegate-Protocol.h"
#import "YTUserDefaultsObserver-Protocol.h"
#import "YTVideoPlayerOverlayProtocol-Protocol.h"
#import "YTVideoPlayerOverlaySmallScreenAnimating-Protocol.h"
#import "YTVideoPlayerOverlayStoryboardProtocol-Protocol.h"
#import "YTVideoQualitySwitchUIObserver-Protocol.h"
#import "YTVideoZoomOverlayControllerDelegate-Protocol.h"

@class GIMMe, MLNerdStatsOverlayViewController, MLNerdStatsPlaybackData, NSArray, NSError, NSString, YTAnnotationsViewController, YTAutonavEndscreenController, YTCPN, YTCaptionTrackSwitchController, YTCaptionViewController, YTColdConfig, YTConfirmDialogController, YTCreatorEndscreenViewController, YTDoubleTapToSeekController, YTDownAndOutController, YTFullscreenEngagementOverlayController, YTHotConfig, YTIAutoplaySwitchButtonRenderer, YTIPlayerOverflowRenderer, YTIPlayerOverlayRenderer, YTIVideoReportingSupportedRenderers, YTInstreamAdCtaViewController, YTInteractionLoggingProxyButton, YTLiveOfflineSlateViewController, YTMacroMarkersController, YTMagicWindowEduController, YTMainAppPlayerOverlayDataCollector, YTMainAppPlayerToastController, YTMainAppVideoPlayerOverlayView, YTNoSoundMemoViewController, YTOverflowMenuViewController, YTPaidContentViewController, YTPlayerBarController, YTPlayerOverflowRendererController, YTPlayerResponse, YTSuggestedActionsController, YTUpForFullController, YTUserDefaults, YTVEVisibilityUpdateResponderEventGate, YTVideoZoomOverlayController;
@protocol ELMContext, ELMStore, YTAudioSession, YTAutonavControllerProtocol, YTCaptionsVisibilityResponderProvider, YTDataServices, YTEventLogger, YTInfoCardDrawerOverlayProtocol, YTInfoCardTeaserOverlayProtocol, YTOfflineModeProvider, YTPlayerHeartbeatEventCenter, YTRendererController, YTResponder, YTServices, YTSingleVideoObservable, YTVideoPlayerOverlayConfig, YTVideoPlayerOverlayDelegate;

@interface YTMainAppVideoPlayerOverlayViewController : UIViewController <MLNerdStatsOverlayViewControllerDelegate, YTCaptionTrackSwitchDelegate, YTLegalReportMediaTimeResponderProvider, YTMacroMarkersControllerObserver, YTOfflineModeObserver, YTOverflowMenuViewControllerDelegate, YTPlaybackRouteButtonVisibilityObserver, YTUserDefaultsObserver, YTAnnotationsViewControllerDelegate, YTAutonavPreviewViewDelegate, YTCreatorEndscreenControllerDelegate, YTDoubleTapToSeekControllerDelegate, YTDownAndOutControllerDelegate, YTUpForFullControllerDelegate, YTFullscreenEngagementOverlayControllerDelegate, YTHotConfigObserver, YTAdjustableAccessibilityProtocol, YTInnerTubeCollectionAppearanceResponderProvider, YTInstreamAdCtaViewControllerDelegate, YTLiveOfflineSlateDelegate, YTPlayerBarControllerDelegate, YTVideoPlayerOverlaySmallScreenAnimating, YTVideoZoomOverlayControllerDelegate, YTMainAppPlayerToastControllerDelegate, YTAudioTrackSwitchUIObserver, YTAutonavEndscreenControllerDelegate, YTClipOverlayProtocol, YTInfoCardDrawerOverlayDelegate, YTKeyCommandOverlayProtocol, YTMainAppControlsOverlayViewEventsDelegate, YTOverlayAutonavProtocol, YTPlayerOverflowInfoCardProvider, YTResponder, YTVideoPlayerOverlayProtocol, YTVideoPlayerOverlayStoryboardProtocol, YTVideoQualitySwitchUIObserver>
{
    double _expansionCoefficient;
    YTCaptionViewController *_captionOverlayViewController;
    id <YTVideoPlayerOverlayConfig> _overlayConfig;
    id <YTServices> _services;
    id <YTCaptionsVisibilityResponderProvider> _captionsVisibilityResponderProvider;
    UIViewController<YTInfoCardDrawerOverlayProtocol> *_infoCardDrawerViewController;
    UIViewController<YTInfoCardDrawerOverlayProtocol> *_adInfoCardDrawerViewController;
    UIViewController<YTInfoCardTeaserOverlayProtocol> *_infoCardTeaserViewController;
    _Bool _playerControlsHidden;
    YTVEVisibilityUpdateResponderEventGate *_visibilityUpdateGate;
    _Bool _interactionLoggingInitialized;
    YTIVideoReportingSupportedRenderers *_videoReportingRenderers;
    id <YTOfflineModeProvider> _offlineModeProvider;
    _Bool _captionsActive;
    unsigned long long _thumbnailRequestID;
    YTIAutoplaySwitchButtonRenderer *_autoplaySwitchButtonRenderer;
    YTPlayerOverflowRendererController *_playerOverflowRendererController;
    YTNoSoundMemoViewController *_noSoundMemoViewController;
    YTCaptionTrackSwitchController *_captionTrackController;
    YTConfirmDialogController *_confirmDialogController;
    YTHotConfig *_hotConfig;
    YTColdConfig *_coldConfig;
    _Bool _shouldShowPlayerControlsOnViewLoad;
    id <YTEventLogger> _eventLogger;
    id <YTAudioSession> _audioSession;
    YTLiveOfflineSlateViewController *_liveOfflineSlateViewController;
    YTPlayerResponse *_playerResponse;
    YTIPlayerOverlayRenderer *_playerOverlayRenderer;
    id <YTPlayerHeartbeatEventCenter> _heartbeatEventCenter;
    YTDoubleTapToSeekController *_doubleTapToSeekController;
    YTDownAndOutController *_downAndOutController;
    YTUpForFullController *_upForFullController;
    YTVideoZoomOverlayController *_videoZoomOverlayController;
    YTFullscreenEngagementOverlayController *_fullscreenEngagementOverlayController;
    YTInstreamAdCtaViewController *_instreamAdCtaViewController;
    YTSuggestedActionsController *_suggestedActionsController;
    YTMagicWindowEduController *_magicWindowEduController;
    YTMainAppPlayerToastController *_playerToastController;
    long long _preDTTSPlayerState;
    id <YTSingleVideoObservable> _currentSingleVideoObservable;
    id <YTAutonavControllerProtocol> _autonavController;
    NSError *_error;
    id <ELMStore> _elementsStore;
    NSString *_productsInVideoEntityKey;
    YTMainAppPlayerOverlayDataCollector *_mainAppPlayerOverlayDataCollector;
    NSArray *_chapters;
    NSArray *_timestampMarkers;
    YTInteractionLoggingProxyButton *_tapToShowControlsProxyButton;
    YTInteractionLoggingProxyButton *_tapToHideControlsProxyButton;
    YTInteractionLoggingProxyButton *_playProxyButton;
    YTInteractionLoggingProxyButton *_pauseProxyButton;
    YTInteractionLoggingProxyButton *_playlistPreviousProxyButton;
    YTInteractionLoggingProxyButton *_playlistNextProxyButton;
    _Bool _liveOfflineSlateShowing;
    long long _liveOfflineSlateCollapseBehavior;
    _Bool _liveChatShowing;
    _Bool _showPlayButtonForEmptyPlayerState;
    _Bool _storyboardEnabled;
    _Bool _doubleTapToSeeking;
    _Bool _playerControlsShown;
    _Bool _isUpdatingControlsVisibilityOnBackgroundTap;
    _Bool _isOpeningPlayerControlsByExpandingRelateds;
    _Bool _preDTTSPausedPlayerControlsVisible;
    _Bool _snappierTransportControlsEnabled;
    double _snappierTransportControlsDisableTimeSeconds;
    _Bool _enableProminentCaptions;
    _Bool _enableProminentCaptionsWithToggle;
    _Bool _showSmallScreenStartedByGesture;
    _Bool _creatorsEndScreenActivated;
    _Bool _backgroundViewShouldUpdate;
    _Bool _areRelatedVideosExpanding;
    _Bool _playlistControlsHidden;
    _Bool _hasPreviousVideo;
    _Bool _hasNextVideo;
    _Bool _userScrubbing;
    _Bool _foregroundAudioOnly;
    _Bool _externalPlaybackActive;
    _Bool _MDXPlaybackActive;
    _Bool _currentVideoVertical;
    _Bool _hovercardVisible;
    _Bool _clipPlaybackActive;
    _Bool _currentlySwipingWithAudioOnly;
    _Bool _inlinePlayback;
    _Bool _showSpinnerOnScrubbing;
    _Bool _MDXAutoplayUserEnabled;
    _Bool _shouldDeferPlayerErrors;
    _Bool _shouldShowAutonavEndscreenAfterVideoEnds;
    _Bool _captionsEnabled;
    _Bool _captionsAvailable;
    _Bool _nerdStatsOverlayVisible;
    _Bool _controlsHiddenBeforeModal;
    _Bool _scrubbing;
    int _playerViewLayout;
    id <YTResponder> _parentResponder;
    long long _videoControlsBehavior;
    long long _videoControlsVisibility;
    MLNerdStatsPlaybackData *_nerdStatsPlaybackData;
    double _reportMediaTime;
    id <YTVideoPlayerOverlayDelegate> _delegate;
    GIMMe *_gimme;
    YTAnnotationsViewController *_annotationsViewController;
    YTCreatorEndscreenViewController *_creatorEndscreenViewController;
    double _totalTime;
    double _minimumSeekableTime;
    double _maximumSeekableTime;
    long long _emptyStatePlaybackButton;
    YTPlayerBarController *_playerBarController;
    id <YTDataServices> _dataServices;
    YTOverflowMenuViewController *_overflowMenuViewController;
    long long _playerState;
    YTCPN *_CPN;
    double _mediaTime;
    double _downloadedTime;
    double _playerBarBottomOffset;
    MLNerdStatsOverlayViewController *_nerdStatsOverlayViewController;
    YTAutonavEndscreenController *_autonavEndscreenController;
    YTPaidContentViewController *_paidContentViewController;
    UIViewController<YTRendererController> *_chatOverlayViewController;
    YTMacroMarkersController *_macroMarkersController;
    double _spinnerDelay;
    YTUserDefaults *_userDefaults;
    id <ELMContext> _elementsContext;
}

+ (id)playerBarTimestampMarkersFromTimelineMarkers:(id)arg1;
+ (id)playerBarChaptersFromTimelineMarkers:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <ELMContext> elementsContext; // @synthesize elementsContext=_elementsContext;
@property(readonly, nonatomic) YTUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) double spinnerDelay; // @synthesize spinnerDelay=_spinnerDelay;
@property(retain, nonatomic) YTMacroMarkersController *macroMarkersController; // @synthesize macroMarkersController=_macroMarkersController;
@property(nonatomic) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(readonly, nonatomic) UIViewController<YTRendererController> *chatOverlayViewController; // @synthesize chatOverlayViewController=_chatOverlayViewController;
@property(retain, nonatomic) YTPaidContentViewController *paidContentViewController; // @synthesize paidContentViewController=_paidContentViewController;
@property(nonatomic) _Bool controlsHiddenBeforeModal; // @synthesize controlsHiddenBeforeModal=_controlsHiddenBeforeModal;
@property(retain, nonatomic) YTAutonavEndscreenController *autonavEndscreenController; // @synthesize autonavEndscreenController=_autonavEndscreenController;
@property(readonly, nonatomic, getter=isNerdStatsOverlayVisible) _Bool nerdStatsOverlayVisible; // @synthesize nerdStatsOverlayVisible=_nerdStatsOverlayVisible;
@property(readonly, nonatomic) MLNerdStatsOverlayViewController *nerdStatsOverlayViewController; // @synthesize nerdStatsOverlayViewController=_nerdStatsOverlayViewController;
@property(nonatomic) _Bool captionsAvailable; // @synthesize captionsAvailable=_captionsAvailable;
@property(nonatomic) _Bool captionsEnabled; // @synthesize captionsEnabled=_captionsEnabled;
@property(nonatomic) _Bool shouldShowAutonavEndscreenAfterVideoEnds; // @synthesize shouldShowAutonavEndscreenAfterVideoEnds=_shouldShowAutonavEndscreenAfterVideoEnds;
@property(nonatomic) double playerBarBottomOffset; // @synthesize playerBarBottomOffset=_playerBarBottomOffset;
@property(nonatomic) _Bool shouldDeferPlayerErrors; // @synthesize shouldDeferPlayerErrors=_shouldDeferPlayerErrors;
@property(nonatomic, getter=isMDXAutoplayUserEnabled) _Bool MDXAutoplayUserEnabled; // @synthesize MDXAutoplayUserEnabled=_MDXAutoplayUserEnabled;
@property(nonatomic) _Bool showSpinnerOnScrubbing; // @synthesize showSpinnerOnScrubbing=_showSpinnerOnScrubbing;
@property(nonatomic) double downloadedTime; // @synthesize downloadedTime=_downloadedTime;
@property(nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(readonly, nonatomic) YTCPN *CPN; // @synthesize CPN=_CPN;
@property(readonly, nonatomic) YTPlayerResponse *playerResponse; // @synthesize playerResponse=_playerResponse;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) YTOverflowMenuViewController *overflowMenuViewController; // @synthesize overflowMenuViewController=_overflowMenuViewController;
@property(nonatomic) int playerViewLayout; // @synthesize playerViewLayout=_playerViewLayout;
@property(readonly, nonatomic) __weak id <YTDataServices> dataServices; // @synthesize dataServices=_dataServices;
@property(nonatomic, getter=isInlinePlayback) _Bool inlinePlayback; // @synthesize inlinePlayback=_inlinePlayback;
@property(nonatomic, getter=isCurrentlySwipingWithAudioOnly) _Bool currentlySwipingWithAudioOnly; // @synthesize currentlySwipingWithAudioOnly=_currentlySwipingWithAudioOnly;
@property(retain, nonatomic) YTPlayerBarController *playerBarController; // @synthesize playerBarController=_playerBarController;
@property(nonatomic) long long emptyStatePlaybackButton; // @synthesize emptyStatePlaybackButton=_emptyStatePlaybackButton;
@property(nonatomic) double maximumSeekableTime; // @synthesize maximumSeekableTime=_maximumSeekableTime;
@property(nonatomic) double minimumSeekableTime; // @synthesize minimumSeekableTime=_minimumSeekableTime;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) YTCreatorEndscreenViewController *creatorEndscreenViewController; // @synthesize creatorEndscreenViewController=_creatorEndscreenViewController;
@property(retain, nonatomic) YTAnnotationsViewController *annotationsViewController; // @synthesize annotationsViewController=_annotationsViewController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic, getter=isClipPlaybackActive) _Bool clipPlaybackActive; // @synthesize clipPlaybackActive=_clipPlaybackActive;
@property(readonly, nonatomic, getter=isHovercardVisible) _Bool hovercardVisible; // @synthesize hovercardVisible=_hovercardVisible;
@property(nonatomic) __weak id <YTVideoPlayerOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double reportMediaTime; // @synthesize reportMediaTime=_reportMediaTime;
@property(retain, nonatomic) MLNerdStatsPlaybackData *nerdStatsPlaybackData; // @synthesize nerdStatsPlaybackData=_nerdStatsPlaybackData;
@property(nonatomic) _Bool MDXPlaybackActive; // @synthesize MDXPlaybackActive=_MDXPlaybackActive;
@property(nonatomic) _Bool externalPlaybackActive; // @synthesize externalPlaybackActive=_externalPlaybackActive;
@property(nonatomic) long long videoControlsVisibility; // @synthesize videoControlsVisibility=_videoControlsVisibility;
@property(nonatomic) long long videoControlsBehavior; // @synthesize videoControlsBehavior=_videoControlsBehavior;
@property(nonatomic) _Bool foregroundAudioOnly; // @synthesize foregroundAudioOnly=_foregroundAudioOnly;
@property(nonatomic, getter=isUserScrubbing) _Bool userScrubbing; // @synthesize userScrubbing=_userScrubbing;
@property(nonatomic) _Bool hasNextVideo; // @synthesize hasNextVideo=_hasNextVideo;
@property(nonatomic) _Bool hasPreviousVideo; // @synthesize hasPreviousVideo=_hasPreviousVideo;
@property(nonatomic, getter=arePlaylistControlsHidden) _Bool playlistControlsHidden; // @synthesize playlistControlsHidden=_playlistControlsHidden;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)updateProductsInVideoOverlayVisibility;
- (void)updateProductsInVideoEntityIfNeeded;
- (void)maybeInitVideoZoom;
- (void)updateCardboardButtonsForNewActiveVideo;
- (void)setAdCtaViewWithPlayerData:(id)arg1;
- (void)updateVideoZoomControllerEnabled;
- (void)updatePlaybackButtonForEmptyState;
- (void)didPressOpenFullscreenEngagement:(id)arg1;
- (void)setAutonavController:(id)arg1;
- (void)removeCreatorEndscreenViewController;
- (void)removePaidContentViewController;
- (void)setCreatorEndscreenWithPlayerData:(id)arg1;
- (void)setAnnotationsWithPlayerData:(id)arg1;
- (void)setPaidContentWithPlayerData:(id)arg1;
- (void)adjustPlayerBarPositionForRelatedVideos;
- (void)updateRelatedVideos;
- (_Bool)shouldEnableRelatedVideos;
- (void)voiceOverStatusChanged;
- (id)voiceOverChangedNotificationName;
- (void)updateTopRightButtonAvailability;
- (void)updateChatOverlay;
- (id)chatButtonWithEnableImage:(id)arg1 disableImage:(id)arg2;
- (_Bool)canScrubForPlayerState:(long long)arg1;
- (_Bool)canDoubleTapForPlayerState:(long long)arg1;
- (_Bool)shouldShowScrubUserEducation;
- (void)updatePanGestureRecognizerEnabledForHiddenControls;
- (void)updateMagicWindowMidUIEduEnabled;
- (void)handleDidToggleAutoplayResponderEvent;
- (void)showSpinnerAfterDelay;
- (void)setNerdStatsOverlayVisible:(_Bool)arg1;
- (void)unloadNerdStatsOverlay;
- (void)loadNerdStatsOverlay;
- (void)updateThumbnailPlaceholderFromPlayerResponse;
- (long long)defaultVideoControlsVisibility;
- (long long)defaultVideoControlsBehavior;
- (_Bool)isFullscreen;
- (void)didTriggerInfoCardsWithActiveCard:(id)arg1;
- (void)setupInfoCardController;
- (void)initializeInteractionLogging;
- (void)didPressVarispeed:(id)arg1;
- (void)didPressSpinner:(id)arg1;
- (_Bool)shouldShowErrorBackground:(id)arg1;
- (void)clearCaptions;
@property(readonly, nonatomic, getter=isReadyToAnimate) _Bool readyToAnimate;
- (void)performVoidBlock:(CDUnknownBlockType)arg1;
- (void)animatePlayerControlsToHidden:(_Bool)arg1 animationDuration:(double)arg2 afterDelay:(double)arg3 withOptions:(unsigned long long)arg4;
@property(readonly, nonatomic) YTMainAppVideoPlayerOverlayView *videoPlayerOverlayView;
- (void)updateViewWithLayout;
- (_Bool)enlargeCaptionsInFullscreen;
- (_Bool)canHidePlayerControlsWithVoiceOver;
- (void)hideNerdStats;
@property(readonly, nonatomic) YTIPlayerOverflowRenderer *overflowRendererFromPlayerResponse;
@property(readonly, nonatomic) NSString *videoID;
- (_Bool)handleCommandEvent:(id)arg1;
- (void)resetAutoHideTimer;
- (void)hidePlayerControlsAnimated:(_Bool)arg1;
- (void)showPlayerControlsAnimated:(_Bool)arg1;
- (void)userDidStopScrubbing;
- (_Bool)shouldShowCenterControls;
- (_Bool)shouldShowBottomControls;
- (_Bool)shouldShowTopControls;
- (void)updateAccessibilityText;
- (void)updatePlayerControlsVisibility;
- (void)updateControlsVisibilityOnBackgroundTap;
- (void)updateControlsVisibilityOnDoubleTapToSeek;
- (void)snapZoomInitiallyZoomedDidChange;
- (void)miniPlayerDidClose;
- (void)updatePlaybackButtonSizeForHotConfig;
- (void)updateAutonavSwitchVisibility;
- (void)attachInteractionLoggingButtons;
- (_Bool)isCurrentVideoTrailer;
- (void)setTimestampMarkers:(id)arg1;
- (void)setChapters:(id)arg1;
- (void)macroMarkersController:(id)arg1 chapterTitleTapCommandDidChange:(id)arg2;
- (void)macroMarkersController:(id)arg1 activeTimestampMarkerDidChange:(id)arg2;
- (void)macroMarkersController:(id)arg1 activeChapterDidChange:(id)arg2;
- (void)macroMarkersController:(id)arg1 timestampMarkersDidChange:(id)arg2;
- (void)macroMarkersController:(id)arg1 chaptersDidChange:(id)arg2;
- (double)nextChapterStartTime;
- (double)previousChapterStartTime;
- (void)toggleClosedCaptions;
- (void)showSeekAnimationWithDirection:(long long)arg1;
- (void)toastControllerDidClearTemporaryToast:(id)arg1;
- (void)toastControllerDidBeginDisplayingTemporaryToast:(id)arg1;
- (void)removeClipMarkers;
- (void)setClipMarkersWithStartTime:(double)arg1 endTime:(double)arg2;
- (void)fullscreenEngagementController:(id)arg1 didTapOverflowButton:(id)arg2;
- (void)fullscreenEngagementController:(id)arg1 didTapCloseButton:(id)arg2;
- (void)view:(id)arg1 didChangeVisualState:(int)arg2;
- (void)updatePlayerControlsToAlwaysShow:(_Bool)arg1;
- (id)chapterTitleForTime:(double)arg1;
- (void)didToggleTimestampState;
- (_Bool)isCurrentVideoVerticallyCropped;
@property(nonatomic, getter=isCurrentVideoVertical) _Bool currentVideoVertical; // @synthesize currentVideoVertical=_currentVideoVertical;
- (void)didPressCardboardButton;
- (void)didPressPlayerBarReplay;
- (void)didSeekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)logChapterScrubEvent:(_Bool)arg1;
- (void)didScrubPlayerBarToTime:(double)arg1;
- (void)didPressPlayerBarNext;
- (void)didTogglePlayPause;
- (void)didPressLiveSync;
- (void)didPressToggleFullscreen;
- (void)didEndPlayerBarScrubbing;
- (void)didStartPlayerBarScrubbing;
- (void)videoZoomEnded;
- (void)videoZoomBegan;
- (void)setRenderingViewCustomFrame:(struct CGRect)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (_Bool)innerTubeCollectionViewShowsVerticalScrollIndicator;
- (id)innerTubeCollectionViewBackgroundColor;
- (int)innerTubeCollectionStatusViewStyle;
- (_Bool)doubleTapToSeekController:(id)arg1 shouldTrackTouch:(id)arg2;
- (id)doubleTapChapterInfoForTime:(double)arg1 interval:(double)arg2;
- (void)didEndDoubleTapToSeek;
- (void)willStartDoubleTapToSeek;
- (_Bool)canDoubleTapForCurrentPlayerState;
- (void)adjustableDecrementForView:(id)arg1;
- (void)adjustableIncrementForView:(id)arg1;
- (void)liveOfflineSlateViewController:(id)arg1 collapsedStateDidChangeTo:(_Bool)arg2;
- (void)liveOfflineSlateViewController:(id)arg1 willChangeToShowing:(_Bool)arg2 collapseBehavior:(long long)arg3;
- (void)relatedVideosControllerDidEndUserExpanding;
- (void)relatedVideosControllerDidBeginUserExpanding;
- (void)relatedVideosWillChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)didDeactivateEndscreen;
- (void)willActivateEndscreen;
- (void)hovercardHidden;
- (void)hovercardShown;
- (void)seekToEnd;
- (_Bool)shouldShowAutonavEndscreen;
- (_Bool)isMDXAutoplayEnabled;
- (_Bool)isMDXPlayback;
- (void)playerControlsBehaviorDidChange:(id)arg1;
- (void)playerControlsVisibilityDidChange:(id)arg1;
- (void)showEndscreenControlsInPlayerBar:(_Bool)arg1 nextButton:(_Bool)arg2 secondsLabel:(_Bool)arg3;
- (void)didHideAutonavEndscreen;
- (void)willShowAutonavEndscreen;
- (void)didPressPlay;
- (void)callToActionAnnotationStateDidUpdate:(int)arg1;
- (void)setFeaturedChannelWatermarkImageView:(id)arg1;
- (id)storyboardControllerDelegate;
@property(nonatomic, getter=isStoryboardEnabled) _Bool storyboardEnabled;
- (void)setVideoRect:(struct CGRect)arg1;
- (void)setActiveSingleVideo:(id)arg1;
- (void)playbackDidFinish;
- (void)setCreatorEndscreenVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPlayerBarCardboardButtonEnabled:(_Bool)arg1;
- (void)setPlayerHeartbeatEventCenter:(id)arg1;
- (void)setMarkers:(id)arg1;
- (_Bool)isContentPanAllowed;
- (id)seekAccessibilityLabelWhenButtonDidBecomeFocusedWithDirection:(long long)arg1;
- (void)showFirstTimeAutonavToggleEdu;
- (void)didToggleAutonavSwitch:(id)arg1;
- (void)didToggleAutoplay:(id)arg1 autonavSettingsState:(int)arg2;
- (void)didPressShare:(id)arg1;
- (void)didPressChat:(id)arg1;
- (void)didPressClosedCaptionsOnOverlay:(id)arg1;
- (void)didLongPressAddTo:(id)arg1;
- (void)didPressAddTo:(id)arg1;
- (void)didPressOverflow:(id)arg1;
- (void)didPressWatchCollapse:(id)arg1;
- (void)didPressSeekForwardAccessibility:(id)arg1;
- (void)didPressSeekBackwardAccessibility:(id)arg1;
- (void)didPressNext:(id)arg1;
- (void)didPressPrevious:(id)arg1;
- (void)didPressReplay:(id)arg1;
- (void)didPressPause:(id)arg1;
- (void)didPressPlay:(id)arg1;
- (void)nerdStatsOverlayViewControllerDidTapCopyDebugInfo:(id)arg1;
- (void)nerdStatsOverlayViewControllerDidTapClose:(id)arg1;
- (void)captionTrackSwitchDidSelectCaptionTrack:(id)arg1;
- (void)audioTrackDidChange:(id)arg1;
- (void)hotConfigDidChange:(id)arg1;
- (void)valueDidChangeForKey:(id)arg1;
- (void)playbackRouteButtonWillShowPromotion;
- (void)playbackRouteButtonVisibilityDidChange;
- (void)offlineModeDidChange;
- (void)videoQualitySwitchControllerStatusDidChange:(id)arg1;
- (void)drawerDidClose;
- (void)drawerWillClose;
- (void)drawerDidOpen;
- (void)drawerWillOpen;
- (void)didPressNerdStats:(id)arg1;
- (void)didPressCardboard:(id)arg1;
- (void)didPressAudioTrackSwitch:(id)arg1;
- (void)didPressVideoQuality:(id)arg1;
- (void)overflowMenuWillDismiss;
- (void)didPressCloseOverflowMenu:(id)arg1;
- (void)didPressReportIssue:(id)arg1;
- (void)didPressClosedCaptions:(id)arg1;
- (_Bool)infoCardActive;
- (id)infoCardLabelText;
- (_Bool)isInfoCardAvailable;
- (_Bool)isAutonavOn;
- (id)selectedVarispeedLabelText;
- (id)selectedCaptionsLabelText;
- (id)selectedVideoQualityLabelText;
- (_Bool)overflowMenuShouldHaveShare;
- (_Bool)overflowMenuShouldHaveWatchLater;
@property(readonly, nonatomic) _Bool isVarispeedAvailable;
- (_Bool)isNerdStatsAvailable;
- (_Bool)isCardboardHidden;
- (id)selectedAudioTrack;
- (id)smallScreenAnimationTimingFunction;
- (double)smallScreenAnimationDuration;
- (void)upForFullControllerDidFinishGesture:(id)arg1;
- (void)upForFullController:(id)arg1 setRenderingViewCustomTranslation:(struct CGPoint)arg2 customScale:(double)arg3 animated:(_Bool)arg4 duration:(double)arg5;
- (void)upForFullControllerDidBeginGesture:(id)arg1;
- (_Bool)upForFullControllerShouldBeginGesture:(id)arg1;
- (void)downAndOutControllerDidFinishGesture:(id)arg1;
- (void)downAndOutController:(id)arg1 setPlayerBackgroundColor:(id)arg2;
- (void)downAndOutController:(id)arg1 setRenderingViewCustomTranslation:(struct CGPoint)arg2 customScale:(double)arg3 animated:(_Bool)arg4 duration:(double)arg5;
- (void)downAndOutControllerDidBeginGesture:(id)arg1;
- (_Bool)downAndOutControllerShouldBeginGesture:(id)arg1;
- (long long)statusBarOrientation;
- (void)setPlaybackInSyncWithLivePlayhead:(_Bool)arg1;
- (void)setAirPlayAllowed:(_Bool)arg1;
- (void)setMinimumSeekableTime:(double)arg1 maximumSeekableTime:(double)arg2;
- (_Bool)shouldStartDragDrop;
- (struct CGRect)playerRenderingViewCustomFrameForFullscreenSize:(struct CGSize)arg1;
- (void)setTitle:(id)arg1;
- (void)startCountdownIfEndscreenActive;
- (_Bool)isAutonavEndscreenReady;
- (_Bool)isAutonavEndscreenActivated;
- (void)didTapBackground:(id)arg1;
- (void)updateVisibilityGate:(_Bool)arg1;
- (void)playerControlsWillShow;
- (void)playerControlsDidShow;
- (void)playerControlsWillHide;
- (void)playerControlsDidHide;
- (void)setForegroundAudioOnlyPlaybackState:(_Bool)arg1;
- (void)resetInteractionLogging;
- (void)setCaptionError:(id)arg1;
- (void)setCaptionViewController:(id)arg1;
- (void)setAvailableCaptionTracks:(id)arg1;
- (void)updateSuggestedActionsEnabled;
- (_Bool)shouldShowCaptions;
- (void)updateCaptionsVisibility;
- (void)setActiveCaptionTrack:(id)arg1;
- (void)updateVideoControlsVisibility;
- (void)updateVideoControlsBehavior;
- (void)resetPlaceholder;
- (void)setExternalPlaybackLabel:(id)arg1;
- (void)setRemoteScreenName:(id)arg1;
- (void)handleError:(id)arg1;
- (void)displayError:(id)arg1;
- (void)playerDidFailWithError:(id)arg1;
- (void)playerStateDidChangeToState:(long long)arg1;
- (void)resetAndShowLoading:(_Bool)arg1;
- (void)updateOverflowMenu;
- (void)setInitialChatStateForResponse:(id)arg1 chatButton:(id)arg2;
- (void)setWatchNextResponse:(id)arg1;
- (void)setPlayerResponse:(id)arg1 CPN:(id)arg2;
- (void)setExpansionCoefficient:(double)arg1;
- (void)setMediaTimeForEndscreen:(double)arg1;
- (void)removeSplashScreenViewIfPlayerIsLoaded:(long long)arg1;
- (void)setPlayerRenderingViewCustomFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setSplashScreenViewCustomFrame:(struct CGRect)arg1;
- (void)setSplashScreenView:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
