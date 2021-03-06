//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Funny/CAAnimationDelegate-Protocol.h>

@class CABasicAnimation, CAShapeLayer, NSLayoutConstraint, NSString, NSTimer;
@protocol IFCircularProgressViewProtocol;

@interface IFCircularProgressView : UIView <CAAnimationDelegate>
{
    CAShapeLayer *_circularLayer;
    double _currentPos;
    NSTimer *_timer;
    CABasicAnimation *_inAnimation;
    CABasicAnimation *_outAnimation;
    CABasicAnimation *_rotationAnimation;
    _Bool _isDeterminate;
    double _maxValue;
    double _minValue;
    double _delay;
    id <IFCircularProgressViewProtocol> _delegate;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightContraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *heightContraint; // @synthesize heightContraint=_heightContraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) id <IFCircularProgressViewProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) _Bool isDeterminate; // @synthesize isDeterminate=_isDeterminate;
- (void)dealloc;
- (double)validatePositionValue:(double)arg1;
- (double)normalizePositionValue:(double)arg1;
- (_Bool)isActive;
- (void)restoreAnimationIfNeeded;
- (void)setColorWithColor:(id)arg1;
- (void)hide;
- (void)updateWithNewValue:(double)arg1;
- (void)showProgressWithTimer:(id)arg1;
- (void)show;
- (void)showWithStartValue:(double)arg1;
- (void)backFromBackgroundWithNotification:(id)arg1;
- (void)animateProgressViewWithTimer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 strokeWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

