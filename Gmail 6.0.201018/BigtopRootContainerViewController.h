//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GBTAccountsServiceListener-Protocol.h"
#import "GBTSignInEntryScreenControllerDelegate-Protocol.h"
#import "GBTSignInErrorViewControllerDelegate-Protocol.h"
#import "HUBGuestRootViewControllerScrollable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class GBTAppBarViewController, GBTSignInErrorViewController, GPCPromise, NSString, SDPNavContainerController, UINavigationController, UIView;
@protocol GBTSplitPanelDetailSupport, PanelViewControllerInterface;

@interface BigtopRootContainerViewController : UIViewController <GBTSignInEntryScreenControllerDelegate, GBTSignInErrorViewControllerDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, GBTAccountsServiceListener, HUBGuestRootViewControllerScrollable>
{
    GPCPromise *_gm2OOBEFinishedPromise;
    _Bool _isAppBarHidden;
    _Bool _isDismissingSignInView;
    SDPNavContainerController *_navContainerVC;
    UIView *_backgroundRenderView;
    UIViewController<GBTSplitPanelDetailSupport> *_edgeSwipeVC;
    UINavigationController *_customNavigationController;
    _Bool _isShowingEmptyView;
    _Bool _viewHierarchyCreated;
    _Bool _transitioningToLandingView;
    _Bool _currentAccountDidChange;
    _Bool _willTransitionRootVC;
    UIViewController<PanelViewControllerInterface> *_panelVC;
    UIViewController *_signInPresentingViewController;
    GBTAppBarViewController *_appBar;
    GBTSignInErrorViewController *_signInErrorViewController;
}

+ (id)sharedRootContainerVC;
+ (void)setSharedRootContainerVC:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool willTransitionRootVC; // @synthesize willTransitionRootVC=_willTransitionRootVC;
@property(retain, nonatomic) GBTSignInErrorViewController *signInErrorViewController; // @synthesize signInErrorViewController=_signInErrorViewController;
@property(nonatomic) _Bool currentAccountDidChange; // @synthesize currentAccountDidChange=_currentAccountDidChange;
@property(nonatomic) _Bool transitioningToLandingView; // @synthesize transitioningToLandingView=_transitioningToLandingView;
@property(nonatomic) _Bool viewHierarchyCreated; // @synthesize viewHierarchyCreated=_viewHierarchyCreated;
@property(retain, nonatomic) GBTAppBarViewController *appBar; // @synthesize appBar=_appBar;
@property(retain, nonatomic) UIViewController *signInPresentingViewController; // @synthesize signInPresentingViewController=_signInPresentingViewController;
@property(retain, nonatomic) UIViewController<PanelViewControllerInterface> *panelVC; // @synthesize panelVC=_panelVC;
@property(nonatomic) _Bool isShowingEmptyView; // @synthesize isShowingEmptyView=_isShowingEmptyView;
- (void)handleSignInFailedAndShouldClearCurrentAccount;
- (CDUnknownBlockType)signInEntryTransitionCompletionWithError:(id)arg1;
- (void)unlockMailVCs;
- (void)signInViewControllerWillDismiss;
- (void)signInViewControllerDidDismiss;
- (void)showPanelVC:(id)arg1;
- (void)preserveToastsOnUpdateRootViewController;
- (id)lastVisibleChild;
- (id)lastChild;
@property(readonly, nonatomic) unsigned long long viewControllersCount;
- (void)hidePanelVC;
- (void)addSignInEntryViewToViewHierarchyWithCompletion:(CDUnknownBlockType)arg1;
- (void)closeComposeViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dynamicTypeChanged:(id)arg1;
- (_Bool)canRegisterCallBannerForAccountID:(id)arg1;
- (void)unregisterCallBanner;
- (void)registerCallBanner;
- (_Bool)scrollToTopView:(id)arg1;
- (void)scrollToTop;
- (void)signInEntryScreenControllerDidTapSignInButton;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)authenticatorHasNoAccountsSignedIn;
- (void)authenticatorDidSwitchCurrentAccount;
- (_Bool)shouldDisableRateMyAppForModals;
- (void)updateUIAfterSignInWithAccount:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showOutOfBoxExperienceIfNeeded;
- (void)openOutOfBoxExperience;
- (void)signInErrorViewControllerShouldDismiss:(id)arg1;
- (void)showSignInErrorViewControllerForError:(id)arg1;
- (void)showSignInErrorViewController;
- (void)shouldShowSignInErrorViewController:(id)arg1;
- (_Bool)addViewForBackgroundRender:(id)arg1;
- (void)releaseBackgroundRenderView;
@property(readonly, nonatomic) UIView *backgroundRenderView;
- (id)rootNavigationViewController;
@property(readonly, nonatomic) UINavigationController *customNavigationController;
- (void)listViewFinishedRendering;
- (void)didOpenNotificationWithSuccess:(_Bool)arg1;
- (void)createAndShowPanelVC;
- (void)resetViewHierarchyToEmptyView;
- (void)createAndShowEmptyView;
- (void)precreateAndShowViewHierarchy;
- (void)updatePanelVCWithOpeningNotification:(_Bool)arg1;
- (void)handleMemoryWarning;
- (void)closeSignInViewControllerAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)closeSignInViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)closeActiveViewControllersWithCompletion:(CDUnknownBlockType)arg1;
- (void)closeActiveViewControllersAndShowInboxWithPreferenceToLastSeenInbox:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) GPCPromise *gm2OOBEFinishedPromise;
- (void)updateAppBarAccessibilityElementsHidden:(_Bool)arg1;
- (void)updateAppBarHiddenState;
- (void)setAppBarHidden:(_Bool)arg1;
- (_Bool)appBarHiddenState;
- (void)overrideTraitsForChildViewController:(id)arg1 size:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)traitCollectionDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
