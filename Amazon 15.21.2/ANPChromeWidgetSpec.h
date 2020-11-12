//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANPWidgetSpec.h"

@class NSString, UIColor;

@interface ANPChromeWidgetSpec : ANPWidgetSpec
{
    _Bool _sticky;
    NSString *_statusBarStyle;
    UIColor *_modalNavBarTitleColor;
}

@property(retain, nonatomic) UIColor *modalNavBarTitleColor; // @synthesize modalNavBarTitleColor=_modalNavBarTitleColor;
@property(nonatomic) _Bool sticky; // @synthesize sticky=_sticky;
@property(retain, nonatomic) NSString *statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (void).cxx_destruct;
- (void)generateModalNavBarTitleColor;
- (void)generateStickyModeSpec;
- (void)generateStatusBarStyleSpec;
- (id)initWithIntermediateSpec:(id)arg1;

@end
