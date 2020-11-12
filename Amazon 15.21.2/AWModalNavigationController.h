//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWWebNavigationController.h"

#import "ANXAppearanceManagerListener-Protocol.h"
#import "AWModalNavigationControllerProtocol-Protocol.h"

@class NSNumber, NSString, UIColor, UIDocumentPickerViewController, UIFont;
@protocol AWModalNavigationControllerDismissListener;

@interface AWModalNavigationController : AWWebNavigationController <ANXAppearanceManagerListener, AWModalNavigationControllerProtocol>
{
    _Bool authenticated;
    _Bool _leftBarButtonItemTextAllCaps;
    _Bool _hideDefaultBackItem;
    _Bool _shouldContainIdentityViewController;
    unsigned long long _aw_currentState;
    id <AWModalNavigationControllerDismissListener> _dismissListener;
    UIFont *_leftBarButtonItemCustomFont;
    UIColor *_leftBarButtonItemCustomFontColor;
    CDUnknownBlockType _dismissBlock;
    NSNumber *_buttonShapesCheckResult;
    UIDocumentPickerViewController *_docPicker;
    NSString *_dismissButtonTitle;
}

+ (id)topPresentedViewControllerFrom:(id)arg1;
+ (id)modalsRoot;
+ (void)setModalsRoot:(id)arg1;
+ (_Bool)isModalAlreadyPresented;
+ (_Bool)isModalNavigationController:(id)arg1;
+ (void)presentFromTimer:(id)arg1;
+ (void)addPendingModal:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)hasPendingModals;
@property(retain, nonatomic) NSString *dismissButtonTitle; // @synthesize dismissButtonTitle=_dismissButtonTitle;
@property(nonatomic) __weak UIDocumentPickerViewController *docPicker; // @synthesize docPicker=_docPicker;
@property(retain, nonatomic) NSNumber *buttonShapesCheckResult; // @synthesize buttonShapesCheckResult=_buttonShapesCheckResult;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) _Bool shouldContainIdentityViewController; // @synthesize shouldContainIdentityViewController=_shouldContainIdentityViewController;
@property(nonatomic) _Bool hideDefaultBackItem; // @synthesize hideDefaultBackItem=_hideDefaultBackItem;
@property(nonatomic) _Bool leftBarButtonItemTextAllCaps; // @synthesize leftBarButtonItemTextAllCaps=_leftBarButtonItemTextAllCaps;
@property(retain, nonatomic) UIColor *leftBarButtonItemCustomFontColor; // @synthesize leftBarButtonItemCustomFontColor=_leftBarButtonItemCustomFontColor;
@property(retain, nonatomic) UIFont *leftBarButtonItemCustomFont; // @synthesize leftBarButtonItemCustomFont=_leftBarButtonItemCustomFont;
@property(nonatomic) __weak id <AWModalNavigationControllerDismissListener> dismissListener; // @synthesize dismissListener=_dismissListener;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated;
@property(nonatomic) unsigned long long aw_currentState; // @synthesize aw_currentState=_aw_currentState;
- (void).cxx_destruct;
- (void)updateNavBarForRootViewController;
- (_Bool)buttonShapesEnabled;
- (void)updateBackButtonTextVisibilityForViewControllers:(id)arg1;
- (void)appearanceContextDidChangeAnimated:(_Bool)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (_Bool)shouldDismissWhenChildShowsDetailPage;
- (_Bool)disablesAutomaticKeyboardDismissal;
- (_Bool)shouldHideNavigationButtons;
- (void)updateDismissButtonOnViewController:(id)arg1;
- (void)setDismissButtonOnViewController:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismissAnimatedWithoutChildren:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAnimatedWithoutChildren:(_Bool)arg1;
- (void)dismissFromButton;
- (void)presentAnimated:(_Bool)arg1 fromParentViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentAnimated:(_Bool)arg1;
- (id)dismissButtonTitleFromType:(unsigned long long)arg1;
- (_Bool)hasKindOfViewControllerInModalStack:(Class)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2 addDismissButton:(_Bool)arg3;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 authenticated:(_Bool)arg2 shouldContainIdentityViewController:(_Bool)arg3 dismissButtonTitle:(id)arg4 dismissBlock:(CDUnknownBlockType)arg5;
- (id)initWithRootViewController:(id)arg1 authenticated:(_Bool)arg2 dismissButtonTitle:(id)arg3 dismissBlock:(CDUnknownBlockType)arg4;
- (id)initWithRootViewController:(id)arg1 authenticated:(_Bool)arg2 dismissButtonTitle:(id)arg3;
- (id)initWithRootViewController:(id)arg1 authenticated:(_Bool)arg2 shouldContainIdentityViewController:(_Bool)arg3 dismissButtonType:(unsigned long long)arg4;
- (id)initWithRootViewController:(id)arg1 dismissButtonType:(unsigned long long)arg2;
- (void)setContext:(id)arg1 transition:(id)arg2 animated:(_Bool)arg3;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
