//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLLoadRetryPolicy-Protocol.h>

@class MLCache, NSError, NSString;
@protocol MLLoadRetryPolicy, OS_dispatch_queue;

@interface MLCacheFillTaskRetryPolicy : NSObject <MLLoadRetryPolicy>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <MLLoadRetryPolicy> _loadRetryPolicy;
    MLCache *_cache;
    CDUnknownBlockType _rejectedChunkRetryBlock;
    unsigned long long _rejectedChunkRetryID;
}

- (void).cxx_destruct;
-     // Error parsing type: v24@0:8r^{NextRequestPolicy=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}iiiiii}16, name: setNextRequestPolicy:
- (void)cancelRetry;
- (void)scheduleRetryWithBlock:(CDUnknownBlockType)arg1;
- (void)didCompleteLoadWithError:(id)arg1;
@property(readonly, nonatomic) _Bool deferLoads;
@property(readonly, nonatomic) _Bool canRetry;
@property(readonly, nonatomic) NSError *error;
- (id)initWithLoadRetryPolicy:(id)arg1 cache:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

