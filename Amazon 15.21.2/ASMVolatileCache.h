//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASMObjectCache-Protocol.h"

@class ASMPersistentCache, ASMStaleableUserOwnedData, NSString;

@interface ASMVolatileCache : NSObject <ASMObjectCache>
{
    ASMStaleableUserOwnedData *_inMemoryDataStore;
    ASMPersistentCache *_persistentCache;
    Class _dataClass;
}

@property(retain) Class dataClass; // @synthesize dataClass=_dataClass;
@property(retain) ASMPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
@property(retain) ASMStaleableUserOwnedData *inMemoryDataStore; // @synthesize inMemoryDataStore=_inMemoryDataStore;
- (void).cxx_destruct;
- (id)p_logTag;
- (_Bool)p_isDataStale:(id)arg1;
- (_Bool)p_dataNeedsRefresh;
- (id)put:(id)arg1;
- (void)clear;
- (id)get;
- (void)putVerified:(id)arg1;
- (id)initWithFallbackCache:(id)arg1 withDataClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
