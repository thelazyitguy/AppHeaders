//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSString, TFNPillTransformContainerView, UIColor, UIFont, UIImage, UIImageView, UILabel;
@protocol TFNPillAnimationProvider, TFNPillControlDelegate;

@interface TFNPillControl : UIView
{
    UIView *_contentView;
    TFNPillTransformContainerView *_transformContainerView;
    UILabel *_textLabel;
    UIImageView *_textIconView;
    UIImage *_icon;
    struct CGSize _contentSize;
    _Bool _shouldShowArrow;
    _Bool _hideOnScroll;
    id <TFNPillControlDelegate> _delegate;
    id <TFNPillAnimationProvider> _animationProvider;
    unsigned long long _arrowDirection;
    UIView *_accessoryView;
    double _autoHideInterval;
    NSString *_navigateToEntryID;
    NSDate *_timeFinishedPresenting;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *timeFinishedPresenting; // @synthesize timeFinishedPresenting=_timeFinishedPresenting;
@property(copy, nonatomic) NSString *navigateToEntryID; // @synthesize navigateToEntryID=_navigateToEntryID;
@property(nonatomic) _Bool hideOnScroll; // @synthesize hideOnScroll=_hideOnScroll;
@property(nonatomic) double autoHideInterval; // @synthesize autoHideInterval=_autoHideInterval;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) _Bool shouldShowArrow; // @synthesize shouldShowArrow=_shouldShowArrow;
@property(nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) id <TFNPillAnimationProvider> animationProvider; // @synthesize animationProvider=_animationProvider;
@property(nonatomic) __weak id <TFNPillControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidChangeContentOffset:(id)arg1;
- (double)_pillRemainVisibleInterval;
- (void)_hideAnimated:(_Bool)arg1 pillTapped:(_Bool)arg2 scrolled:(_Bool)arg3;
- (void)hideAnimated:(_Bool)arg1 pillTapped:(_Bool)arg2;
- (void)presentFromView:(id)arg1 animated:(_Bool)arg2 withOffset:(double)arg3;
- (void)presentFromView:(id)arg1 animated:(_Bool)arg2;
- (_Bool)tfn_dashGestureEnabled;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)sendPillControlTappedDelegateMethod;
- (void)_setHighlighted:(_Bool)arg1 withDuration:(double)arg2;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *pillBorderColor;
@property(retain, nonatomic) UIColor *pillShadowColor;
@property(retain, nonatomic) UIColor *pillBackgroundColor;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *textFont;
- (void)_updateTextIcon;
- (void)_layoutDidChange;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutContentIfNeeded;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

