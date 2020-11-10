//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTShortsCameraTimerDelegate-Protocol.h"

@class GIMMe, GPCPromise, NSArray, NSObject, NSString, UIButton, UILabel, UITapGestureRecognizer, UIViewPropertyAnimator, YTColorPalette, YTEditFocusIndicatorView, YTEditOverlayButton, YTInteractionLoggingProxyButton, YTShortsAudioEntryButton, YTShortsCameraCountdownView, YTShortsCameraGradientView, YTShortsCameraRecordingProgressBar, YTShortsCameraSpeedControl, YTShortsCameraViewfinderView, YTShortsCameraZoomSlider, YTShortsScrimView, YTTimedAction;
@protocol YTEditAVComposition, YTInteractionLoggingButtonProtocol, YTResponder, YTShortsCameraViewModel, YTShortsLoggingProxy;

@interface YTShortsCameraViewControllerView : UIView <YTShortsCameraTimerDelegate>
{
    NSObject<YTResponder> *_parentResponder;
    YTShortsCameraGradientView *_gradientOverlay;
    UILabel *_speedControlDisplayTitle;
    YTTimedAction *_speedControlTitleTimedAction;
    YTTimedAction *_zoomSliderTimedAction;
    YTEditFocusIndicatorView *_focusIndicatorView;
    id <YTEditAVComposition> _composition;
    UITapGestureRecognizer *_audioSyncGestureRecognizer;
    _Bool _isAudioScrubberButtonEnabled;
    GPCPromise *_lastFramePromise;
    GIMMe *_gimme;
    id <YTShortsCameraViewModel> _model;
    CDUnknownBlockType _cameraActionHandler;
    YTShortsCameraViewfinderView *_viewfinderView;
    UIView *_overlayView;
    YTShortsCameraRecordingProgressBar *_progressBar;
    UIView<YTShortsLoggingProxy> *_recordingButton;
    YTShortsCameraZoomSlider *_zoomSlider;
    UIViewPropertyAnimator *_viewAnimator;
    YTEditOverlayButton *_cameraDismissButton;
    YTEditOverlayButton *_overlayDismissButton;
    UIButton *_nextButton;
    YTEditOverlayButton *_filterButton;
    YTEditOverlayButton *_effectsButton;
    YTEditOverlayButton *_flashButton;
    YTEditOverlayButton *_speedControlsButton;
    YTEditOverlayButton *_timerControlsButton;
    YTEditOverlayButton *_overlayLastFrameButton;
    YTShortsAudioEntryButton *_audioEntryButton;
    YTEditOverlayButton *_redoButton;
    YTEditOverlayButton *_switchCameraButton;
    YTEditOverlayButton *_galleryButton;
    YTEditOverlayButton *_audioScrubberButton;
    UIButton *_undoButton;
    YTShortsCameraCountdownView *_countdownView;
    YTShortsCameraSpeedControl *_speedControl;
    YTShortsScrimView *_scrimView;
    YTInteractionLoggingProxyButton *_disabledNextButtonProxy;
    YTInteractionLoggingProxyButton *_autoAdvanceToEditorProxy;
    YTInteractionLoggingProxyButton *_tapToFocusProxy;
    YTInteractionLoggingProxyButton *_zoomGestureProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTInteractionLoggingProxyButton *zoomGestureProxy; // @synthesize zoomGestureProxy=_zoomGestureProxy;
@property(retain, nonatomic) YTInteractionLoggingProxyButton *tapToFocusProxy; // @synthesize tapToFocusProxy=_tapToFocusProxy;
@property(retain, nonatomic) YTInteractionLoggingProxyButton *autoAdvanceToEditorProxy; // @synthesize autoAdvanceToEditorProxy=_autoAdvanceToEditorProxy;
@property(retain, nonatomic) YTInteractionLoggingProxyButton *disabledNextButtonProxy; // @synthesize disabledNextButtonProxy=_disabledNextButtonProxy;
@property(readonly, nonatomic) YTShortsScrimView *scrimView; // @synthesize scrimView=_scrimView;
@property(readonly, nonatomic) YTShortsCameraSpeedControl *speedControl; // @synthesize speedControl=_speedControl;
@property(readonly, nonatomic) YTShortsCameraCountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(readonly, nonatomic) UIButton *undoButton; // @synthesize undoButton=_undoButton;
@property(readonly, nonatomic) YTEditOverlayButton *audioScrubberButton; // @synthesize audioScrubberButton=_audioScrubberButton;
@property(readonly, nonatomic) YTEditOverlayButton *galleryButton; // @synthesize galleryButton=_galleryButton;
@property(readonly, nonatomic) YTEditOverlayButton *switchCameraButton; // @synthesize switchCameraButton=_switchCameraButton;
@property(readonly, nonatomic) YTEditOverlayButton *redoButton; // @synthesize redoButton=_redoButton;
@property(readonly, nonatomic) YTShortsAudioEntryButton *audioEntryButton; // @synthesize audioEntryButton=_audioEntryButton;
@property(readonly, nonatomic) YTEditOverlayButton *overlayLastFrameButton; // @synthesize overlayLastFrameButton=_overlayLastFrameButton;
@property(readonly, nonatomic) YTEditOverlayButton *timerControlsButton; // @synthesize timerControlsButton=_timerControlsButton;
@property(readonly, nonatomic) YTEditOverlayButton *speedControlsButton; // @synthesize speedControlsButton=_speedControlsButton;
@property(readonly, nonatomic) YTEditOverlayButton *flashButton; // @synthesize flashButton=_flashButton;
@property(readonly, nonatomic) YTEditOverlayButton *effectsButton; // @synthesize effectsButton=_effectsButton;
@property(readonly, nonatomic) YTEditOverlayButton *filterButton; // @synthesize filterButton=_filterButton;
@property(readonly, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(readonly, nonatomic) YTEditOverlayButton *overlayDismissButton; // @synthesize overlayDismissButton=_overlayDismissButton;
@property(readonly, nonatomic) YTEditOverlayButton *cameraDismissButton; // @synthesize cameraDismissButton=_cameraDismissButton;
@property(retain, nonatomic) UIViewPropertyAnimator *viewAnimator; // @synthesize viewAnimator=_viewAnimator;
@property(retain, nonatomic) YTShortsCameraZoomSlider *zoomSlider; // @synthesize zoomSlider=_zoomSlider;
@property(retain, nonatomic) UIView<YTShortsLoggingProxy> *recordingButton; // @synthesize recordingButton=_recordingButton;
@property(readonly, nonatomic) YTShortsCameraRecordingProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) YTShortsCameraViewfinderView *viewfinderView; // @synthesize viewfinderView=_viewfinderView;
@property(copy, nonatomic) CDUnknownBlockType cameraActionHandler; // @synthesize cameraActionHandler=_cameraActionHandler;
@property(retain, nonatomic) id <YTShortsCameraViewModel> model; // @synthesize model=_model;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)removeCountdownView;
- (void)cameraTimerController:(id)arg1 recordingTimerDidEnd:(_Bool)arg2;
- (void)cameraTimerCountdownDidFinish:(id)arg1;
- (void)cameraTimer:(id)arg1 countdownDidUpdate:(double)arg2;
- (void)cameraTimerCountdownCancelled:(id)arg1;
- (void)cameraTimer:(id)arg1 countdownDidBegin:(double)arg2;
- (void)setUpFadeOutEffectForDisplayTitle;
- (void)setUpFadeInEffectForDisplayTitle;
@property(readonly, nonatomic) YTColorPalette *colorPalette;
- (void)setUpCountdownView;
- (void)setUpSpeedControlDisplayTitle;
- (void)setUpProgressBar;
- (void)setUpCameraViewfinder;
- (void)updateSpeedControls:(id)arg1 animated:(_Bool)arg2;
- (void)updateLastFrameOverlayImage:(id)arg1;
- (void)updateLastFrameOverlayVisibility:(id)arg1;
- (void)updateZoomSlider:(id)arg1;
- (void)updateProgressBarFromModel:(id)arg1 animated:(_Bool)arg2;
- (void)updateButtonStatesForModel:(id)arg1 animated:(_Bool)arg2;
- (void)updateButtonStatesForModel:(id)arg1;
- (void)updateScrimStateForMode:(id)arg1 animated:(_Bool)arg2;
- (void)setAudioItemDisplayData:(id)arg1;
- (_Bool)updateVisibleViewsFromOldModel:(id)arg1 animated:(_Bool)arg2;
- (void)modelDidChange:(id)arg1 animated:(_Bool)arg2;
- (void)updateViewDisplayOrder;
- (void)updateInteractionLogging;
- (void)speedControlValueDidChange:(id)arg1;
- (id)visualElementForControl:(id)arg1;
- (long long)actionForControl:(id)arg1;
- (void)didTapButton:(id)arg1;
- (void)setSpeedControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (id)generateDismissButton;
- (id)accessibilityElements;
- (void)layoutAudioEntryButton;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (void)appDidBecomeActive;
- (void)deselectTimerControl;
- (void)cancelTapToFocusAnimation;
- (void)showTapToFocusIndicatorAtPoint:(struct CGPoint)arg1;
- (void)performFlipCameraAnimation;
- (void)dismissOverlayViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentOverlayView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reset;
- (void)setGalleryThumbnailImage:(id)arg1;
@property(readonly, nonatomic) double recordingRate;
- (void)setModel:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 parentResponder:(id)arg2;
- (id)accessibilityElementsForOverlay;
- (id)accessibilityElementsForCamera;
- (id)accessibilityElementsInState:(id)arg1;
@property(readonly, nonatomic) NSArray *visibleLoggingElements;
- (_Bool)isRedoButtonVisibleInState:(id)arg1;
- (_Bool)isAudioScrubberButtonVisibleInState:(id)arg1;
- (_Bool)isOverlayButtonVisibleInState:(id)arg1;
- (_Bool)isToolButtonVisibleInState:(id)arg1;
- (_Bool)isSpeedControlVisibleInState:(id)arg1;
- (_Bool)isZoomSliderVisibleInState:(id)arg1;
- (_Bool)isUndoButtonVisibleInState:(id)arg1;
- (_Bool)isNextButtonVisibleInState:(id)arg1;
- (_Bool)isGalleryButtonVisibleInState:(id)arg1;
- (_Bool)isRecordingButtonVisibleInState:(id)arg1;
- (_Bool)isSwitchCameraButtonVisibleInState:(id)arg1;
- (_Bool)isAudioEntryButtonVisibleInState:(id)arg1;
- (_Bool)isProgressBarVisibleInState:(id)arg1;
- (_Bool)isCameraDismissButtonVisibleInState:(id)arg1;
- (id)hiddenToolbeltButtonsForModel:(id)arg1;
- (id)toolbeltButtonsForModel:(id)arg1;
- (id)newToolbeltButtonsFromModel:(id)arg1 toModel:(id)arg2;
- (void)layoutToolbeltButton:(id)arg1 belowView:(id)arg2;
- (void)layoutToolbeltButtons:(id)arg1 belowView:(id)arg2;
- (id)hiddenViewsFromModel:(id)arg1;
- (id)visibleViewsFromModel:(id)arg1;
- (id)viewsToHideFromCurrentModel:(id)arg1 toNewModel:(id)arg2;
- (id)viewsToShowFromCurrentModel:(id)arg1 toNewModel:(id)arg2;
- (_Bool)performViewUpdatesFromModelChange:(id)arg1 toNewModel:(id)arg2 animated:(_Bool)arg3;
- (void)performViewUpdates:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performViewUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performViewUpdates:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <YTInteractionLoggingButtonProtocol> permissionsDismissButton; // @dynamic permissionsDismissButton;
@property(readonly) Class superclass;

@end

