//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/HAMChunkLoadTask-Protocol.h>

@class HAMChunk, NSArray, NSString;
@protocol HAMChunkLoadTaskDelegate, HAMDataAccumulator, OS_dispatch_queue;

@interface HAMBaseChunkLoadTask : NSObject <HAMChunkLoadTask>
{
    NSArray *_chunks;
    id <HAMChunkLoadTaskDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _cacheChunkWriterBlock;
    id <HAMDataAccumulator> _currentChunkCacheAccumuluator;
    HAMChunk *_currentChunk;
    unsigned long long _currentChunkIndex;
    _Bool _isCancelled;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *chunks; // @synthesize chunks=_chunks;
- (id)chunksRemaining;
- (void)currentChunkDidComplete;
- (id)cancel;
- (void)didCompleteWithError:(id)arg1;
- (_Bool)didReceiveData:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithChunks:(id)arg1 cacheChunkWriterBlock:(CDUnknownBlockType)arg2 delegate:(id)arg3 queue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
