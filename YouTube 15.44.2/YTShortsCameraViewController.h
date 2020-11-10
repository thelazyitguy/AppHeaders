//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTEditSheetControllerDelegate-Protocol.h"
#import "YTShortsAudioIngestionHandler-Protocol.h"
#import "YTShortsAudioPickerViewControllerDelegate-Protocol.h"
#import "YTShortsAudioScrubberViewControllerDelegate-Protocol.h"
#import "YTShortsCameraGestureManagerDelegate-Protocol.h"
#import "YTShortsCameraRecordingButtonViewControllerDelegate-Protocol.h"
#import "YTShortsCameraTimerDelegate-Protocol.h"
#import "YTShortsCameraTimerViewControllerDelegate-Protocol.h"
#import "YTShortsCameraZoomSliderViewControllerDelegate-Protocol.h"
#import "YTShortsGalleryCollectionViewControllerDelegate-Protocol.h"
#import "YTShortsPermissionsViewControllerDelegate-Protocol.h"
#import "YTShortsProjectStateLoadObserver-Protocol.h"
#import "YTShortsViewControllerTransition-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"
#import "YTTopController-Protocol.h"

@class GIMMe, GPCPromise, NSString, UIImage, YTCommandResponderEvent, YTEditFeatureUISheetController, YTICommand, YTISfvAudioItemSelectCommand_AudioItemDisplayData, YTShortsAudioDownloader, YTShortsAudioModel, YTShortsAudioPickerViewController, YTShortsCameraController, YTShortsCameraGestureManager, YTShortsCameraRecordingButtonViewController, YTShortsCameraRecordingFlowController, YTShortsCameraSyncAudioPlayer, YTShortsCameraTimerController, YTShortsCameraViewModel, YTShortsCameraZoomSliderViewController, YTShortsCompositionController, YTShortsGalleryCollectionViewController, YTShortsInteractionLoggingController, YTShortsProjectState;
@protocol YTResponder, YTShortsCameraViewControllerDelegate, YTShortsTransitionCreationContext;

@interface YTShortsCameraViewController : UIViewController <YTShortsViewControllerTransition, YTTopController, YTShortsAudioPickerViewControllerDelegate, YTShortsGalleryCollectionViewControllerDelegate, YTShortsPermissionsViewControllerDelegate, YTShortsCameraRecordingButtonViewControllerDelegate, YTSystemNotificationsObserver, YTShortsCameraTimerDelegate, YTShortsCameraTimerViewControllerDelegate, YTShortsAudioScrubberViewControllerDelegate, YTShortsCameraZoomSliderViewControllerDelegate, YTEditSheetControllerDelegate, YTShortsAudioIngestionHandler, YTShortsCameraGestureManagerDelegate, YTShortsProjectStateLoadObserver>
{
    YTShortsCameraController *_cameraController;
    YTShortsCameraRecordingFlowController *_recordingFlowController;
    YTShortsInteractionLoggingController *_interactionLoggingController;
    YTShortsCameraZoomSliderViewController *_zoomSliderViewController;
    YTShortsProjectState *_activeProjectState;
    GPCPromise *_queuedCameraAssetReadyPromise;
    YTEditFeatureUISheetController *_cameraTimerSheetController;
    YTShortsCameraTimerController *_timerController;
    YTShortsAudioModel *_audioModel;
    YTShortsAudioPickerViewController *_pickerViewController;
    _Bool _hasLoggedNewScreen;
    UIViewController *_overlayViewController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTShortsCameraViewControllerDelegate> _delegate;
    YTICommand *_model;
    YTShortsCameraViewModel *_viewModel;
    YTShortsCompositionController *_compositionController;
    YTShortsCameraRecordingButtonViewController *_recordingButtonViewController;
    YTShortsCameraGestureManager *_gestureManager;
    YTShortsGalleryCollectionViewController *_galleryViewController;
    YTShortsAudioDownloader *_audioDownloader;
    YTShortsCameraSyncAudioPlayer *_audioPlayer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTShortsCameraSyncAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(readonly, nonatomic) YTShortsAudioDownloader *audioDownloader; // @synthesize audioDownloader=_audioDownloader;
@property(readonly, nonatomic) YTShortsGalleryCollectionViewController *galleryViewController; // @synthesize galleryViewController=_galleryViewController;
@property(readonly, nonatomic) YTShortsCameraGestureManager *gestureManager; // @synthesize gestureManager=_gestureManager;
@property(readonly, nonatomic) YTShortsCameraRecordingButtonViewController *recordingButtonViewController; // @synthesize recordingButtonViewController=_recordingButtonViewController;
@property(readonly, nonatomic) YTShortsCompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property(readonly, nonatomic) YTShortsCameraViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) YTICommand *model; // @synthesize model=_model;
@property(nonatomic) __weak id <YTShortsCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @dynamic parentResponder;
- (void)zoomSliderControllerTimeoutFired:(id)arg1;
- (void)zoomSliderControllerSliderInteractionEnded:(id)arg1;
- (void)zoomSliderControllerZoomLevelUpdated:(id)arg1;
- (void)scrubberViewController:(id)arg1 didCloseWithSelectedTimeRange:(CDStruct_e83c9415)arg2;
- (void)scrubberViewControllerWillClose:(id)arg1;
- (id)segmentMetadataWithCountdownDuration:(double)arg1;
- (void)cameraTimerController:(id)arg1 recordingTimerDidEnd:(_Bool)arg2;
- (void)cameraTimerCountdownDidFinish:(id)arg1;
- (void)cameraTimer:(id)arg1 countdownDidUpdate:(double)arg2;
- (void)cameraTimerCountdownCancelled:(id)arg1;
- (void)cameraTimer:(id)arg1 countdownDidBegin:(double)arg2;
- (void)cameraTimerViewControllerDidTapStart:(double)arg1 recordingDuration:(double)arg2;
- (void)galleryCollectionView:(id)arg1 didChooseAsset:(id)arg2 navigationCommand:(id)arg3;
- (void)galleryCollectionView:(id)arg1 didRequestDismissWithNavigationCommand:(id)arg2;
- (void)projectStateDidLoad:(id)arg1 fromDisk:(_Bool)arg2;
- (void)projectStateWillLoadFromDisk;
- (void)sheetControllerDidDismiss:(id)arg1;
- (void)sheetControllerWillDismiss:(id)arg1;
- (id)segmentsMillisForComposition:(id)arg1 recordingEndMillis:(unsigned long long)arg2;
- (id)segmentsMillisForComposition:(id)arg1;
- (void)handleCompositionUpdate:(id)arg1;
- (void)compositionAssetUpdateFailed:(id)arg1 withError:(id)arg2;
- (void)compositionAssetDidUpdate:(id)arg1;
- (void)gestureManager:(id)arg1 didPinch:(double)arg2;
- (void)gestureManagerDidDoubleTapScreen:(id)arg1;
- (void)gestureManager:(id)arg1 didTapLocation:(struct CGPoint)arg2;
- (void)recordingFlowController:(id)arg1 failedToGenerateCameraAsset:(id)arg2;
- (void)recordingFlowController:(id)arg1 cameraAssetAvailable:(id)arg2;
- (void)recordingFlowController:(id)arg1 recordingWasInterrupted:(id)arg2;
- (void)recordingFlowControllerDidEndRecording:(id)arg1;
- (void)recordingFlowController:(id)arg1 stopRecordingFailed:(id)arg2;
- (void)recordingFlowControllerWillEndRecording:(id)arg1;
- (void)recordingFlowController:(id)arg1 recordingDidUpdate:(CDStruct_1b6d18a9)arg2 totalDuration:(CDStruct_1b6d18a9)arg3;
- (void)recordingFlowController:(id)arg1 recordingFailedToStart:(id)arg2;
- (void)recordingFlowControllerDidBeginRecording:(id)arg1;
- (void)recordingFlowControllerWillBeginRecording:(id)arg1;
- (void)cameraRecordingButtonControllerDidCancelTimer:(id)arg1;
- (void)cameraRecordingButtonController:(id)arg1 didDragVertically:(double)arg2;
- (void)cameraRecordingButtonControllerRecordingStateEnded:(id)arg1;
- (void)cameraRecordingButtonControllerRecordingStateWillEnterHandsFree:(id)arg1;
- (void)cameraRecordingButtonControllerRecordingStateBegan:(id)arg1;
- (void)cameraRecordingButtonControllerStateDidChange:(id)arg1;
- (void)shortsPermissionsViewController:(id)arg1 didRequestDismissWithNavigationCommand:(id)arg2;
- (void)setAudioModel:(id)arg1;
- (void)setUpAudioPlayer:(id)arg1;
- (void)didLoadAudioAsset:(id)arg1;
- (void)loadAudioWithVideoID:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 playerParams:(id)arg3 audioItemDisplayData:(id)arg4 sender:(id)arg5;
- (void)audioPickerViewController:(id)arg1 requestDismissalWithNavigationCommand:(id)arg2 didSelectTrack:(_Bool)arg3;
- (void)audioPickerViewController:(id)arg1 didSelectVideoWithID:(id)arg2 audioItemDisplayData:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 playerParams:(id)arg5;
- (void)handleShowAudioScrubber:(id)arg1;
- (void)handleUpdateInteractionLogging;
- (void)handleToggleSpeedControls;
- (void)handlePreviewLastFrameAction;
- (void)handleShowGallery:(id)arg1;
- (void)handleFlipCameraAction;
- (void)handleShowRecordingTimer:(id)arg1;
- (void)handleRemoveAudioAction;
- (void)handleShowAudioPicker:(id)arg1;
- (void)handleRecordingRateUpdate;
- (void)handleRedoAction;
- (void)handleUndoAction;
- (void)handleContinueToEditorAction:(id)arg1;
- (void)handleDismissAction:(id)arg1;
- (void)handleAction:(long long)arg1 forVisualElement:(id)arg2;
- (void)setAudioItemDisplayData:(id)arg1;
@property(readonly, nonatomic) YTISfvAudioItemSelectCommand_AudioItemDisplayData *audioItemDisplayData;
- (void)logScreen;
- (void)updateZoomSlider;
- (void)cancelPendingTimerAction;
- (id)recordingButtonView;
- (void)setAllCameraGesturesEnabled:(_Bool)arg1;
- (void)resetRecordingButton;
- (void)resolveQueuedCameraAssetPromise;
- (void)recordingFailedToWriteToDisk:(id)arg1;
- (void)recordingDidFinishWriting:(id)arg1;
- (void)recordingDidEnd:(_Bool)arg1;
- (void)updateGalleryThumbnail;
- (void)showCameraPermissionViewControllerAnimated:(_Bool)arg1 navigationCommand:(id)arg2;
- (void)showGalleryViewController:(id)arg1;
@property(readonly, nonatomic) _Bool isShowingGallery;
- (void)setupGalleryViewController;
- (id)navigationCommandForVisualElement:(id)arg1;
- (void)presentAudioTracksBrowseViewControllerWithNavigationCommand:(id)arg1;
- (void)dismissOverlayViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentOverlayViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCameraActive:(_Bool)arg1;
- (void)clearRedoStack;
- (void)resetViewModel;
@property(readonly, nonatomic) UIImage *cameraAssetPreviewImage;
- (id)cameraAssetComposition;
@property(readonly, nonatomic) GPCPromise *cameraAssetPromise;
- (void)showGalleryViewControllerAnimated:(_Bool)arg1 navigationCommand:(id)arg2;
- (void)reset;
@property(readonly, nonatomic) id <YTShortsTransitionCreationContext> creationContext;
- (void)voiceOverStatusDidChange:(_Bool)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;
- (void)relogScreen;
- (id)navEndpoint;
- (void)transitionWillPresentViewController:(id)arg1 animated:(_Bool)arg2 transitionHost:(id)arg3;
- (void)transitionWillDismissViewController:(id)arg1 animated:(_Bool)arg2 transitionHost:(id)arg3;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

