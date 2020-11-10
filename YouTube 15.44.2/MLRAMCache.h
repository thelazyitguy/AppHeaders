//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MLCache.h>

#import <Module_Framework/HAMCacheDelegate-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class MLLRUDictionary, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MLRAMCache : MLCache <HAMCacheDelegate, YTSystemNotificationsObserver>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    MLLRUDictionary *_LRU;
    long long _currentRAMUsage;
    long long _maximumRAMUsage;
    _Bool _usePurgeableData;
    unsigned long long _memoryPressure;
    NSMutableArray *_evictionObservers;
}

- (void).cxx_destruct;
- (id)newCacheWithID:(id)arg1;
- (void)notifyEvictionObservers;
- (_Bool)evictToTargetRAMUsage:(long long)arg1;
- (void)videoCache:(id)arg1 didFulfillReservationOfSize:(long long)arg2 chunkSize:(long long)arg3;
- (void)videoCache:(id)arg1 didCancelReservationOfSize:(long long)arg2;
- (void)cacheDidEvictEverything:(id)arg1;
- (void)cache:(id)arg1 didEvictFormat:(id)arg2;
- (void)cache:(id)arg1 didEvictChunkIDs:(id)arg2 format:(id)arg3;
- (void)cache:(id)arg1 didBeginLoadingChunkIDs:(id)arg2;
- (id)newReservationInCache:(id)arg1 forChunkID:(id)arg2 format:(id)arg3 estimatedChunkSize:(long long)arg4;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheDelegateQueue;
- (void)appMemoryPressureLevelDidChange:(unsigned long long)arg1;
- (void)registerEvictionObserverOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)cacheForVideoID:(id)arg1;
- (id)pinVideoID:(id)arg1;
@property(nonatomic) _Bool usePurgeableData;
@property(nonatomic) long long maximumRAMUsage;
@property(readonly, nonatomic) long long currentRAMUsage;
- (id)initWithMaximumRAMUsage:(long long)arg1 usePurgeableData:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

