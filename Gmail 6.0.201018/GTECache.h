//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface GTECache : NSObject
{
    NSMutableDictionary *_firstLayerCache;
    NSMutableOrderedSet *_firstLayerCacheOrderedKeys;
    NSCache *_secondLayerCache;
    unsigned long long _minimumCapacity;
    unsigned long long _maximumCapacity;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
- (id)testing_objectFromFirstLayerCacheOrderedKeysAtIndex:(unsigned long long)arg1;
- (id)testing_objectFromSecondLayerCacheForKey:(id)arg1;
- (id)testing_objectFromFirstLayerCacheForKey:(id)arg1;
- (unsigned long long)testing_firstLayerCacheOrderedKeysCount;
- (unsigned long long)testing_firstLayerCacheCount;
- (void)removeLastKeyInsideFirstLayerCache;
- (_Bool)isFirstLayerCacheFull;
- (void)moveToFirstLayerCache:(id)arg1 forKey:(id)arg2;
- (void)moveLeastRecentlyUsedObjectToSecondLayerCache;
- (void)removeAllObjectsInternal;
- (id)objectForKeyInternal:(id)arg1;
- (void)setObjectInternal:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithMinimumCapacity:(unsigned long long)arg1 maximumCapacity:(unsigned long long)arg2;

@end

