//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTEditEffectTakeoverViewController.h>

#import "YTCollectionViewScrollObserver-Protocol.h"
#import "YTEditFeatureTab-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTTopController-Protocol.h"
#import "YTUploadCameraRollCollectionViewControllerDelegate-Protocol.h"

@class GIMMe, NSArray, NSString, UIImage, UIView, YTCommandResponderEvent, YTEditDownloadDialogController, YTEditEffectTakeoverView, YTICommand, YTIInteractionLoggingClientData, YTInteractionLoggingProxyButton, YTQTMButton, YTUploadCameraRollCollectionViewController, YTUploadGelLogger;
@protocol YTResponder;

@interface YTReelLibraryViewController : YTEditEffectTakeoverViewController <YTCollectionViewScrollObserver, YTGraftingViewController, YTUploadCameraRollCollectionViewControllerDelegate, YTEditFeatureTab, YTTopController>
{
    YTICommand *_model;
    UIImage *_mostRecentThumbnailImage;
    YTQTMButton *_thumbnailButton;
    YTInteractionLoggingProxyButton *_videoSelectionProxyButton;
    YTIInteractionLoggingClientData *_clientData;
    _Bool _shouldAutorotate;
    UIView *_containerView;
    YTUploadCameraRollCollectionViewController *_cameraRollCollectionViewController;
    YTEditDownloadDialogController *_downloadDialog;
    YTUploadGelLogger *_gelLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTUploadGelLogger *gelLogger; // @synthesize gelLogger=_gelLogger;
@property(retain, nonatomic) YTEditDownloadDialogController *downloadDialog; // @synthesize downloadDialog=_downloadDialog;
@property(retain, nonatomic) YTUploadCameraRollCollectionViewController *cameraRollCollectionViewController; // @synthesize cameraRollCollectionViewController=_cameraRollCollectionViewController;
@property(nonatomic) _Bool shouldAutorotate; // @synthesize shouldAutorotate=_shouldAutorotate;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (long long)featurePresentationStyle;
- (id)tabAccessibilityIdentifier;
- (id)title;
- (id)imageSelected:(_Bool)arg1;
@property(readonly, nonatomic) int veType;
@property(readonly, nonatomic) NSArray *interactionLoggingButtons;
- (double)desiredViewHeight;
- (void)dismiss;
- (id)galleryAssetWithURI:(id)arg1 isVideo:(_Bool)arg2 fromNetwork:(_Bool)arg3;
- (void)didFetchPHAsset:(id)arg1 URL:(id)arg2 assetIdentifier:(id)arg3 fetchedFromCloud:(_Bool)arg4 cancelled:(_Bool)arg5 error:(id)arg6;
- (void)fetchAssetForIdentifier:(id)arg1;
- (void)sendEditVideoEndpointWithGalleryAsset:(id)arg1 phAsset:(id)arg2;
- (void)sendEditVideoEndpointWithCameraRollAsset:(id)arg1;
- (void)didSelectAsset:(id)arg1;
- (void)fadeInButtonThumbnailImage:(id)arg1;
- (void)setMostRecentThumbnailImage:(id)arg1;
- (_Bool)shouldRefreshVideoList;
- (void)didInsertItemsAtIndexes:(id)arg1 inSection:(id)arg2;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (id)navEndpoint;
- (id)clientModelWithParentModel:(id)arg1;
- (id)thumbnailButtonIsCircular:(_Bool)arg1;
- (void)refreshVideoList;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTEditEffectTakeoverView *view; // @dynamic view;

@end
