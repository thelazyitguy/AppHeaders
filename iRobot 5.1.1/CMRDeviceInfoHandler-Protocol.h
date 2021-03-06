//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePlatform/NSObject-Protocol.h>

@class CMRDefaultNetworkInterfaceInfo, CMRDeviceInfo, NSSet, NSString;

@protocol CMRDeviceInfoHandler <NSObject>
- (_Bool)supportsNativeRenderer;
- (long long)getFreeStorageSize;
- (long long)getFreeHeapMemorySize;
- (NSSet *)getAppsOnDevice;
- (NSString *)getAppScanReport:(long long)arg1 appIdString:(NSString *)arg2;
- (_Bool)isAppOnDevice:(long long)arg1;
- (_Bool)isConnectedToWiFi;
- (_Bool)isConnectedToAnyNetwork;
- (NSString *)currentSsid;
- (CMRDefaultNetworkInterfaceInfo *)defaultNetworkInterfaceInfo;
- (CMRDeviceInfo *)deviceInfo;
@end

