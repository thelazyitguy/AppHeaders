//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC32SocialListeningNearbyFeatureImpl37NetworkDiscoveryManagerImplementation.h"

#import "NSNetServiceBrowserDelegate-Protocol.h"
#import "NSNetServiceDelegate-Protocol.h"

@interface _TtC32SocialListeningNearbyFeatureImpl37NetworkDiscoveryManagerImplementation (SocialListeningNearbyFeatureImpl) <NSNetServiceDelegate, NSNetServiceBrowserDelegate>
- (void)netServiceWillResolve:(id)arg1;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindDomain:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
@end
