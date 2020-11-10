//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1LiveVideoBadgeViewTheme, TFNSolidColorView, UIColor, UILabel;
@protocol T1LiveVideoBadgeViewLayoutDelegate, T1LiveVideoBadgeViewModel;

@interface T1LiveVideoBadgeView : UIView
{
    TFNSolidColorView *_backgroundColorView;
    UILabel *_badgeLabel;
    T1LiveVideoBadgeViewTheme *_theme;
    UIColor *_backgroundColorOverride;
    id <T1LiveVideoBadgeViewModel> _model;
    id <T1LiveVideoBadgeViewLayoutDelegate> _layoutDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1LiveVideoBadgeViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(retain, nonatomic) id <T1LiveVideoBadgeViewModel> model; // @synthesize model=_model;
@property(retain, nonatomic) UIColor *backgroundColorOverride; // @synthesize backgroundColorOverride=_backgroundColorOverride;
@property(retain, nonatomic) T1LiveVideoBadgeViewTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(readonly, nonatomic) TFNSolidColorView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
- (void)cleanup;
- (id)_t1_calculatedLayoutState;
- (void)layoutWithLayoutState:(id)arg1;
- (void)layoutWithCalculatedLayoutState;
- (void)updateSubviews;
- (void)_t1_updateView;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithTheme:(id)arg1 layoutDelegate:(id)arg2;

@end
