//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "DYNAppLaunchLoggableLandingViewController-Protocol.h"
#import "DYNConversationLauncherFilterDelegate-Protocol.h"
#import "DYNConversationPickerDelegate-Protocol.h"
#import "DYNDoNotDisturbPopoverControllerDelegate-Protocol.h"
#import "DYNObserverDelegate-Protocol.h"
#import "DYNStatusChipDelegate-Protocol.h"
#import "DYNUserPresenceAvatarViewDelegate-Protocol.h"
#import "DYNViewControllerProtocol-Protocol.h"
#import "DYNWorldFABDelegate-Protocol.h"
#import "DYNWorldTabChildViewControllerDelegate-Protocol.h"
#import "DYNWorldViewControllerProtocol-Protocol.h"
#import "GMDCOpenSearchBarControllerDelegate-Protocol.h"
#import "HUBSearchBarDelegate-Protocol.h"
#import "MDCBottomNavigationBarDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class DYNAccountSwitchingHandler, DYNBannerView, DYNGradientView, DYNHeaderBottomBarHelper, DYNStatusChip, DYNUserPresenceAvatarView, DYNUserPresenceNavigationBarView, DYNWorldFAB, DYNWorldTabChildViewController, DYNWorldTabCustomBadge, DYNWorldTabLockupView, GMDCOpenSearchBarController, GOOIndeterminateProgressBar, MDCAppBarViewController, MDCBottomNavigationBar, NSArray, NSLayoutConstraint, NSMutableSet, NSString, PHSChannel, UIBarButtonItem, UIColor, UIView, UIViewController;
@protocol DYNColorSchemeService, DYNConversationLauncherSearchable, DYNExperimentsService, DYNNavigationService, DYNObserverManager, DYNSharedLayerService, DYNWorldStateService, DYNWorldTabParentControllerDelegate, DYNWorldViewControllerDelegate, GILInteractionService, GIPAccountID, HUBSearchViewControllerProtocol;

@interface DYNWorldTabParentController : UITabBarController <DYNAppLaunchLoggableLandingViewController, MDCBottomNavigationBarDelegate, DYNWorldFABDelegate, DYNConversationPickerDelegate, DYNObserverDelegate, GMDCOpenSearchBarControllerDelegate, UIViewControllerTransitioningDelegate, DYNUserPresenceAvatarViewDelegate, DYNConversationLauncherFilterDelegate, DYNWorldTabChildViewControllerDelegate, HUBSearchBarDelegate, DYNStatusChipDelegate, DYNDoNotDisturbPopoverControllerDelegate, DYNViewControllerProtocol, DYNWorldViewControllerProtocol>
{
    id <GIPAccountID> _accountID;
    id <DYNExperimentsService> _experimentsService;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNNavigationService> _navigationService;
    id <DYNWorldStateService> _worldStateService;
    id <DYNObserverManager> _observerManager;
    id <DYNColorSchemeService> _colorSchemeService;
    long long _unviewedInvitedRoomCount;
    NSString *_loggingDescription;
    DYNWorldTabChildViewController *_chatController;
    DYNWorldTabChildViewController *_roomsController;
    MDCBottomNavigationBar *_bottomNavigationBar;
    UIView *_safeAreaBottomCoverView;
    DYNBannerView *_currentHeaderBanner;
    double _appBarDefaultHeight;
    GOOIndeterminateProgressBar *_progressBar;
    UIView *_statusBarOverlay;
    UIView *_openSearchContainer;
    DYNWorldTabLockupView *_lockupView;
    GMDCOpenSearchBarController *_openSearchBarController;
    DYNUserPresenceAvatarView *_userAvatarView;
    DYNGradientView *_openSearchGradientView;
    UIViewController<DYNConversationLauncherSearchable> *_openSearchFilterController;
    NSLayoutConstraint *_overlayHeightConstraint;
    NSArray *_appBarAccessibilityElements;
    NSArray *_tabBarAccessibilityElements;
    _Bool _tabWasSelectedProgrammatically;
    NSArray *_messageRequests;
    UIView *_appBarDividerView;
    MDCAppBarViewController *_appBarController;
    DYNAccountSwitchingHandler *_accountSwitchingHandler;
    DYNUserPresenceNavigationBarView *_presenceNavigationBarView;
    DYNStatusChip *_presenceStatusChip;
    DYNWorldTabCustomBadge *_chatBadge;
    DYNWorldTabCustomBadge *_roomsBadge;
    UIView *_unviewedRoomsBadge;
    UIViewController<HUBSearchViewControllerProtocol> *_hubSearchVC;
    id <GILInteractionService> _interactionLogger;
    PHSChannel *_badgeUpdateChannel;
    _Bool _hasSelectedIndexBeenSet;
    NSMutableSet *_tappedTabWorldTypes;
    _Bool _openSearchBarEnabled;
    unsigned int _viewControllerLifecycleState;
    DYNUserPresenceNavigationBarView *_navigationBarView;
    UIBarButtonItem *_menuButtonItem;
    id <DYNWorldViewControllerDelegate> _worldViewDelegate;
    DYNHeaderBottomBarHelper *bottomBarHelper;
    UIColor *navigationBarBackgroundColor;
    UIColor *statusBarBackgroundColor;
    DYNWorldFAB *floatingButton;
    id <DYNWorldTabParentControllerDelegate> _worldTabDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DYNWorldTabParentControllerDelegate> worldTabDelegate; // @synthesize worldTabDelegate=_worldTabDelegate;
@property(readonly, nonatomic) _Bool openSearchBarEnabled; // @synthesize openSearchBarEnabled=_openSearchBarEnabled;
@property(readonly, nonatomic) DYNWorldFAB *floatingButton; // @synthesize floatingButton;
@property(retain, nonatomic) UIColor *statusBarBackgroundColor; // @synthesize statusBarBackgroundColor;
@property(retain, nonatomic) UIColor *navigationBarBackgroundColor; // @synthesize navigationBarBackgroundColor;
@property(retain, nonatomic) DYNHeaderBottomBarHelper *bottomBarHelper; // @synthesize bottomBarHelper;
@property(nonatomic) __weak id <DYNWorldViewControllerDelegate> worldViewDelegate; // @synthesize worldViewDelegate=_worldViewDelegate;
@property(nonatomic) __weak UIBarButtonItem *menuButtonItem; // @synthesize menuButtonItem=_menuButtonItem;
@property(retain, nonatomic) DYNUserPresenceNavigationBarView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
@property(nonatomic) unsigned int viewControllerLifecycleState; // @synthesize viewControllerLifecycleState=_viewControllerLifecycleState;
- (id)resultsViewController;
- (void)didTapMenuInSearchBar:(id)arg1;
- (void)conversationPicker:(id)arg1 didPickViewController:(id)arg2;
- (void)conversationPickerDidCancel:(id)arg1;
- (void)childControllerDidAppear:(id)arg1;
- (void)childController:(id)arg1 didUpdateMessageRequests:(id)arg2;
- (_Bool)isProgressBarAnimating;
- (void)childControllerShouldHideProgressBar:(id)arg1;
- (void)childControllerWantsProgressBar:(id)arg1;
- (_Bool)shouldChildControllerLogRenderedMessages:(id)arg1;
- (void)childController:(id)arg1 shouldLogDataDisplayWithFreshData:(_Bool)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)userPresenceAvatarWasTapped:(id)arg1;
- (void)brandAnimationTriggered:(id)arg1;
- (void)searchBarNavigationMenuTapped:(id)arg1;
- (void)searchBar:(id)arg1 eventTypeOccurred:(long long)arg2;
- (void)searchDismissalTriggered:(id)arg1;
- (void)searchPresentationTriggered:(id)arg1;
- (void)didTapInvitesButton:(id)arg1;
- (void)didTapConversationLauncherButton:(id)arg1;
- (void)dndControllerDidTapNotificationSettings:(id)arg1;
- (void)dndControllerDidTapStopSnoozing:(id)arg1;
- (void)dndControllerDidSetSnooze:(id)arg1 withLength:(long long)arg2;
- (void)didUpdateUnviewedInvitedRoomsCount:(id)arg1;
- (void)bottomNavigationBar:(id)arg1 didSelectItem:(id)arg2;
- (void)worldStateServiceDidPostBadgeUpdates:(id)arg1;
- (void)updateLeftBarButtonItem:(id)arg1;
- (void)clearVisualData;
- (void)scrollAllToTop;
- (void)scrollToTop;
- (void)configureWithAccountID:(id)arg1;
- (void)dismissTopControllerWithCompletion:(CDUnknownBlockType)arg1;
- (id)conversationPickerWithMode:(int)arg1;
- (void)filterControllerDidRequestToOpenMessageRequests:(id)arg1;
- (void)filterControllerDidRequestToOpenCreateRoom:(id)arg1;
- (void)filterControllerDidRequestToOpenBrowseRooms:(id)arg1;
- (void)filterControllerDidRequestToOpenMessageBots:(id)arg1;
- (void)filterController:(id)arg1 didRequestToNavigateToViewController:(id)arg2;
- (unsigned int)appLaunchDestination;
- (void)invalidateAppLaunchMetricsForReason:(id)arg1;
- (void)logFreshDataDisplayed;
- (void)logStaleDataDisplayed;
- (void)statusChipDidTap:(id)arg1;
- (void)bringHeaderViewToFront;
- (void)setUpHeaderView;
- (void)createHeaderView;
- (void)applicationDidChangeNetworkStateToOnline;
- (void)applicationDidChangeNetworkStateToConnecting;
- (void)applicationDidChangeNetworkStateToOfflineWithReason:(id)arg1;
- (void)viewDidEnterBackgroundAsTopViewController;
- (void)viewWillEnterForegroundAsTopViewController;
- (void)viewDidBecomeActiveAsTopViewController;
- (void)onVoiceOverStateChanged;
- (void)onSearchTap:(id)arg1;
- (void)onMenuTap:(id)arg1;
- (id)accessibilityValueForCount:(long long)arg1 isHidden:(_Bool)arg2;
- (void)updateBadgeCountAccessibilityValues;
- (void)accessibilityFocusOnSelectedTab;
- (void)updateAccessibilityFocusOrder;
- (void)updateHeaderViewMetrics;
- (void)dismissHeaderBanner;
- (void)presentHeaderBanner:(id)arg1;
- (id)badgeValueWithBadgeCount:(unsigned long long)arg1;
- (id)unreadInvitationsAccessibilityLabel;
- (void)updateUnviewedInvitedRoomsCount:(long long)arg1;
- (void)fetchUnviewedInvitedRoomsCount;
- (void)traitCollectionDidChange:(id)arg1;
- (id)newUnviewedRoomsBadge;
- (id)newBadgeForViewController:(id)arg1;
- (void)setUpBadgeViews;
- (void)setUpCustomTabBar;
- (void)setUpViewControllers;
- (void)setUpSharedServices;
- (void)setUpUserAvatarViewWithAccountID:(id)arg1;
- (id)gradientViewColorLocations;
- (void)setUpOpenSearchBar;
- (void)setUpAppBar;
- (void)dismissOpenSearchFilterControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentOpenSearchFilterController;
- (void)clearOpenSearchFilterController;
- (id)tabBarItemWithTitle:(id)arg1 imageName:(id)arg2 selectedImageName:(id)arg3 visualElementID:(int)arg4;
- (void)updateTrackingScrollView;
- (void)clearTrackingScrollView;
- (id)newOpenSearchFilterController;
- (void)presentDoNotDisturbErrorToast;
- (void)cancelDoNotDisturb;
- (void)setDoNotDisturbWithLength:(long long)arg1;
- (void)navigateToNotificationSettings;
- (void)presentDoNotDisturbOptionsFromView:(id)arg1;
- (void)openConversationPickerWithMode:(int)arg1;
- (void)setUpAccountParticleDiscAndRightNavigationItems;
- (_Bool)isCurrentSelectedTabOfType:(int)arg1;
- (id)badgeColorForUnviewedMessages;
- (id)badgeColorForBadgedMessages;
- (void)resetBadgesStyle;
- (void)setBadgedStyleForBadge:(id)arg1 withCount:(unsigned long long)arg2;
- (void)showUnviewedRoomsBadge;
- (void)hideUnviewedRoomsBadge;
- (void)hideBadge:(id)arg1;
- (id)newPresenceHeaderContainerView;
- (id)newMenuBarButtonItemIfNeeded;
- (void)setUpPresenceHeaderViewAndLeftNavigationItems;
- (void)performOnChildWorldControllers:(CDUnknownBlockType)arg1;
- (void)adjustBottomSafeAreaInsets;
- (_Bool)isRoomsTabSelected;
- (void)selectTabAtIndex:(unsigned long long)arg1;
- (void)hideProgressBar;
- (void)showProgressBar;
- (void)setUpProgressBar;
- (void)setUpSearchBarWithAccountID:(id)arg1;
- (_Bool)didUserTapTabForViewController:(id)arg1;
@property(readonly, nonatomic) UIView *bottomNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithOpenSearchBarEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
