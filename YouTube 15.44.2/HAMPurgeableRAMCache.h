//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/HAMCache-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol HAMCacheDelegate, OS_dispatch_queue;

@interface HAMPurgeableRAMCache : NSObject <HAMCache>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    id <HAMCacheDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_cacheDelegateQueue;
    NSMutableDictionary *_entries;
    NSString *_ID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void)handleEvictedChunkID:(id)arg1 entry:(id)arg2;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)evictEverything;
- (void)evictFormat:(id)arg1;
- (void)evictChunkIDs:(id)arg1 format:(id)arg2;
- (id)newWriterForChunkID:(id)arg1 format:(id)arg2 estimatedChunkSize:(long long)arg3 queue:(id)arg4;
- (id)loadChunks:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (id)availableChunkIDs;
- (id)availableFormats;
- (void)filterAvailableFormats:(id)arg1;
- (_Bool)hasChunkID:(id)arg1 format:(id)arg2;
- (id)initWithID:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

