//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsStorageControllersClustersTableController, ComGoogleAppsBigtopDataItemsStorageControllersItemSyncReasonsTableController, ComGoogleAppsBigtopDataItemsStorageControllersSyncReasonsTableController, ComGoogleAppsXplatStorageDbTransactionPromiseFactory;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsStorageSyncReasonsCoordinator : NSObject
{
    ComGoogleAppsBigtopDataItemsStorageControllersClustersTableController *clustersTableController_;
    id <JavaxInjectProvider> executor_;
    ComGoogleAppsBigtopDataItemsStorageControllersItemSyncReasonsTableController *itemSyncReasonsTableController_;
    ComGoogleAppsBigtopDataItemsStorageControllersSyncReasonsTableController *syncReasonsTableController_;
    ComGoogleAppsXplatStorageDbTransactionPromiseFactory *transactionPromiseFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getItemServerPermIdsMapInDefaultSyncSubscription;
- (id)getItemServerPermIdsMapInDefaultSyncSubscriptionWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)getItemServerPermIdsSetBySyncReasonRowIdWithJavaLangLong:(id)arg1;
- (id)getItemServerPermIdsSetBySyncReasonRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangLong:(id)arg2;
- (id)getSyncReasonRowIdIfServerVersionIsAheadOrNullWithComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg1;
- (id)getSyncReasonRowIdIfServerVersionIsAheadOrNullWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg2;
- (id)getSyncReasonRowIdOrNullWithComGoogleAppsBigtopDataItemsStorageTypesInsertOrUpdateReason:(id)arg1;
- (id)getSyncReasonRowIdOrNullWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsStorageTypesInsertOrUpdateReason:(id)arg2;
- (id)getOrInsertSyncReasonRowIdWithComGoogleAppsBigtopDataItemsStorageTypesInsertOrUpdateReason:(id)arg1;
- (id)getOrInsertSyncReasonRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsStorageTypesInsertOrUpdateReason:(id)arg2;
- (id)getServerVersionForViewOrNullWithComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg1;
- (id)getServerVersionForViewOrNullWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg2;
- (id)updateServerVersionForViewWithComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg1 withLong:(long long)arg2;
- (id)updateServerVersionForViewWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg2 withLong:(long long)arg3;

@end
