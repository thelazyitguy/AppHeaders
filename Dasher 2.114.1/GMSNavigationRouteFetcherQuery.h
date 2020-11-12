//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSDLocation, GMSNavigationRoutingOptions, GMSNavigationSetDestinationsMetricLogger, GMSx_DirectionsSearchToken, NSArray, NSString;

@interface GMSNavigationRouteFetcherQuery : NSObject
{
    _Bool _quotaResponseReceived;
    _Bool _avoidsHighways;
    _Bool _avoidsTolls;
    int _licensePlateRestriction;
    int _travelMode;
    NSArray *_waypoints;
    CDUnknownBlockType _callback;
    GMSDLocation *_location;
    GMSNavigationRoutingOptions *_routingOptions;
    NSString *_precomputedRouteToken;
    GMSNavigationSetDestinationsMetricLogger *_metricLogger;
    GMSx_DirectionsSearchToken *_directionsRequestToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GMSx_DirectionsSearchToken *directionsRequestToken; // @synthesize directionsRequestToken=_directionsRequestToken;
@property(readonly, nonatomic) GMSNavigationSetDestinationsMetricLogger *metricLogger; // @synthesize metricLogger=_metricLogger;
@property(readonly, nonatomic) NSString *precomputedRouteToken; // @synthesize precomputedRouteToken=_precomputedRouteToken;
@property(readonly, nonatomic) GMSNavigationRoutingOptions *routingOptions; // @synthesize routingOptions=_routingOptions;
@property(readonly, nonatomic) int travelMode; // @synthesize travelMode=_travelMode;
@property(readonly, nonatomic) int licensePlateRestriction; // @synthesize licensePlateRestriction=_licensePlateRestriction;
@property(readonly, nonatomic) _Bool avoidsTolls; // @synthesize avoidsTolls=_avoidsTolls;
@property(readonly, nonatomic) _Bool avoidsHighways; // @synthesize avoidsHighways=_avoidsHighways;
@property(nonatomic, getter=isQuotaResponseReceived) _Bool quotaResponseReceived; // @synthesize quotaResponseReceived=_quotaResponseReceived;
@property(retain, nonatomic) GMSDLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
- (id)initWithWaypoints:(id)arg1 avoidsHighways:(_Bool)arg2 avoidsTolls:(_Bool)arg3 licensePlateRestriction:(int)arg4 travelMode:(int)arg5 routingOptions:(id)arg6 precomputedRouteToken:(id)arg7 metricLogger:(id)arg8 callback:(CDUnknownBlockType)arg9;

@end
