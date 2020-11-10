//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, MDCActivityIndicatorTransition, MDMMotionAnimator, NSArray;
@protocol MDCActivityIndicatorDelegate;

@interface MDCActivityIndicator : UIView
{
    _Bool _animatingOut;
    _Bool _animationsAdded;
    _Bool _animationInProgress;
    _Bool _backgrounded;
    _Bool _cycleInProgress;
    double _currentProgress;
    double _lastProgress;
    MDMMotionAnimator *_animator;
    _Bool _animating;
    _Bool _trackEnabled;
    float _progress;
    id <MDCActivityIndicatorDelegate> _delegate;
    double _radius;
    double _strokeWidth;
    long long _indicatorMode;
    NSArray *_cycleColors;
    CDUnknownBlockType _traitCollectionDidChangeBlock;
    double _minStrokeDifference;
    unsigned long long _cycleColorsIndex;
    long long _cycleCount;
    long long _cycleStartIndex;
    CALayer *_outerRotationLayer;
    CAShapeLayer *_strokeLayer;
    CAShapeLayer *_trackLayer;
    MDCActivityIndicatorTransition *_stopTransition;
}

+ (id)bundlePathWithName:(id)arg1;
+ (id)bundle;
+ (id)defaultCycleColors;
+ (double)defaultHeight;
+ (id)gmdc_activityIndicator;
- (void).cxx_destruct;
@property(retain, nonatomic) MDCActivityIndicatorTransition *stopTransition; // @synthesize stopTransition=_stopTransition;
@property(readonly, nonatomic) CAShapeLayer *trackLayer; // @synthesize trackLayer=_trackLayer;
@property(readonly, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(readonly, nonatomic) CALayer *outerRotationLayer; // @synthesize outerRotationLayer=_outerRotationLayer;
@property(nonatomic) long long cycleStartIndex; // @synthesize cycleStartIndex=_cycleStartIndex;
@property(readonly, nonatomic) long long cycleCount; // @synthesize cycleCount=_cycleCount;
@property(nonatomic) unsigned long long cycleColorsIndex; // @synthesize cycleColorsIndex=_cycleColorsIndex;
@property(readonly, nonatomic) double minStrokeDifference; // @synthesize minStrokeDifference=_minStrokeDifference;
@property(copy, nonatomic) CDUnknownBlockType traitCollectionDidChangeBlock; // @synthesize traitCollectionDidChangeBlock=_traitCollectionDidChangeBlock;
@property(copy, nonatomic) NSArray *cycleColors; // @synthesize cycleColors=_cycleColors;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) long long indicatorMode; // @synthesize indicatorMode=_indicatorMode;
@property(nonatomic) _Bool trackEnabled; // @synthesize trackEnabled=_trackEnabled;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) __weak id <MDCActivityIndicatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)defaultAccessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)applyPropertiesWithoutAnimation:(CDUnknownBlockType)arg1;
- (void)removeAnimations;
- (void)animateOut;
- (double)normalizedRotationForCycle:(long long)arg1;
- (void)addProgressAnimationIfRequired;
- (void)strokeRotationCycleFinishedFromState:(long long)arg1;
- (void)setDeterminateProgressWithoutAnimation;
- (void)addProgressAnimation;
- (void)addTransitionToDeterminateCycle;
- (void)addTransitionToIndeterminateCycle;
- (void)addStrokeRotationCycle;
- (void)updateStrokeColor;
- (void)updateStrokePath;
- (void)addStopAnimation;
- (void)actuallyStopAnimating;
- (void)actuallyStartAnimating;
- (void)controlAnimatingOnForegroundChange:(id)arg1;
- (void)registerForegroundAndBackgroundNotificationObserversIfNeeded;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)setIndicatorMode:(long long)arg1 animated:(_Bool)arg2;
- (void)setStrokeColor:(id)arg1;
- (void)resetStrokeColor;
- (void)stopAnimatingImmediately;
- (void)stopAnimatingWithTransition:(id)arg1;
- (void)stopAnimating;
- (void)startAnimatingWithTransition:(id)arg1 cycleStartIndex:(long long)arg2;
- (void)startAnimating;
- (void)setHidden:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)willMoveToWindow:(id)arg1;
- (void)commonMDCActivityIndicatorInit;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)fadeOutAnimated;
- (void)fadeInAnimatedWithDelay:(double)arg1 aboveView:(id)arg2;
- (void)displayDuringActivity:(id)arg1 aboveView:(id)arg2 withDelay:(double)arg3;
- (void)gmdc_applyThemeWithColorScheme:(id)arg1;
- (void)gmdc_applyThemeWithScheme:(id)arg1;

@end

