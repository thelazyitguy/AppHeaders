//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Calls/ARDWebSocketChannel.h>

#import <Calls/ARDSignalingChannelDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ARDLoopbackWebSocketChannel : ARDWebSocketChannel <ARDSignalingChannelDelegate>
{
}

- (void)channel:(id)arg1 didChangeState:(long long)arg2;
- (void)channel:(id)arg1 didReceiveMessage:(id)arg2;
- (id)initWithURL:(id)arg1 restURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
