//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class DYNEllipsisAnimationView, DYNMessageContentWrapperBorderView, NSLayoutConstraint, UILabel;
@protocol DYNColorSchemeService;

@interface DYNSendingIndicatorContentView : GOOBaseContentView
{
    UILabel *_sendingLabel;
    DYNEllipsisAnimationView *_animationEllipsesView;
    NSLayoutConstraint *_bottomPaddingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    DYNMessageContentWrapperBorderView *_borderWrapperView;
    id <DYNColorSchemeService> _colorSchemeService;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
- (id)dotColorAnimation;
- (void)clearBorderWrapperIfNeeded;
- (void)setUpBorderWrapperIfNeeded;
- (void)setUpConstraints;
- (void)setUpViews;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
