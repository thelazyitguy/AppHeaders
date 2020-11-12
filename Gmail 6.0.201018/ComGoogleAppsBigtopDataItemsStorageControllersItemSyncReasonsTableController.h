//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataStorageSchemaBtdDatabase, ComGoogleAppsXplatSqlSqlTableController, ComGoogleAppsXplatStorageDbTransactionPromiseFactory;
@protocol ComGoogleAppsBigtopDataStorageSchemaItemSyncReasonDao;

@interface ComGoogleAppsBigtopDataItemsStorageControllersItemSyncReasonsTableController : NSObject
{
    ComGoogleAppsXplatSqlSqlTableController *innerController_;
    ComGoogleAppsBigtopDataStorageSchemaBtdDatabase *database_;
    id <ComGoogleAppsBigtopDataStorageSchemaItemSyncReasonDao> dao_;
    _Bool useXplatDb_;
    ComGoogleAppsXplatStorageDbTransactionPromiseFactory *transactionPromiseFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (id)countItemsSyncedForDefaultSyncSubscription;
- (id)countItemsSyncedForDefaultSyncSubscriptionWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)deleteItemSyncReasonsWithSyncReasonRowIdAndSubscriptionRankAboveWithJavaLangLong:(id)arg1 withNSString:(id)arg2;
- (id)deleteItemSyncReasonsWithSyncReasonRowIdAndSubscriptionRankAboveWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangLong:(id)arg2 withNSString:(id)arg3;
- (id)deleteItemSyncReasonsWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2;
- (id)deleteItemSyncReasonsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2 withJavaUtilList:(id)arg3;
- (id)deleteItemSyncReasonWithComGoogleAppsBigtopDataStorageSchemaItemSyncReason:(id)arg1;
- (id)deleteItemSyncReasonWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataStorageSchemaItemSyncReason:(id)arg2;
- (id)deleteItemSyncReasonsByRowIdsWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)deleteItemSyncReasonsByRowIdsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)deleteItemSyncReasonsBySyncReasonRowIdWithJavaLangLong:(id)arg1;
- (id)deleteItemSyncReasonsBySyncReasonRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangLong:(id)arg2;
- (id)deleteByItemRowIdWithJavaLangLong:(id)arg1;
- (id)deleteByItemRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangLong:(id)arg2;
- (id)getItemSyncReasonsByItemRowIdWithJavaLangLong:(id)arg1;
- (id)getItemSyncReasonsByItemRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangLong:(id)arg2;
- (id)getItemSyncReasonOrNullByRowIdWithLong:(long long)arg1;
- (id)getItemSyncReasonOrNullByRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangLong:(id)arg2;
- (id)getItemServerPermIdsSetBySyncReasonRowIdWithJavaLangLong:(id)arg1;
- (id)getItemServerPermIdsSetBySyncReasonRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangLong:(id)arg2;
- (id)getItemServerPermIdsMapBySyncReasonRowIdWithJavaLangLong:(id)arg1;
- (id)getItemServerPermIdsMapBySyncReasonRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangLong:(id)arg2;
- (id)getAllDefaultSubscriptionItemSyncReasonRowIdsByRank;
- (id)getAllDefaultSubscriptionItemSyncReasonRowIdsByRankWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)insertNewSyncReasonsForItemsWithJavaUtilList:(id)arg1;
- (id)insertNewSyncReasonsForItemsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;

@end
