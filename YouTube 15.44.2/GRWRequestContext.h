//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface GRWRequestContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long deviceAndroidId; // @dynamic deviceAndroidId;
@property(nonatomic) _Bool deviceIsAndroidGo; // @dynamic deviceIsAndroidGo;
@property(copy, nonatomic) NSString *deviceLocaleBcp47; // @dynamic deviceLocaleBcp47;
@property(copy, nonatomic) NSString *deviceOsVersion; // @dynamic deviceOsVersion;
@property(nonatomic) int deviceRamGb; // @dynamic deviceRamGb;
@property(nonatomic) int deviceSdkVersion; // @dynamic deviceSdkVersion;
@property(copy, nonatomic) NSString *deviceTimeZone; // @dynamic deviceTimeZone;
@property(copy, nonatomic) NSString *gmsCoreVersionCode; // @dynamic gmsCoreVersionCode;

@end

