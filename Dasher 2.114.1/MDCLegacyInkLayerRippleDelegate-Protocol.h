//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/MDCLegacyInkLayerDelegate-Protocol.h>

@class CAAnimation, CAShapeLayer, GMSx_MDCLegacyInkLayerRipple;

@protocol MDCLegacyInkLayerRippleDelegate <MDCLegacyInkLayerDelegate>
- (void)animationDidStop:(CAAnimation *)arg1 shapeLayer:(CAShapeLayer *)arg2 finished:(_Bool)arg3;
- (void)animationDidStart:(GMSx_MDCLegacyInkLayerRipple *)arg1;
@end
