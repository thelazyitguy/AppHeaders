//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_ViewType, ComGoogleAppsBigtopDataStorageSchemaItemEntry, ComGoogleAppsXplatStorageDbTransactionPromise, JavaLangLong, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopDataStorageSchemaItemDao <JavaObject>
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryRowIdAndServerPermIdWithoutSyncReasonsOrChanges;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryRowIdAndServerPermIdByServerPermIdAndNoSyncReasonsOrChangesWithNSString:(NSString *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)joinItemVisibilityForServerPermIdAndViewTypeWithNSString:(NSString *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ViewType:(ComGoogleAppsBigtopDataItemsItemsProto_ViewType *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryByMinWriteSequenceIdJoinItemSyncReasonsBySyncReasonRowIdWithLong:(long long)arg1 withLong:(long long)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryByWriteSequenceIdJoinItemSyncReasonsBySyncReasonRowIdWithLong:(long long)arg1 withLong:(long long)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryServerPermIdByMinWriteSequenceIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)replaceWithComGoogleAppsBigtopDataStorageSchemaItemEntry:(ComGoogleAppsBigtopDataStorageSchemaItemEntry *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteAll;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteByRowIdWithJavaLangLong:(JavaLangLong *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryRowIdByServerPermIdWithNSString:(NSString *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryParentServerPermIds;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryByServerPermIdWithNSString:(NSString *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)bulkQueryItemEntryWithoutProtoMapByServerPermIdWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)bulkQueryRowIdMapByServerPermIdWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)bulkQueryItemMapByServerPermIdWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)bulkQueryServerPermIdMapByRowIdWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)bulkQueryItemMapByRowIdWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getItemsWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)insertWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)insertWithComGoogleAppsBigtopDataStorageSchemaItemEntry:(ComGoogleAppsBigtopDataStorageSchemaItemEntry *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)countAll;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)allRowIds;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getItemByLegacyStorageIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getItemWithLong:(long long)arg1;
@end
