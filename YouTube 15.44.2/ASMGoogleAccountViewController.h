//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASMObservingViewController.h>

#import <Module_Framework/ASMOctarineAccountSwitchingDelegate-Protocol.h>
#import <Module_Framework/OGLAccountMenuDelegate-Protocol.h>
#import <Module_Framework/UIScrollViewDelegate-Protocol.h>

@class ASMViewBlueprint, NSString, UIViewController;
@protocol ASMAccountUIUtilities, ASMGoogleAccountViewModel, ASMNavigationHierarchyController, ASMSessionInternal, ASMViewControllerFactory, OGLAccountService;

@interface ASMGoogleAccountViewController : ASMObservingViewController <OGLAccountMenuDelegate, UIScrollViewDelegate, ASMOctarineAccountSwitchingDelegate>
{
    _Bool _viewVisible;
    _Bool _shouldDismissController;
    id <ASMGoogleAccountViewModel> _model;
    id <ASMViewControllerFactory> _viewControllerFactory;
    UIViewController<ASMNavigationHierarchyController> *_rootContentController;
    ASMViewBlueprint *_lastScreenBlueprint;
    CDUnknownBlockType _pendingExternalLaunchBlock;
    id <OGLAccountService> _oglAccountService;
    CDUnknownBlockType _singleAppSignOutCallback;
    CDUnknownBlockType _removeAccountCallback;
    id <ASMSessionInternal> _session;
    long long _previousOverrideUserInterfaceStyle;
    id <ASMAccountUIUtilities> _accountUIUtilities;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ASMAccountUIUtilities> accountUIUtilities; // @synthesize accountUIUtilities=_accountUIUtilities;
@property(nonatomic) long long previousOverrideUserInterfaceStyle; // @synthesize previousOverrideUserInterfaceStyle=_previousOverrideUserInterfaceStyle;
@property(retain, nonatomic) id <ASMSessionInternal> session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType removeAccountCallback; // @synthesize removeAccountCallback=_removeAccountCallback;
@property(copy, nonatomic) CDUnknownBlockType singleAppSignOutCallback; // @synthesize singleAppSignOutCallback=_singleAppSignOutCallback;
@property(retain, nonatomic) id <OGLAccountService> oglAccountService; // @synthesize oglAccountService=_oglAccountService;
@property(copy, nonatomic) CDUnknownBlockType pendingExternalLaunchBlock; // @synthesize pendingExternalLaunchBlock=_pendingExternalLaunchBlock;
@property(nonatomic) _Bool shouldDismissController; // @synthesize shouldDismissController=_shouldDismissController;
@property(nonatomic) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(retain, nonatomic) ASMViewBlueprint *lastScreenBlueprint; // @synthesize lastScreenBlueprint=_lastScreenBlueprint;
@property(retain, nonatomic) UIViewController<ASMNavigationHierarchyController> *rootContentController; // @synthesize rootContentController=_rootContentController;
@property(retain, nonatomic) id <ASMViewControllerFactory> viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property(retain, nonatomic) id <ASMGoogleAccountViewModel> model; // @synthesize model=_model;
- (void)replaceRootContentControllerWithViewController:(id)arg1;
- (void)updateViewControllerStackForHierarchy:(id)arg1;
- (void)dismiss;
- (void)launchExternalAlternativeForScreenWithKey:(id)arg1 parameters:(id)arg2;
- (void)showAccountSwitcherAnchoredToSourceView:(id)arg1 type:(unsigned long long)arg2;
- (id)createPrivacyPolicyToSController;
- (void)updateShouldDismissController;
- (id)privacyPolicyToSController;
- (void)userDidSwitchAccountTo:(id)arg1;
- (void)accountMenuPresenter:(id)arg1 didSwitchFromAccount:(id)arg2 toAccount:(id)arg3;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 viewControllerFactory:(id)arg2 singleAppSignOutCallback:(CDUnknownBlockType)arg3 removeAccountCallback:(CDUnknownBlockType)arg4 oglAccountService:(id)arg5 session:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

