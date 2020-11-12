//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTTelephonyNetworkInfo;

@interface MDDeviceInfo : NSObject
{
    CTTelephonyNetworkInfo *_networkInfo;
}

+ (id)osBuildNumber;
+ (id)processName;
+ (_Bool)isInBackground;
+ (_Bool)isJailbroken;
+ (id)OpenGLESversion;
+ (id)orientation;
+ (long long)batteryLevel;
+ (unsigned long long)totalDisk;
+ (unsigned long long)freeDisk;
+ (unsigned long long)totalRAM;
+ (unsigned long long)freeRAM;
+ (unsigned long long)connectionType;
+ (id)appBuild;
+ (id)appVersion;
+ (id)packageVersionName;
+ (id)countryOfResidence;
+ (id)locale;
+ (id)density;
+ (id)resolution;
+ (id)carrier;
+ (id)osVersion;
+ (id)osName;
+ (id)architecture;
+ (id)hardwareModel;
+ (id)getSystemConfigByKey:(char *)arg1;
+ (id)deviceId;
+ (id)sharedInstance;
@property(retain, nonatomic) CTTelephonyNetworkInfo *networkInfo; // @synthesize networkInfo=_networkInfo;
- (void).cxx_destruct;
- (id)init;

@end
