//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"
#import "YTNGWatchAnimation-Protocol.h"

@class CADisplayLink, CALayer, GIMMe, NSString, YTNGWatchLayerView;
@protocol YTNGWatchMiniPlayerAnimationDelegate;

@interface YTNGWatchFloatyBoxAnimation : NSObject <CAAnimationDelegate, YTNGWatchAnimation>
{
    YTNGWatchLayerView<YTNGWatchMiniPlayerAnimationDelegate> *_animationDelegate;
    CADisplayLink *_displayLink;
    double _initialExpansionFraction;
    double _completionExpansionFraction;
    double _animationInitialPosition;
    double _animationFinalPosition;
    struct CGRect _finalFloatyBarFrame;
    struct CGRect _initialWatchPageFrame;
    CALayer *_miniplayerBackgroundLayer;
    _Bool _isAnimating;
    double _expansionFraction;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) double expansionFraction; // @synthesize expansionFraction=_expansionFraction;
- (void)resetFinalAnimationFrames;
- (void)updateLayoutForExpansionFraction:(double)arg1;
- (void)applyBasicAnimations:(id)arg1 toLayer:(id)arg2;
- (void)animateWithDisplayLinkUpdateWithDuration:(double)arg1 completionFraction:(double)arg2 completionBlock:(CDUnknownBlockType)arg3 isCancellation:(_Bool)arg4;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)stopDisplayLink;
- (void)updateDisplayLink:(id)arg1;
- (void)startDisplayLinkWithInitialExpansionFraction:(double)arg1 completionExpansionFraction:(double)arg2;
- (double)statusBarFadeTargetHeightRatio;
- (void)completeCollapseAnimation:(CDUnknownBlockType)arg1 isCancellation:(_Bool)arg2;
- (void)completeExpandAnimation:(CDUnknownBlockType)arg1 isCancellation:(_Bool)arg2;
- (void)prepareCollapseAnimation;
- (void)prepareExpandAnimation;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

