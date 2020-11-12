//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterLivePipeline/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, TLPEventStreamConnection, TLPEventStreamConnectionMetadata, TLPInternalEvent;

@protocol TLPEventStreamConnectionDelegate <NSObject>
- (void)eventStreamConnection:(TLPEventStreamConnection *)arg1 didDisconnectWithError:(NSError *)arg2 shouldReconnect:(_Bool)arg3 metadata:(TLPEventStreamConnectionMetadata *)arg4;
- (void)eventStreamConnection:(TLPEventStreamConnection *)arg1 didReceiveEvent:(TLPInternalEvent *)arg2;
- (void)eventStreamConnection:(TLPEventStreamConnection *)arg1 didReceiveSubscribeResponseForTopics:(NSArray *)arg2 failedTopics:(NSDictionary *)arg3 error:(NSError *)arg4;
- (NSArray *)initialTopicsForEventStreamConnection:(TLPEventStreamConnection *)arg1;
@end
