//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/NSObject-Protocol.h>

@class GMSDRouteCalloutModel, GMSx_RouteCalloutRenderer;

@protocol RouteCalloutRendererSource <NSObject>
- (float)minDistanceFromOtherPolylines;
- (_Bool)shouldHideOnRelativeRouteSize;
- (_Bool)shouldAllowOccludedRegionOverlap;
- (_Bool)shouldAllowUpdateOnCameraMovement;
- (_Bool)shouldAllowPolylineOverlap;
- (GMSx_RouteCalloutRenderer *)calloutRendererForModel:(GMSDRouteCalloutModel *)arg1;
@end
