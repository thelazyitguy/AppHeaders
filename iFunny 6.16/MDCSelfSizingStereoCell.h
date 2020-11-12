//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MDCBaseCell.h>

@class NSMutableDictionary, UIImageView, UILabel, UIView;

@interface MDCSelfSizingStereoCell : MDCBaseCell
{
    _Bool _mdc_adjustsFontForContentSizeCategory;
    _Bool _adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable;
    UIImageView *_leadingImageView;
    UIImageView *_trailingImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIView *_textContainer;
    NSMutableDictionary *_cachedLayouts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cachedLayouts; // @synthesize cachedLayouts=_cachedLayouts;
@property(retain, nonatomic) UIView *textContainer; // @synthesize textContainer=_textContainer;
@property(nonatomic) _Bool adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable; // @synthesize adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable=_adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(retain, nonatomic) UIImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
- (id)defaultDetailLabelTextColor;
- (id)defaultTitleLabelTextColor;
- (id)defaultDetailLabelFont;
- (id)defaultTitleLabelFont;
- (void)adjustFontsForDynamicType;
- (void)contentSizeCategoryDidChange:(id)arg1;
@property(nonatomic, setter=mdc_setAdjustsFontForContentSizeCategory:) _Bool mdc_adjustsFontForContentSizeCategory; // @synthesize mdc_adjustsFontForContentSizeCategory=_mdc_adjustsFontForContentSizeCategory;
- (void)invalidateCachedLayouts;
- (id)layoutForCellWidth:(double)arg1;
- (void)prepareForReuse;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)resetMDCSelfSizingStereoCellLabelProperties;
- (void)createSubviews;
- (void)commonMDCSelfSizingStereoCellInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)applyThemeWithTypographyScheme:(id)arg1;
- (void)applyThemeWithColorScheme:(id)arg1;
- (void)applyThemeWithScheme:(id)arg1;

@end
