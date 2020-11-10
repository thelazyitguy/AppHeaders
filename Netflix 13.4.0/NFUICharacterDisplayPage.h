//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NFUIDisplayPageCollectionViewDefaultStateDelegateProtocol-Protocol.h"
#import "NFUIDisplayPageCollectionViewProtocol-Protocol.h"
#import "NFUIDisplayPageHeaderViewProtocol-Protocol.h"
#import "NFUIDisplayPageProtocol-Protocol.h"
#import "NFUIDisplayPageSelectionManagerDelegateProtocol-Protocol.h"
#import "NFUIDisplayPageViewDispatcherDelegateProtocol-Protocol.h"
#import "NFUIDisplayPageViewModelDelegateProtocol-Protocol.h"
#import "NFUISecondaryNavigationViewControllerDelegate-Protocol.h"
#import "NFUISectionDividerDelegateProtocol-Protocol.h"
#import "SeasonPickerViewControllerDelegateProtocol-Protocol.h"
#import "TransitioningOptionsProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class DisplayPageHeaderView, DisplayPageRequest, KidsCharacterDisplayPageViewModel, ModalShimViewController, NFUICollectionViewItemDispatcher, NFUIDisplayPageCollectionViewDefaultState, NFUIDisplayPageItemDispatcher, NFUIDisplayPageItemWidthDispatcher, NFUIDisplayPagePullToCloseAction, NFUIDisplayPageSeasonSelectorDelegate, NFUIDisplayPageSelectionManager, NFUIDisplayPageViewModelResolver, NFUIIconButton, NFUIMobileCollectionsToolTipView, NFUIReusableViewManager, NFUIScrollPointNotifier, NFUIVideoDisplayPageDataMap, NSDictionary, NSMutableDictionary, NSNumber, NSString, NavigationBarAppearanceManager, PlaybackSourceModel, UIActivityIndicatorView, UICollectionView, UIView, VideoDisplayPageHeaderViewController;
@protocol NFUIDisplayPageNavigationProtocol;

@interface NFUICharacterDisplayPage : UIViewController <NFUISecondaryNavigationViewControllerDelegate, NFUIDisplayPageProtocol, NFUIDisplayPageViewDispatcherDelegateProtocol, NFUIDisplayPageCollectionViewProtocol, NFUIDisplayPageCollectionViewDefaultStateDelegateProtocol, NFUIDisplayPageViewModelDelegateProtocol, TransitioningOptionsProtocol, SeasonPickerViewControllerDelegateProtocol, NFUISectionDividerDelegateProtocol, NFUIDisplayPageSelectionManagerDelegateProtocol, NFUIDisplayPageHeaderViewProtocol, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _shouldAutoScroll;
    _Bool _isKids;
    NavigationBarAppearanceManager *navBarManager;
    id <NFUIDisplayPageNavigationProtocol> _dpNav;
    DisplayPageRequest *_dpRequest;
    PlaybackSourceModel *_playbackSourceModel;
    NSDictionary *_transitionOptions;
    KidsCharacterDisplayPageViewModel *_viewModel;
    NFUIReusableViewManager *_reusableViewManager;
    NFUICollectionViewItemDispatcher *_itemDispatcher;
    NFUIDisplayPageViewModelResolver *_displayPageViewModelResolver;
    NFUIDisplayPageCollectionViewDefaultState *_displayPageDefaultState;
    NFUIDisplayPageSelectionManager *_displayPageSelectionManager;
    DisplayPageHeaderView *_headerView;
    VideoDisplayPageHeaderViewController *_headerViewController;
    UICollectionView *_collectionView;
    NFUIIconButton *_seasonButton;
    NFUIScrollPointNotifier *_scrollPointNotifier;
    NFUIVideoDisplayPageDataMap *_videoDisplayPageDataMap;
    NFUIDisplayPageItemDispatcher *_displayPageItemDispatcher;
    NFUIDisplayPageItemWidthDispatcher *_displayPageItemWidthDispatcher;
    NFUIDisplayPageSeasonSelectorDelegate *_displayPageSeasonSelectorDelegate;
    NFUIDisplayPagePullToCloseAction *_displayPagePullToCloseAction;
    UIView *_headerContainer;
    UIActivityIndicatorView *_loadingView;
    NSMutableDictionary *_scrollInformationConsumerCache;
}

+ (_Bool)shouldDisplay:(id)arg1;
+ (id)newDisplayPageCollectionViewController;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *scrollInformationConsumerCache; // @synthesize scrollInformationConsumerCache=_scrollInformationConsumerCache;
@property(nonatomic) __weak UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak UIView *headerContainer; // @synthesize headerContainer=_headerContainer;
@property(retain, nonatomic) NFUIDisplayPagePullToCloseAction *displayPagePullToCloseAction; // @synthesize displayPagePullToCloseAction=_displayPagePullToCloseAction;
@property(retain, nonatomic) NFUIDisplayPageSeasonSelectorDelegate *displayPageSeasonSelectorDelegate; // @synthesize displayPageSeasonSelectorDelegate=_displayPageSeasonSelectorDelegate;
@property(retain, nonatomic) NFUIDisplayPageItemWidthDispatcher *displayPageItemWidthDispatcher; // @synthesize displayPageItemWidthDispatcher=_displayPageItemWidthDispatcher;
@property(retain, nonatomic) NFUIDisplayPageItemDispatcher *displayPageItemDispatcher; // @synthesize displayPageItemDispatcher=_displayPageItemDispatcher;
@property(retain, nonatomic) NFUIVideoDisplayPageDataMap *videoDisplayPageDataMap; // @synthesize videoDisplayPageDataMap=_videoDisplayPageDataMap;
@property(retain, nonatomic) NFUIScrollPointNotifier *scrollPointNotifier; // @synthesize scrollPointNotifier=_scrollPointNotifier;
@property(nonatomic) __weak NFUIIconButton *seasonButton; // @synthesize seasonButton=_seasonButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isKids; // @synthesize isKids=_isKids;
@property(nonatomic) _Bool shouldAutoScroll; // @synthesize shouldAutoScroll=_shouldAutoScroll;
@property(retain, nonatomic) VideoDisplayPageHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) __weak DisplayPageHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NFUIDisplayPageSelectionManager *displayPageSelectionManager; // @synthesize displayPageSelectionManager=_displayPageSelectionManager;
@property(retain, nonatomic) NFUIDisplayPageCollectionViewDefaultState *displayPageDefaultState; // @synthesize displayPageDefaultState=_displayPageDefaultState;
@property(retain, nonatomic) NFUIDisplayPageViewModelResolver *displayPageViewModelResolver; // @synthesize displayPageViewModelResolver=_displayPageViewModelResolver;
@property(retain, nonatomic) NFUICollectionViewItemDispatcher *itemDispatcher; // @synthesize itemDispatcher=_itemDispatcher;
@property(retain, nonatomic) NFUIReusableViewManager *reusableViewManager; // @synthesize reusableViewManager=_reusableViewManager;
@property(retain, nonatomic) KidsCharacterDisplayPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSDictionary *transitionOptions; // @synthesize transitionOptions=_transitionOptions;
@property(copy, nonatomic) PlaybackSourceModel *playbackSourceModel; // @synthesize playbackSourceModel=_playbackSourceModel;
@property(retain, nonatomic) DisplayPageRequest *dpRequest; // @synthesize dpRequest=_dpRequest;
@property(nonatomic) __weak id <NFUIDisplayPageNavigationProtocol> dpNav; // @synthesize dpNav=_dpNav;
@property(retain, nonatomic) NavigationBarAppearanceManager *navBarManager; // @synthesize navBarManager;
- (void)viewSafeAreaInsetsDidChange;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)handleLinkTapped:(id)arg1 withData:(id)arg2;
- (id)cellForSize:(id)arg1 withWidth:(double)arg2 withIdentifier:(id)arg3 withViewModel:(id)arg4;
- (id)uniqueIdForIdentifier:(id)arg1 withIndexPath:(id)arg2;
- (double)cellWidthForIdentifier:(id)arg1;
- (struct CGSize)filterSize:(double)arg1 withCell:(id)arg2 withIdentifier:(id)arg3 withIndexPath:(id)arg4;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)transitionSourceSnapshot;
- (struct UIEdgeInsets)transitionSourceInsets;
- (struct CGRect)transitionSourceRect;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)defaultNavigationLevel;
- (void)unregisterNotifcationPointFromCell:(CDUnknownBlockType)arg1;
- (void)registerNotifcationPointFromCell:(id)arg1 withElementOffset:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)populateDefaultScrollPoints;
@property(copy, nonatomic) NSNumber *videoId;
- (void)setVideoId:(id)arg1 withData:(id)arg2;
- (id)seasonSelectorVideoId;
- (id)currentSeason;
- (void)updateSeasonButtonAccessibilityId;
- (void)seasonChanged:(unsigned long long)arg1 episodeIndex:(unsigned long long)arg2;
- (void)seasonChanged:(unsigned long long)arg1;
- (void)updateSeasonTitles;
- (void)seasonButtonPressed:(id)arg1;
- (void)dividerSectionChanged:(long long)arg1;
- (void)showHeaderForTitle:(_Bool)arg1 withAlphaFade:(_Bool)arg2;
- (void)refreshContentSection:(_Bool)arg1 index:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)reloadVolatileViewData;
- (id)galleryVideosForEntity:(id)arg1 objectContext:(id)arg2;
- (void)refreshView;
- (void)loadViewData;
- (void)playbackEnded:(id)arg1;
- (void)download:(id)arg1 withId:(id)arg2 title:(id)arg3;
- (void)play:(id)arg1;
- (void)playWithId:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) ModalShimViewController *modalShim;
@property(readonly) Class superclass;
@property(retain, nonatomic) NFUIMobileCollectionsToolTipView *tooltipView;

@end
