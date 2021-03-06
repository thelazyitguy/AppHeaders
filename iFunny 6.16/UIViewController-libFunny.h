//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MASViewAttribute, MDCBottomSheetPresentationController, MDCDialogPresentationController;

@interface UIViewController (libFunny)
+ (void)showOkCancelAlertWithTitle:(id)arg1 description:(id)arg2 okTitle:(id)arg3 cancelTitle:(id)arg4 okHandler:(CDUnknownBlockType)arg5 cancelHandler:(CDUnknownBlockType)arg6;
+ (void)showAlertWithDescription:(id)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)showAlertWithError:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)topMostControllerFromController:(id)arg1;
+ (id)IA_topMostController;
+ (id)stk_topViewControllerFromController:(id)arg1;
+ (id)stk_topPresentedViewController;
- (void)if_setTitleWithTitle:(id)arg1 isArrowDownHidden:(_Bool)arg2 alphaType:(unsigned long long)arg3;
- (void)if_setTitleWithTitle:(id)arg1 isArrowDownHidden:(_Bool)arg2;
- (void)if_addBackButtonWithTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, nonatomic) MASViewAttribute *mas_bottomLayoutGuideBottom;
@property(readonly, nonatomic) MASViewAttribute *mas_bottomLayoutGuideTop;
@property(readonly, nonatomic) MASViewAttribute *mas_bottomLayoutGuide;
@property(readonly, nonatomic) MASViewAttribute *mas_topLayoutGuideBottom;
@property(readonly, nonatomic) MASViewAttribute *mas_topLayoutGuideTop;
@property(readonly, nonatomic) MASViewAttribute *mas_topLayoutGuide;
@property(readonly, nonatomic) MDCBottomSheetPresentationController *mdc_bottomSheetPresentationController;
@property(readonly, nonatomic) MDCDialogPresentationController *mdc_dialogPresentationController;
- (void)vks_viewControllerDidDismiss;
- (void)vks_viewControllerWillDismiss;
- (void)vks_presentViewControllerThroughDelegate;
- (id)IA_topMostController;
- (id)stk_topController;
- (id)fn_activityItemsFromActivityActionTypes:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)fn_activityItemsFromSharingTypes:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)fn_showSharingMenuWithTopActivityItems:(id)arg1 inView:(id)arg2 fromRect:(struct CGRect)arg3 delegate:(id)arg4;
- (_Bool)fn_isBanActionAvailable;
- (id)fn_activityItemActionsForContent:(id)arg1 contentFeedType:(long long)arg2;
- (id)fn_sharingTypesForContent:(id)arg1 contentFeedType:(long long)arg2;
- (id)fn_defaultActionTypes;
- (id)fn_defaultSharingTypes;
- (void)fn_showDefaultSharingMenu:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fn_showSharingMenuInView:(id)arg1 fromRect:(struct CGRect)arg2 delegate:(id)arg3 sharingTypes:(id)arg4 activityActionTypes:(id)arg5 sharingAction:(CDUnknownBlockType)arg6 activityItemAction:(CDUnknownBlockType)arg7;
- (void)if_hideSharingSuggestionAlert:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)if_showSharingSuggestionAlert:(CDUnknownBlockType)arg1;
@end

