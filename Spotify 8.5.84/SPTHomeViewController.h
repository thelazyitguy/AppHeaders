//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HUBOverlayViewComponentDelegate-Protocol.h"
#import "HUBViewComponentDelegate-Protocol.h"
#import "HUBViewContentOffsetObserver-Protocol.h"
#import "SPTBannerPresentationObserver-Protocol.h"
#import "SPTContentBottomLayoutGuideObserver-Protocol.h"
#import "SPTHomeViewModelProviderObserver-Protocol.h"
#import "SPTHubViewModelProviderDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTScrollToTopViewController-Protocol.h"
#import "SPViewController-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, NSURL, SPTHomeFeatureProperties, SPTHomeNavigationItemDecorator, SPTHomeStatusBarAppearanceModifier, SPTHomeView, SPTHomeViewModelHiddenComponents, SPTHomeViewModelProvider, UIView;
@protocol HUBViewModel, SPTBannerPresentationManager, SPTHomeViewControllerDelegate, SPTHubImpressionLogger, SPTOfflineModeState, SPTPageContainer, SPTShareDragDelegateFactory;

@interface SPTHomeViewController : UIViewController <SPTContentBottomLayoutGuideObserver, SPTScrollToTopViewController, HUBViewContentOffsetObserver, SPTHubViewModelProviderDelegate, HUBOverlayViewComponentDelegate, HUBViewComponentDelegate, SPTOfflineModeStateObserver, SPTBannerPresentationObserver, SPTPageController, SPTNavigationControllerNavigationBarState, SPViewController, SPTHomeViewModelProviderObserver>
{
    _Bool _currentlyOffline;
    NSString *_pageIdentifier;
    NSURL *_pageURI;
    id <SPTHomeViewControllerDelegate> _delegate;
    SPTHomeNavigationItemDecorator *_navigationItemDecorator;
    NSURL *_viewURI;
    id <SPTHubImpressionLogger> _hubImpressionLogger;
    SPTHomeViewModelProvider *_viewModelProvider;
    id <SPTShareDragDelegateFactory> _shareDragDelegateFactory;
    id <SPTOfflineModeState> _offlineState;
    SPTHomeViewModelHiddenComponents *_hiddenComponents;
    SPTHomeFeatureProperties *_remoteConfigProperties;
    SPTHomeStatusBarAppearanceModifier *_statusBarAppearanceModifier;
    id <HUBViewModel> _initialViewModel;
    CDUnknownBlockType _homeViewFactory;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    NSMutableDictionary *_dragDelegateHolders;
    double _navigationbarAlpha;
    NSArray *_observers;
    UIView *_listeningHistoryTopBarButton;
    UIView *_listeningHistoryNavigationRow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *listeningHistoryNavigationRow; // @synthesize listeningHistoryNavigationRow=_listeningHistoryNavigationRow;
@property(retain, nonatomic) UIView *listeningHistoryTopBarButton; // @synthesize listeningHistoryTopBarButton=_listeningHistoryTopBarButton;
@property(copy, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(nonatomic) double navigationbarAlpha; // @synthesize navigationbarAlpha=_navigationbarAlpha;
@property(nonatomic, getter=isCurrentlyOffline) _Bool currentlyOffline; // @synthesize currentlyOffline=_currentlyOffline;
@property(retain, nonatomic) NSMutableDictionary *dragDelegateHolders; // @synthesize dragDelegateHolders=_dragDelegateHolders;
@property(readonly, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(readonly, copy, nonatomic) CDUnknownBlockType homeViewFactory; // @synthesize homeViewFactory=_homeViewFactory;
@property(retain, nonatomic) id <HUBViewModel> initialViewModel; // @synthesize initialViewModel=_initialViewModel;
@property(readonly, nonatomic) SPTHomeStatusBarAppearanceModifier *statusBarAppearanceModifier; // @synthesize statusBarAppearanceModifier=_statusBarAppearanceModifier;
@property(readonly, nonatomic) SPTHomeFeatureProperties *remoteConfigProperties; // @synthesize remoteConfigProperties=_remoteConfigProperties;
@property(readonly, nonatomic) SPTHomeViewModelHiddenComponents *hiddenComponents; // @synthesize hiddenComponents=_hiddenComponents;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineState; // @synthesize offlineState=_offlineState;
@property(readonly, nonatomic) id <SPTShareDragDelegateFactory> shareDragDelegateFactory; // @synthesize shareDragDelegateFactory=_shareDragDelegateFactory;
@property(readonly, nonatomic) SPTHomeViewModelProvider *viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
@property(readonly, nonatomic) id <SPTHubImpressionLogger> hubImpressionLogger; // @synthesize hubImpressionLogger=_hubImpressionLogger;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(retain, nonatomic) SPTHomeNavigationItemDecorator *navigationItemDecorator; // @synthesize navigationItemDecorator=_navigationItemDecorator;
@property(nonatomic) __weak id <SPTHomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void)willPresentBannerFromManager:(id)arg1;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (id)shareDragDelegateWithModel:(id)arg1;
- (void)sp_updateContentInsets;
- (void)layoutGuideChanged;
- (void)overlayView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)overlayView:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)hubView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)hubView:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)updateNavigationBarAlpha;
- (void)spt_scrollToTop;
- (_Bool)listeningHistoryOverlayExists;
- (id)listeningHistoryOverlayView;
- (void)updateListeningHistoryTooltipPositionForEntryPointView:(id)arg1 entryPointType:(unsigned long long)arg2 forceUpdate:(_Bool)arg3;
- (void)updateListeningHistoryTooltipPosition:(_Bool)arg1;
- (void)setNavigationBarButtonItemsEnabledState;
- (void)updateNavigationBarButtonItemsAlpha;
- (void)setTopBarButtonsEnabledState:(_Bool)arg1;
- (void)setHomeInteractionEnabledState:(_Bool)arg1;
- (void)setHomeTappableStateWithListeningHistoryTooltip;
- (void)setHomeScrollableStateWithListeningHistoryTooltip;
- (void)loadViewModelForOfflineState:(_Bool)arg1;
- (void)addViewObserver:(id)arg1;
- (void)contentSizeCategoryDidChange;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, nonatomic) NSURL *URI;
- (void)updateViewWithViewModel:(id)arg1;
- (void)didLoadRemoteViewModel:(id)arg1 withError:(id)arg2;
- (void)didLoadCachedViewModel:(id)arg1 withError:(id)arg2;
- (void)viewModelProvider:(id)arg1 didLoadViewModel:(id)arg2 fromSource:(unsigned long long)arg3 withError:(id)arg4;
- (void)viewModelProvider:(id)arg1 willLoadFromSource:(unsigned long long)arg2;
- (void)viewModelDidLoad:(id)arg1 dataSource:(unsigned long long)arg2;
- (void)viewModelDidLoad:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewURI:(id)arg1 hubImpressionLogger:(id)arg2 viewModelProvider:(id)arg3 shareDragDelegateFactory:(id)arg4 offlineState:(id)arg5 hiddenComponents:(id)arg6 remoteConfigProperties:(id)arg7 statusBarAppearanceModifier:(id)arg8 initialViewModel:(id)arg9 homeViewFactory:(CDUnknownBlockType)arg10 bannerPresentationManager:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTHomeView *view; // @dynamic view;

@end
