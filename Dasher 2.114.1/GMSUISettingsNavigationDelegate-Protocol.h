//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GMSNavigationSpeedometerUIOptions, GMSUISettings, UIColor, UIFont;

@protocol GMSUISettingsNavigationDelegate
- (void)UISettings:(GMSUISettings *)arg1 didChangeSpeedometerUIOptions:(GMSNavigationSpeedometerUIOptions *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderInstructionsConjunctionsFont:(UIFont *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderInstructionsSecondRowFont:(UIFont *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderInstructionsFirstRowFont:(UIFont *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderInstructionsTextColor:(UIColor *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderDistanceUnitsFont:(UIFont *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderDistanceUnitsTextColor:(UIColor *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderDistanceValueFont:(UIFont *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderDistanceValueTextColor:(UIColor *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderNextStepFont:(UIFont *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderNextStepTextColor:(UIColor *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderGuidanceRecommendedLaneColor:(UIColor *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderSmallManeuverIconColor:(UIColor *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderLargeManeuverIconColor:(UIColor *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderBackgroundAlpha:(double)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderSecondaryBackgroundColorNightMode:(UIColor *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderPrimaryBackgroundColorNightMode:(UIColor *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderSecondaryBackgroundColor:(UIColor *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderPrimaryBackgroundColor:(UIColor *)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeShowsDestinationMarkers:(_Bool)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeShowsIncidentCards:(_Bool)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeRecenterButtonEnabled:(_Bool)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationFooterEnabled:(_Bool)arg2;
- (void)UISettings:(GMSUISettings *)arg1 didChangeNavigationHeaderEnabled:(_Bool)arg2;
@end
