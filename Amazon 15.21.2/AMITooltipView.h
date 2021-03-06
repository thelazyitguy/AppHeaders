//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UILabel;
@protocol AMITooltipDisplayConfig;

@interface AMITooltipView : UIView
{
    _Bool _didUpdateConstraints;
    UILabel *_textLabel;
    UIView *_leftView;
    UIView *_rightView;
    id <AMITooltipDisplayConfig> _displayConfig;
    NSLayoutConstraint *_textLabelLeadingConstraint;
    NSLayoutConstraint *_textLabelTrailingConstraint;
    NSLayoutConstraint *_leftViewCenterYConstraint;
    NSLayoutConstraint *_rightViewCenterYConstraint;
    NSLayoutConstraint *_leftViewOptionalVerticalConstraint;
    NSLayoutConstraint *_rightViewOptionalVerticalConstraint;
    NSArray *_leftViewVerticalConstraints;
    NSArray *_rightViewVerticalConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *rightViewVerticalConstraints; // @synthesize rightViewVerticalConstraints=_rightViewVerticalConstraints;
@property(retain, nonatomic) NSArray *leftViewVerticalConstraints; // @synthesize leftViewVerticalConstraints=_leftViewVerticalConstraints;
@property(retain, nonatomic) NSLayoutConstraint *rightViewOptionalVerticalConstraint; // @synthesize rightViewOptionalVerticalConstraint=_rightViewOptionalVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftViewOptionalVerticalConstraint; // @synthesize leftViewOptionalVerticalConstraint=_leftViewOptionalVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rightViewCenterYConstraint; // @synthesize rightViewCenterYConstraint=_rightViewCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftViewCenterYConstraint; // @synthesize leftViewCenterYConstraint=_leftViewCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textLabelTrailingConstraint; // @synthesize textLabelTrailingConstraint=_textLabelTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textLabelLeadingConstraint; // @synthesize textLabelLeadingConstraint=_textLabelLeadingConstraint;
@property(nonatomic) _Bool didUpdateConstraints; // @synthesize didUpdateConstraints=_didUpdateConstraints;
@property(retain, nonatomic) id <AMITooltipDisplayConfig> displayConfig; // @synthesize displayConfig=_displayConfig;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (id)textLabelConstraints;
- (id)tooltipConstraints;
- (void)deactivateRightViewConstraintsIfNeeded;
- (void)deactivateLeftViewConstraintsIfNeeded;
- (void)triggerLayoutPass;
- (void)updateConstraints;
- (id)initWithDisplayConfig:(id)arg1;

@end

