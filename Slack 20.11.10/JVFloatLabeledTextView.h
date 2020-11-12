//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface JVFloatLabeledTextView : UITextView
{
    _Bool _floatingLabelShouldLockToTop;
    _Bool _animateEvenIfNotFirstResponder;
    NSString *_placeholder;
    UILabel *_placeholderLabel;
    UILabel *_floatingLabel;
    double _floatingLabelYPadding;
    double _floatingLabelXPadding;
    double _placeholderYPadding;
    UIFont *_floatingLabelFont;
    UIColor *_floatingLabelTextColor;
    UIColor *_floatingLabelActiveTextColor;
    UIColor *_placeholderTextColor;
    double _floatingLabelShowAnimationDuration;
    double _floatingLabelHideAnimationDuration;
    double _startingTextContainerInsetTop;
}

+ (id)defaultiOSPlaceholderColor;
- (void).cxx_destruct;
@property(nonatomic) double startingTextContainerInsetTop; // @synthesize startingTextContainerInsetTop=_startingTextContainerInsetTop;
@property(nonatomic) double floatingLabelHideAnimationDuration; // @synthesize floatingLabelHideAnimationDuration=_floatingLabelHideAnimationDuration;
@property(nonatomic) double floatingLabelShowAnimationDuration; // @synthesize floatingLabelShowAnimationDuration=_floatingLabelShowAnimationDuration;
@property(nonatomic) _Bool animateEvenIfNotFirstResponder; // @synthesize animateEvenIfNotFirstResponder=_animateEvenIfNotFirstResponder;
@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(nonatomic) _Bool floatingLabelShouldLockToTop; // @synthesize floatingLabelShouldLockToTop=_floatingLabelShouldLockToTop;
@property(retain, nonatomic) UIColor *floatingLabelActiveTextColor; // @synthesize floatingLabelActiveTextColor=_floatingLabelActiveTextColor;
@property(retain, nonatomic) UIColor *floatingLabelTextColor; // @synthesize floatingLabelTextColor=_floatingLabelTextColor;
@property(retain, nonatomic) UIFont *floatingLabelFont; // @synthesize floatingLabelFont=_floatingLabelFont;
@property(nonatomic) double placeholderYPadding; // @synthesize placeholderYPadding=_placeholderYPadding;
@property(nonatomic) double floatingLabelXPadding; // @synthesize floatingLabelXPadding=_floatingLabelXPadding;
@property(nonatomic) double floatingLabelYPadding; // @synthesize floatingLabelYPadding=_floatingLabelYPadding;
@property(readonly, nonatomic) UILabel *floatingLabel; // @synthesize floatingLabel=_floatingLabel;
@property(readonly, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void)setBackgroundColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGRect)textRect;
- (void)setLabelOriginForTextAlignment;
- (void)adjustTextContainerInsetTop;
- (void)hideFloatingLabel:(_Bool)arg1;
- (void)showFloatingLabel:(_Bool)arg1;
- (id)labelActiveColor;
- (void)layoutSubviews;
- (void)setPlaceholder:(id)arg1 floatingTitle:(id)arg2;
- (id)defaultFloatingLabelFont;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
