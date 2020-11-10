//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/UIViewControllerAnimatedTransitioning-Protocol.h>

@class GOODimmingBackgroundView, NSString, UIColor, UIView, UIViewController, YTBottomSheetController;
@protocol UIViewControllerContextTransitioning;

@interface YTBottomSheetTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _wasDismissed;
    GOODimmingBackgroundView *_dimmingView;
    UIColor *_dimmingBackgroundColor;
    id <UIViewControllerContextTransitioning> _transitionContext;
    YTBottomSheetController *_presentedViewController;
    UIViewController *_sourceViewController;
    UIViewController *_destinationViewController;
    UIView *_sourceView;
    UIView *_destinationView;
    struct CGAffineTransform _savedTransform;
}

+ (id)newDimmingView;
- (void).cxx_destruct;
@property(nonatomic) _Bool wasDismissed; // @synthesize wasDismissed=_wasDismissed;
@property(nonatomic) struct CGAffineTransform savedTransform; // @synthesize savedTransform=_savedTransform;
@property(retain, nonatomic) UIView *destinationView; // @synthesize destinationView=_destinationView;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIViewController *destinationViewController; // @synthesize destinationViewController=_destinationViewController;
@property(retain, nonatomic) UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(nonatomic) __weak YTBottomSheetController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) UIColor *dimmingBackgroundColor; // @synthesize dimmingBackgroundColor=_dimmingBackgroundColor;
@property(retain, nonatomic) GOODimmingBackgroundView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (void)dismissPresentedControllerIfNecessary:(id)arg1;
- (void)performDismissalAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)performPresentationAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)performTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareTransition;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)installDimmingViewForView:(id)arg1;
- (void)addTapHandlerToContainer;
- (struct CGAffineTransform)offScreenTransformForPresentedView;
- (void)setupForTransitionUsingContext:(id)arg1;
@property(readonly, nonatomic) UIView *containerView;
- (id)presentingView;
- (id)presentedView;
@property(readonly, nonatomic) _Bool isPresenting;
- (id)dismissalTiming;
- (_Bool)shouldChangeDimmingAlpha;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

