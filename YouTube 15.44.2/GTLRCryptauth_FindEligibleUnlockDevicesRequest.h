//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GTLRObject.h>

@class GTLRCryptauth_DeviceClassifier, NSNumber, NSString;

@interface GTLRCryptauth_FindEligibleUnlockDevicesRequest : GTLRObject
{
}


// Remaining properties
@property(copy, nonatomic) NSString *callbackBluetoothAddress; // @dynamic callbackBluetoothAddress;
@property(retain, nonatomic) GTLRCryptauth_DeviceClassifier *deviceClassifier; // @dynamic deviceClassifier;
@property(copy, nonatomic) NSString *feature; // @dynamic feature;
@property(retain, nonatomic) NSNumber *maxLastUpdateTimeDeltaMillis; // @dynamic maxLastUpdateTimeDeltaMillis;
@property(retain, nonatomic) NSNumber *offlineAllowed; // @dynamic offlineAllowed;
@property(retain, nonatomic) NSNumber *protocolVersion; // @dynamic protocolVersion;
@property(retain, nonatomic) NSNumber *retryCount; // @dynamic retryCount;
@end

