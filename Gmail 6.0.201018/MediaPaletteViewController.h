//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GBTAppBarSupport-Protocol.h"
#import "InterceptViewDelegate-Protocol.h"
#import "JBTEventListener-Protocol.h"
#import "MediaSectionViewControllerDelegate-Protocol.h"
#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GBTAppBarViewController, GBTDropShadow, HUBTextButton, InterceptView, NSMutableArray, NSString, UITableView, UIView;
@protocol GBTClient, JBTLiveList, MediaPaletteViewControllerDelegate;

@interface MediaPaletteViewController : UIViewController <GBTAppBarSupport, InterceptViewDelegate, JBTEventListener, MediaSectionViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, PHPhotoLibraryChangeObserver>
{
    id <GBTClient> _client;
    InterceptView *_contentView;
    InterceptView *_touchInterceptView;
    NSMutableArray *_selectedMediaDatas;
    _Bool _dismissingPaletteView;
    _Bool _panningPaletteView;
    UITableView *_mediaTable;
    unsigned long long _paletteDisplayMode;
    UIView *_paletteView;
    NSMutableArray *_sections;
    GBTDropShadow *_topShadow;
    id <JBTLiveList> _mediaLists;
    HUBTextButton *_openLibraryButton;
    _Bool _insertedSingleFileFromCarousel;
    _Bool _performingMultiSelection;
    _Bool _wasShowingMediaPicker;
    GBTAppBarViewController *_appBar;
    id <MediaPaletteViewControllerDelegate> _delegate;
}

+ (id)prepareMediaDataArrayForInsertion:(id)arg1 withMaxSize:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MediaPaletteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GBTAppBarViewController *appBar; // @synthesize appBar=_appBar;
- (void)photoLibraryDidChange:(id)arg1;
- (_Bool)isMediaListEnabled:(id)arg1;
- (unsigned long long)minimumDisplayMode;
- (void)updateMultiSelectState;
- (void)enforceDisplayMode;
- (unsigned long long)appBarStyle;
- (double)statusBarHeight;
- (id)annotationsForSourcesOfSelectedMediaDatas;
- (void)logMetrics;
- (void)openLibraryTapped:(id)arg1;
- (void)clearAllSelections;
- (void)setUpAccessibilityCustomActionsWithSelectMode:(_Bool)arg1;
- (void)showOfflineErrorAlert;
- (_Bool)shouldAllowOfflineInsertion;
- (void)insertAllSelectedMediaData;
- (void)updateMultiSelectBannerContent;
- (void)setAppBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideMultiSelectBannerAnimated:(_Bool)arg1;
- (void)showMultiSelectBannerAnimated:(_Bool)arg1;
- (void)handlePan:(id)arg1;
- (void)transitionToPaletteDisplayMode:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (double)paletteTopForDisplayMode:(unsigned long long)arg1;
- (void)layoutPaletteView;
- (void)layoutViews;
- (void)dismissPaletteVCWithClearSelections:(_Bool)arg1;
- (void)dismissPaletteVC;
- (void)setUpLayoutConstraints;
- (void)setUpPaletteView;
- (void)createAndStartMediaLists;
- (void)createContentView;
- (id)paletteView;
- (double)paletteMinimizedHeight;
- (unsigned long long)paletteDisplayMode;
- (id)selectedMediaDatas;
- (void)onEventWithJBTEvent:(id)arg1;
- (void)appBar:(id)arg1 didTapOnButtonItem:(id)arg2 event:(id)arg3 button:(id)arg4;
- (id)titleForAppBar:(id)arg1;
- (id)rightBarButtonItemsForAppBar:(id)arg1;
- (id)leftBarButtonItemsForAppBar:(id)arg1;
- (void)touchOccurredOnInterceptView:(id)arg1;
- (void)mediaSectionViewControllerDidEndSelectModeChange:(id)arg1;
- (void)mediaSectionViewController:(id)arg1 didBeginSelectModeChange:(_Bool)arg2;
- (void)mediaSectionViewController:(id)arg1 didHideMediaPicker:(id)arg2;
- (void)mediaSectionViewController:(id)arg1 didShowMediaPicker:(id)arg2;
- (void)mediaSectionViewController:(id)arg1 failedToRetrieveDetailedMediaData:(id)arg2;
- (void)mediaSectionViewController:(id)arg1 didRetrieveDetailedMediaDataArray:(id)arg2 withError:(id)arg3;
- (void)mediaSectionViewController:(id)arg1 didRemoveSelectedMediaDataWithIDs:(id)arg2;
- (void)mediaSectionViewController:(id)arg1 didChangeSelectedState:(_Bool)arg2 forMediaData:(id)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) _Bool useSingleRowStyle;
@property(readonly, nonatomic, getter=isPaletteHidden) _Bool paletteHidden;
@property(readonly, copy) NSString *description;
- (void)refreshMediaPalette;
- (void)reloadMediaPalette;
- (void)resetSelectionsAnimated:(_Bool)arg1;
- (void)dismissMediaPaletteAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)showMediaPaletteAnimated:(_Bool)arg1 shouldFocusAccessibilityElement:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)checkAccessPermission:(CDUnknownBlockType)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
