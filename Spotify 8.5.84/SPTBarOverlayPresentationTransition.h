//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerInteractiveTransitioning-Protocol.h"

@class CADisplayLink, NSArray, NSString, UIView, UIViewController;
@protocol SPTBarInteractiveTransitionParticipant, SPTBarOverlayPresentationTransitionContentAnimator, SPTBarOverlayViewController, UIViewControllerContextTransitioning;

@interface SPTBarOverlayPresentationTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    _Bool _presenting;
    _Bool _completed;
    _Bool _interactionInProgress;
    double _lastScrollViewOffsetY;
    UIView *_barView;
    NSArray *_barReplacementViews;
    id <UIViewControllerContextTransitioning> _transitioningContext;
    CADisplayLink *_displayLink;
    double _progressVelocity;
    double _progress;
    UIViewController<SPTBarInteractiveTransitionParticipant> *_barViewController;
    UIViewController<SPTBarOverlayViewController> *_overlayViewController;
    UIView *_tabBarView;
    UIView *_overlayCoverView;
    UIView *_barSnapshotView;
    UIView *_tabBarSnapshotView;
    double _dismissalInitialTranslationY;
    id <SPTBarOverlayPresentationTransitionContentAnimator> _contentAnimator;
    struct CGPoint _completionTranslation;
    struct CGPoint _completionVelocity;
    struct CGRect _barFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTBarOverlayPresentationTransitionContentAnimator> contentAnimator; // @synthesize contentAnimator=_contentAnimator;
@property(nonatomic) double dismissalInitialTranslationY; // @synthesize dismissalInitialTranslationY=_dismissalInitialTranslationY;
@property(nonatomic) _Bool interactionInProgress; // @synthesize interactionInProgress=_interactionInProgress;
@property(retain, nonatomic) UIView *tabBarSnapshotView; // @synthesize tabBarSnapshotView=_tabBarSnapshotView;
@property(retain, nonatomic) UIView *barSnapshotView; // @synthesize barSnapshotView=_barSnapshotView;
@property(retain, nonatomic) UIView *overlayCoverView; // @synthesize overlayCoverView=_overlayCoverView;
@property(retain, nonatomic) UIView *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(readonly, nonatomic) UIViewController<SPTBarOverlayViewController> *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(readonly, nonatomic) UIViewController<SPTBarInteractiveTransitionParticipant> *barViewController; // @synthesize barViewController=_barViewController;
@property(nonatomic) struct CGPoint completionVelocity; // @synthesize completionVelocity=_completionVelocity;
@property(nonatomic) struct CGPoint completionTranslation; // @synthesize completionTranslation=_completionTranslation;
@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double progressVelocity; // @synthesize progressVelocity=_progressVelocity;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitioningContext; // @synthesize transitioningContext=_transitioningContext;
@property(nonatomic) struct CGRect barFrame; // @synthesize barFrame=_barFrame;
@property(retain, nonatomic) NSArray *barReplacementViews; // @synthesize barReplacementViews=_barReplacementViews;
@property(retain, nonatomic) UIView *barView; // @synthesize barView=_barView;
@property(nonatomic) double lastScrollViewOffsetY; // @synthesize lastScrollViewOffsetY=_lastScrollViewOffsetY;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)completeInteractiveTransitionWithTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)updateInteractiveTransitionWithTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)startInteractiveTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (_Bool)scrolledFastEnoughToDismiss:(struct CGPoint)arg1 scrollView:(id)arg2;
- (_Bool)scrolledFastEnoughToPresent:(struct CGPoint)arg1;
- (_Bool)scrolledFastEnoughToDismiss:(struct CGPoint)arg1;
- (double)progressPercent;
- (double)dampingMultiplierForProgressPercent:(double)arg1;
- (void)update;
- (void)startAnimatingTransition;
- (void)destroyTransitioningContext;
- (void)setupTransitioningContext:(id)arg1;
- (id)initWithPresenting:(_Bool)arg1 barViewController:(id)arg2 tabBarView:(id)arg3 overlayViewController:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

