//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePlatform/DiscoveryHandler-Protocol.h>

@class CMRDiscoveryCallback, NSString;

@protocol DiscoveryHandlerForWiFi <DiscoveryHandler>
- (unsigned long long)startSoftApDirectDiscovery;
- (void)startExtendedDiscovery;
- (unsigned long long)startDiscoveryToIPAddress:(NSString *)arg1 WithCallback:(CMRDiscoveryCallback *)arg2;
@end
