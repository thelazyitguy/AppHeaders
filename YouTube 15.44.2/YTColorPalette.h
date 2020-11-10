//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTColor;

@interface YTColorPalette : NSObject
{
    long long _pageStyle;
    YTColor *_brandBackgroundSolid;
    YTColor *_brandBackgroundPrimary;
    YTColor *_brandBackgroundSecondary;
    YTColor *_generalBackgroundB;
    YTColor *_generalBackgroundC;
    YTColor *_errorBackground;
    YTColor *_textPrimary;
    YTColor *_textSecondary;
    YTColor *_textDisabled;
    YTColor *_textPrimaryInverse;
    YTColor *_callToAction;
    YTColor *_iconActiveOther;
    YTColor *_iconInactive;
    YTColor *_iconDisabled;
    YTColor *_badgeChipBackground;
    YTColor *_buttonChipBackgroundHover;
    YTColor *_touchResponse;
    YTColor *_callToActionInverse;
    YTColor *_brandIconActive;
    YTColor *_brandIconInactive;
    YTColor *_brandButtonBackground;
    YTColor *_brandLinkText;
    YTColor *_tenPercentLayer;
    YTColor *_snackbarBackground;
    YTColor *_themedBlue;
    YTColor *_themedGreen;
    YTColor *_staticBrandRed;
    YTColor *_staticBrandWhite;
    YTColor *_staticBrandBlack;
    YTColor *_staticClearColor;
    YTColor *_staticAdYellow;
    YTColor *_staticGrey;
    YTColor *_overlayBackgroundSolid;
    YTColor *_overlayBackgroundHeavy;
    YTColor *_overlayBackgroundMedium;
    YTColor *_overlayBackgroundMediumLight;
    YTColor *_overlayBackgroundLight;
    YTColor *_overlayTextPrimary;
    YTColor *_overlayTextSecondary;
    YTColor *_overlayTextTertiary;
    YTColor *_overlayIconActiveCallToAction;
    YTColor *_overlayIconActiveOther;
    YTColor *_overlayIconInactive;
    YTColor *_overlayIconDisabled;
    YTColor *_overlayFilledButtonActive;
    YTColor *_overlayButtonSecondary;
    YTColor *_overlayButtonPrimary;
    YTColor *_overlayBackgroundBrand;
    YTColor *_overlayBackgroundClear;
    YTColor *_verifiedBadgeBackground;
    YTColor *_themedOverlayBackground;
    YTColor *_adIndicator;
}

+ (id)darkPalette;
+ (id)lightPalette;
+ (id)colorPaletteForPageStyle:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTColor *adIndicator; // @synthesize adIndicator=_adIndicator;
@property(readonly, nonatomic) YTColor *themedOverlayBackground; // @synthesize themedOverlayBackground=_themedOverlayBackground;
@property(readonly, nonatomic) YTColor *verifiedBadgeBackground; // @synthesize verifiedBadgeBackground=_verifiedBadgeBackground;
@property(readonly, nonatomic) YTColor *overlayBackgroundClear; // @synthesize overlayBackgroundClear=_overlayBackgroundClear;
@property(readonly, nonatomic) YTColor *overlayBackgroundBrand; // @synthesize overlayBackgroundBrand=_overlayBackgroundBrand;
@property(readonly, nonatomic) YTColor *overlayButtonPrimary; // @synthesize overlayButtonPrimary=_overlayButtonPrimary;
@property(readonly, nonatomic) YTColor *overlayButtonSecondary; // @synthesize overlayButtonSecondary=_overlayButtonSecondary;
@property(readonly, nonatomic) YTColor *overlayFilledButtonActive; // @synthesize overlayFilledButtonActive=_overlayFilledButtonActive;
@property(readonly, nonatomic) YTColor *overlayIconDisabled; // @synthesize overlayIconDisabled=_overlayIconDisabled;
@property(readonly, nonatomic) YTColor *overlayIconInactive; // @synthesize overlayIconInactive=_overlayIconInactive;
@property(readonly, nonatomic) YTColor *overlayIconActiveOther; // @synthesize overlayIconActiveOther=_overlayIconActiveOther;
@property(readonly, nonatomic) YTColor *overlayIconActiveCallToAction; // @synthesize overlayIconActiveCallToAction=_overlayIconActiveCallToAction;
@property(readonly, nonatomic) YTColor *overlayTextTertiary; // @synthesize overlayTextTertiary=_overlayTextTertiary;
@property(readonly, nonatomic) YTColor *overlayTextSecondary; // @synthesize overlayTextSecondary=_overlayTextSecondary;
@property(readonly, nonatomic) YTColor *overlayTextPrimary; // @synthesize overlayTextPrimary=_overlayTextPrimary;
@property(readonly, nonatomic) YTColor *overlayBackgroundLight; // @synthesize overlayBackgroundLight=_overlayBackgroundLight;
@property(readonly, nonatomic) YTColor *overlayBackgroundMediumLight; // @synthesize overlayBackgroundMediumLight=_overlayBackgroundMediumLight;
@property(readonly, nonatomic) YTColor *overlayBackgroundMedium; // @synthesize overlayBackgroundMedium=_overlayBackgroundMedium;
@property(readonly, nonatomic) YTColor *overlayBackgroundHeavy; // @synthesize overlayBackgroundHeavy=_overlayBackgroundHeavy;
@property(readonly, nonatomic) YTColor *overlayBackgroundSolid; // @synthesize overlayBackgroundSolid=_overlayBackgroundSolid;
@property(readonly, nonatomic) YTColor *staticGrey; // @synthesize staticGrey=_staticGrey;
@property(readonly, nonatomic) YTColor *staticAdYellow; // @synthesize staticAdYellow=_staticAdYellow;
@property(readonly, nonatomic) YTColor *staticClearColor; // @synthesize staticClearColor=_staticClearColor;
@property(readonly, nonatomic) YTColor *staticBrandBlack; // @synthesize staticBrandBlack=_staticBrandBlack;
@property(readonly, nonatomic) YTColor *staticBrandWhite; // @synthesize staticBrandWhite=_staticBrandWhite;
@property(readonly, nonatomic) YTColor *staticBrandRed; // @synthesize staticBrandRed=_staticBrandRed;
@property(readonly, nonatomic) YTColor *themedGreen; // @synthesize themedGreen=_themedGreen;
@property(readonly, nonatomic) YTColor *themedBlue; // @synthesize themedBlue=_themedBlue;
@property(readonly, nonatomic) YTColor *snackbarBackground; // @synthesize snackbarBackground=_snackbarBackground;
@property(readonly, nonatomic) YTColor *tenPercentLayer; // @synthesize tenPercentLayer=_tenPercentLayer;
@property(readonly, nonatomic) YTColor *brandLinkText; // @synthesize brandLinkText=_brandLinkText;
@property(readonly, nonatomic) YTColor *brandButtonBackground; // @synthesize brandButtonBackground=_brandButtonBackground;
@property(readonly, nonatomic) YTColor *brandIconInactive; // @synthesize brandIconInactive=_brandIconInactive;
@property(readonly, nonatomic) YTColor *brandIconActive; // @synthesize brandIconActive=_brandIconActive;
@property(readonly, nonatomic) YTColor *callToActionInverse; // @synthesize callToActionInverse=_callToActionInverse;
@property(readonly, nonatomic) YTColor *touchResponse; // @synthesize touchResponse=_touchResponse;
@property(readonly, nonatomic) YTColor *buttonChipBackgroundHover; // @synthesize buttonChipBackgroundHover=_buttonChipBackgroundHover;
@property(readonly, nonatomic) YTColor *badgeChipBackground; // @synthesize badgeChipBackground=_badgeChipBackground;
@property(readonly, nonatomic) YTColor *iconDisabled; // @synthesize iconDisabled=_iconDisabled;
@property(readonly, nonatomic) YTColor *iconInactive; // @synthesize iconInactive=_iconInactive;
@property(readonly, nonatomic) YTColor *iconActiveOther; // @synthesize iconActiveOther=_iconActiveOther;
@property(readonly, nonatomic) YTColor *callToAction; // @synthesize callToAction=_callToAction;
@property(readonly, nonatomic) YTColor *textPrimaryInverse; // @synthesize textPrimaryInverse=_textPrimaryInverse;
@property(readonly, nonatomic) YTColor *textDisabled; // @synthesize textDisabled=_textDisabled;
@property(readonly, nonatomic) YTColor *textSecondary; // @synthesize textSecondary=_textSecondary;
@property(readonly, nonatomic) YTColor *textPrimary; // @synthesize textPrimary=_textPrimary;
@property(readonly, nonatomic) YTColor *errorBackground; // @synthesize errorBackground=_errorBackground;
@property(readonly, nonatomic) YTColor *generalBackgroundC; // @synthesize generalBackgroundC=_generalBackgroundC;
@property(readonly, nonatomic) YTColor *generalBackgroundB; // @synthesize generalBackgroundB=_generalBackgroundB;
@property(readonly, nonatomic) YTColor *brandBackgroundSecondary; // @synthesize brandBackgroundSecondary=_brandBackgroundSecondary;
@property(readonly, nonatomic) YTColor *brandBackgroundPrimary; // @synthesize brandBackgroundPrimary=_brandBackgroundPrimary;
@property(readonly, nonatomic) YTColor *brandBackgroundSolid; // @synthesize brandBackgroundSolid=_brandBackgroundSolid;
@property(readonly, nonatomic) long long pageStyle; // @synthesize pageStyle=_pageStyle;
@property(readonly, nonatomic) YTColor *generalBackgroundA;
@property(readonly, nonatomic) YTColor *suggestedAction;
@property(readonly, nonatomic) YTColor *staticBlue;
@property(readonly, nonatomic) YTColor *background3;
@property(readonly, nonatomic) YTColor *background2;
@property(readonly, nonatomic) YTColor *background1;
- (id)initWithPageStyle:(long long)arg1;
- (id)colorForThemeAttribute:(int)arg1;

@end

