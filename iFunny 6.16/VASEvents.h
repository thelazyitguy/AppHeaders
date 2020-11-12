//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VASEvents : NSObject
{
    _Bool _iOS10OrGreater;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_subscriptionsByTopic;
    NSMutableDictionary *_queuesByReceiver;
    NSCountedSet *_receiverQueueCounts;
}

+ (id)logger;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSCountedSet *receiverQueueCounts; // @synthesize receiverQueueCounts=_receiverQueueCounts;
@property(readonly, nonatomic) NSMutableDictionary *queuesByReceiver; // @synthesize queuesByReceiver=_queuesByReceiver;
@property(readonly, nonatomic) NSMutableDictionary *subscriptionsByTopic; // @synthesize subscriptionsByTopic=_subscriptionsByTopic;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) _Bool iOS10OrGreater; // @synthesize iOS10OrGreater=_iOS10OrGreater;
- (id)description;
- (void)eventQueue_removeQueueForReceiverKey:(id)arg1;
- (void)eventQueue_addQueueForReceiverKey:(id)arg1;
- (id)eventQueue_queueForReceiverKey:(id)arg1;
- (void)eventQueue_removeSubscriber:(id)arg1 forTopic:(id)arg2 matching:(id)arg3;
- (void)eventQueue_removeSubscription:(id)arg1 fromSubscriptions:(id)arg2 forTopic:(id)arg3;
- (void)eventQueue_addSubscriber:(id)arg1 forTopic:(id)arg2 matching:(id)arg3;
- (void)eventQueue_purgeSubscribers;
- (void)sendEvent:(id)arg1 data:(id)arg2;
- (void)unsubscribeReceiver:(id)arg1 forTopic:(id)arg2 matching:(id)arg3;
- (void)subscribeReceiver:(id)arg1 forTopic:(id)arg2 matching:(id)arg3;
- (id)initInternal;

@end
