//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "A9VSScrollViewAnimation-Protocol.h"

@class NSString, UIView;

@interface A9VSStyleSnapScrollViewAnimation : NSObject <A9VSScrollViewAnimation>
{
    _Bool isCompleted;
    _Bool _isBelowReachableDistance;
    UIView *_headerView;
    UIView *_buttonsBar;
    UIView *_shadowView;
    UIView *_backToTopButton;
    UIView *_bottomChrome;
    double _previousScrollPosition;
    double _absoluteTopBoundaryOfFrame;
    double _maximumAllowableOffset;
    double _relativeTopBoundaryOfFrame;
    double _relativeBottomBoundaryOfFrame;
    double _contentHeight;
    unsigned long long _scrollDirection;
}

@property unsigned long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property _Bool isBelowReachableDistance; // @synthesize isBelowReachableDistance=_isBelowReachableDistance;
@property double contentHeight; // @synthesize contentHeight=_contentHeight;
@property double relativeBottomBoundaryOfFrame; // @synthesize relativeBottomBoundaryOfFrame=_relativeBottomBoundaryOfFrame;
@property double relativeTopBoundaryOfFrame; // @synthesize relativeTopBoundaryOfFrame=_relativeTopBoundaryOfFrame;
@property(nonatomic) double maximumAllowableOffset; // @synthesize maximumAllowableOffset=_maximumAllowableOffset;
@property(readonly) double absoluteTopBoundaryOfFrame; // @synthesize absoluteTopBoundaryOfFrame=_absoluteTopBoundaryOfFrame;
@property double previousScrollPosition; // @synthesize previousScrollPosition=_previousScrollPosition;
@property(nonatomic) __weak UIView *bottomChrome; // @synthesize bottomChrome=_bottomChrome;
@property(nonatomic) __weak UIView *backToTopButton; // @synthesize backToTopButton=_backToTopButton;
@property(nonatomic) __weak UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) __weak UIView *buttonsBar; // @synthesize buttonsBar=_buttonsBar;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property _Bool isCompleted; // @synthesize isCompleted;
- (void).cxx_destruct;
- (void)animateToInitialPosition:(id)arg1;
- (void)animateToHiddenWithOffset:(double)arg1 duration:(double)arg2;
- (void)animateWhenScrollViewDidEndDragging:(id)arg1;
- (void)setRelativeBoundriesWithOffset:(double)arg1 contentSize:(double)arg2;
- (void)animateToScrollPositionWithOffset:(double)arg1;
- (void)animateToFinalPositionIfNeededWithOffset:(double)arg1;
- (void)setScrollDirectionWithOffset:(double)arg1;
- (_Bool)isOffsetWithinRelativeBoundaryOfFrame:(double)arg1;
- (_Bool)isScollViewPositionWithinContentBoundary:(id)arg1;
- (void)animateToInitialPositionWithBottomButtonHidden:(_Bool)arg1 duration:(double)arg2;
- (_Bool)isScrollViewPositionBelowReachableDistance:(id)arg1;
- (void)setPositionWithOffset:(double)arg1;
- (_Bool)isScrollViewContentSizeChanged:(id)arg1;
- (void)animateWhenScrolling:(id)arg1;
- (void)setInitialBoundaries;
- (id)initWithHeaderView:(id)arg1 buttonsBar:(id)arg2 shadowView:(id)arg3 backToTopButton:(id)arg4 bottomChrome:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
