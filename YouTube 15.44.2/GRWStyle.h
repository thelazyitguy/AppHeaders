//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GRWStyle : NSObject
{
}

+ (void)setPrimitiveInterfaceStyle:(unsigned long long)arg1;
+ (unsigned long long)primitiveInterfaceStyle;
+ (void)setPrimitiveUIStyleMode:(long long)arg1;
+ (long long)primitiveUIStyleMode;
+ (_Bool)isOverridden;
+ (void)clearOverrideForNextLaunchStyleAndMode;
+ (void)clearOverride;
+ (void)setForNextLaunchStyle:(unsigned long long)arg1 mode:(long long)arg2;
+ (id)styleToolSubtitle;
+ (id)stringForStyle:(unsigned long long)arg1 mode:(long long)arg2;
+ (id)stringForMode:(long long)arg1;
+ (id)stringForStyle:(unsigned long long)arg1;
+ (unsigned long long)UIntToStyle:(unsigned long long)arg1;
+ (long long)UIntToMode:(unsigned long long)arg1;
+ (id)fontForWeight:(double)arg1 fontSizeDictionary:(id)arg2;
+ (id)fontForMaterialTextStyle:(long long)arg1;
+ (id)typography;
+ (id)layout;
+ (id)color;
+ (void)setDynamicTypeEnabled:(_Bool)arg1;
+ (_Bool)isDynamicTypeEnabled;
+ (_Bool)isCurrentInterfaceStyleGoogleMaterial;
+ (_Bool)isCurrentInterfaceStyleMaterial;
+ (_Bool)shouldSetUIStyleFromTraitsHolder:(id)arg1 comparedToTraits:(id)arg2;
+ (void)setUIStyleIfNeededFromTraits:(id)arg1;
+ (void)setEffectiveUIStyleMode:(long long)arg1;
+ (long long)effectiveUIStyleMode;
+ (void)setUIStyleMode:(long long)arg1;
+ (long long)UIStyleMode;
+ (void)setCurrentInterfaceStyle:(unsigned long long)arg1;
+ (unsigned long long)currentInterfaceStyle;
+ (id)appSwitchingDisplay;
+ (id)messagingDisplay;
+ (void)setupTooltipWithGrowthKitDefaults:(id)arg1;
+ (id)tooltipDisplay;
+ (id)cardDisplay;
+ (id)featureHighlightDisplay;

@end

