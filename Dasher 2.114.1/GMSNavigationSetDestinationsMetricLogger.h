//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSNavigationServices, NSString;

@interface GMSNavigationSetDestinationsMetricLogger : NSObject
{
    GMSNavigationServices *_services;
    NSString *_groupID;
    _Bool _avoidsTolls;
    _Bool _avoidsHighways;
    int _travelMode;
    long long _numWaypoints;
    long long _setDestinationsStartTime;
    long long _directionsFetchStartTime;
    long long _deviceLocationFetchStartTime;
}

- (void).cxx_destruct;
- (id)createRequestExtraInfo;
- (void)logUE3MetricWithType:(int)arg1 value:(long long)arg2 extraInfo:(id)arg3;
- (void)registerDeviceLocationFetchEnd;
- (void)registerDeviceLocationFetchStart;
- (void)registerDirectionsFetchEnd;
- (void)registerDirectionsFetchStart;
- (void)registerSetDestinationsCallbackWithRouteStatus:(long long)arg1;
- (void)registerSetDestinationsReturn;
- (void)registerSetDestinationsStart;
- (id)initWithNavigationServices:(id)arg1 avoidsHighways:(_Bool)arg2 avoidsTolls:(_Bool)arg3 travelMode:(int)arg4 waypoints:(id)arg5;

@end
