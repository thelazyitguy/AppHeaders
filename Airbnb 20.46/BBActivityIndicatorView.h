//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIImageView;

@interface BBActivityIndicatorView : UIView
{
    _Bool _hidesWhenStopped;
    _Bool _isAnimating;
    double _speed;
    NSTimer *_timer;
    UIImageView *_spinnerIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *spinnerIcon; // @synthesize spinnerIcon=_spinnerIcon;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
- (void)setTintColor:(id)arg1;
- (void)dealloc;
- (id)initWithSmallSize;
- (id)initWithNormalSize;
- (id)initWithIconImage:(id)arg1;
- (void)layoutSubviews;
- (void)stopAnimating;
- (void)startAnimating;
- (void)schedule;
- (void)_updateVisibilityForAnimations;
- (void)setHidden:(_Bool)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)spin;
- (void)doTransformation;

@end
