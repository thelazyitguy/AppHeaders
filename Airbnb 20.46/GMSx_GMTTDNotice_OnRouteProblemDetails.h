//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTDDistance, GMSx_GMTTDNotice_OnRouteProblemDetails_LegendNamedStyles, GMSx_GMTTDRenderableComponent;

@interface GMSx_GMTTDNotice_OnRouteProblemDetails : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMTTDRenderableComponent *calloutText; // @dynamic calloutText;
@property(retain, nonatomic) GMSx_GMTTDDistance *distanceAhead; // @dynamic distanceAhead;
@property(nonatomic) _Bool hasCalloutText; // @dynamic hasCalloutText;
@property(nonatomic) _Bool hasDistanceAhead; // @dynamic hasDistanceAhead;
@property(nonatomic) _Bool hasLegendNamedStyles; // @dynamic hasLegendNamedStyles;
@property(retain, nonatomic) GMSx_GMTTDNotice_OnRouteProblemDetails_LegendNamedStyles *legendNamedStyles; // @dynamic legendNamedStyles;

@end

