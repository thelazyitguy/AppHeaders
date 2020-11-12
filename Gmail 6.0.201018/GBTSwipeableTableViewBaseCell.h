//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "GBTSelectSupport-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CADisplayLink, CALayer, CAShapeLayer, MDCShadowLayer, NSString, UIView;
@protocol GBTSwipeableTableViewCellBackView, GBTSwipeableTableViewCellSubview;

@interface GBTSwipeableTableViewBaseCell : UITableViewCell <UIGestureRecognizerDelegate, GBTSelectSupport>
{
    UIView<GBTSwipeableTableViewCellSubview> *_frontView;
    UIView<GBTSwipeableTableViewCellBackView> *_backView;
    long long _initialSelectionStyle;
    double _backViewVisibilityRatio;
    double _animationEndTime;
    double _animationOffset;
    double _animationDirection;
    _Bool _stale;
    _Bool _focused;
    struct {
        unsigned int swiped:1;
        unsigned int animating:1;
        unsigned int isInitialSelectionStyleInit;
    } _flagsSwipe;
    CDStruct_99298048 _frontViewFlags;
    CDStruct_99298048 _backViewFlags;
    CALayer *_frontViewMaskLayer;
    MDCShadowLayer *_shadowLayer;
    CAShapeLayer *_shadowLayerMask;
    _Bool _swipeable;
    _Bool _hasSwipeToActBehavior;
    CADisplayLink *_animationDisplayLink;
}

+ (double)heightForObject:(id)arg1 width:(double)arg2;
+ (Class)backViewClass;
+ (Class)frontViewClass;
- (void).cxx_destruct;
@property(nonatomic) __weak CADisplayLink *animationDisplayLink; // @synthesize animationDisplayLink=_animationDisplayLink;
@property(nonatomic) _Bool hasSwipeToActBehavior; // @synthesize hasSwipeToActBehavior=_hasSwipeToActBehavior;
@property(nonatomic, getter=isSwipeable) _Bool swipeable; // @synthesize swipeable=_swipeable;
@property(retain, nonatomic) UIView<GBTSwipeableTableViewCellBackView> *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView<GBTSwipeableTableViewCellSubview> *frontView; // @synthesize frontView=_frontView;
- (void)addShadowLayerAnimationToPositionX:(struct CGPoint)arg1 timingFunction:(id)arg2;
- (void)addFrontViewMaskAnimationToCornerRadius:(double)arg1 timingFunction:(id)arg2;
- (void)addShadowLayerAnimationToOpacity:(double)arg1 timingFunction:(id)arg2;
- (void)setupInitialSelectionStyleIfNeeded;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)resetSwipeState;
- (void)removeSwipeUI;
- (void)updateCornerRadiusForRatio:(double)arg1;
- (void)layoutShadowLayer;
- (void)revealBackViewTo:(double)arg1 isPastMinimumDistance:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setupViewsForSwipeVisibility;
- (void)setupViewsForFrontVisibility;
- (void)setupViewsForAnimation;
- (void)updateFrontViewSelectedStateAnimated:(_Bool)arg1;
- (void)updateFrontViewHighlightedStateAnimated:(_Bool)arg1;
- (struct CGPoint)frontViewCenterPointForRatio:(double)arg1;
- (void)logSubviewVisualElementImpressions;
- (void)logImpression;
- (void)openSwipeAreaAnimated:(_Bool)arg1 withVelocity:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openSwipeAreaAnimated:(_Bool)arg1 withVelocity:(double)arg2;
- (void)openSwipeAreaAnimated:(_Bool)arg1;
- (void)closeSwipeAreaAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)closeSwipeAreaAnimated:(_Bool)arg1;
- (void)revealSwipeAreaWithRatio:(double)arg1 isPastMinimumDistance:(_Bool)arg2;
- (void)prepareForSwipe;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFocused:(_Bool)arg1;
- (void)prepareForReuse;
@property(readonly, nonatomic, getter=isSwiped) _Bool swiped;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
