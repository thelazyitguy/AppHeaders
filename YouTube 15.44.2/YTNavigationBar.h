//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

#import <Module_Framework/YTNavigationBarProtocol-Protocol.h>

@class GIMMe, NSDictionary, NSString, UIColor, UIView;

@interface YTNavigationBar : UINavigationBar <YTNavigationBarProtocol>
{
    double _layoutHeight;
    double _layoutMaxHeight;
    UIView *_statusBarBackground;
    UIView *_backgroundView;
    UIView *_shadowView;
    _Bool _ios11OrLater;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)foregroundSubviews;
- (double)yOffsetForView:(double)arg1 view:(id)arg2;
- (id)shadowView;
- (id)leftBarButtonItemCustomView;
- (id)rightBarButtonItemCustomView;
@property(retain, nonatomic) UIView *customTitleView;
- (double)maxHeight;
- (_Bool)canScrollNavHeaderDown;
- (_Bool)canScrollNavHeaderUp;
- (double)scrollPercentage;
- (void)scrollNavHeaderViewWithOffset:(double)arg1;
- (void)layoutCustomFrames;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setupStyle;
@property(retain, nonatomic) UIColor *barTintColor;
- (void)setBackgroundColor:(id)arg1;
- (_Bool)isShadowHidden;
- (void)setShadowHidden:(_Bool)arg1 andChangeAlpha:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) long long barStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDictionary *titleTextAttributes;
@property(nonatomic, getter=isTranslucent) _Bool translucent;

@end

