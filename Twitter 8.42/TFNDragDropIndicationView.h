//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class CAShapeLayer, NSString, UIColor, UIFont, UILabel;

@interface TFNDragDropIndicationView : UIVisualEffectView
{
    NSString *_text;
    UIFont *_textFont;
    UIColor *_textColor;
    UIColor *_dashedBorderStrokeColor;
    UIColor *_blurBackgroundColor;
    UILabel *_label;
    CAShapeLayer *_dashedBorderLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *dashedBorderLayer; // @synthesize dashedBorderLayer=_dashedBorderLayer;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIColor *blurBackgroundColor; // @synthesize blurBackgroundColor=_blurBackgroundColor;
@property(retain, nonatomic) UIColor *dashedBorderStrokeColor; // @synthesize dashedBorderStrokeColor=_dashedBorderStrokeColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

