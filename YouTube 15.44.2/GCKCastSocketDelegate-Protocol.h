//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GCKCastSocket, GCKError, GCKSSecurityTrust, NSData;

@protocol GCKCastSocketDelegate <NSObject>
- (void)castSocket:(GCKCastSocket *)arg1 didDisconnectWithError:(GCKError *)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 canAcceptDataOfLength:(unsigned long long)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 didReceiveMessage:(NSData *)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 didFailToConnectWithError:(GCKError *)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 didConnectWithPeerSecurityTrust:(GCKSSecurityTrust *)arg2;
@end

