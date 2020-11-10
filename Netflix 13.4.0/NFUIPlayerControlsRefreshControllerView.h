//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIPlayerControlsViewRefresh.h"

@class NSLayoutConstraint, UIView;

@interface NFUIPlayerControlsRefreshControllerView : NFUIPlayerControlsViewRefresh
{
    NSLayoutConstraint *_rewindShimLeadingConstriant;
    NSLayoutConstraint *_rewindShimWidthConstraint;
    NSLayoutConstraint *_rewindShimWidthShortConstraint;
    NSLayoutConstraint *_forwardShimTrailingConstraint;
    NSLayoutConstraint *_forwardShimWidthConstraint;
    NSLayoutConstraint *_forwardShimWidhtShortConstraint;
    UIView *_forwardShim;
    UIView *_rewindShim;
    UIView *_mainContainer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *mainContainer; // @synthesize mainContainer=_mainContainer;
@property(nonatomic) __weak UIView *rewindShim; // @synthesize rewindShim=_rewindShim;
@property(nonatomic) __weak UIView *forwardShim; // @synthesize forwardShim=_forwardShim;
@property(nonatomic) __weak NSLayoutConstraint *forwardShimWidhtShortConstraint; // @synthesize forwardShimWidhtShortConstraint=_forwardShimWidhtShortConstraint;
@property(nonatomic) __weak NSLayoutConstraint *forwardShimWidthConstraint; // @synthesize forwardShimWidthConstraint=_forwardShimWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *forwardShimTrailingConstraint; // @synthesize forwardShimTrailingConstraint=_forwardShimTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *rewindShimWidthShortConstraint; // @synthesize rewindShimWidthShortConstraint=_rewindShimWidthShortConstraint;
@property(nonatomic) __weak NSLayoutConstraint *rewindShimWidthConstraint; // @synthesize rewindShimWidthConstraint=_rewindShimWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *rewindShimLeadingConstriant; // @synthesize rewindShimLeadingConstriant=_rewindShimLeadingConstriant;
- (id)shimLayerForHalfScreen;
- (void)addShimGradients;
- (void)resizeLayer:(id)arg1 to:(struct CGSize)arg2;
- (void)animateRewindAfterDelayWithGradient:(id)arg1;
- (void)resetRewindShim;
- (void)animateForwardAfterDelayWithGradient:(id)arg1;
- (void)resetForwardShim;
- (void)configureView;

@end
