//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont;

@interface PercentageRingView : UIView
{
    double _percentage;
    double _ringStrokeSize;
    NSString *_text;
    UIFont *_font;
    UIColor *_ringColor;
    UIColor *_ringBackgroundColor;
    UIColor *_backgroundFillColor;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundFillColor; // @synthesize backgroundFillColor=_backgroundFillColor;
@property(retain, nonatomic) UIColor *ringBackgroundColor; // @synthesize ringBackgroundColor=_ringBackgroundColor;
@property(retain, nonatomic) UIColor *ringColor; // @synthesize ringColor=_ringColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double ringStrokeSize; // @synthesize ringStrokeSize=_ringStrokeSize;
@property(nonatomic) double percentage; // @synthesize percentage=_percentage;
- (void)drawPercentageRingWithForegroundColor:(id)arg1 backgroundColor:(id)arg2 ringBackgroundColor:(id)arg3 boundingFrame:(struct CGRect)arg4 fillPercentage:(double)arg5 label:(id)arg6 clockwiseFill:(_Bool)arg7 ringStrokeSize:(double)arg8 font:(id)arg9;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setPercentage:(double)arg1 animated:(_Bool)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
