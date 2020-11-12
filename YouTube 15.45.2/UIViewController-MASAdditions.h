//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GOOActionSheetController, GOOHeaderConfiguration, GOOHeaderViewController, GOOPanelViewController, MASViewAttribute, MDCBottomSheetPresentationController, MDCDialogPresentationController, PRMSpan, UIView, YTActionSheetController;
@protocol GOOFlexibleHeader, UIViewControllerAnimatedTransitioning, YTNavigationBarProtocol;

@interface UIViewController (MASAdditions)
+ (void)prmtracing_setup;
+ (id)parentViewControllerOfView:(id)arg1;
+ (void)grw_overrideBestPresentationController:(id)arg1;
+ (void)grw_overrideNextSafariViewControllerPresentationWithBlock:(CDUnknownBlockType)arg1;
+ (_Bool)grw_presentURLInSafariViewController:(id)arg1;
+ (void)grw_bestPresentationControllerAsynchronous:(CDUnknownBlockType)arg1;
+ (id)grw_bestPresentationViewController;
+ (void)goo_swizzleAutomaticallyAdjustsScrollViewInsets;
@property(readonly, nonatomic) MASViewAttribute *mas_bottomLayoutGuideBottom;
@property(readonly, nonatomic) MASViewAttribute *mas_bottomLayoutGuideTop;
@property(readonly, nonatomic) MASViewAttribute *mas_bottomLayoutGuide;
@property(readonly, nonatomic) MASViewAttribute *mas_topLayoutGuideBottom;
@property(readonly, nonatomic) MASViewAttribute *mas_topLayoutGuideTop;
@property(readonly, nonatomic) MASViewAttribute *mas_topLayoutGuide;
@property(readonly, nonatomic) GOOPanelViewController *goo_panelViewController;
- (void)setSidePanelController:(id)arg1;
- (id)sidePanelController;
- (void)prmtracing_viewDidDisappear:(_Bool)arg1;
- (void)prmtracing_viewWillDisappear:(_Bool)arg1;
- (void)prmtracing_viewDidAppear:(_Bool)arg1;
- (void)prmtracing_viewWillAppear:(_Bool)arg1;
- (void)prmtracing_viewDidLoad;
- (void)prmtracing_loadView;
- (void)prmtracing_awakeFromNib;
@property(retain, nonatomic) PRMSpan *prmtracing_viewDisappearanceSpan;
@property(retain, nonatomic) PRMSpan *prmtracing_viewAppearanceSpan;
@property(retain, nonatomic) PRMSpan *prmtracing_loadViewSpan;
- (id)prmtracing_awakeFromNibSpan;
- (void)setPrmtracing_awakeFromNibSpan:(id)arg1;
- (void)applyDarkMode;
- (void)applyLightMode;
- (void)applyUserInterfaceStyle:(unsigned long long)arg1;
- (void)checkTraitCollection;
- (void)asm_postDismissAllASMAlertViewsNotification;
- (_Bool)ogl_preferredContentSizeCategoryChangedFromPreviousTraitCollection:(id)arg1;
@property(retain, nonatomic, setter=yt_setPresentingSheetController:) YTActionSheetController *yt_presentingSheetController;
@property(readonly, nonatomic) UIView<YTNavigationBarProtocol> *yt_headerView;
@property(nonatomic, getter=isInPopover) _Bool inPopover;
- (struct CGSize)defaultSizeForViewInPopover;
- (_Bool)isDescendantOfViewController:(id)arg1;
- (id)yt_setupNavigationBackButtonWithColor:(id)arg1;
- (void)yt_didTouchBackButton;
- (void)grw_setActionMenuFABDiscoveryIdentifier:(id)arg1;
- (id)grw_safeBottomLayoutAnchor;
- (id)grw_safeTopLayoutAnchor;
- (void)prmvcsl_viewWillDisappear:(_Bool)arg1;
- (void)prmvcsl_viewDidAppear:(_Bool)arg1;
- (id)goo_internalNavigationStyle;
- (void)goo_backButtonTouched;
- (_Bool)goo_automaticallyAdjustsScrollViewInsets;
@property(readonly, nonatomic) MDCBottomSheetPresentationController *mdc_bottomSheetPresentationController;
@property(readonly, nonatomic) GOOHeaderViewController *goo_headerViewController;
@property(nonatomic, setter=goo_setFlexibleHeader:) __weak id <GOOFlexibleHeader> goo_flexibleHeader;
@property(readonly, nonatomic) GOOHeaderConfiguration *goo_headerConfig;
- (_Bool)goo_hasHeaderConfig;
@property(readonly, nonatomic) MDCDialogPresentationController *mdc_dialogPresentationController;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> popTransition;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> pushTransition;
@property(retain, nonatomic, setter=goo_setPresentingSheetController:) GOOActionSheetController *goo_presentingSheetController;
@property(readonly, nonatomic) UIViewController *goo_deepestChildViewControllerForStatusBarHidden;
@property(readonly, nonatomic) UIViewController *goo_deepestChildViewControllerForStatusBarStyle;
@end
