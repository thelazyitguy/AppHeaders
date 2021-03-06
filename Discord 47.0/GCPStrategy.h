//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCPStrategy : NSObject
{
    _Bool _lowPower;
    _Bool _audibleBroadcast;
    _Bool _includeBLEBeacons;
    _Bool _includeIBeacons;
    _Bool _scanForDiscovereries;
    _Bool _allowInBackground;
    _Bool _backgroundLowPowerPreferred;
    long long _broadcastScanType;
    long long _discoveryMediums;
}

+ (id)strategyWithParamsBlock:(CDUnknownBlockType)arg1;
+ (id)strategy;
@property(nonatomic) _Bool backgroundLowPowerPreferred; // @synthesize backgroundLowPowerPreferred=_backgroundLowPowerPreferred;
@property(nonatomic) _Bool allowInBackground; // @synthesize allowInBackground=_allowInBackground;
@property(readonly, nonatomic) _Bool scanForDiscovereries; // @synthesize scanForDiscovereries=_scanForDiscovereries;
@property(readonly, nonatomic) _Bool includeIBeacons; // @synthesize includeIBeacons=_includeIBeacons;
@property(readonly, nonatomic) _Bool includeBLEBeacons; // @synthesize includeBLEBeacons=_includeBLEBeacons;
@property(readonly, nonatomic) _Bool audibleBroadcast; // @synthesize audibleBroadcast=_audibleBroadcast;
@property(readonly, nonatomic) long long discoveryMediums; // @synthesize discoveryMediums=_discoveryMediums;
@property(readonly, nonatomic) long long broadcastScanType; // @synthesize broadcastScanType=_broadcastScanType;
@property(readonly, nonatomic) _Bool lowPower; // @synthesize lowPower=_lowPower;
- (id)initWithParamsBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithParams:(id)arg1;

@end

