//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GOOAlertViewDelegate-Protocol.h"
#import "YTEditPlayerViewControllerDelegate-Protocol.h"
#import "YTEditTrimControllerDelegate-Protocol.h"
#import "YTShortsTrimViewControllerProtocol-Protocol.h"

@class GIMMe, GPCPromise, NSString, UIImage, YTCommandResponderEvent, YTEditCameraAsset, YTEditCameraAssetComposition, YTEditPlayerViewController, YTEditTrimController, YTICommand, YTInteractionLoggingProxyButton, YTShortsDeprecatedTrimViewControllerView, YTShortsTrimAssetExporter, YTShortsTrimAssetExporterOutputOptions, YTShortsTrimPhotoLibraryAsset;
@protocol YTResponder, YTShortsTrimViewControllerDelegate;

@interface YTShortsDeprecatedTrimViewController : UIViewController <GOOAlertViewDelegate, YTEditTrimControllerDelegate, YTEditPlayerViewControllerDelegate, YTShortsTrimViewControllerProtocol>
{
    YTICommand *_model;
    YTEditPlayerViewController *_playerViewController;
    YTEditTrimController *_trimController;
    _Bool _playingWhenInteractionBegan;
    YTShortsTrimAssetExporter *_exporter;
    _Bool _letterboxingEnabled;
    _Bool _shouldRouteShortVideoToEditor;
    GPCPromise *_exportPromise;
    YTEditCameraAssetComposition *_exportedAssetComposition;
    UIImage *_exportedPreviewImage;
    YTInteractionLoggingProxyButton *_leftTrimHandleProxyButton;
    YTInteractionLoggingProxyButton *_rightTrimHandleProxyButton;
    YTInteractionLoggingProxyButton *_playheadProxyButton;
    YTInteractionLoggingProxyButton *_playPauseProxyButton;
    id <YTResponder> _parentResponder;
    id <YTShortsTrimViewControllerDelegate> _delegate;
    GIMMe *_gimme;
    YTShortsTrimAssetExporterOutputOptions *_exporterOutputOptions;
    YTEditCameraAsset *_cameraAsset;
    YTShortsTrimPhotoLibraryAsset *_photoLibraryAsset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTShortsTrimPhotoLibraryAsset *photoLibraryAsset; // @synthesize photoLibraryAsset=_photoLibraryAsset;
@property(retain, nonatomic) YTEditCameraAsset *cameraAsset; // @synthesize cameraAsset=_cameraAsset;
@property(retain, nonatomic) YTShortsTrimAssetExporterOutputOptions *exporterOutputOptions; // @synthesize exporterOutputOptions=_exporterOutputOptions;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTShortsTrimViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)uploadModelWithCameraAsset:(id)arg1;
- (id)uploadInstructionsWithCameraAsset:(id)arg1;
- (void)playerDidPressPause:(id)arg1;
- (void)playerDidPressResume:(id)arg1;
- (void)playerPlayheadDidEndScrubbing:(id)arg1;
- (void)playerDidRenderFirstFrame:(id)arg1;
- (void)currentTimeChanged:(CDStruct_1b6d18a9)arg1;
- (void)didEndTrimInteraction:(unsigned long long)arg1;
- (void)didBeginTrimInteraction:(unsigned long long)arg1;
- (void)didUpdateTimeRange:(CDStruct_e83c9415)arg1;
- (void)showFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (void)alertViewDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (id)navEndpoint;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)cameraAssetDidLoad:(id)arg1;
- (void)handleDismissAction:(id)arg1;
- (void)handleContinueToEditor:(id)arg1;
- (void)handleContinueToMetadataEditor:(id)arg1;
- (void)handleContinueAction:(id)arg1;
- (id)navigationEndpointForVisualElement:(id)arg1;
- (void)generatePreviewImage:(CDUnknownBlockType)arg1;
- (void)loadPhotoLibraryAsset;
- (id)creationContext;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 photoLibraryAsset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTShortsDeprecatedTrimViewControllerView *view; // @dynamic view;

@end

