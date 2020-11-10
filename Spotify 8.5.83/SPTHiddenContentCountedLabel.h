//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStatefulView.h"

@class GLUELabel, NSLayoutConstraint, NSNumberFormatter, NSString, SPTHiddenContentCountedLabelStyle, UIStackView;

@interface SPTHiddenContentCountedLabel : GLUEStatefulView
{
    long long _count;
    NSString *_title;
    NSString *_accessibilityFormat;
    GLUELabel *_countLabel;
    GLUELabel *_titleLabel;
    UIStackView *_stackView;
    NSNumberFormatter *_countFormatter;
    NSLayoutConstraint *_stackViewTopInsetConstraint;
    NSLayoutConstraint *_stackViewBottomInsetConstraint;
}

+ (id)countedLabelWithText:(id)arg1 accessibilityFormat:(id)arg2 accessibilityIdentifier:(id)arg3 theme:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *stackViewBottomInsetConstraint; // @synthesize stackViewBottomInsetConstraint=_stackViewBottomInsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *stackViewTopInsetConstraint; // @synthesize stackViewTopInsetConstraint=_stackViewTopInsetConstraint;
@property(retain, nonatomic) NSNumberFormatter *countFormatter; // @synthesize countFormatter=_countFormatter;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GLUELabel *countLabel; // @synthesize countLabel=_countLabel;
@property(copy, nonatomic) NSString *accessibilityFormat; // @synthesize accessibilityFormat=_accessibilityFormat;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long count; // @synthesize count=_count;
- (long long)accessibilityNavigationStyle;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)applyStateStyle:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)setUpStackView;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithCount:(long long)arg1 title:(id)arg2;

// Remaining properties
@property(copy, nonatomic) SPTHiddenContentCountedLabelStyle *style; // @dynamic style;

@end
