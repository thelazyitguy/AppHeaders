//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerInteractiveTransitioning-Protocol.h"
#import "YTSwipeDismissAnimatorDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIViewController, UIViewPropertyAnimator, YTSwipeDismissAnimator;
@protocol UIViewControllerContextTransitioning, YTSwipeDismissInteractiveTransitionDelegate;

@interface YTSwipeDismissInteractiveTransition : NSObject <UIGestureRecognizerDelegate, YTSwipeDismissAnimatorDelegate, UIViewControllerInteractiveTransitioning>
{
    UIViewController *_presentedViewController;
    double _progress;
    id <UIViewControllerContextTransitioning> _context;
    YTSwipeDismissAnimator *_animator;
    UIViewPropertyAnimator *_animation;
    double _startingFraction;
    UIPanGestureRecognizer *_interruptGestureRecognizer;
    _Bool _isInteractiveTransition;
    _Bool _isPanning;
    id <YTSwipeDismissInteractiveTransitionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isPanning; // @synthesize isPanning=_isPanning;
@property(nonatomic) __weak id <YTSwipeDismissInteractiveTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animationDidComplete:(_Bool)arg1;
- (void)finishAnimation:(_Bool)arg1 withVelocity:(double)arg2;
- (void)didPan:(id)arg1;
- (void)prepareViewController:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithPresentedViewController:(id)arg1 animator:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

