//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GCKDBAppSupportStateInfo, GCKDBBluetoothDiscoveryInfo, GCKDBDeviceCloudInfo, GCKDBLocalConnectionInfo, NSDate, NSString;

@interface GCKDBDeviceInfo : NSManagedObject
{
}

- (_Bool)hasAllUnsupportedAppIDs:(id)arg1;
- (void)addOrUpdateAppIDs:(id)arg1 asSupported:(_Bool)arg2 withTTL:(double)arg3;
- (long long)supportStateForAppID:(id)arg1;
- (id)cachedAppIDsSupported:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) GCKDBAppSupportStateInfo *appSupportStateInfo; // @dynamic appSupportStateInfo;
@property(retain, nonatomic) GCKDBBluetoothDiscoveryInfo *bluetoothDiscoveryInfo; // @dynamic bluetoothDiscoveryInfo;
@property(nonatomic) long long capabilities; // @dynamic capabilities;
@property(retain, nonatomic) GCKDBDeviceCloudInfo *cloudInfo; // @dynamic cloudInfo;
@property(nonatomic) int deviceVersion; // @dynamic deviceVersion;
@property(copy, nonatomic) NSString *endpointDeviceID; // @dynamic endpointDeviceID;
@property(copy, nonatomic) NSString *friendlyName; // @dynamic friendlyName;
@property(copy, nonatomic) NSString *hardwareID; // @dynamic hardwareID;
@property(copy, nonatomic) NSString *iconURL; // @dynamic iconURL;
@property(copy, nonatomic) NSDate *lastAccessedTime; // @dynamic lastAccessedTime;
@property(copy, nonatomic) NSDate *lastPublishedTime; // @dynamic lastPublishedTime;
@property(retain, nonatomic) GCKDBLocalConnectionInfo *localConnectionInfo; // @dynamic localConnectionInfo;
@property(copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(copy, nonatomic) NSString *modelName; // @dynamic modelName;
@property(copy, nonatomic) NSString *rawDeviceID; // @dynamic rawDeviceID;
@property(copy, nonatomic) NSString *receiverMetricsID; // @dynamic receiverMetricsID;
@property(nonatomic) long long status; // @dynamic status;
@property(copy, nonatomic) NSString *statusText; // @dynamic statusText;

@end

