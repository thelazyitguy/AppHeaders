//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewController.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTShortsGallerySectionControllerDelegate-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"
#import "YTTopController-Protocol.h"

@class GIMMe, NSString, YTCommandResponderEvent, YTFlowLayoutCollectionViewUIFormatter, YTICommand, YTInteractionLoggingProxyButton, YTShortsPhotoLibraryAssetController;
@protocol YTInteractionLoggingButtonProtocol, YTResponder, YTShortsGalleryCollectionViewControllerDelegate;

@interface YTShortsGalleryCollectionViewController : YTCollectionViewController <YTGraftingViewController, YTTopController, PHPhotoLibraryChangeObserver, YTSystemNotificationsObserver, YTShortsGallerySectionControllerDelegate>
{
    YTShortsPhotoLibraryAssetController *_photoLibraryAssetController;
    Class _cellEntryClass;
    _Bool _refreshCameraRollOnPhotoLibraryChange;
    id <YTShortsGalleryCollectionViewControllerDelegate> _delegate;
    YTICommand *_model;
    YTInteractionLoggingProxyButton *_cameraProxyButton;
    YTInteractionLoggingProxyButton *_selectionProxyButton;
    id <YTInteractionLoggingButtonProtocol> _dismissLoggingElement;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTInteractionLoggingButtonProtocol> dismissLoggingElement; // @synthesize dismissLoggingElement=_dismissLoggingElement;
@property(retain, nonatomic) YTInteractionLoggingProxyButton *selectionProxyButton; // @synthesize selectionProxyButton=_selectionProxyButton;
@property(retain, nonatomic) YTInteractionLoggingProxyButton *cameraProxyButton; // @synthesize cameraProxyButton=_cameraProxyButton;
@property(retain, nonatomic) YTICommand *model; // @synthesize model=_model;
@property(nonatomic) __weak id <YTShortsGalleryCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gallerySectionControllerHasLimitedAccessPhotoMode:(id)arg1;
- (_Bool)gallerySectionControllerHasPhotosPermissions:(id)arg1;
- (void)gallerySectionControllerDidTapPhotoPicker:(id)arg1;
- (void)gallerySectionControllerDidTapOpenSettings:(id)arg1;
- (void)gallerySectionControllerDidTapHeader:(id)arg1;
- (void)deselectSelectedItems;
- (void)didCompleteAssetFetchWithResult:(id)arg1 error:(id)arg2 cameraRollAsset:(id)arg3;
- (void)didChooseAsset:(id)arg1;
- (void)requestPermissionsForFeature:(long long)arg1;
- (void)openSettings;
- (double)cellSpacing;
- (id)assetAtIndexPath:(id)arg1;
- (void)notifyAssetNotUsable;
- (_Bool)isAssetUsable:(id)arg1;
- (id)sectionController;
- (void)refreshVideoList;
- (void)setUpCollectionView;
- (void)setUpAssetEventHandler;
- (void)setUpSectionController;
- (id)cellFactory;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1 UIFormatter:(id)arg2 parentResponder:(id)arg3;
- (id)initWithParentResponder:(id)arg1;
- (id)initWithParentResponder:(id)arg1 cellEntryClass:(Class)arg2;
- (void)relogScreen;
- (id)navEndpoint;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasEqualModel:(id)arg1;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (id)logging_navigationCommandForVisualElement:(id)arg1;
- (void)logGalleryCellVEShownIfNeeded;
- (id)navigationCommandForSelection;
- (id)navigationCommandForCamera;
- (void)setUpInteractionLogging;

// Remaining properties
@property(readonly, nonatomic) YTFlowLayoutCollectionViewUIFormatter *UIFormatter; // @dynamic UIFormatter;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

