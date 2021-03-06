//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FoundationUtils/AsynchronousOperation.h>

#import <CorePlatform/DiscoveryOperationWithCallback-Protocol.h>

@class CMRDiscoveryCallback, NSArray, NSString, WifiAssetDiscoveryUnicaster;
@protocol DiscoveryHandlerDelegate;

@interface WifiDiscoveryOperation : AsynchronousOperation <DiscoveryOperationWithCallback>
{
    CMRDiscoveryCallback *_discoveryCallback;
    unsigned long long _requestId;
    NSArray *_assetsDetectedByMDNS;
    NSString *_ipAddress;
    id <DiscoveryHandlerDelegate> _handlerDelegate;
    WifiAssetDiscoveryUnicaster *_unicaster;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WifiAssetDiscoveryUnicaster *unicaster; // @synthesize unicaster=_unicaster;
@property(nonatomic) __weak id <DiscoveryHandlerDelegate> handlerDelegate; // @synthesize handlerDelegate=_handlerDelegate;
@property(readonly, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(readonly, nonatomic) NSArray *assetsDetectedByMDNS; // @synthesize assetsDetectedByMDNS=_assetsDetectedByMDNS;
@property(readonly, nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) CMRDiscoveryCallback *discoveryCallback; // @synthesize discoveryCallback=_discoveryCallback;
- (void)finishDiscovery;
- (void)broadcasterDidCancelNotification;
- (void)broadcasterDidFinishNotification;
- (void)broadcasterDidTimeOutNotification;
- (void)broadcasterDidDiscoverAssetNotification:(id)arg1;
- (void)start;
- (id)initWithAssetsDetectedByMDNS:(id)arg1;
- (id)initWithIPAddress:(id)arg1 andDiscoveryCallback:(id)arg2 andRequestId:(unsigned long long)arg3;
- (id)initWithAssetsDetectedByMDNS:(id)arg1 andDiscoveryCallback:(id)arg2 andRequestId:(unsigned long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

