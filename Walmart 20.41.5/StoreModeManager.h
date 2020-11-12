//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WalmartCore/UIAlertViewDelegate-Protocol.h>

@class NSDate, NSString, NSTimer, NSUserDefaults, StoreModeUSWMSM77Tracker, WMAniviaEvent, _TtC11FeatureAPIs17StoreLocatorStore;

@interface StoreModeManager : NSObject <UIAlertViewDelegate>
{
    _Bool _isAskingUserToEnter;
    _Bool _inStoreMode;
    _Bool _manuallyEntered;
    NSString *_targetStoreID;
    NSString *_currentStoreID;
    _TtC11FeatureAPIs17StoreLocatorStore *_targetStoreInfo;
    _TtC11FeatureAPIs17StoreLocatorStore *_currentStoreInfo;
    NSDate *_debug_gps_start_time;
    _TtC11FeatureAPIs17StoreLocatorStore *_nearestStoreInfo;
    unsigned long long _storeModeDetectionMethod;
    NSUserDefaults *_storeSpoofUserDefaults;
    NSTimer *_storeModeTimer;
    StoreModeUSWMSM77Tracker *_storeModeUSWMSM77Tracker;
    double _inStoreGeofenceExitRadiusInMeters;
    struct CLLocationCoordinate2D _coordinates;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) double inStoreGeofenceExitRadiusInMeters; // @synthesize inStoreGeofenceExitRadiusInMeters=_inStoreGeofenceExitRadiusInMeters;
@property(retain, nonatomic) StoreModeUSWMSM77Tracker *storeModeUSWMSM77Tracker; // @synthesize storeModeUSWMSM77Tracker=_storeModeUSWMSM77Tracker;
@property(retain, nonatomic) NSTimer *storeModeTimer; // @synthesize storeModeTimer=_storeModeTimer;
@property(retain, nonatomic) NSUserDefaults *storeSpoofUserDefaults; // @synthesize storeSpoofUserDefaults=_storeSpoofUserDefaults;
@property(nonatomic) unsigned long long storeModeDetectionMethod; // @synthesize storeModeDetectionMethod=_storeModeDetectionMethod;
@property(nonatomic) struct CLLocationCoordinate2D coordinates; // @synthesize coordinates=_coordinates;
@property(nonatomic) _Bool manuallyEntered; // @synthesize manuallyEntered=_manuallyEntered;
@property(readonly, nonatomic) _TtC11FeatureAPIs17StoreLocatorStore *nearestStoreInfo; // @synthesize nearestStoreInfo=_nearestStoreInfo;
@property(retain, nonatomic) NSDate *_debug_gps_start_time; // @synthesize _debug_gps_start_time;
@property(nonatomic) _Bool inStoreMode; // @synthesize inStoreMode=_inStoreMode;
@property(readonly, nonatomic) _Bool isAskingUserToEnter; // @synthesize isAskingUserToEnter=_isAskingUserToEnter;
@property(readonly, nonatomic) _TtC11FeatureAPIs17StoreLocatorStore *currentStoreInfo; // @synthesize currentStoreInfo=_currentStoreInfo;
@property(readonly, nonatomic) _TtC11FeatureAPIs17StoreLocatorStore *targetStoreInfo; // @synthesize targetStoreInfo=_targetStoreInfo;
- (void)storeModeTimerFired;
- (void)p_stopStoreModeTimer;
- (void)p_startStoreModeTimer;
- (void)postThirdPartyLocationBypassNotificationForStore:(id)arg1;
- (void)postStatusUpdateNotification;
- (void)trackStoreModeChanged;
@property(readonly, nonatomic) WMAniviaEvent *lastUSWMSM77Event;
- (void)trackWithStoreStatus:(unsigned long long)arg1 storeId:(id)arg2 storeDistance:(double)arg3 locationAccuracy:(double)arg4;
- (void)handleNewLocation:(id)arg1;
@property(readonly, nonatomic) NSString *currentStoreID; // @synthesize currentStoreID=_currentStoreID;
@property(readonly, nonatomic) NSString *targetStoreID; // @synthesize targetStoreID=_targetStoreID;
- (id)preferredStoreInfo;
- (id)preferredStoreID;
- (void)handleNoStoresNearby;
- (double)distanceBetween:(struct CLLocationCoordinate2D)arg1 and:(struct CLLocationCoordinate2D)arg2;
- (double)distanceFromDetectedStoreToLocation:(struct CLLocationCoordinate2D)arg1;
- (id)currentStoreZipCode;
- (id)currentStoreName;
- (id)targetStoreAddress;
- (void)spoofStore:(id)arg1;
- (void)beginStoreModeLocationCheckWithContext:(unsigned long long)arg1;
- (_Bool)beginStoreModeSpoofLocationCheckWithContext:(unsigned long long)arg1;
- (void)registerNotifications;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
