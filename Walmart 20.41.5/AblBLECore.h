//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AtriusLocation/CLLocationManagerDelegate-Protocol.h>

@class AblBLEBeaconStateManager, AblBLEOptions, AblBLEPositionCapture, CLBeaconRegion, CLLocationManager, NSDictionary, NSMutableSet, NSString, NSTimer;
@protocol AblBLEEventListener;

@interface AblBLECore : NSObject <CLLocationManagerDelegate>
{
    NSDictionary *beacons;
    CLLocationManager *locationManager;
    _Bool scanning;
    AblBLEBeaconStateManager *beaconManager;
    NSTimer *callbackTimer;
    AblBLEPositionCapture *currentPosition;
    AblBLEPositionCapture *previousPosition;
    double previousProcessingTime;
    NSMutableSet *currentRegions;
    CLBeaconRegion *beaconRegion;
    _Bool entered;
    int desiredLocationAuthorizationStatus;
    id <AblBLEEventListener> delegate;
    AblBLEOptions *_options;
}

@property(retain) AblBLEOptions *options; // @synthesize options=_options;
@property(nonatomic) int desiredLocationAuthorizationStatus; // @synthesize desiredLocationAuthorizationStatus;
@property(nonatomic) __weak id <AblBLEEventListener> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)setBLEFilterValue:(double)arg1;
- (void)detectedRSSI:(double)arg1 forPrimaryId:(id)arg2 withTimestamp:(long long)arg3;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)exitedBLESite;
- (void)possibleBLEExitWithUnmappedBeacons:(id)arg1;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)interpolatePosition:(id)arg1 andPosition:(id)arg2 withPercent:(double)arg3;
- (void)stopBLE;
- (void)startBLE;
- (void)resetBeaconState;
- (void)disable;
- (void)enable;
- (void)loadLights:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
