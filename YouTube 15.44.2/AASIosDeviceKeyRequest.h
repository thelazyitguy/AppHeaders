//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString;

@interface AASIosDeviceKeyRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *deviceResponse; // @dynamic deviceResponse;
@property(nonatomic) _Bool hasDeviceResponse; // @dynamic hasDeviceResponse;
@property(nonatomic) _Bool hasIosBundleId; // @dynamic hasIosBundleId;
@property(copy, nonatomic) NSString *iosBundleId; // @dynamic iosBundleId;

@end
