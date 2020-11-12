//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class CLBeaconIdentityConstraint, CLBeaconRegion, CLHeading, CLLocation, CLLocationManager, CLRegion, CLVisit, NSArray, NSError;

@protocol CLLocationManagerDelegate <NSObject>

@optional
- (void)locationManager:(CLLocationManager *)arg1 didVisit:(CLVisit *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didFinishDeferredUpdatesWithError:(NSError *)arg2;
- (void)locationManagerDidResumeLocationUpdates:(CLLocationManager *)arg1;
- (void)locationManagerDidPauseLocationUpdates:(CLLocationManager *)arg1;
- (void)locationManager:(CLLocationManager *)arg1 didStartMonitoringForRegion:(CLRegion *)arg2;
- (void)locationManagerDidChangeAuthorization:(CLLocationManager *)arg1;
- (void)locationManager:(CLLocationManager *)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(CLLocationManager *)arg1 monitoringDidFailForRegion:(CLRegion *)arg2 withError:(NSError *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didExitRegion:(CLRegion *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didEnterRegion:(CLRegion *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didFailRangingBeaconsForConstraint:(CLBeaconIdentityConstraint *)arg2 error:(NSError *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didRangeBeacons:(NSArray *)arg2 satisfyingConstraint:(CLBeaconIdentityConstraint *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 rangingBeaconsDidFailForRegion:(CLBeaconRegion *)arg2 withError:(NSError *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didRangeBeacons:(NSArray *)arg2 inRegion:(CLBeaconRegion *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didDetermineState:(long long)arg2 forRegion:(CLRegion *)arg3;
- (_Bool)locationManagerShouldDisplayHeadingCalibration:(CLLocationManager *)arg1;
- (void)locationManager:(CLLocationManager *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didUpdateLocations:(NSArray *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didUpdateToLocation:(CLLocation *)arg2 fromLocation:(CLLocation *)arg3;
@end
