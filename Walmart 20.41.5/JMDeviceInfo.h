//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JMDeviceInfo : NSObject
{
}

+ (_Bool)hasSmallerScreen;
+ (_Bool)hasNotch;
+ (_Bool)supportsPortraitOrientation;
+ (_Bool)supportsLandscapeOrientation;
+ (long long)deviceNetworkType;
+ (long long)deviceOrientation;
+ (long long)deviceInterfaceOrientation;
+ (_Bool)isJailbrokenDevice;
+ (unsigned int)cpuCores;
+ (id)deviceModelDescription;
+ (int)deviceModel;
+ (id)deviceModelString;
+ (_Bool)isIPHONE_X;
+ (_Bool)isPad;
+ (_Bool)isPhone;

@end
