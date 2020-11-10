//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/ConfigPersonalizationDelegate-Protocol.h>
#import <Nbp/PlatformConfigProvider-Protocol.h>

@class NSNumber, NSString, PlatformConfig;
@protocol OS_dispatch_queue;

@interface PlatformConfigManager : NSObject <ConfigPersonalizationDelegate, PlatformConfigProvider>
{
    _Bool _loadErrorDetected;
    PlatformConfig *_platformConfig;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_buildNumber;
    NSNumber *_fastStartType;
    NSString *_currentNetworkType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentNetworkType; // @synthesize currentNetworkType=_currentNetworkType;
@property(copy, nonatomic) NSNumber *fastStartType; // @synthesize fastStartType=_fastStartType;
@property(copy, nonatomic) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) PlatformConfig *platformConfig; // @synthesize platformConfig=_platformConfig;
- (long long)lastVideoBpsForPlatformConfig:(id)arg1;
- (id)currentNetworkTypeForPlatformConfig:(id)arg1;
- (id)deviceTypeForPlatformConfig:(id)arg1;
- (void)handleNoNetworkNotification:(id)arg1;
- (void)handleCellularNotification:(id)arg1;
- (void)handleWifiNotification:(id)arg1;
- (void)setupNotifications;
- (void)notifyListeners;
- (void)notifyListenersInternal;
- (id)_currentPlatformConfig;
- (void)setPlatformConfig:(id)arg1 loadErrorDetected:(_Bool)arg2;
- (id)objectValueForKey:(id)arg1;
- (_Bool)isOperatingSystemAtLeastVersionEqualToContentsOfKey:(id)arg1 defaultOSVersion:(CDStruct_2ec95fd7)arg2 minimumOSVersion:(CDStruct_2ec95fd7)arg3;
- (id)adaptiveStringValueforKey:(id)arg1;
- (long long)adaptiveIntegerValueForKey:(id)arg1 defaultIfNotPresent:(long long)arg2;
- (_Bool)isAdaptiveFlagTrue:(id)arg1 defaultIfNotPresent:(_Bool)arg2;
- (id)stringValueforKey:(id)arg1;
- (long long)integerValueForKey:(id)arg1 defaultIfNotPresent:(long long)arg2;
- (_Bool)isFlagTrue:(id)arg1 defaultIfNotPresent:(_Bool)arg2;
- (id)_checkProcessInfoForKey:(id)arg1;
@property(readonly, nonatomic) _Bool loadErrorDetected; // @synthesize loadErrorDetected=_loadErrorDetected;
- (void)setConfiguration:(id)arg1 withDefaultValues:(id)arg2;
- (void)setBuildForBuildSpecificConfigurations:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

