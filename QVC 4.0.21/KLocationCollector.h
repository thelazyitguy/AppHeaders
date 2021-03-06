//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BraintreeDataCollector/KCollectorTaskBase.h>

#import <BraintreeDataCollector/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSString, NSTimer;

@interface KLocationCollector : KCollectorTaskBase <CLLocationManagerDelegate>
{
    int _timeoutInMS;
    CLLocationManager *_locationManager;
    long long _config;
    NSTimer *_timeoutTimer;
}

@property(retain) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property int timeoutInMS; // @synthesize timeoutInMS=_timeoutInMS;
@property long long config; // @synthesize config=_config;
@property(retain) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)storeLocation:(id)arg1;
- (void)stopLocationOnSoftError:(id)arg1;
- (void)startGettingLocation;
- (void)collectLocation;
- (void)collect;
- (void)timeout:(id)arg1;
- (id)createLocationManager;
- (id)locationManagerClassName;
- (id)initWithConfig:(long long)arg1 withTimeoutInMS:(int)arg2;
- (id)internalName;
- (id)name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

