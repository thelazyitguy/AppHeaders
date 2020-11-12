//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GLUELabelStyle, UIColor;

@interface SPTBrowseUIEditorialHeaderStyle : NSObject <NSCopying>
{
    GLUELabelStyle *_subtitleLabelStyle;
    double _widescreenMetric;
    double _titleProtectionColorAlpha;
    double _statusBarProtectionColorAlpha;
    UIColor *_statusBarProtectionGradientFromColor;
    UIColor *_statusBarProtectionGradientToColor;
    struct CGPoint _titleProtectionGradientCurveStartPoint;
    struct CGPoint _titleProtectionGradientCurveEndPoint;
    struct CGPoint _statusBarProtectionGradientCurveStartPoint;
    struct CGPoint _statusBarProtectionGradientCurveEndPoint;
}

+ (id)defaultStyleWithTheme:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *statusBarProtectionGradientToColor; // @synthesize statusBarProtectionGradientToColor=_statusBarProtectionGradientToColor;
@property(copy, nonatomic) UIColor *statusBarProtectionGradientFromColor; // @synthesize statusBarProtectionGradientFromColor=_statusBarProtectionGradientFromColor;
@property(nonatomic) struct CGPoint statusBarProtectionGradientCurveEndPoint; // @synthesize statusBarProtectionGradientCurveEndPoint=_statusBarProtectionGradientCurveEndPoint;
@property(nonatomic) struct CGPoint statusBarProtectionGradientCurveStartPoint; // @synthesize statusBarProtectionGradientCurveStartPoint=_statusBarProtectionGradientCurveStartPoint;
@property(nonatomic) struct CGPoint titleProtectionGradientCurveEndPoint; // @synthesize titleProtectionGradientCurveEndPoint=_titleProtectionGradientCurveEndPoint;
@property(nonatomic) struct CGPoint titleProtectionGradientCurveStartPoint; // @synthesize titleProtectionGradientCurveStartPoint=_titleProtectionGradientCurveStartPoint;
@property(nonatomic) double statusBarProtectionColorAlpha; // @synthesize statusBarProtectionColorAlpha=_statusBarProtectionColorAlpha;
@property(nonatomic) double titleProtectionColorAlpha; // @synthesize titleProtectionColorAlpha=_titleProtectionColorAlpha;
@property(nonatomic) double widescreenMetric; // @synthesize widescreenMetric=_widescreenMetric;
@property(copy, nonatomic) GLUELabelStyle *subtitleLabelStyle; // @synthesize subtitleLabelStyle=_subtitleLabelStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
