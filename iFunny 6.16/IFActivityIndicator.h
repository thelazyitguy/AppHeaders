//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MDCActivityIndicator.h>

@class NSObject, NSTimer;
@protocol IFActivityIndicatorProtocol;

@interface IFActivityIndicator : MDCActivityIndicator
{
    NSTimer *_timer;
    _Bool _animateProgress;
    double _delay;
    NSObject<IFActivityIndicatorProtocol> *_stateDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<IFActivityIndicatorProtocol> *stateDelegate; // @synthesize stateDelegate=_stateDelegate;
@property(nonatomic) _Bool animateProgress; // @synthesize animateProgress=_animateProgress;
@property(nonatomic) double delay; // @synthesize delay=_delay;
- (void)layoutSubviews;
- (void)setIndicatorMode:(long long)arg1;
- (void)setProgress:(float)arg1;
- (id)materialEaseInOut;
@property(nonatomic) _Bool isDeterminate;
- (void)hide;
- (void)stopAnimating;
- (void)showProgressWithTimer:(id)arg1;
- (void)show;
- (void)startAnimating;
- (void)showWithStartValue:(double)arg1;
- (void)setupStroke;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
