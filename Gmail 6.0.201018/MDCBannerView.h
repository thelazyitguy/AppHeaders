//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MDCElevatable-Protocol.h"
#import "MDCElevationOverriding-Protocol.h"

@class MDCButton, NSLayoutConstraint, NSString, UIColor, UIImageView, UITextView;

@interface MDCBannerView : UIView <MDCElevatable, MDCElevationOverriding>
{
    _Bool _showsDivider;
    _Bool _mdc_adjustsFontForContentSizeCategory;
    CDUnknownBlockType _mdc_elevationDidChangeBlock;
    double _mdc_overrideBaseElevation;
    long long _bannerViewLayoutStyle;
    UITextView *_textView;
    UIImageView *_imageView;
    MDCButton *_leadingButton;
    MDCButton *_trailingButton;
    CDUnknownBlockType _traitCollectionDidChangeBlock;
    UIView *_buttonContainerView;
    UIView *_divider;
    double _dividerHeight;
    NSLayoutConstraint *_imageViewConstraintLeading;
    NSLayoutConstraint *_imageViewConstraintCenterY;
    NSLayoutConstraint *_imageViewConstraintTopLarge;
    NSLayoutConstraint *_textViewConstraintLeadingWithMargin;
    NSLayoutConstraint *_textViewConstraintLeadingWithImage;
    NSLayoutConstraint *_textViewConstraintTrailing;
    NSLayoutConstraint *_textViewConstraintTop;
    NSLayoutConstraint *_textViewConstraintCenterY;
    NSLayoutConstraint *_buttonContainerConstraintLeading;
    NSLayoutConstraint *_buttonContainerConstraintWidthWithLeadingButton;
    NSLayoutConstraint *_buttonContainerConstraintLeadingWithTextView;
    NSLayoutConstraint *_buttonContainerConstraintTrailing;
    NSLayoutConstraint *_buttonContainerConstraintTopWithMargin;
    NSLayoutConstraint *_buttonContainerConstraintTopWithImageViewGreater;
    NSLayoutConstraint *_buttonContainerConstraintTopWithTextView;
    NSLayoutConstraint *_buttonContainerConstraintTopWithTextViewGreater;
    NSLayoutConstraint *_buttonContainerConstraintBottom;
    NSLayoutConstraint *_buttonContainerConstraintHeight;
    NSLayoutConstraint *_leadingButtonConstraintLeading;
    NSLayoutConstraint *_leadingButtonConstraintTop;
    NSLayoutConstraint *_leadingButtonConstraintTrailing;
    NSLayoutConstraint *_leadingButtonConstraintCenterY;
    NSLayoutConstraint *_leadingButtonConstraintBaseLineWithTrailingButton;
    NSLayoutConstraint *_leadingButtonConstraintTrailingWithTrailingButton;
    NSLayoutConstraint *_leadingButtonConstraintHeightZero;
    NSLayoutConstraint *_trailingButtonConstraintBottom;
    NSLayoutConstraint *_trailingButtonConstraintTop;
    NSLayoutConstraint *_trailingButtonConstraintTrailing;
    NSLayoutConstraint *_trailingButtonConstraintHeightZero;
    NSLayoutConstraint *_dividerConstraintHeight;
    NSLayoutConstraint *_dividerConstraintBottom;
    NSLayoutConstraint *_dividerConstraintLeading;
    NSLayoutConstraint *_dividerConstraintWidth;
}

+ (id)gmdc_bannerView;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *dividerConstraintWidth; // @synthesize dividerConstraintWidth=_dividerConstraintWidth;
@property(retain, nonatomic) NSLayoutConstraint *dividerConstraintLeading; // @synthesize dividerConstraintLeading=_dividerConstraintLeading;
@property(retain, nonatomic) NSLayoutConstraint *dividerConstraintBottom; // @synthesize dividerConstraintBottom=_dividerConstraintBottom;
@property(retain, nonatomic) NSLayoutConstraint *dividerConstraintHeight; // @synthesize dividerConstraintHeight=_dividerConstraintHeight;
@property(retain, nonatomic) NSLayoutConstraint *trailingButtonConstraintHeightZero; // @synthesize trailingButtonConstraintHeightZero=_trailingButtonConstraintHeightZero;
@property(retain, nonatomic) NSLayoutConstraint *trailingButtonConstraintTrailing; // @synthesize trailingButtonConstraintTrailing=_trailingButtonConstraintTrailing;
@property(retain, nonatomic) NSLayoutConstraint *trailingButtonConstraintTop; // @synthesize trailingButtonConstraintTop=_trailingButtonConstraintTop;
@property(retain, nonatomic) NSLayoutConstraint *trailingButtonConstraintBottom; // @synthesize trailingButtonConstraintBottom=_trailingButtonConstraintBottom;
@property(retain, nonatomic) NSLayoutConstraint *leadingButtonConstraintHeightZero; // @synthesize leadingButtonConstraintHeightZero=_leadingButtonConstraintHeightZero;
@property(retain, nonatomic) NSLayoutConstraint *leadingButtonConstraintTrailingWithTrailingButton; // @synthesize leadingButtonConstraintTrailingWithTrailingButton=_leadingButtonConstraintTrailingWithTrailingButton;
@property(retain, nonatomic) NSLayoutConstraint *leadingButtonConstraintBaseLineWithTrailingButton; // @synthesize leadingButtonConstraintBaseLineWithTrailingButton=_leadingButtonConstraintBaseLineWithTrailingButton;
@property(retain, nonatomic) NSLayoutConstraint *leadingButtonConstraintCenterY; // @synthesize leadingButtonConstraintCenterY=_leadingButtonConstraintCenterY;
@property(retain, nonatomic) NSLayoutConstraint *leadingButtonConstraintTrailing; // @synthesize leadingButtonConstraintTrailing=_leadingButtonConstraintTrailing;
@property(retain, nonatomic) NSLayoutConstraint *leadingButtonConstraintTop; // @synthesize leadingButtonConstraintTop=_leadingButtonConstraintTop;
@property(retain, nonatomic) NSLayoutConstraint *leadingButtonConstraintLeading; // @synthesize leadingButtonConstraintLeading=_leadingButtonConstraintLeading;
@property(retain, nonatomic) NSLayoutConstraint *buttonContainerConstraintHeight; // @synthesize buttonContainerConstraintHeight=_buttonContainerConstraintHeight;
@property(retain, nonatomic) NSLayoutConstraint *buttonContainerConstraintBottom; // @synthesize buttonContainerConstraintBottom=_buttonContainerConstraintBottom;
@property(retain, nonatomic) NSLayoutConstraint *buttonContainerConstraintTopWithTextViewGreater; // @synthesize buttonContainerConstraintTopWithTextViewGreater=_buttonContainerConstraintTopWithTextViewGreater;
@property(retain, nonatomic) NSLayoutConstraint *buttonContainerConstraintTopWithTextView; // @synthesize buttonContainerConstraintTopWithTextView=_buttonContainerConstraintTopWithTextView;
@property(retain, nonatomic) NSLayoutConstraint *buttonContainerConstraintTopWithImageViewGreater; // @synthesize buttonContainerConstraintTopWithImageViewGreater=_buttonContainerConstraintTopWithImageViewGreater;
@property(retain, nonatomic) NSLayoutConstraint *buttonContainerConstraintTopWithMargin; // @synthesize buttonContainerConstraintTopWithMargin=_buttonContainerConstraintTopWithMargin;
@property(retain, nonatomic) NSLayoutConstraint *buttonContainerConstraintTrailing; // @synthesize buttonContainerConstraintTrailing=_buttonContainerConstraintTrailing;
@property(retain, nonatomic) NSLayoutConstraint *buttonContainerConstraintLeadingWithTextView; // @synthesize buttonContainerConstraintLeadingWithTextView=_buttonContainerConstraintLeadingWithTextView;
@property(retain, nonatomic) NSLayoutConstraint *buttonContainerConstraintWidthWithLeadingButton; // @synthesize buttonContainerConstraintWidthWithLeadingButton=_buttonContainerConstraintWidthWithLeadingButton;
@property(retain, nonatomic) NSLayoutConstraint *buttonContainerConstraintLeading; // @synthesize buttonContainerConstraintLeading=_buttonContainerConstraintLeading;
@property(retain, nonatomic) NSLayoutConstraint *textViewConstraintCenterY; // @synthesize textViewConstraintCenterY=_textViewConstraintCenterY;
@property(retain, nonatomic) NSLayoutConstraint *textViewConstraintTop; // @synthesize textViewConstraintTop=_textViewConstraintTop;
@property(retain, nonatomic) NSLayoutConstraint *textViewConstraintTrailing; // @synthesize textViewConstraintTrailing=_textViewConstraintTrailing;
@property(retain, nonatomic) NSLayoutConstraint *textViewConstraintLeadingWithImage; // @synthesize textViewConstraintLeadingWithImage=_textViewConstraintLeadingWithImage;
@property(retain, nonatomic) NSLayoutConstraint *textViewConstraintLeadingWithMargin; // @synthesize textViewConstraintLeadingWithMargin=_textViewConstraintLeadingWithMargin;
@property(retain, nonatomic) NSLayoutConstraint *imageViewConstraintTopLarge; // @synthesize imageViewConstraintTopLarge=_imageViewConstraintTopLarge;
@property(retain, nonatomic) NSLayoutConstraint *imageViewConstraintCenterY; // @synthesize imageViewConstraintCenterY=_imageViewConstraintCenterY;
@property(retain, nonatomic) NSLayoutConstraint *imageViewConstraintLeading; // @synthesize imageViewConstraintLeading=_imageViewConstraintLeading;
@property(nonatomic) double dividerHeight; // @synthesize dividerHeight=_dividerHeight;
@property(retain, nonatomic) UIView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) UIView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(copy, nonatomic) CDUnknownBlockType traitCollectionDidChangeBlock; // @synthesize traitCollectionDidChangeBlock=_traitCollectionDidChangeBlock;
@property(nonatomic, setter=mdc_setAdjustsFontForContentSizeCategory:) _Bool mdc_adjustsFontForContentSizeCategory; // @synthesize mdc_adjustsFontForContentSizeCategory=_mdc_adjustsFontForContentSizeCategory;
@property(nonatomic) _Bool showsDivider; // @synthesize showsDivider=_showsDivider;
@property(retain, nonatomic) MDCButton *trailingButton; // @synthesize trailingButton=_trailingButton;
@property(retain, nonatomic) MDCButton *leadingButton; // @synthesize leadingButton=_leadingButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long bannerViewLayoutStyle; // @synthesize bannerViewLayoutStyle=_bannerViewLayoutStyle;
@property(nonatomic) double mdc_overrideBaseElevation; // @synthesize mdc_overrideBaseElevation=_mdc_overrideBaseElevation;
@property(copy, nonatomic) CDUnknownBlockType mdc_elevationDidChangeBlock; // @synthesize mdc_elevationDidChangeBlock=_mdc_elevationDidChangeBlock;
- (id)accessibilityElements;
- (void)updateTextFont;
- (void)updateBannerFont;
- (void)traitCollectionDidChange:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (_Bool)isAbleToFitTextView:(id)arg1 withWidthLimit:(double)arg2;
- (double)widthSumForButtons:(id)arg1;
- (struct CGSize)contentSizeForLayoutSize:(struct CGSize)arg1;
- (double)getFrameHeightOfImageViewAndTextViewWithSizeToFit:(struct CGSize)arg1;
- (long long)layoutStyleForSizeToFit:(struct CGSize)arg1;
- (void)updateButtonsConstraintsWithLayoutStyle:(long long)arg1;
- (void)updateConstraintsWithLayoutStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)deactivateAllConstraints;
- (void)setUpDividerConstraints;
- (void)setUpButtonsConstraints;
- (void)setUpButtonContainerConstraints;
- (void)setUpTextViewConstraints;
- (void)setUpImageViewConstraints;
- (void)setupConstraints;
@property(readonly, nonatomic) double mdc_currentElevation;
@property(retain, nonatomic) UIColor *dividerColor;
- (void)commonBannerViewInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)applyThemeWithTypographyScheme:(id)arg1;
- (void)applyThemeWithColorScheme:(id)arg1;
- (void)applyThemeWithScheme:(id)arg1;
- (void)updateBackgroundColorWithContext:(id)arg1;
- (void)updateWithContext:(id)arg1;
- (void)gmdc_applyThemeWithTypographyScheme:(id)arg1;
- (void)gmdc_applySecondaryThemeWithColorScheme:(id)arg1;
- (void)gmdc_applyThemeWithColorScheme:(id)arg1;
- (void)gmdc_applySecondaryThemeWithScheme:(id)arg1;
- (void)gmdc_applyThemeWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
