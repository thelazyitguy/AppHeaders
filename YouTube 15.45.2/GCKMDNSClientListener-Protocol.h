//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GCKMDNSClient, GCKMDNSService;

@protocol GCKMDNSClientListener <NSObject>
- (void)MDNSClientDidFailToStartScan:(GCKMDNSClient *)arg1;
- (void)MDNSClient:(GCKMDNSClient *)arg1 didRemoveServiceInstance:(GCKMDNSService *)arg2;
- (void)MDNSClient:(GCKMDNSClient *)arg1 didUpdateServiceInstance:(GCKMDNSService *)arg2;
- (void)MDNSClient:(GCKMDNSClient *)arg1 didAddServiceInstance:(GCKMDNSService *)arg2;
- (void)MDNSClientDidResumeDiscovery:(GCKMDNSClient *)arg1;
- (void)MDNSClientDidSuspendDiscovery:(GCKMDNSClient *)arg1;
@end
