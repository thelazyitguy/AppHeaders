//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTCommonCache-Protocol.h>
#import <Module_Framework/YTCommonCacheEnumeration-Protocol.h>
#import <Module_Framework/YTCommonCacheSynchronous-Protocol.h>

@class NSMapTable, NSString, YTVolatileCacheNode;
@protocol OS_dispatch_queue, YTCommonCacheDelegate;

@interface YTVolatileCache : NSObject <YTCommonCache, YTCommonCacheSynchronous, YTCommonCacheEnumeration>
{
    NSMapTable *_items;
    YTVolatileCacheNode *_head;
    NSObject<OS_dispatch_queue> *_operationQueue;
    unsigned long long _cost;
    unsigned long long _costLimit;
    CDUnknownBlockType _costBlock;
    CDUnknownBlockType _expirationBlock;
    id <YTCommonCacheDelegate> _delegate;
    NSString *_name;
}

+ (id)lruCacheWithName:(id)arg1 maxSize:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <YTCommonCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasExpired:(id)arg1;
- (void)addCost:(unsigned long long)arg1;
- (void)substractCost:(unsigned long long)arg1;
- (void)removeNode:(id)arg1;
- (void)truncate:(unsigned long long)arg1;
- (void)insert:(id)arg1;
- (id)findAndMoveToTop:(id)arg1;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)objectWrapperForKey:(id)arg1;
- (void)removeAllObjects;
- (void)invalidateObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjectsOnCallbackQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)invalidateObjectForKey:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeObjectForKey:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)objectAndStateForKey:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)objectForKey:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 callbackQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 costLimit:(unsigned long long)arg2 costBlock:(CDUnknownBlockType)arg3 expirationBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
