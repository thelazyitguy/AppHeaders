//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/PINCacheObjectSubscripting-Protocol.h>
#import <Module_Framework/PINCaching-Protocol.h>

@class NSMutableDictionary, NSString, NSURL, PINOperationQueue;

@interface PINDiskCache : NSObject <PINCaching, PINCacheObjectSubscripting>
{
    CDUnknownBlockType _serializer;
    CDUnknownBlockType _deserializer;
    CDUnknownBlockType _keyEncoder;
    CDUnknownBlockType _keyDecoder;
    _Bool _ttlCache;
    _Bool _writingProtectionOptionSet;
    _Bool _diskWritable;
    _Bool _diskStateKnown;
    CDUnknownBlockType _willAddObjectBlock;
    CDUnknownBlockType _willRemoveObjectBlock;
    CDUnknownBlockType _willRemoveAllObjectsBlock;
    CDUnknownBlockType _didAddObjectBlock;
    CDUnknownBlockType _didRemoveObjectBlock;
    CDUnknownBlockType _didRemoveAllObjectsBlock;
    unsigned long long _byteLimit;
    double _ageLimit;
    unsigned long long _writingProtectionOption;
    NSString *_prefix;
    NSURL *_cacheURL;
    unsigned long long _byteCount;
    NSString *_name;
    PINOperationQueue *_operationQueue;
    NSMutableDictionary *_metadata;
    struct _opaque_pthread_cond_t _diskWritableCondition;
    struct _opaque_pthread_cond_t _diskStateKnownCondition;
    struct _opaque_pthread_mutex_t _mutex;
}

+ (id)resourceKeys;
+ (void)emptyTrash;
+ (_Bool)moveItemAtURLToTrash:(id)arg1;
+ (id)sharedTrashURL;
+ (id)sharedLock;
+ (id)sharedTrashQueue;
+ (id)cacheURLWithRootPath:(id)arg1 prefix:(id)arg2 name:(id)arg3;
+ (id)sharedCache;
- (void).cxx_destruct;
@property(nonatomic) _Bool diskStateKnown; // @synthesize diskStateKnown=_diskStateKnown;
@property(nonatomic) struct _opaque_pthread_cond_t diskStateKnownCondition; // @synthesize diskStateKnownCondition=_diskStateKnownCondition;
@property(nonatomic) _Bool diskWritable; // @synthesize diskWritable=_diskWritable;
@property(nonatomic) struct _opaque_pthread_cond_t diskWritableCondition; // @synthesize diskWritableCondition=_diskWritableCondition;
@property(retain, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) PINOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct _opaque_pthread_mutex_t mutex; // @synthesize mutex=_mutex;
@property unsigned long long byteCount; // @synthesize byteCount=_byteCount;
@property(retain, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(readonly) NSString *prefix; // @synthesize prefix=_prefix;
@property(nonatomic) _Bool writingProtectionOptionSet; // @synthesize writingProtectionOptionSet=_writingProtectionOptionSet;
- (void)unlock;
- (void)lock;
- (void)lockAndWaitForKnownState;
- (void)lockForWriting;
@property unsigned long long writingProtectionOption; // @synthesize writingProtectionOption=_writingProtectionOption;
@property(readonly, nonatomic, getter=isTTLCache) _Bool ttlCache; // @synthesize ttlCache=_ttlCache;
@property double ageLimit; // @synthesize ageLimit=_ageLimit;
@property unsigned long long byteLimit; // @synthesize byteLimit=_byteLimit;
@property(copy) CDUnknownBlockType didRemoveAllObjectsBlock; // @synthesize didRemoveAllObjectsBlock=_didRemoveAllObjectsBlock;
@property(copy) CDUnknownBlockType didRemoveObjectBlock; // @synthesize didRemoveObjectBlock=_didRemoveObjectBlock;
@property(copy) CDUnknownBlockType didAddObjectBlock; // @synthesize didAddObjectBlock=_didAddObjectBlock;
@property(copy) CDUnknownBlockType willRemoveAllObjectsBlock; // @synthesize willRemoveAllObjectsBlock=_willRemoveAllObjectsBlock;
@property(copy) CDUnknownBlockType willRemoveObjectBlock; // @synthesize willRemoveObjectBlock=_willRemoveObjectBlock;
@property(copy) CDUnknownBlockType willAddObjectBlock; // @synthesize willAddObjectBlock=_willAddObjectBlock;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)removeExpiredObjects;
- (void)trimToSizeByDate:(unsigned long long)arg1;
- (void)trimToDate:(id)arg1;
- (void)trimToSize:(unsigned long long)arg1;
- (void)removeObjectForKey:(id)arg1 fileURL:(id *)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withAgeLimit:(double)arg3 fileURL:(id *)arg4;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3 ageLimit:(double)arg4;
- (void)setObject:(id)arg1 forKey:(id)arg2 withAgeLimit:(double)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)fileURLForKey:(id)arg1 updateFileModificationDate:(_Bool)arg2;
- (id)fileURLForKey:(id)arg1;
- (id)objectForKey:(id)arg1 fileURL:(id *)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (_Bool)containsObjectForKey:(id)arg1;
- (void)synchronouslyLockFileAccessWhileExecutingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithBlockAsync:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeAllObjectsAsync:(CDUnknownBlockType)arg1;
- (void)removeExpiredObjectsAsync:(CDUnknownBlockType)arg1;
- (void)trimToSizeByDateAsync:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)trimToDateAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)trimToSizeAsync:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObjectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3 ageLimit:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 withAgeLimit:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fileURLForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)objectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)containsObjectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lockFileAccessWhileExecutingBlockAsync:(CDUnknownBlockType)arg1;
- (void)trimToAgeLimitRecursively;
- (void)trimDiskToDate:(id)arg1;
- (void)trimDiskToSizeByDate:(unsigned long long)arg1;
- (void)trimDiskToSize:(unsigned long long)arg1;
- (_Bool)removeFileAndExecuteBlocksForKey:(id)arg1;
- (_Bool)_locked_setAgeLimit:(double)arg1 forURL:(id)arg2;
- (void)asynchronouslySetAgeLimit:(double)arg1 forURL:(id)arg2;
- (_Bool)_locked_setFileModificationDate:(id)arg1 forURL:(id)arg2;
- (void)asynchronouslySetFileModificationDate:(id)arg1 forURL:(id)arg2;
- (void)initializeDiskProperties;
- (unsigned long long)_locked_initializeDiskPropertiesForFile:(id)arg1 fileKey:(id)arg2;
- (_Bool)_locked_createCacheDirectory;
- (CDUnknownBlockType)defaultKeyDecoder;
- (CDUnknownBlockType)defaultKeyEncoder;
- (CDUnknownBlockType)defaultDeserializer;
- (CDUnknownBlockType)defaultSerializer;
- (id)decodedString:(id)arg1;
- (id)encodedString:(id)arg1;
- (id)keyForEncodedFileURL:(id)arg1;
- (id)encodedFileURLForKey:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 prefix:(id)arg2 rootPath:(id)arg3 serializer:(CDUnknownBlockType)arg4 deserializer:(CDUnknownBlockType)arg5 keyEncoder:(CDUnknownBlockType)arg6 keyDecoder:(CDUnknownBlockType)arg7 operationQueue:(id)arg8 ttlCache:(_Bool)arg9;
- (id)initWithName:(id)arg1 prefix:(id)arg2 rootPath:(id)arg3 serializer:(CDUnknownBlockType)arg4 deserializer:(CDUnknownBlockType)arg5 keyEncoder:(CDUnknownBlockType)arg6 keyDecoder:(CDUnknownBlockType)arg7 operationQueue:(id)arg8;
- (id)initWithName:(id)arg1 rootPath:(id)arg2 serializer:(CDUnknownBlockType)arg3 deserializer:(CDUnknownBlockType)arg4 operationQueue:(id)arg5;
- (id)initWithName:(id)arg1 rootPath:(id)arg2 serializer:(CDUnknownBlockType)arg3 deserializer:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 rootPath:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setTtlCache:(_Bool)arg1;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeAllObjects:(CDUnknownBlockType)arg1;
- (void)trimToSizeByDate:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)trimToSize:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)trimToDate:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)fileURLForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)objectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)containsObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)lockFileAccessWhileExecutingBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

