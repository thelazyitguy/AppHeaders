//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor, UILabel;

@interface CenteredIconLabelButton : UIView
{
    UIButton *_button;
    UILabel *_buttonLabel;
    CDUnknownBlockType _tapActionBlock;
    UIColor *_highlightColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(retain, nonatomic) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void)buttonDeseleted;
- (void)buttonHighlighted;
- (void)performTapAction;
- (void)setHighLightedColor:(id)arg1;
- (void)setTapAction:(CDUnknownBlockType)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setupButtonLabelConstraints;
- (void)setupButtonConstraints;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
