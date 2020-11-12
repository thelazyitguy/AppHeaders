//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "CBPeripheralDelegate-Protocol.h"

@class BFTaskCompletionSource, CBCentralManager, NSError, NSMutableDictionary, NSString, WJ2Generator;
@protocol WJ2DeviceBluetoothErrorDelegate, WJ2DeviceDiscoveryDelegate;

@interface WJ2BLEDeviceManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>
{
    id <WJ2DeviceDiscoveryDelegate> _discoveryDelegate;
    id <WJ2DeviceBluetoothErrorDelegate> _bluetoothErrorDelegate;
    NSString *_bleState;
    CBCentralManager *_centralManager;
    NSMutableDictionary *_connectionCompletionDictionary;
    NSMutableDictionary *_disconnectionCompletionDictionary;
    NSMutableDictionary *_peripheralDeviceDetailsDictionary;
    WJ2Generator *_generator;
    NSError *_bleError;
    BFTaskCompletionSource *_waitStatePoweredOnNotificationCompletionSource;
}

@property(retain) BFTaskCompletionSource *waitStatePoweredOnNotificationCompletionSource; // @synthesize waitStatePoweredOnNotificationCompletionSource=_waitStatePoweredOnNotificationCompletionSource;
@property(retain, nonatomic) NSError *bleError; // @synthesize bleError=_bleError;
@property(retain, nonatomic) WJ2Generator *generator; // @synthesize generator=_generator;
@property(retain) NSMutableDictionary *peripheralDeviceDetailsDictionary; // @synthesize peripheralDeviceDetailsDictionary=_peripheralDeviceDetailsDictionary;
@property(retain) NSMutableDictionary *disconnectionCompletionDictionary; // @synthesize disconnectionCompletionDictionary=_disconnectionCompletionDictionary;
@property(retain) NSMutableDictionary *connectionCompletionDictionary; // @synthesize connectionCompletionDictionary=_connectionCompletionDictionary;
@property(retain) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) NSString *bleState; // @synthesize bleState=_bleState;
@property(retain) id <WJ2DeviceBluetoothErrorDelegate> bluetoothErrorDelegate; // @synthesize bluetoothErrorDelegate=_bluetoothErrorDelegate;
@property(retain) id <WJ2DeviceDiscoveryDelegate> discoveryDelegate; // @synthesize discoveryDelegate=_discoveryDelegate;
- (void).cxx_destruct;
- (id)getCBManagerState:(id)arg1;
- (id)getBleError;
- (id)getBleState;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (id)getBleError:(long long)arg1 description:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)stopScan;
- (id)waitForCBCentralManagerStatePoweredOn;
- (id)startScan:(id)arg1;
- (id)disconnect:(id)arg1;
- (id)executePinAuth:(id)arg1 withData:(id)arg2;
- (id)connect:(id)arg1;
- (id)initWithBlueToothStatusChangeDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
