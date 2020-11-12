//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GMSx_GOOResources : NSObject
{
}

+ (id)tintImage:(id)arg1 withColor:(id)arg2;
+ (id)bundlePathWithName:(id)arg1;
+ (id)baseBundle;
+ (id)sharedInstance;
- (id)fontWithName:(id)arg1 size:(double)arg2;
- (id)boldTextFontWithSize:(double)arg1;
- (id)mediumTextFontWithSize:(double)arg1;
- (id)lightTextFontWithSize:(double)arg1;
- (id)textFontWithSize:(double)arg1;
- (void)applyBackgroundImageSelector:(SEL)arg1 toButton:(id)arg2;
- (void)applyImageSelector:(SEL)arg1 toButton:(id)arg2;
- (id)gradientColorsForDarkHighlight;
- (id)gradientColorsForHighlight;
- (id)colorForHighlightState;
- (id)stringForKey:(id)arg1 bundleName:(id)arg2;
- (id)imageWithResourceName:(id)arg1 bundleName:(id)arg2 tintColor:(id)arg3;
- (id)imageWithResourceName:(id)arg1 bundleName:(id)arg2;
- (id)imageFromAssetCatalogWithResourceName:(id)arg1 bundleName:(id)arg2;
- (id)bundleWithName:(id)arg1;
- (id)quantumCollectionsInfoBarGestureHintString;
- (id)quantumCollectionsDeleteButtonString;
- (id)quantumCollectionViewsStringForId:(int)arg1;
- (id)contentViewsCheckBoxDeselectAccessibilityHint;
- (id)contentViewsCheckBoxSelectAccessibilityHint;
- (id)contentViewsDefaultErrorString;
- (id)contentViewsNoNetworkString;
- (id)contentViewsNoServerButtonString;
- (id)contentViewsTryAgainButtonString;
- (id)contentViewsStringForId:(int)arg1;
- (id)contentViewsErrorImage;
- (id)disabledOverlayBackgroundColor;
- (id)contentViewsImageWithResourceName:(id)arg1;
- (id)accessibilityNavigateBackString;
- (struct UIEdgeInsets)cardContentPadding;
- (id)highlightedTextColor;
- (id)actionColor;
- (id)lightTextColor;
- (id)mediumTextColor;
- (id)darkTextColor;
- (id)backgroundColor;
- (double)minimumCardHeaderFontSize;
- (id)cardDetailTextFont;
- (id)cardTextFont;
- (id)blueButtonBackgroundImageForState:(unsigned long long)arg1;
- (id)buttonBackgroundImageNamed:(id)arg1;
- (id)checkmarkImage;
- (id)cellDisclosureAccessoryImage;
- (id)cellDividerImage;
- (id)cellBackgroundSelectedDarkImage;
- (id)checkboxImageForState:(unsigned long long)arg1;
- (id)highlightedBackgroundForHeight:(double)arg1;
- (id)coreStringForID:(int)arg1;
- (id)coreImageWithResourceName:(id)arg1;
- (id)uinavigationBackString;
- (id)uinavigationStringForId:(int)arg1;
- (id)uinavigationColorForNavigationBarButtonTitle;
- (id)uinavigationColorForNavigationBarTitle;
- (id)uinavigationColorForViewBackground;
- (id)uinavigationFontForNavigationBarButtonTitle;
- (id)uinavigationFontForNavigationBarLandscapeTitle;
- (id)uinavigationFontForNavigationBarTitle;
- (id)uinavigationImageForNavigationBarButtonBackgroundWithState:(unsigned long long)arg1;
- (id)uinavigationImageForNavigationBarBackButtonWithState:(unsigned long long)arg1;
- (id)uinavigationImageForNavigationBarBottomShadow;
- (id)uinavigationImageForLargeNavigationBarLandscapeBackground;
- (id)uinavigationImageForLargeNavigationBarBackground;
- (id)uinavigationImageForSmallNavigationBarLandscapeBackground;
- (id)uinavigationImageForSmallNavigationBarBackground;
- (id)uinavigationImageForFloatingHeader;
- (id)uinavigationImageWithResourceName:(id)arg1;
- (id)dialogDismissAlertVoiceOverHint;
- (id)dialogDismissAlertVoiceOverMessage;
- (id)dialogDismissPopupVoiceOverHint;
- (id)dialogDismissPopupVoiceOverMessage;
- (id)dialogDismissModalViewVoiceOverHint;
- (id)dialogDismissModalViewVoiceOverMessage;
- (id)dialogAccessibilityAlertString;
- (id)dialogTryAgainString;
- (id)dialogCancelString;
- (id)dialogAcknowledgeString;
- (id)dialogStringForId:(int)arg1;

@end
