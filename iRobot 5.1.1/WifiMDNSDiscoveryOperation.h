//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FoundationUtils/AsynchronousOperation.h>

#import <CorePlatform/NSNetServiceBrowserDelegate-Protocol.h>

@class NSString;

@interface WifiMDNSDiscoveryOperation : AsynchronousOperation <NSNetServiceBrowserDelegate>
{
}

- (void)finishDiscovery;
- (void)mdnsWasCancelledNotification;
- (void)mdnsDidFinishNotification;
- (void)mdnsDidDiscoverAssetNotification:(id)arg1;
- (void)start;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
