//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, GOONavigationStyle, MDCPalette, UIColor, UIFont;

@interface GFMIUIConstants : NSObject
{
    GIMMe *_gimme;
    MDCPalette *_checkmarkColorGroup;
    UIColor *_collectionViewBackgroundColor;
    UIColor *_buttonColor;
    UIColor *_buttonTextColor;
    UIColor *_defaultAvatarBackgroundColor;
    UIColor *_defaultViewBackgroundColor;
    UIColor *_loadingViewBackgroundColor;
    UIColor *_bodyTextColor;
    UIColor *_lightBodyTextColor;
    UIColor *_warningTextColor;
    UIColor *_linkColor;
    UIColor *_primaryActionButtonTitleColor;
    UIColor *_transparentColor;
    UIColor *_whiteIconColor;
    UIColor *_regularIconColor;
    UIColor *_darkIconColor;
    UIFont *_titleFont;
    UIFont *_subheadingFont;
    UIFont *_bodyMediumFont;
    UIFont *_bodyRegularFont;
    UIFont *_disclaimerTextFont;
    GOONavigationStyle *_navigationStyle;
    double _lineSpacing;
}

+ (id)quantumBodyRegularFont;
+ (id)quantumBodyMediumFont;
+ (id)quantumSubheadingFont;
+ (id)quantumTitleFont;
+ (id)quantumTitleRegularFont;
+ (id)navigationBarLabelFont;
+ (id)primaryColors;
+ (id)lightBodyTextColor;
+ (id)bodyTextColor;
+ (id)navigationBarDarkTitleColor;
+ (id)darkIconColor;
+ (id)loadingViewBackgroundColor;
+ (id)defaultWhiteBackgroundColor;
+ (id)defaultAvatarBackgroundColor;
+ (id)hexToRGBColor:(unsigned long long)arg1;
+ (id)defaultNavigationStyle;
- (void).cxx_destruct;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(retain, nonatomic) GOONavigationStyle *navigationStyle; // @synthesize navigationStyle=_navigationStyle;
@property(retain, nonatomic) UIFont *disclaimerTextFont; // @synthesize disclaimerTextFont=_disclaimerTextFont;
@property(retain, nonatomic) UIFont *bodyRegularFont; // @synthesize bodyRegularFont=_bodyRegularFont;
@property(retain, nonatomic) UIFont *bodyMediumFont; // @synthesize bodyMediumFont=_bodyMediumFont;
@property(retain, nonatomic) UIFont *subheadingFont; // @synthesize subheadingFont=_subheadingFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *darkIconColor; // @synthesize darkIconColor=_darkIconColor;
@property(retain, nonatomic) UIColor *regularIconColor; // @synthesize regularIconColor=_regularIconColor;
@property(retain, nonatomic) UIColor *whiteIconColor; // @synthesize whiteIconColor=_whiteIconColor;
@property(retain, nonatomic) UIColor *transparentColor; // @synthesize transparentColor=_transparentColor;
@property(retain, nonatomic) UIColor *primaryActionButtonTitleColor; // @synthesize primaryActionButtonTitleColor=_primaryActionButtonTitleColor;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) UIColor *warningTextColor; // @synthesize warningTextColor=_warningTextColor;
@property(retain, nonatomic) UIColor *lightBodyTextColor; // @synthesize lightBodyTextColor=_lightBodyTextColor;
@property(retain, nonatomic) UIColor *bodyTextColor; // @synthesize bodyTextColor=_bodyTextColor;
@property(retain, nonatomic) UIColor *loadingViewBackgroundColor; // @synthesize loadingViewBackgroundColor=_loadingViewBackgroundColor;
@property(retain, nonatomic) UIColor *defaultViewBackgroundColor; // @synthesize defaultViewBackgroundColor=_defaultViewBackgroundColor;
@property(retain, nonatomic) UIColor *defaultAvatarBackgroundColor; // @synthesize defaultAvatarBackgroundColor=_defaultAvatarBackgroundColor;
@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(retain, nonatomic) UIColor *collectionViewBackgroundColor; // @synthesize collectionViewBackgroundColor=_collectionViewBackgroundColor;
@property(retain, nonatomic) MDCPalette *checkmarkColorGroup; // @synthesize checkmarkColorGroup=_checkmarkColorGroup;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)init;

@end

