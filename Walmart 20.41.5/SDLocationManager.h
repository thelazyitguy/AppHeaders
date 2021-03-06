//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IOSShared/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, CLLocationManager, NSArray, NSDate, NSMutableSet, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface SDLocationManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _isUpdatingLocation;
    _Bool _isUpdatingHeading;
    _Bool _gotFirstLocationUpdate;
    CLLocationManager *_locationManager;
    NSMutableSet *_delegateRegistrations;
    NSObject<OS_dispatch_queue> *_delegatesAccessQueue;
    double _timeout;
    NSTimer *_timeoutTimer;
    NSDate *_timestamp;
    CLLocation *_previousLocation;
    unsigned long long _authorizationScheme;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long authorizationScheme; // @synthesize authorizationScheme=_authorizationScheme;
@property(retain, nonatomic) CLLocation *previousLocation; // @synthesize previousLocation=_previousLocation;
@property(nonatomic) _Bool gotFirstLocationUpdate; // @synthesize gotFirstLocationUpdate=_gotFirstLocationUpdate;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) __weak NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegatesAccessQueue; // @synthesize delegatesAccessQueue=_delegatesAccessQueue;
@property(retain, nonatomic) NSMutableSet *delegateRegistrations; // @synthesize delegateRegistrations=_delegateRegistrations;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) _Bool isUpdatingHeading; // @synthesize isUpdatingHeading=_isUpdatingHeading;
@property(nonatomic) _Bool isUpdatingLocation; // @synthesize isUpdatingLocation=_isUpdatingLocation;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_timeoutHandler;
- (double)_finestDistanceFilter;
- (double)_greatestDesiredAccuracy;
- (void)_updateDesiredAccuracyAndDistanceFilter;
- (_Bool)_delegate:(id)arg1 isRegisteredForDesiredAccuracy:(double)arg2 distanceFilter:(double)arg3;
- (void)_deregisterDelegate:(id)arg1;
- (void)_registerDelegate:(id)arg1 forDesiredAccuracy:(double)arg2 distanceFilter:(double)arg3;
- (void)_internalStop;
- (_Bool)_internalStart;
- (void)requestWhenInUseAuthorization;
- (void)requestAlwaysAuthorization;
- (void)stopUpdatingLocationForAllDelegates;
- (void)stopUpdatingLocationWithDelegate:(id)arg1;
- (_Bool)startUpdatingLocationWithDelegate:(id)arg1 desiredAccuracy:(double)arg2 distanceFilter:(double)arg3 authorization:(unsigned long long)arg4;
- (_Bool)startUpdatingLocationWithDelegate:(id)arg1 desiredAccuracy:(double)arg2 authorization:(unsigned long long)arg3;
- (_Bool)startUpdatingLocationWithDelegate:(id)arg1 desiredAccuracy:(double)arg2;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) CLLocation *currentLocation;
@property(readonly, nonatomic) int authorizationStatus; // @dynamic authorizationStatus;
@property(readonly, nonatomic) NSArray *delegates; // @dynamic delegates;
@property(readonly, nonatomic) _Bool hasReceivedLocationUpdate; // @dynamic hasReceivedLocationUpdate;
@property(readonly, nonatomic) _Bool isLocationRejected; // @dynamic isLocationRejected;
@property(readonly, nonatomic) _Bool isLocationAllowed; // @dynamic isLocationAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

