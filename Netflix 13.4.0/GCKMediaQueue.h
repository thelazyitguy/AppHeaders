//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFCW444/GCKRemoteMediaClientListener-Protocol.h>
#import <NFCW444/GCKRequestDelegate-Protocol.h>
#import <NFCW444/GCKSessionManagerListener-Protocol.h>

@class GCKBLRUCache, GCKRemoteMediaClient, GCKRequest, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer;

@interface GCKMediaQueue : NSObject <GCKSessionManagerListener, GCKRemoteMediaClientListener, GCKRequestDelegate>
{
    NSMutableArray *_itemIDs;
    NSMutableDictionary *_itemIDToIndexMap;
    GCKBLRUCache *_cache;
    GCKRemoteMediaClient *_mediaClient;
    NSTimer *_fetchTimer;
    NSMutableArray *_itemsToFetch;
    unsigned long long _maxFetchCount;
    GCKRequest *_queueFetchItemsRequest;
    GCKRequest *_queueFetchItemIDsRequest;
    NSArray *_numericSortDescriptors;
    NSMutableArray *_cacheEvictionList;
    _Bool _moreFetchesPending;
    NSMutableSet *_delegates;
    long long _mediaSessionId;
    _Bool _isAttached;
}

- (void).cxx_destruct;
- (void)request:(id)arg1 didAbortWithReason:(long long)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidComplete:(id)arg1;
- (void)notifyDidChange;
- (void)notifyDidRemoveItemsAtIndexes:(id)arg1;
- (void)notifyDidUpdateItemsAtIndexes:(id)arg1;
- (void)notifyDidInsertItemsInRange:(struct _NSRange)arg1;
- (void)notifyDidReloadItems;
- (void)notifyWillChange;
- (id)delegatesForSelector:(SEL)arg1;
- (void)remoteMediaClient:(id)arg1 didUpdateMediaStatus:(id)arg2;
- (void)remoteMediaClient:(id)arg1 didReceiveQueueItems:(id)arg2;
- (void)remoteMediaClient:(id)arg1 didRemoveQueueItemsWithIDs:(id)arg2;
- (void)remoteMediaClient:(id)arg1 didUpdateQueueItemsWithIDs:(id)arg2;
- (void)remoteMediaClient:(id)arg1 didInsertQueueItemsWithIDs:(id)arg2 beforeItemWithID:(unsigned long long)arg3;
- (void)remoteMediaClient:(id)arg1 didReceiveQueueItemIDs:(id)arg2;
- (void)detachFromRemoteMediaClient;
- (void)attachToRemoteMediaClient:(id)arg1;
- (void)sessionManager:(id)arg1 didSuspendCastSession:(id)arg2 withReason:(long long)arg3;
- (void)sessionManager:(id)arg1 didResumeCastSession:(id)arg2;
- (void)sessionManager:(id)arg1 willEndCastSession:(id)arg2;
- (void)sessionManager:(id)arg1 didStartCastSession:(id)arg2;
- (void)resetFetchTimer;
- (void)fetchTimerDidFire:(id)arg1;
- (long long)mediaSessionIdFromMediaStatus:(id)arg1;
- (void)fetchPendingItems;
- (void)reload;
- (void)clear;
- (long long)indexOfItemWithID:(unsigned long long)arg1;
- (unsigned long long)itemIDAtIndex:(unsigned long long)arg1;
- (id)itemAtIndex:(unsigned long long)arg1 fetchIfNeeded:(_Bool)arg2;
- (id)itemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long cachedItemCount;
@property(readonly, nonatomic) unsigned long long cacheSize;
@property(readonly, nonatomic) unsigned long long itemCount;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithRemoteMediaClient:(id)arg1 cacheSize:(unsigned long long)arg2 maxFetchCount:(unsigned long long)arg3;
- (id)initWithRemoteMediaClient:(id)arg1 cacheSize:(unsigned long long)arg2;
- (id)initWithRemoteMediaClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

