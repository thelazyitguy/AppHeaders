//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIFont.h>

@class NSDictionary;

@interface UIFont (iFunny)
+ (id)if_condensedBlackHelveticaNeueFontWithSize:(double)arg1;
+ (id)if_semiboldSFUIDisplayFontWithSize:(double)arg1;
+ (id)if_heavySFUIDisplayFontWithSize:(double)arg1;
+ (id)if_lightSFUIDisplayFontWithSize:(double)arg1;
+ (id)if_regularSFUIDisplayFontWithSize:(double)arg1;
+ (id)if_semiboldSFUIDisplayFontName;
+ (id)if_heavySFUIDisplayFontName;
+ (id)if_lightSFUIDisplayFontName;
+ (id)if_regularSFUIDisplayFontName;
+ (id)if_semiboldSFUITextFontWithSize:(double)arg1;
+ (id)if_heavySFUITextFontWithSize:(double)arg1;
+ (id)if_mediumSFUITextFontWithSize:(double)arg1;
+ (id)if_boldSFUITextFontWithSize:(double)arg1;
+ (id)if_regularSFUITextFontWithSize:(double)arg1;
+ (id)if_semiboldSFUITextFontName;
+ (id)if_heavySFUITextFontName;
+ (id)if_mediumSFUITextFontName;
+ (id)if_boldSFUITextFontName;
+ (id)if_regularSFUITextFontName;
+ (id)mdc_standardFontForMaterialTextStyle:(long long)arg1;
+ (id)mdc_preferredFontForMaterialTextStyle:(long long)arg1;
+ (id)mdc_fontWeightDescription:(double)arg1;
+ (id)fontWithPostscriptName:(id)arg1 size:(double)arg2;
+ (id)fontWithFamily:(id)arg1 size:(double)arg2 traits:(unsigned int)arg3;
+ (id)fontWithFamily:(id)arg1 size:(double)arg2 bold:(_Bool)arg3 italic:(_Bool)arg4;
+ (id)GMSx_mdc_standardFontForMaterialTextStyle:(long long)arg1;
+ (id)GMSx_mdc_preferredFontForMaterialTextStyle:(long long)arg1;
+ (id)GMSx_mdc_fontWeightDescription:(double)arg1;
@property(copy, nonatomic, setter=mdc_setScalingCurve:) NSDictionary *mdc_scalingCurve;
- (id)mdc_scaledFontAtDefaultSize;
- (id)mdc_scaledFontForCurrentSizeCategory;
- (id)mdc_scaledFontForTraitEnvironment:(id)arg1;
- (id)mdc_scaledFontForSizeCategory:(id)arg1;
- (_Bool)mdc_isSimplyEqual:(id)arg1;
- (id)mdc_fontSizedForMaterialTextStyle:(long long)arg1 scaledForDynamicType:(_Bool)arg2;
- (id)mdc_extendedDescription;
- (id)mdc_weightString;
- (double)mdc_slant;
- (double)mdc_weight;
- (unsigned int)symbolicTraits;
- (id)fontWithSymbolicTraits:(unsigned int)arg1;
- (_Bool)GMSx_mdc_isSimplyEqual:(id)arg1;
- (id)GMSx_mdc_fontSizedForMaterialTextStyle:(long long)arg1 scaledForDynamicType:(_Bool)arg2;
- (id)GMSx_mdc_extendedDescription;
- (id)GMSx_mdc_weightString;
- (double)GMSx_mdc_slant;
- (double)GMSx_mdc_weight;
@end
