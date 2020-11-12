//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class RUITheme, UIColor, UIImageView;

@interface OrbitLoaderView : BaseView
{
    _Bool _isAnimating;
    _Bool _shouldAnimating;
    UIImageView *_failureView;
    UIColor *_layerTintColor;
    RUITheme *_themeOverride;
    RUITheme *_theme;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RUITheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) RUITheme *themeOverride; // @synthesize themeOverride=_themeOverride;
@property(retain, nonatomic) UIColor *layerTintColor; // @synthesize layerTintColor=_layerTintColor;
@property(nonatomic) _Bool shouldAnimating; // @synthesize shouldAnimating=_shouldAnimating;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIImageView *failureView; // @synthesize failureView=_failureView;
- (id)createCircleWith:(double)arg1 color:(id)arg2;
- (id)orbitPlanet:(double)arg1 angle:(double)arg2 layer:(id)arg3 size:(struct CGSize)arg4 planetDiameter:(double)arg5 tintColor:(id)arg6;
- (void)configureAnimationInLayer:(id)arg1 withSize:(struct CGSize)arg2 tintColor:(id)arg3;
- (void)destroyInLayer:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)showFailureState;
- (void)layoutSubviews;
- (void)pause;
- (void)themeDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)isVisible;
- (void)play;
- (id)initWithFrame:(struct CGRect)arg1 themeOverride:(id)arg2;

@end
