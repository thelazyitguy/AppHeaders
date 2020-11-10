//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ArgoCore/UIViewControllerInteractiveTransitioning-Protocol.h>

@class NFUIPercentDrivenInteractiveTransitionContext, NSString;
@protocol UIViewControllerAnimatedTransitioning;

@interface NFUIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning>
{
    NFUIPercentDrivenInteractiveTransitionContext *_context;
    double _duration;
    id <UIViewControllerAnimatedTransitioning> _animator;
    double _percentComplete;
    double _completionSpeed;
    long long _completionCurve;
}

- (void).cxx_destruct;
@property(nonatomic) long long completionCurve; // @synthesize completionCurve=_completionCurve;
@property(nonatomic) double completionSpeed; // @synthesize completionSpeed=_completionSpeed;
@property(readonly) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(nonatomic) __weak id <UIViewControllerAnimatedTransitioning> animator; // @synthesize animator=_animator;
@property(readonly) double duration; // @synthesize duration=_duration;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)finishInteractiveTransition:(_Bool)arg1 duration:(double)arg2 curve:(long long)arg3 speed:(double)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end
