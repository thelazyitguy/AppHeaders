//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "YTPageStyling-Protocol.h"

@class NSString, UILabel, UIView, YTShortsCameraSliderThumbView, YTShortsCameraSliderTrackView;

@interface YTShortsCameraRecordingTimerSlider : UIControl <YTPageStyling>
{
    UIView *_trackBackgroundView;
    YTShortsCameraSliderTrackView *_trackView;
    YTShortsCameraSliderThumbView *_thumbView;
    struct CGPoint _previousLocation;
    UILabel *_minLabel;
    UILabel *_maxLabel;
    double _minimumDraggableValue;
    double _value;
    double _minimumValue;
    double _maximumValue;
    UIView *_contentView;
    unsigned long long _trackMode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long trackMode; // @synthesize trackMode=_trackMode;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double minimumDraggableValue; // @synthesize minimumDraggableValue=_minimumDraggableValue;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (_Bool)accessibilityActivate;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)updateMinMaxLabelAlphas;
- (double)normalizedValueForValue:(double)arg1;
- (double)backgroundCornerRadius;
- (double)trackHeight;
- (double)positionForValue:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

