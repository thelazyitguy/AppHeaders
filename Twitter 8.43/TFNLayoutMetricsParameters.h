//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSTimer;

@interface TFNLayoutMetricsParameters : NSObject
{
    NSTimer *_updateTimer;
    NSDictionary *_lineHeightMultipliers;
    long long _version;
}

+ (id)sharedParameters;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void)_performUpdate;
- (void)_coalesceUpdates;
- (void)tfx_minimumAvatarHeightParameterChanged;
- (void)tfx_mediumAvatarHeightLHUnitsParameterChanged;
- (void)tfx_smallAvatarHeightLHUnitsParameterChanged;
- (void)tfx_xSmallAvatarHeightLHUnitsParameterChanged;
- (void)tfx_xxSmallAvatarHeightLHUnitsParameterChanged;
- (void)tfx_avatarHeightLHUnitsParameterChanged;
- (void)tfx_minimumContentEdgeInsetsParameterChanged;
- (void)tfx_contentEdgeInsetsEmsParameterChanged;
- (void)tfx_minimumElementPaddingParameterChanged;
- (void)tfx_elementPaddingEmsParameterChanged;
- (void)tfx_minimumBodyWidthParameterChanged;
- (void)tfx_minimumLineLengthInsetParameterChanged;
- (void)tfx_insetForLineLengthInHorizontallyCompactEnvironmentParameterChanged;
- (void)tfx_lineHeightMultiplierRegularWidthRegularHeightParameterChanged;
- (void)tfx_lineHeightMultiplierCompactWidthRegularHeightParameterChanged;
- (void)tfx_lineHeightMultiplierRegularWidthCompactHeightParameterChanged;
- (void)tfx_lineHeightMultiplierCompactWidthCompactHeightParameterChanged;
- (void)tfx_idealEmsPerLineParameterChanged;
@property(readonly, nonatomic) double minimumAvatarHeight;
@property(readonly, nonatomic) double mediumAvatarHeightLHUnits;
@property(readonly, nonatomic) double smallAvatarHeightLHUnits;
@property(readonly, nonatomic) double xSmallAvatarHeightLHUnits;
@property(readonly, nonatomic) double xxSmallAvatarHeightLHUnits;
@property(readonly, nonatomic) double avatarHeightLHUnits;
@property(readonly, nonatomic) double minimumContentEdgeInsets;
@property(readonly, nonatomic) double contentEdgeInsetsEms;
@property(readonly, nonatomic) double minimumElementPadding;
@property(readonly, nonatomic) double elementPaddingEms;
@property(readonly, nonatomic) double minimumBodyWidth;
@property(readonly, nonatomic) double minimumLineLengthInset;
@property(readonly, nonatomic) _Bool insetForLineLengthInHorizontallyCompactEnvironment;
- (double)lineHeightMultiplierForHorizontalSizeClass:(long long)arg1 verticalSizeClass:(long long)arg2;
@property(readonly, nonatomic) double idealEmsPerLine;
- (void)_cacheLineHeightMultipliers;
- (id)init;

@end

