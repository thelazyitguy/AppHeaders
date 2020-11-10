//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaLocalNetworkPermissionObserver-Protocol.h"

@class NSString, SPTCastManager, SPTGaiaConnectCosmosResolver, SPTGaiaLocalNetworkLogger, SPTGaiaLocalNetworkPermissionManager;

@interface SPTGaiaDiscoveryManager : NSObject <SPTGaiaLocalNetworkPermissionObserver>
{
    SPTGaiaLocalNetworkPermissionManager *_permissionManager;
    SPTGaiaConnectCosmosResolver *_resolver;
    SPTCastManager *_castManager;
    SPTGaiaLocalNetworkLogger *_logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTGaiaLocalNetworkLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTCastManager *castManager; // @synthesize castManager=_castManager;
@property(readonly, nonatomic) SPTGaiaConnectCosmosResolver *resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) SPTGaiaLocalNetworkPermissionManager *permissionManager; // @synthesize permissionManager=_permissionManager;
- (void)localNetworkAccessChanged:(_Bool)arg1 origin:(id)arg2;
- (void)startDeviceDiscovery;
- (_Bool)shouldManuallyStartConnectDiscovery;
- (void)startDeviceDiscoveryOnStartupIfAllowed;
- (void)dealloc;
- (void)startObserving;
- (id)initWithPermissionManager:(id)arg1 cosmosResolver:(id)arg2 castManager:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

