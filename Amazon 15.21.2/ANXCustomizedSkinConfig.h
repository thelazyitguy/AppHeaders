//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ANXSkinConfig-Protocol.h"

@class ANXSearchBarStyle, NSDictionary, NSString, UIColor, UIFont;
@protocol ANPAssetConfig, ANXSkinConfig;

@interface ANXCustomizedSkinConfig : NSObject <ANXSkinConfig>
{
    id <ANXSkinConfig> _baseSkin;
    NSDictionary *_overrides;
    NSDictionary *_rawOverrideValues;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (void)initialize;
+ (id)customizedSkinConfigWithBaseSkin:(id)arg1 overrides:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *overrides; // @synthesize overrides=_overrides;
@property(readonly, nonatomic) id <ANXSkinConfig> baseSkin; // @synthesize baseSkin=_baseSkin;
- (void).cxx_destruct;
- (id)convertToNSString:(id)arg1;
- (id)convertToUIFont:(id)arg1;
- (id)convertToUIColor:(id)arg1;
- (id)convertValueObject:(id)arg1 toClass:(Class)arg2;
- (id)coerceValueObject:(id)arg1 toType:(id)arg2;
- (void)prepareOverrides;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBaseSkin:(id)arg1 overrides:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) double amazonBooksButtonsBarHeight;
@property(readonly, nonatomic) double amazonBooksButtonsBarSpacing;
@property(readonly, nonatomic) double amazonBooksFullyExpandedHeight;
@property(readonly, nonatomic) id <ANPAssetConfig> amazonBooksLogoIconAsset;
@property(readonly, nonatomic) id <ANPAssetConfig> amazonBooksPayIconAsset;
@property(readonly, nonatomic) id <ANPAssetConfig> amazonBooksScanIconAsset;
@property(readonly, nonatomic) ANXSearchBarStyle *amazonBooksSearchBarStyle;
@property(readonly, nonatomic) id <ANPAssetConfig> amazonBooksSearchIconAsset;
@property(readonly, nonatomic) id <ANPAssetConfig> amazonStoresLogoIconAsset;
@property(readonly, nonatomic) double backButtonVisibilityOffset;
@property(readonly, nonatomic) UIColor *cnLowerNavBarTintColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIColor *glowMenuBackgroundColor;
@property(readonly, nonatomic) UIColor *glowMenuIconColor;
@property(readonly, nonatomic) UIColor *glowMenuTextColor;
@property(readonly, nonatomic) struct UIEdgeInsets leftStackViewMargins;
@property(readonly, nonatomic) double leftStackViewSpacing;
@property(readonly, nonatomic) double leftStackViewTopConstant;
@property(readonly, nonatomic) long long legacyMenuBlurEffectStyle;
@property(readonly, nonatomic) UIColor *legacyMenuGlassLayerColor;
@property(readonly, nonatomic) UIColor *legacyMenuGlassLayerTransparentColor;
@property(readonly, nonatomic) UIColor *legacyMenuItemHighlightedTextColor;
@property(readonly, nonatomic) UIColor *legacyMenuItemTextColor;
@property(readonly, nonatomic) _Bool modalNavBarButtonAllCaps;
@property(readonly, nonatomic) UIColor *modalNavBarButtonColor;
@property(readonly, nonatomic) UIFont *modalNavBarButtonFont;
@property(readonly, nonatomic) id <ANPAssetConfig> modalNavBarCustomBackIndicatorImageAsset;
@property(readonly, nonatomic) _Bool modalNavBarHideDefaultBackItem;
@property(readonly, nonatomic) UIColor *modalNavBarTitleColor;
@property(readonly, nonatomic) UIFont *modalNavBarTitleFont;
@property(readonly, nonatomic) id <ANPAssetConfig> navBarAmazonLogoCenterIconAsset;
@property(readonly, nonatomic) id <ANPAssetConfig> navBarAmazonLogoIconAsset;
@property(readonly, nonatomic) id <ANPAssetConfig> navBarAmazonLogoPrimeIconAsset;
@property(readonly, nonatomic) id <ANPAssetConfig> navBarAmazonLogoSmileIconAsset;
@property(readonly, nonatomic) id <ANPAssetConfig> navBarAmazonLogoSmilePrimeIconAsset;
@property(readonly, nonatomic) id <ANPAssetConfig> navBarBackIconAsset;
@property(readonly, nonatomic) double navBarBaseHeight;
@property(readonly, nonatomic) UIColor *navBarBottomSeparatorColor;
@property(readonly, nonatomic) double navBarButtonLeftStartOffset;
@property(readonly, nonatomic) double navBarButtonRightStartOffset;
@property(readonly, nonatomic) double navBarCartCounter99PlusOffsetY;
@property(readonly, nonatomic) double navBarCartCounter99PlusOriginX;
@property(readonly, nonatomic) UIFont *navBarCartCounterDoubleDigitFont;
@property(readonly, nonatomic) double navBarCartCounterDoubleDigitOffsetY;
@property(readonly, nonatomic) double navBarCartCounterOriginX;
@property(readonly, nonatomic) UIFont *navBarCartCounterSingleDigitFont;
@property(readonly, nonatomic) double navBarCartCounterSingleDigitOffsetY;
@property(readonly, nonatomic) UIColor *navBarCartCounterTextColor;
@property(readonly, nonatomic) id <ANPAssetConfig> navBarCartEmptyOverlayImageAsset;
@property(readonly, nonatomic) id <ANPAssetConfig> navBarCartIconAsset;
@property(readonly, nonatomic) double navBarExpandAnimationDuration;
@property(readonly, nonatomic) double navBarFullyExpandedHeight;
@property(readonly, nonatomic) id <ANPAssetConfig> navBarGlowIconAsset;
@property(readonly, nonatomic) UIColor *navBarGradientBottomColor;
@property(readonly, nonatomic) double navBarGradientExtendedMargin;
@property(readonly, nonatomic) UIColor *navBarGradientMiddleColor;
@property(readonly, nonatomic) UIColor *navBarGradientTopColor;
@property(readonly, nonatomic) id <ANPAssetConfig> navBarMenuIconAsset;
@property(readonly, nonatomic) id <ANPAssetConfig> navBarNotificationIconAsset;
@property(readonly, nonatomic) double navBarRetractAnimationDuration;
@property(readonly, nonatomic) double navBarSearchBarHeight;
@property(readonly, nonatomic) ANXSearchBarStyle *navBarSearchBarStyle;
@property(readonly, nonatomic) id <ANPAssetConfig> navBarSearchIconAsset;
@property(readonly, nonatomic) UIColor *navMenuHeaderBackgroundActiveColor;
@property(readonly, nonatomic) UIColor *navMenuHeaderBackgroundColor;
@property(readonly, nonatomic) UIColor *navMenuHeaderFontColor;
@property(readonly, nonatomic) UIColor *navMenuOverlayGradientBottomColor;
@property(readonly, nonatomic) UIColor *navMenuOverlayGradientTopColor;
@property(readonly, nonatomic) UIFont *navMenuSLIMinifiedTextFont;
@property(readonly, nonatomic) UIColor *navMenuSLITabBackgroundColor;
@property(readonly, nonatomic) UIColor *navMenuSLITabBackgroundColorSelected;
@property(readonly, nonatomic) UIFont *navMenuSLITextFont;
@property(readonly, nonatomic) UIColor *pantryBarBackgroundColor;
@property(readonly, nonatomic) UIColor *pantryBarTextColor;
@property(readonly, nonatomic) UIFont *pantryBarTextFont;
@property(readonly, nonatomic) struct UIEdgeInsets rightStackViewMargins;
@property(readonly, nonatomic) double rightStackViewTopConstant;
@property(readonly, nonatomic) id <ANPAssetConfig> searchBarButtonsInsideAlexaIconAsset;
@property(readonly, nonatomic) double searchBarButtonsInsideAvailableButtonHeight;
@property(readonly, nonatomic) id <ANPAssetConfig> searchBarButtonsInsideBarcodeIconAsset;
@property(readonly, nonatomic) UIColor *searchBarButtonsInsideDividerColor;
@property(readonly, nonatomic) struct CGSize searchBarButtonsInsideDividerSize;
@property(readonly, nonatomic) double searchBarButtonsInsideScanButtonWidth;
@property(readonly, nonatomic) id <ANPAssetConfig> searchBarButtonsInsideScanIconAsset;
@property(readonly, nonatomic) UIColor *searchBarButtonsInsideTint;
@property(readonly, nonatomic) double searchBarButtonsInsideVoiceButtonWidth;
@property(readonly, nonatomic) id <ANPAssetConfig> searchBarButtonsInsideVoiceIconAsset;
@property(readonly, nonatomic) id <ANPAssetConfig> searchBarButtonsOutsideAlexaIconAsset;
@property(readonly, nonatomic) UIColor *searchBarButtonsOutsideDividerColor;
@property(readonly, nonatomic) id <ANPAssetConfig> searchBarButtonsOutsideScanIconAsset;
@property(readonly, nonatomic) struct UIEdgeInsets searchBarButtonsOutsideScanIconInsets;
@property(readonly, nonatomic) UIColor *searchBarButtonsOutsideTint;
@property(readonly, nonatomic) id <ANPAssetConfig> searchBarButtonsOutsideVoiceIconAsset;
@property(readonly, nonatomic) struct UIEdgeInsets searchBarButtonsOutsideVoiceIconInsets;
@property(readonly, nonatomic) _Bool skyTheme;
@property(readonly, nonatomic) long long statusBarStyle;
@property(readonly, nonatomic) UIColor *subMenuBackIndicatorColor;
@property(readonly, nonatomic) UIColor *subMenuIndicatorColor;
@property(readonly, nonatomic) UIColor *subNavBackgroundColor;
@property(readonly, nonatomic) UIColor *subNavFontColor;
@property(readonly, nonatomic) UIFont *subNavTextFont;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIColor *windowTint;

@end

