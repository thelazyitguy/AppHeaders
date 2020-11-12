//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAGradientLayer, NSMutableDictionary;

@interface UICSwitch : UIControl
{
    _Bool _on;
    double _backgroundBorderWidth;
    double _sliderBorderWidth;
    CAGradientLayer *_slider;
    NSMutableDictionary *_sliderBorderColors;
    NSMutableDictionary *_sliderGradients;
    CAGradientLayer *_background;
    NSMutableDictionary *_backgroundBorderColors;
    NSMutableDictionary *_backgroundGradients;
    struct UIEdgeInsets _touchInsets;
}

@property(retain, nonatomic) NSMutableDictionary *backgroundGradients; // @synthesize backgroundGradients=_backgroundGradients;
@property(retain, nonatomic) NSMutableDictionary *backgroundBorderColors; // @synthesize backgroundBorderColors=_backgroundBorderColors;
@property(retain, nonatomic) CAGradientLayer *background; // @synthesize background=_background;
@property(retain, nonatomic) NSMutableDictionary *sliderGradients; // @synthesize sliderGradients=_sliderGradients;
@property(retain, nonatomic) NSMutableDictionary *sliderBorderColors; // @synthesize sliderBorderColors=_sliderBorderColors;
@property(retain, nonatomic) CAGradientLayer *slider; // @synthesize slider=_slider;
@property(nonatomic) double sliderBorderWidth; // @synthesize sliderBorderWidth=_sliderBorderWidth;
@property(nonatomic) double backgroundBorderWidth; // @synthesize backgroundBorderWidth=_backgroundBorderWidth;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(nonatomic) _Bool on; // @synthesize on=_on;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)updateSliderGradient;
- (void)updateSliderBorderColor;
- (void)updateBackgroundGradient;
- (void)updateBackgroundBorderColor;
- (void)updateShape;
- (void)updateStyle;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSliderBorderColor:(id)arg1 forState:(_Bool)arg2;
- (void)setSliderColors:(id)arg1 forState:(_Bool)arg2;
- (void)setBackgroundBorderColor:(id)arg1 forState:(_Bool)arg2;
- (void)setBackgroundColors:(id)arg1 forState:(_Bool)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
