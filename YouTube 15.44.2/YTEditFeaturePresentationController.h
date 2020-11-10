//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIControl, UIViewController, YTEditFeatureContainerView;
@protocol YTEditFeatureContainer, YTEditFeatureUI;

@interface YTEditFeaturePresentationController : UIPresentationController
{
    UIControl *_dismissalView;
    YTEditFeatureContainerView *_featureContainerView;
    _Bool _addDismiss;
    id <YTEditFeatureContainer> _presentingContainer;
    UIViewController *_containerViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(retain, nonatomic) id <YTEditFeatureContainer> presentingContainer; // @synthesize presentingContainer=_presentingContainer;
@property(nonatomic, getter=shouldAddDismiss) _Bool addDismiss; // @synthesize addDismiss=_addDismiss;
- (void)notifyPresented:(_Bool)arg1 feature:(id)arg2 inContainer:(id)arg3 didComplete:(_Bool)arg4;
- (void)notifyFeature:(id)arg1 presenting:(_Bool)arg2 inContainer:(id)arg3;
- (void)attachDismissalToControl:(id)arg1;
- (void)dismissSent:(id)arg1 forEvent:(id)arg2;
- (id)dismissAction;
- (id)presentedView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
@property(readonly, nonatomic) UIViewController<YTEditFeatureUI> *presentedFeature;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

