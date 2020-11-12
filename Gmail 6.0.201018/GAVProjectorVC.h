//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GAVFileInfoListener-Protocol.h"
#import "GAVMovieRendererDelegate-Protocol.h"
#import "GAVRendererDelegate-Protocol.h"
#import "GAVSearchRendererDelegate-Protocol.h"
#import "GAVSearchViewDelegate-Protocol.h"
#import "MDCSnackbarManagerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class GAVItemContext, GAVNavigationTitleView, GAVProgressBar, GAVProjectorColorScheme, GAVProjectorConfiguration, GAVProjectorTracker, GAVSearchView, MDCAppBarViewController, NSLayoutConstraint, NSString, UIBarButtonItem, UIButton, UIScrollView;
@protocol GAVFileInfo, GAVProjectorDataSource, GAVProjectorDelegate, GAVRendererFactory, SSOAuthorization;

@interface GAVProjectorVC : UIViewController <GAVMovieRendererDelegate, GAVRendererDelegate, GAVSearchRendererDelegate, GAVSearchViewDelegate, MDCSnackbarManagerDelegate, UIScrollViewDelegate, GAVFileInfoListener>
{
    _Bool _isRotating;
    _Bool _isResized;
    id <GAVProjectorDataSource> _dataSource;
    id <GAVProjectorDelegate> _delegate;
    unsigned long long _currentIndex;
    unsigned long long _initialIndex;
    GAVItemContext *_prevItemContext;
    GAVItemContext *_currentItemContext;
    GAVItemContext *_nextItemContext;
    GAVItemContext *_pipContext;
    UIScrollView *_rendererContainerView;
    UIButton *_floatingActionButton;
    GAVProgressBar *_progressBar;
    UIBarButtonItem *_searchBarButtonItem;
    id <GAVRendererFactory> _rendererFactory;
    id <SSOAuthorization> _ssoAuthorization;
    GAVProjectorTracker *_projectorTracker;
    GAVProjectorConfiguration *_configuration;
    MDCAppBarViewController *_appBarViewController;
    GAVNavigationTitleView *_titleView;
    GAVProjectorColorScheme *_currentColorScheme;
    UIScrollView *_scrollViewForAppBar;
    NSLayoutConstraint *_FABVerticalOffsetConstraint;
    GAVSearchView *_searchView;
    NSLayoutConstraint *_searchViewLeadingAnchor;
    NSLayoutConstraint *_searchViewTrailingAnchor;
}

+ (_Bool)canRenderMIMEType:(id)arg1 withExportedMIMEType:(id)arg2;
+ (_Bool)canRenderMIMEType:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *searchViewTrailingAnchor; // @synthesize searchViewTrailingAnchor=_searchViewTrailingAnchor;
@property(retain, nonatomic) NSLayoutConstraint *searchViewLeadingAnchor; // @synthesize searchViewLeadingAnchor=_searchViewLeadingAnchor;
@property(retain, nonatomic) GAVSearchView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) NSLayoutConstraint *FABVerticalOffsetConstraint; // @synthesize FABVerticalOffsetConstraint=_FABVerticalOffsetConstraint;
@property(retain, nonatomic) UIScrollView *scrollViewForAppBar; // @synthesize scrollViewForAppBar=_scrollViewForAppBar;
@property(retain, nonatomic) GAVProjectorColorScheme *currentColorScheme; // @synthesize currentColorScheme=_currentColorScheme;
@property(retain, nonatomic) GAVNavigationTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MDCAppBarViewController *appBarViewController; // @synthesize appBarViewController=_appBarViewController;
@property(retain, nonatomic) GAVProjectorConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) GAVProjectorTracker *projectorTracker; // @synthesize projectorTracker=_projectorTracker;
@property(nonatomic) _Bool isResized; // @synthesize isResized=_isResized;
@property(nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(readonly, nonatomic) id <SSOAuthorization> ssoAuthorization; // @synthesize ssoAuthorization=_ssoAuthorization;
@property(readonly, nonatomic) id <GAVRendererFactory> rendererFactory; // @synthesize rendererFactory=_rendererFactory;
@property(retain, nonatomic) UIBarButtonItem *searchBarButtonItem; // @synthesize searchBarButtonItem=_searchBarButtonItem;
@property(retain, nonatomic) GAVProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIButton *floatingActionButton; // @synthesize floatingActionButton=_floatingActionButton;
@property(retain, nonatomic) UIScrollView *rendererContainerView; // @synthesize rendererContainerView=_rendererContainerView;
@property(retain, nonatomic) GAVItemContext *pipContext; // @synthesize pipContext=_pipContext;
@property(retain, nonatomic) GAVItemContext *nextItemContext; // @synthesize nextItemContext=_nextItemContext;
@property(retain, nonatomic) GAVItemContext *currentItemContext; // @synthesize currentItemContext=_currentItemContext;
@property(retain, nonatomic) GAVItemContext *prevItemContext; // @synthesize prevItemContext=_prevItemContext;
@property(nonatomic) unsigned long long initialIndex; // @synthesize initialIndex=_initialIndex;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <GAVProjectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <GAVProjectorDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)willPresentSnackbarWithMessageView:(id)arg1;
- (void)updateRotors;
- (void)restoreProjectorSize;
- (void)didShowBottomViewControllerWithHeight:(double)arg1;
- (void)closeProjector;
- (void)adjustFrameForRenderers;
- (void)endSearchSession;
- (void)updateSearchViewConstraints;
- (id)defaultAccentColorForMIMEType:(id)arg1;
- (id)accentColorForFileInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)cancelLoader:(id)arg1;
- (void)reset;
- (void)startLoader:(id)arg1;
- (id)closeBarButtonItem;
- (id)itemContextForIdentifier:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applyVerticalOffsetToFAB:(double)arg1;
- (void)didPresentFile;
- (double)xOffsetForRendererAtIndex:(unsigned long long)arg1;
- (struct CGPoint)contentOffsetForRendererAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForRendererAtIndex:(unsigned long long)arg1;
- (_Bool)itemContextIsCurrentlyDisplayed:(id)arg1;
- (void)removeViewForContext:(id)arg1;
- (void)rendererDidBecomeHidden:(id)arg1;
- (void)rendererDidBecomeVisible:(id)arg1;
- (void)rendererWillBecomeVisible:(id)arg1;
- (void)showAutoPurgingAlertForDisplayedItem;
- (void)showLegacyAlertForDisplayedItem;
- (void)showAlertForDisplayedItem;
- (void)projectorDidChangeDisplayedItem;
- (void)projectorDidPage;
- (void)pageBackward;
- (void)pageForward;
- (_Bool)hasPreviousItemForIndex:(unsigned long long)arg1;
- (_Bool)hasNextItemForIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItemsInProjector;
- (id)loaderForIndex:(unsigned long long)arg1;
- (void)showTrashedItemSnackbar:(id)arg1 enableTrashLink:(_Bool)arg2;
- (void)showErrorForTrashedItem;
- (void)showTrashedItemAlertForItemWithPreview;
- (void)showError:(id)arg1;
- (void)recordError:(id)arg1 forIdentifier:(id)arg2;
- (void)updateFloatingActionButton;
- (void)updateAccentColor;
- (void)renderFileWithFileInfo:(id)arg1 error:(id)arg2;
- (void)updateHeaderWithItemContext:(id)arg1;
- (void)searchViewPreviousButtonTapped:(id)arg1;
- (void)searchViewNextButtonTapped:(id)arg1;
- (void)searchViewSearchFieldTextDidChange:(id)arg1 updatedText:(id)arg2;
- (void)searchViewCloseButtonTapped:(id)arg1;
- (void)fileMetadataDidReload:(id)arg1 error:(id)arg2;
- (void)fileDidUpdate:(id)arg1 error:(id)arg2;
- (void)rendererShouldEnableSearch:(id)arg1;
- (void)renderer:(id)arg1 didUpdateFocusedIndex:(unsigned long long)arg2 totalResults:(unsigned long long)arg3;
- (void)rendererRequestedHandleDismissal:(id)arg1;
- (id)rendererRequestedUserID:(id)arg1;
- (void)renderer:(id)arg1 didHandOverModifiedFile:(id)arg2 localFileURL:(id)arg3 shouldOverwriteFile:(_Bool)arg4;
- (_Bool)rendererRequestedIsResized:(id)arg1;
- (void)renderer:(id)arg1 didRequestUnlockFile:(id)arg2 withPassword:(id)arg3;
- (id)rendererRequestedAccentColor:(id)arg1;
- (void)renderer:(id)arg1 didRequestOpenURL:(id)arg2;
- (double)rendererRequestedHeaderHeight:(id)arg1;
- (void)renderer:(id)arg1 requestedFABHaveVerticalOffset:(double)arg2;
- (void)renderer:(id)arg1 didRequestImageSavedToCameraRollForFileInfo:(id)arg2;
- (_Bool)rendererRequestedHandleSingleTap:(id)arg1;
- (void)renderer:(id)arg1 didRequestChromeHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)renderer:(id)arg1 didStartLoadingFileInfo:(id)arg2 extraFileInfo:(id)arg3;
- (void)renderer:(id)arg1 didFailWithError:(id)arg2;
- (void)renderer:(id)arg1 requestRestoreUserInterfaceForPictureInPictureWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)rendererDidStopPictureInPicturePlayback:(id)arg1;
- (void)rendererDidStartPictureInPicturePlayback:(id)arg1;
- (void)rendererWillStartPictureInPicturePlayback:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)handleOverlayTransition:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)animateFileChangeWithAlpha:(double)arg1 fromFile:(id)arg2 toFile:(id)arg3;
- (void)styleProjectorForFile:(id)arg1;
- (void)styleProjector;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)didTapFab;
- (void)searchButtonPressed;
- (void)closeButtonPressed;
- (void)updateFileTypesFromWeb;
- (void)updateFileInfo;
- (void)displayItemAtIndex:(unsigned long long)arg1;
- (void)setChromeHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) id <GAVFileInfo> fileInfo;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2 configuration:(id)arg3 ssoAuthorization:(id)arg4;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2 configuration:(id)arg3 ssoAuthorization:(id)arg4 rendererFactory:(id)arg5 theme:(id)arg6;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2 configuration:(id)arg3 ssoAuthorization:(id)arg4 theme:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
