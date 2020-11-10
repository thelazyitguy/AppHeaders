//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, TFSDatabaseConnection;
@protocol TFSModelCacheCodec;

@interface TFSModelDiskCacheItemWriter : NSObject
{
    TFSDatabaseConnection *_connection;
    NSNumber *_timestamp;
    id <TFSModelCacheCodec> _encoder;
    NSMutableDictionary *_itemKeyToOwnershipRowsForDeferredDeletion;
    NSMutableDictionary *_itemKeyToIdCache;
    NSMutableDictionary *_searchKeyToIdCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *searchKeyToIdCache; // @synthesize searchKeyToIdCache=_searchKeyToIdCache;
@property(readonly, nonatomic) NSMutableDictionary *itemKeyToIdCache; // @synthesize itemKeyToIdCache=_itemKeyToIdCache;
@property(readonly, nonatomic) NSMutableDictionary *itemKeyToOwnershipRowsForDeferredDeletion; // @synthesize itemKeyToOwnershipRowsForDeferredDeletion=_itemKeyToOwnershipRowsForDeferredDeletion;
@property(readonly, nonatomic) id <TFSModelCacheCodec> encoder; // @synthesize encoder=_encoder;
@property(readonly, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) TFSDatabaseConnection *connection; // @synthesize connection=_connection;
- (id)_tfsmc_idForKey:(id)arg1 withCache:(id)arg2 table:(id)arg3 keyColumn:(id)arg4 idColumn:(id)arg5;
- (id)_tfsmc_idForSearchKey:(id)arg1;
- (id)_tfsmc_idForItemKey:(id)arg1;
- (_Bool)deleteUnusedSearchKeys;
- (_Bool)removeLeastRecentlyUsedEvictableItem;
- (id)evictableItemCount;
- (_Bool)deleteItemWithKey:(id)arg1;
- (_Bool)performOwnershipDeletionsArisingFromWritingRecordWithKey:(id)arg1;
- (_Bool)writeRecord:(id)arg1;
- (id)initWithConnection:(id)arg1 timestamp:(id)arg2 encoder:(id)arg3;

@end

