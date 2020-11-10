//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASMBaseBlockView.h>

@class ASMImageView, ASMProgressBarBlock, MDCProgressView, NSLayoutConstraint, UILabel;

@interface ASMProgressBarBlockView : ASMBaseBlockView
{
    ASMProgressBarBlock *_block;
    MDCProgressView *_progressView;
    UILabel *_textLabel;
    ASMImageView *_iconImageView;
    NSLayoutConstraint *_textLabelLeadingConstraint;
    NSLayoutConstraint *_textLabelIconSpacingConstraint;
    NSLayoutConstraint *_progressBarBottomConstraint;
    NSLayoutConstraint *_progressBarLabelTextVerticalSpacingConstraint;
    NSLayoutConstraint *_iconTextLabelCenterYConstraint;
}

+ (id)viewWithBlock:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *iconTextLabelCenterYConstraint; // @synthesize iconTextLabelCenterYConstraint=_iconTextLabelCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressBarLabelTextVerticalSpacingConstraint; // @synthesize progressBarLabelTextVerticalSpacingConstraint=_progressBarLabelTextVerticalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressBarBottomConstraint; // @synthesize progressBarBottomConstraint=_progressBarBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textLabelIconSpacingConstraint; // @synthesize textLabelIconSpacingConstraint=_textLabelIconSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textLabelLeadingConstraint; // @synthesize textLabelLeadingConstraint=_textLabelLeadingConstraint;
@property(retain, nonatomic) ASMImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MDCProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) ASMProgressBarBlock *block; // @synthesize block=_block;
- (void)addSubviewConstraints;
- (void)adjustIconVerticalAlignment;
- (void)updateUIForCurrentBlock;
- (void)layoutSubviews;
- (id)initWithBlock:(id)arg1;

@end

