//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AIMetaDataCollector : NSObject
{
}

+ (id)getDeviceJailbrokenState;
+ (id)getTimestamp;
+ (id)getScreenHeight;
+ (id)getScreenWidth;
+ (id)getCarrier;
+ (id)getTimezone;
+ (id)getLanguage;
+ (id)getDeviceId;
+ (id)getDeviceName;
+ (id)getDeviceOSVersion;
+ (id)getAppVersion;
+ (id)getAppName;
+ (id)getBundleId;
+ (id)collectMetaDataWithDeviceType:(id)arg1 softwareVersion:(id)arg2 serialNumber:(id)arg3;
+ (id)collectEncodedMetaDataWithDeviceType:(id)arg1 softwareVersion:(id)arg2 serialNumber:(id)arg3;
+ (id)getMapMDCookieWithDomain:(id)arg1 value:(id)arg2;

@end
