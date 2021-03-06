//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCPConfigurationSink-Protocol.h"
#import "PEBeaconScannerDelegate-Protocol.h"

@class NSSet, NSString, PEBeaconScanner, SCOConfiguration;

@interface GCPBLEBeaconStrategy : NSObject <PEBeaconScannerDelegate, GCPConfigurationSink>
{
    _Bool _enableBackgroundBLEScanning;
    _Bool _showPowerAlert;
    _Bool _includeIBeacons;
    _Bool _attemptLowPower;
    _Bool _scanForDiscoveries;
    SCOConfiguration *_configuration;
    CDUnknownBlockType _foundBlock;
    CDUnknownBlockType _lostBlock;
    CDUnknownBlockType _foundUrlBlock;
    CDUnknownBlockType _errorHandler;
    PEBeaconScanner *_beaconScanner;
    NSSet *_ibeaconUUIDs;
}

@property(copy, nonatomic) NSSet *ibeaconUUIDs; // @synthesize ibeaconUUIDs=_ibeaconUUIDs;
@property(nonatomic) _Bool scanForDiscoveries; // @synthesize scanForDiscoveries=_scanForDiscoveries;
@property(nonatomic) _Bool attemptLowPower; // @synthesize attemptLowPower=_attemptLowPower;
@property(nonatomic) _Bool includeIBeacons; // @synthesize includeIBeacons=_includeIBeacons;
@property(nonatomic) _Bool showPowerAlert; // @synthesize showPowerAlert=_showPowerAlert;
@property(retain, nonatomic) PEBeaconScanner *beaconScanner; // @synthesize beaconScanner=_beaconScanner;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType foundUrlBlock; // @synthesize foundUrlBlock=_foundUrlBlock;
@property(copy, nonatomic) CDUnknownBlockType lostBlock; // @synthesize lostBlock=_lostBlock;
@property(copy, nonatomic) CDUnknownBlockType foundBlock; // @synthesize foundBlock=_foundBlock;
@property(retain, nonatomic) SCOConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool enableBackgroundBLEScanning; // @synthesize enableBackgroundBLEScanning=_enableBackgroundBLEScanning;
- (void).cxx_destruct;
- (void)updateWithConfiguration:(id)arg1;
- (void)beaconScanner:(id)arg1 didLoseBeacon:(id)arg2;
- (void)beaconScanner:(id)arg1 didDiscoverURLBeacon:(id)arg2 withURL:(id)arg3 txPower:(id)arg4 RSSI:(id)arg5;
- (void)beaconScanner:(id)arg1 didFindBeacon:(id)arg2;
- (void)stopBeaconScanning;
- (void)updateState;
- (void)ensureScanningForIbeaconProximityUUIDs:(id)arg1;
- (void)dealloc;
- (id)initShowingPowerAlert:(_Bool)arg1 backgroundBLEScanning:(_Bool)arg2 includeIBeacons:(_Bool)arg3 scanForDiscoveries:(_Bool)arg4 attemptLowPower:(_Bool)arg5 foundBlock:(CDUnknownBlockType)arg6 lostBlock:(CDUnknownBlockType)arg7 foundUrlBlock:(CDUnknownBlockType)arg8 configuration:(id)arg9 errorHandler:(CDUnknownBlockType)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

