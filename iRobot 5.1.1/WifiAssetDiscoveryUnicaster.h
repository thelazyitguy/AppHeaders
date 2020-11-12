//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePlatform/DiscoveryOperationWithCallback-Protocol.h>
#import <CorePlatform/GCDAsyncUdpSocketDelegate-Protocol.h>

@class CMRDiscoveryCallback, NSArray, NSMutableArray, NSString, NSTimer;

@interface WifiAssetDiscoveryUnicaster : NSObject <GCDAsyncUdpSocketDelegate, DiscoveryOperationWithCallback>
{
    _Bool _extendedSearch;
    NSArray *_assetsDetectedByMDNS;
    CMRDiscoveryCallback *_discoveryCallback;
    unsigned long long _requestId;
    NSString *_ipAddress;
    NSArray *_sockets;
    NSMutableArray *_listOfIpAddresses;
    NSTimer *_unicastTimer;
    unsigned long long _ipAddressBatch;
    unsigned long long _attemptCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(nonatomic) unsigned long long ipAddressBatch; // @synthesize ipAddressBatch=_ipAddressBatch;
@property(retain, nonatomic) NSTimer *unicastTimer; // @synthesize unicastTimer=_unicastTimer;
@property(retain, nonatomic) NSMutableArray *listOfIpAddresses; // @synthesize listOfIpAddresses=_listOfIpAddresses;
@property(retain, nonatomic) NSArray *sockets; // @synthesize sockets=_sockets;
@property(nonatomic) _Bool extendedSearch; // @synthesize extendedSearch=_extendedSearch;
@property(readonly, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(readonly, nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) CMRDiscoveryCallback *discoveryCallback; // @synthesize discoveryCallback=_discoveryCallback;
@property(readonly, nonatomic) NSArray *assetsDetectedByMDNS; // @synthesize assetsDetectedByMDNS=_assetsDetectedByMDNS;
- (void)dealloc;
- (id)getIPAddresses;
- (id)getIPAddress:(_Bool)arg1;
- (void)markRobotAsFound:(id)arg1;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (void)unicastSingleIPAddressSearchFinished;
- (void)sendUnicastToSetOf:(id)arg1;
- (void)sendUnicastAddresses;
- (void)startUnicastTimerWithTimeout:(float)arg1;
- (void)calculateExtendedUnicastIpAddresses;
- (_Bool)isClassBAddresses;
- (void)calculateUnicastIpAddresses;
- (void)cancelUnicast;
- (void)createSockets;
- (void)removeSockets;
- (void)prepareForUnicast;
- (void)unicastSingleIPAddressSearch;
- (void)unicastExtendedSearch;
- (void)unicastSearch;
- (id)initWithIPAddress:(id)arg1 andDiscoveryCallback:(id)arg2 andRequestId:(unsigned long long)arg3;
- (id)initWithAssetsDetectedByMDNS:(id)arg1 andDiscoveryCallback:(id)arg2 andRequestId:(unsigned long long)arg3;
- (id)initWithAssetsDetectedByMDNS:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
