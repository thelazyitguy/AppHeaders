//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAGradientLayer, NSMutableDictionary;

@interface FMXGradientButton : UIButton
{
    double _borderWidth;
    double _cornerRadius;
    NSMutableDictionary *_gradients;
    CAGradientLayer *_currentGradient;
    NSMutableDictionary *_borderColors;
}

@property(retain, nonatomic) NSMutableDictionary *borderColors; // @synthesize borderColors=_borderColors;
@property(retain, nonatomic) CAGradientLayer *currentGradient; // @synthesize currentGradient=_currentGradient;
@property(retain, nonatomic) NSMutableDictionary *gradients; // @synthesize gradients=_gradients;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
- (void).cxx_destruct;
- (void)updateGradient;
- (void)updateBorderColor;
- (void)updateStyle;
- (void)setBorderColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)setColors:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
