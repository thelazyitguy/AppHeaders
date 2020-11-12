//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AtriusLocation/ATRCompassProviderDelegate-Protocol.h>
#import <AtriusLocation/ATRILocationProvider-Protocol.h>
#import <AtriusLocation/AblBLEEventListener-Protocol.h>

@class ATRAngle, ATRCompassProvider, ATRFloor, ATRLocationManager, ATRSite, AblBLECore, EventRetryQueue, Floorspace, LocationConfigurationManager, NSMutableArray, NSNumber, NSString;

@interface ATRBLELocationProvider : NSObject <AblBLEEventListener, ATRCompassProviderDelegate, ATRILocationProvider>
{
    AblBLECore *ablBLECore;
    ATRLocationManager *locManager;
    LocationConfigurationManager *mySharedManager;
    ATRCompassProvider *compassProvider;
    EventRetryQueue *eventRetryQueue;
    ATRSite *currentSite;
    ATRFloor *currentFloor;
    Floorspace *currentFloorspace;
    ATRAngle *currentAngle;
    NSNumber *processingBeacons;
    NSNumber *siteExitRestartCountSinceLastGoodLocation;
    _Bool _isEnabled;
    NSMutableArray *_delegateArray;
}

+ (id)sharedInstance;
+ (void)setMyInstance;
@property(retain) NSMutableArray *delegateArray; // @synthesize delegateArray=_delegateArray;
@property _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (void).cxx_destruct;
- (void)onCompassAngleUpdate:(id)arg1;
- (void)onAblBLEPossibleSiteExitWithUnmappedBeacons:(id)arg1;
- (void)onAblBLEExitedSite;
- (void)onAblBLEEnteredSiteWithBeaconIds:(id)arg1;
- (void)performError:(id)arg1;
- (void)onAblBLEPositionUpdate:(id)arg1;
- (void)onAblBLError:(id)arg1;
- (void)terminateManager;
- (void)disableBlePositioning;
- (void)activeDisableBlePositioning;
- (void)silentDisableBlePositioning;
- (void)enableBlePositioning;
- (void)activeEnableBlePositioning;
- (void)silentEnableBlePositioning;
- (void)initializeBLEPositionEngine;
- (_Bool)validUUID:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)terminate;
- (void)disable;
- (void)enable;
- (void)setSite:(id)arg1 andFloor:(id)arg2 andFloorspace:(id)arg3;
- (id)getServerOptions;
- (id)getLocationOptions;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
