//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPCQueueWeakHolder;
@protocol OS_dispatch_queue;

@interface GPCQueue : NSObject
{
    _Bool _isMainThread;
    void *_queueKey;
    GPCQueueWeakHolder *_holder;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)queueWithName:(id)arg1;
+ (id)makeQueueWithDispatchQueue:(id)arg1 onMainThread:(_Bool)arg2;
+ (id)queueWithDispatchQueue:(id)arg1;
+ (id)queueOnMainThread;
+ (id)queue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)queueAsync:(CDUnknownBlockType)arg1;
- (void)runAsyncInQueue:(CDUnknownBlockType)arg1;
- (void)runSyncInQueue:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool inQueue;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1 onMainThread:(_Bool)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

