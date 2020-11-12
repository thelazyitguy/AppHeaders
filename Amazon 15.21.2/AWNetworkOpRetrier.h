//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSingleton.h"

@class NSLock, NSMutableDictionary;

@interface AWNetworkOpRetrier : AWSingleton
{
    _Bool _shouldListenToNetworkReachabilityChanges;
    NSLock *_blockCollectionLock;
    unsigned long long _possibleValueForTag;
    NSMutableDictionary *_blocksToBeDispatchedAndDestroyed;
    NSMutableDictionary *_blocksToBeDispatchedAndRetained;
}

+ (id)networkOpRetrier;
@property(nonatomic) _Bool shouldListenToNetworkReachabilityChanges; // @synthesize shouldListenToNetworkReachabilityChanges=_shouldListenToNetworkReachabilityChanges;
@property(retain, nonatomic) NSMutableDictionary *blocksToBeDispatchedAndRetained; // @synthesize blocksToBeDispatchedAndRetained=_blocksToBeDispatchedAndRetained;
@property(retain, nonatomic) NSMutableDictionary *blocksToBeDispatchedAndDestroyed; // @synthesize blocksToBeDispatchedAndDestroyed=_blocksToBeDispatchedAndDestroyed;
@property(nonatomic) unsigned long long possibleValueForTag; // @synthesize possibleValueForTag=_possibleValueForTag;
@property(retain, nonatomic) NSLock *blockCollectionLock; // @synthesize blockCollectionLock=_blockCollectionLock;
- (void).cxx_destruct;
- (void)reachabilityChanged;
- (void)scheduleAllBlocksForInvocation;
- (void)dropSingleInvocationBlocks;
- (void)dropBlockWithTag:(unsigned long long)arg1;
- (unsigned long long)invokeBlock:(CDUnknownBlockType)arg1 onMainThread:(_Bool)arg2 once:(_Bool)arg3;
- (unsigned long long)saveInvocationBlock:(id)arg1 inCollection:(id)arg2;
- (unsigned long long)invokeOneTimeWhenBackOnline:(CDUnknownBlockType)arg1;
- (_Bool)runningInMainThread;
- (unsigned long long)nextAvailableTag;
- (id)init;

@end
