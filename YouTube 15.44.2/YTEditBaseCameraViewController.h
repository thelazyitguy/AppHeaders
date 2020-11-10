//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

#import <Module_Framework/UINavigationControllerDelegate-Protocol.h>
#import <Module_Framework/YTEditCameraControllerDelegate-Protocol.h>
#import <Module_Framework/YTEditCameraFocusViewDelegate-Protocol.h>
#import <Module_Framework/YTEditCameraZoomViewDelegate-Protocol.h>
#import <Module_Framework/YTGraftingViewController-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class GIMMe, NSObject, NSString, UIButton, YTEditCameraAsset, YTEditCameraController, YTEditCameraFlashViewController, YTEditCameraNavigationBarViewController, YTEditCameraRecordButtonViewController, YTEditCameraSwitchButton, YTEditCameraViewControllerView, YTICommand, YTInteractionLoggingProxyButton;
@protocol OS_dispatch_queue, YTCameraProfile, YTEditCameraViewControllerDelegate, YTResponder;

@interface YTEditBaseCameraViewController : YTStyledViewController <UINavigationControllerDelegate, YTEditCameraFocusViewDelegate, YTEditCameraZoomViewDelegate, YTSystemNotificationsObserver, YTEditCameraControllerDelegate, YTGraftingViewController>
{
    _Bool _shouldResumeBackgroundActive;
    YTEditCameraAsset *_assetToPush;
    YTInteractionLoggingProxyButton *_editCameraComponent;
    YTInteractionLoggingProxyButton *_uploadVideoCapturePreviewButton;
    NSObject<OS_dispatch_queue> *_fileOperationQueue;
    _Bool _active;
    int _uploadType;
    id <YTResponder> _parentResponder;
    id <YTCameraProfile> _cameraProfile;
    double _timeLimit;
    UIButton *_flashButton;
    YTEditCameraSwitchButton *_cameraSwitchButton;
    YTEditCameraNavigationBarViewController *_cameraNavigationBarViewController;
    YTEditCameraRecordButtonViewController *_cameraRecordButtonViewController;
    YTEditCameraFlashViewController *_cameraFlashViewController;
    id <YTEditCameraViewControllerDelegate> _delegate;
    YTICommand *_model;
    YTEditCameraController *_cameraController;
}

- (void).cxx_destruct;
@property(nonatomic) int uploadType; // @synthesize uploadType=_uploadType;
@property(retain, nonatomic) YTEditCameraController *cameraController; // @synthesize cameraController=_cameraController;
@property(retain, nonatomic) YTICommand *model; // @synthesize model=_model;
@property(nonatomic) __weak id <YTEditCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTEditCameraFlashViewController *cameraFlashViewController; // @synthesize cameraFlashViewController=_cameraFlashViewController;
@property(retain, nonatomic) YTEditCameraRecordButtonViewController *cameraRecordButtonViewController; // @synthesize cameraRecordButtonViewController=_cameraRecordButtonViewController;
@property(retain, nonatomic) YTEditCameraNavigationBarViewController *cameraNavigationBarViewController; // @synthesize cameraNavigationBarViewController=_cameraNavigationBarViewController;
@property(retain, nonatomic) YTEditCameraSwitchButton *cameraSwitchButton; // @synthesize cameraSwitchButton=_cameraSwitchButton;
@property(retain, nonatomic) UIButton *flashButton; // @synthesize flashButton=_flashButton;
@property(nonatomic) double timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) id <YTCameraProfile> cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (id)parentResponder;
- (CDUnknownBlockType)clientDataBlock;
- (void)pushEditorWithCameraAsset:(id)arg1;
- (_Bool)inForeground;
- (void)performOnMainIfNeeded:(CDUnknownBlockType)arg1;
- (id)navEndpoint;
- (void)cameraZoomedWithGesture:(int)arg1;
- (void)cameraZoomView:(id)arg1 didChangeVideoZoomFactor:(double)arg2;
- (void)subjectAreaDidChange;
- (void)recordingInterrupted;
- (void)recordingEnded;
- (void)recordingEndedWithCameraAsset:(id)arg1;
- (void)recordingBegan;
- (void)couldNotRecordWithError:(id)arg1;
- (void)captureSessionChanged;
- (void)captureSessionStarted;
- (unsigned long long)recordingSpaceAvailable;
- (void)didDoubleTapFocusView:(id)arg1;
- (void)cameraFocusView:(id)arg1 continuousFocusAtPoint:(struct CGPoint)arg2;
- (void)cameraFocusView:(id)arg1 autoFocusAtPoint:(struct CGPoint)arg2;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)removeFileAtURL:(id)arg1;
- (void)cleanupTemporaryCameraAssetsWithBlock:(CDUnknownBlockType)arg1;
- (void)resetCameraSession;
- (void)setRecordingAnalysis:(long long)arg1;
- (void)didBeginRecording;
- (void)updateCameraSwitchState;
- (_Bool)shouldPushCameraAsset:(id)arg1;
- (void)toggleCamera;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
- (_Bool)inCancelledDismiss;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 cameraProfile:(id)arg2 performanceFixesEnabled:(_Bool)arg3;
- (id)initWithParentResponder:(id)arg1 cameraProfile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTEditCameraViewControllerView *view; // @dynamic view;

@end

