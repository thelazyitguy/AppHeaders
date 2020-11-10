//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRPCChannel, GRPCChannelConfiguration, NSDate, NSHashTable;
@protocol OS_dispatch_queue;

@interface GRPCPooledChannel : NSObject
{
    GRPCChannelConfiguration *_channelConfiguration;
    double _destroyDelay;
    NSHashTable *_wrappedCalls;
    GRPCChannel *_wrappedChannel;
    NSDate *_lastTimedDestroy;
    NSObject<OS_dispatch_queue> *_timerQueue;
}

- (void).cxx_destruct;
- (id)wrappedChannel;
- (void)disconnect;
- (void)notifyWrappedCallDealloc:(id)arg1;
- (id)wrappedCallWithPath:(id)arg1 completionQueue:(id)arg2 callOptions:(id)arg3;
- (void)dealloc;
- (id)initWithChannelConfiguration:(id)arg1 destroyDelay:(double)arg2;
- (id)initWithChannelConfiguration:(id)arg1;

@end

