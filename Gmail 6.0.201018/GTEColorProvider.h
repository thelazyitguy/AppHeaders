//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIColor;
@protocol GMDCContainerScheming;

@interface GTEColorProvider : NSObject
{
    id <GMDCContainerScheming> _defaultGMDCColorScheme;
    id <GMDCContainerScheming> _dialogGMDCColorScheme;
}

- (void).cxx_destruct;
- (id)dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2;
- (id)createColorScheme;
@property(readonly, nonatomic) id <GMDCContainerScheming> dialogGMDCColorScheme; // @synthesize dialogGMDCColorScheme=_dialogGMDCColorScheme;
@property(readonly, nonatomic) id <GMDCContainerScheming> defaultGMDCColorScheme; // @synthesize defaultGMDCColorScheme=_defaultGMDCColorScheme;
@property(readonly, nonatomic) NSArray *syncSpinnerColorsWithRipple;
@property(readonly, nonatomic) NSArray *syncSpinnerColorsWithoutRipple;
@property(readonly, nonatomic) UIColor *snackbarButtonTextColorHighlighted;
@property(readonly, nonatomic) UIColor *snackbarButtonTextColor;
@property(readonly, nonatomic) UIColor *snackbarShadowColor;
@property(readonly, nonatomic) UIColor *snackbarTextColor;
@property(readonly, nonatomic) UIColor *snackbarBackgroundColor;
@property(readonly, nonatomic) long long popupStatusBarStyle;
@property(readonly, nonatomic) long long defaultStatusBarStyle;
@property(readonly, nonatomic) UIColor *shadowColor;
@property(readonly, nonatomic) UIColor *tomorrowColor;
@property(readonly, nonatomic) UIColor *todayColor;
@property(readonly, nonatomic) UIColor *pastColor;
@property(readonly, nonatomic) UIColor *checkboxOutlineColor;
@property(readonly, nonatomic) UIColor *dangerColor;
@property(readonly, nonatomic) UIColor *accentColor;
@property(readonly, nonatomic) UIColor *hairlineBorderColor;
@property(readonly, nonatomic) UIColor *elevatedDelimiterColor;
@property(readonly, nonatomic) UIColor *delimiterColor;
@property(readonly, nonatomic) UIColor *bottomDrawerCellBackgroundColor;
@property(readonly, nonatomic) UIColor *createListBackgroundColor;
@property(readonly, nonatomic) UIColor *bottomAppBarBackgroundColor;
@property(readonly, nonatomic) UIColor *chipBackgroundColor;
@property(readonly, nonatomic) UIColor *elevatedBackgroundColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) UIColor *filledButtonTextColor;
@property(readonly, nonatomic) UIColor *textButtonColor;
@property(readonly, nonatomic) UIColor *hintTextColor;
@property(readonly, nonatomic) UIColor *secondaryTextColor;
@property(readonly, nonatomic) UIColor *selectedTextColor;
@property(readonly, nonatomic) UIColor *primaryTextColor;
@property(readonly, nonatomic) UIColor *selectedInkColor;
@property(readonly, nonatomic) UIColor *accentInkColor;
@property(readonly, nonatomic) UIColor *inkColor;
@property(readonly, nonatomic) UIColor *selectedIconTintColor;
@property(readonly, nonatomic) UIColor *iconTintColor;
- (id)init;

@end
