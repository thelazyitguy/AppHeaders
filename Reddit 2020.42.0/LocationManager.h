//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, CLLocationManager, NSString, NSURLSessionTask;

@interface LocationManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _didRequestAuthorization;
    CLLocationManager *_clLocationManager;
    CLLocation *_currentLocation;
    CDUnknownBlockType _locationCompletion;
    CDUnknownBlockType _permissionHandler;
    NSURLSessionTask *_venuesTask;
}

+ (void)showLocationNeededAlert;
+ (_Bool)isAuthorizationStatusDetermined;
+ (_Bool)locationAuthorized;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionTask *venuesTask; // @synthesize venuesTask=_venuesTask;
@property(copy, nonatomic) CDUnknownBlockType permissionHandler; // @synthesize permissionHandler=_permissionHandler;
@property(copy, nonatomic) CDUnknownBlockType locationCompletion; // @synthesize locationCompletion=_locationCompletion;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) CLLocationManager *clLocationManager; // @synthesize clLocationManager=_clLocationManager;
@property(nonatomic) _Bool didRequestAuthorization; // @synthesize didRequestAuthorization=_didRequestAuthorization;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)requestLocationWithCompletion:(CDUnknownBlockType)arg1 permissionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
