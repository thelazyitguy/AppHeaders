//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIColor, UIImageView;

@interface T1MomentCapsuleProgressBarView : UIView
{
    _Bool _scrubHintVisible;
    double _minValue;
    double _maxValue;
    UIColor *_fillColor;
    UIColor *_trackColor;
    double _value;
    UIImageView *_progressBarTrack;
    UIImageView *_progressBarFill;
    CALayer *_scrubPointLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *scrubPointLayer; // @synthesize scrubPointLayer=_scrubPointLayer;
@property(retain, nonatomic) UIImageView *progressBarFill; // @synthesize progressBarFill=_progressBarFill;
@property(retain, nonatomic) UIImageView *progressBarTrack; // @synthesize progressBarTrack=_progressBarTrack;
@property(nonatomic) _Bool scrubHintVisible; // @synthesize scrubHintVisible=_scrubHintVisible;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) UIColor *trackColor; // @synthesize trackColor=_trackColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
- (struct CGRect)_progressBarFrameWithWidthPercentage:(double)arg1;
@property(readonly, nonatomic) double normalizedValue;
- (void)setScrubHintVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setValue:(double)arg1 withAnimationDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setValue:(double)arg1 withAnimationDuration:(double)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

