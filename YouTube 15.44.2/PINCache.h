//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/PINCacheObjectSubscripting-Protocol.h>
#import <Module_Framework/PINCaching-Protocol.h>
#import <Module_Framework/PINRemoteImageCaching-Protocol.h>

@class NSString, PINDiskCache, PINMemoryCache, PINOperationQueue;

@interface PINCache : NSObject <PINRemoteImageCaching, PINCaching, PINCacheObjectSubscripting>
{
    PINDiskCache *_diskCache;
    PINMemoryCache *_memoryCache;
    NSString *_name;
    PINOperationQueue *_operationQueue;
}

+ (id)sharedCache;
- (void).cxx_destruct;
@property(retain, nonatomic) PINOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly) PINMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(readonly) PINDiskCache *diskCache; // @synthesize diskCache=_diskCache;
- (void)removeAllObjects;
- (void)removeExpiredObjects;
- (void)trimToDate:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3 ageLimit:(double)arg4;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 withAgeLimit:(double)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (_Bool)containsObjectForKey:(id)arg1;
@property(readonly) unsigned long long diskByteCount;
- (void)removeExpiredObjectsAsync:(CDUnknownBlockType)arg1;
- (void)trimToDateAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllObjectsAsync:(CDUnknownBlockType)arg1;
- (void)removeObjectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3 ageLimit:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 withAgeLimit:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)objectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)containsObjectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 rootPath:(id)arg2 serializer:(CDUnknownBlockType)arg3 deserializer:(CDUnknownBlockType)arg4 keyEncoder:(CDUnknownBlockType)arg5 keyDecoder:(CDUnknownBlockType)arg6 ttlCache:(_Bool)arg7;
- (id)initWithName:(id)arg1 rootPath:(id)arg2 serializer:(CDUnknownBlockType)arg3 deserializer:(CDUnknownBlockType)arg4 keyEncoder:(CDUnknownBlockType)arg5 keyDecoder:(CDUnknownBlockType)arg6;
- (id)initWithName:(id)arg1 rootPath:(id)arg2 serializer:(CDUnknownBlockType)arg3 deserializer:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 rootPath:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;
- (_Bool)memoryCacheIsTTLCache;
- (_Bool)diskCacheIsTTLCache;
- (void)removeObjectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)objectExistsForKey:(id)arg1;
- (void)setObjectOnDisk:(id)arg1 forKey:(id)arg2;
- (void)setObjectOnDisk:(id)arg1 forKey:(id)arg2 withAgeLimit:(double)arg3;
- (void)objectFromDiskForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)objectFromDiskForKey:(id)arg1;
- (void)removeObjectForKeyFromMemory:(id)arg1;
- (void)setObjectInMemory:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3;
- (void)setObjectInMemory:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3 withAgeLimit:(double)arg4;
- (id)objectFromMemoryForKey:(id)arg1;
- (void)removeAllObjects:(CDUnknownBlockType)arg1;
- (void)trimToDate:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)setObject:(id)arg1 forKey:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)objectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)containsObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

