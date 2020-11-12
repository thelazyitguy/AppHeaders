//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WJBLEDeviceServiceDelegate-Protocol.h"

@class CBService, CBUUID, NSMutableDictionary, WJBLEDevice, WJBLESecurityManager, WJInternalSetupAttemptMetrics;
@protocol WJBLEServiceDelegate;

@interface WJBLEService : NSObject <WJBLEDeviceServiceDelegate>
{
    CBService *_service;
    WJBLEDevice *_device;
    id <WJBLEServiceDelegate> _delegate;
    WJInternalSetupAttemptMetrics *_setupMetrics;
    NSMutableDictionary *_characteristicsByUUID;
    WJBLESecurityManager *_securityManager;
}

@property(retain) WJBLESecurityManager *securityManager; // @synthesize securityManager=_securityManager;
@property(readonly, nonatomic) NSMutableDictionary *characteristicsByUUID; // @synthesize characteristicsByUUID=_characteristicsByUUID;
@property(retain) WJInternalSetupAttemptMetrics *setupMetrics; // @synthesize setupMetrics=_setupMetrics;
@property(retain, nonatomic) id <WJBLEServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WJBLEDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) CBService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)errorUnknownCharacteristic:(id)arg1;
- (void)device:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)device:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)device:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)setNotifyValue:(_Bool)arg1 forCharacteristic:(id)arg2;
- (id)valueForCharacteristic:(id)arg1;
- (id)characteristicForUUID:(id)arg1;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2;
- (id)decryptData:(id)arg1 forCharachteristic:(id)arg2;
- (id)encryptData:(id)arg1 forCharacteristic:(id)arg2;
- (void)readValueForCharacteristic:(id)arg1;
- (_Bool)hasCharacteristic:(id)arg1;
- (void)discoverCharacteristics:(id)arg1;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) CBUUID *UUID;
- (id)initWithService:(id)arg1 device:(id)arg2 securityManager:(id)arg3 setupAttemptMetrics:(id)arg4;
- (id)initWithService:(id)arg1 device:(id)arg2 securityManager:(id)arg3;

@end
