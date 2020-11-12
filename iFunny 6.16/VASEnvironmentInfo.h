//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/VASEventReceiver-Protocol.h>

@class CLLocation, CLLocationManager, NSArray, NSLock, NSNumber, NSString, VASAds, VASConfiguration, VASEnvironmentInfoBattery, VASEnvironmentInfoNetwork, VASTask;

@interface VASEnvironmentInfo : NSObject <VASEventReceiver>
{
    _Bool _anonymous;
    _Bool _supportedOrientationsReady;
    VASConfiguration *_configuration;
    NSString *_configSecurityKey;
    CLLocation *_locationInfo;
    CLLocationManager *_locationManager;
    VASEnvironmentInfoBattery *_cachedBatteryInfo;
    NSNumber *_cachedFrontCameraAllowed;
    NSNumber *_cachedRearCameraAllowed;
    NSString *_cachedCurrentOrientation;
    NSLock *_propertyLock;
    VASTask *_task;
    VASAds *_vasAds;
}

+ (id)adjustedAudioVolume:(float)arg1;
+ (_Bool)usageDescriptionIsAvailableForFeature:(id)arg1 withSystemVersion:(id)arg2;
+ (_Bool)isNetworkAvailable;
+ (id)networkType;
+ (id)networkTypeForReachabilityFlags:(unsigned int)arg1;
+ (id)cachedSupportedOrientations;
+ (double)updateCachedScreenScale;
+ (double)screenScale;
+ (struct CGSize)updateCachedScreenSize;
+ (struct CGSize)screenSize;
+ (id)language;
+ (id)country;
+ (_Bool)isTrackingAuthorized;
+ (id)trackingAuthorizationState;
+ (_Bool)limitAdTracking;
+ (id)userAgent;
+ (_Bool)isSecureTransportEnabled;
+ (_Bool)allowArbitraryLoadsInWeb;
+ (id)osBuildNumber;
+ (id)updateModelName;
+ (id)updateCachedOSVersion;
+ (id)osVersion;
+ (id)sdkVersion;
+ (id)logger;
- (void).cxx_destruct;
@property(readonly) __weak VASAds *vasAds; // @synthesize vasAds=_vasAds;
@property(retain, nonatomic) VASTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(retain, nonatomic) NSString *cachedCurrentOrientation; // @synthesize cachedCurrentOrientation=_cachedCurrentOrientation;
@property(retain, nonatomic) NSNumber *cachedRearCameraAllowed; // @synthesize cachedRearCameraAllowed=_cachedRearCameraAllowed;
@property(retain, nonatomic) NSNumber *cachedFrontCameraAllowed; // @synthesize cachedFrontCameraAllowed=_cachedFrontCameraAllowed;
@property(retain, nonatomic) VASEnvironmentInfoBattery *cachedBatteryInfo; // @synthesize cachedBatteryInfo=_cachedBatteryInfo;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) CLLocation *locationInfo; // @synthesize locationInfo=_locationInfo;
@property _Bool supportedOrientationsReady; // @synthesize supportedOrientationsReady=_supportedOrientationsReady;
@property(nonatomic) _Bool anonymous; // @synthesize anonymous=_anonymous;
@property(readonly, nonatomic) NSString *configSecurityKey; // @synthesize configSecurityKey=_configSecurityKey;
@property(readonly, nonatomic) VASConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)createLocationManager;
- (void)setLocationEnabled:(_Bool)arg1;
- (_Bool)isLocationEnabled;
- (void)event:(id)arg1 data:(id)arg2;
@property(readonly, getter=isPhotoAdditionFeatureAllowed) _Bool photoAdditionFeatureAllowed;
@property(readonly, getter=isPhotoAccessFeatureAllowed) _Bool photoAccessFeatureAllowed;
@property(readonly, getter=isCalendarFeatureAllowed) _Bool calendarFeatureAllowed;
@property(readonly, getter=isBluetoothFeatureAllowed) NSNumber *bluetoothFeatureAllowed;
@property(readonly, getter=isGPSFeatureAllowed) NSNumber *gpsFeatureAllowed;
@property(readonly, getter=isMicFeatureAllowed) NSNumber *micFeatureAllowed;
- (void)updateCachedRearCameraFeatureAllowed;
@property(readonly, getter=isRearCameraFeatureAllowed) NSNumber *rearCameraFeatureAllowed;
- (void)updateCachedFrontCameraFeatureAllowed;
@property(readonly, getter=isFrontCameraFeatureAllowed) NSNumber *frontCameraFeatureAllowed;
@property(readonly, getter=isCameraFeatureAllowed) NSNumber *cameraFeatureAllowed;
@property(readonly) NSNumber *headphonesArePresent;
@property(readonly) NSNumber *outputVolume;
@property(readonly) NSNumber *availableStorage;
@property(readonly) NSString *ipAddress;
@property(readonly) NSString *advertisingId;
@property(readonly) NSString *model;
@property(readonly) VASEnvironmentInfoNetwork *networkInfo;
- (void)updateCachedBatteryInfo;
@property(readonly) VASEnvironmentInfoBattery *batteryInfo;
@property(readonly) NSArray *supportedOrientations;
- (void)updateCachedCurrentOrientation;
- (void)orientationChanged:(id)arg1;
@property(readonly) NSString *currentOrientation;
@property(readonly) NSString *naturalOrientation;
@property(readonly) NSString *modelName;
- (void)updateCachedValues;
- (id)initWithConfiguration:(id)arg1 securityKey:(id)arg2 VASAds:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
