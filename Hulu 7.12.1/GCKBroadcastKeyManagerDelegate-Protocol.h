//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GoogleCast/NSObject-Protocol.h>

@class GCKBroadcastKeyManager, NSData, WrappedSenderKey;

@protocol GCKBroadcastKeyManagerDelegate <NSObject>
- (void)broadcastKeyManager:(GCKBroadcastKeyManager *)arg1 didReceiveWrappedSenderKey:(WrappedSenderKey *)arg2 forSenderKey:(NSData *)arg3;
@end
