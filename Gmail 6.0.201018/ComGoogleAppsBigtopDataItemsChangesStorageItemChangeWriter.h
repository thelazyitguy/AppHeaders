//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsChangesApplierSingleItemChangeConverter, ComGoogleAppsBigtopDataItemsChangesStorageSyncCoordinator, ComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsSyncer, ComGoogleAppsBigtopDataItemsStorageBulkItemChangesCoordinator, ComGoogleAppsBigtopDataItemsStorageChangesCoordinator, ComGoogleAppsBigtopDataItemsStorageClustersCoordinator, ComGoogleAppsBigtopDataItemsStorageControllersClustersTableController, ComGoogleAppsBigtopDataItemsStorageControllersFiltersTableController, ComGoogleAppsBigtopDataItemsStorageControllersItemChangesTableController, ComGoogleAppsBigtopDataItemsStorageControllersItemsTableController, ComGoogleAppsBigtopDataItemsStorageFilterChangesCoordinator, ComGoogleAppsBigtopDataItemsStorageItemChangeTransformer, ComGoogleAppsBigtopDataItemsStorageItemsCoordinator, ComGoogleAppsBigtopDataItemsStorageItemsEvictor, ComGoogleAppsBigtopDataItemsStorageLabelCountsCoordinator, ComGoogleAppsBigtopDataItemsSyncApiMessageFetchingOptions, ComGoogleAppsBigtopDataStorageControllersWriteSequenceIdTableController, ComGoogleAppsXplatStorageDbTransactionPromiseFactory;
@protocol ComGoogleCaribouComponentsServerpermidsItemServerPermIdGenerator, JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsChangesStorageItemChangeWriter : NSObject
{
    ComGoogleAppsBigtopDataItemsStorageBulkItemChangesCoordinator *bulkItemChangesCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageChangesCoordinator *changesCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageControllersClustersTableController *clustersTableController_;
    id <JavaxInjectProvider> executor_;
    ComGoogleAppsBigtopDataItemsStorageItemChangeTransformer *itemChangeTransformer_;
    ComGoogleAppsBigtopDataItemsStorageControllersItemChangesTableController *itemChangesTableController_;
    ComGoogleAppsBigtopDataItemsStorageItemsCoordinator *itemsCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageClustersCoordinator *clustersCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageItemsEvictor *itemsEvictor_;
    ComGoogleAppsBigtopDataItemsStorageControllersItemsTableController *itemsTableController_;
    ComGoogleAppsBigtopDataItemsStorageLabelCountsCoordinator *labelCountsCoordinator_;
    ComGoogleAppsBigtopDataItemsChangesApplierSingleItemChangeConverter *singleItemChangeConverter_;
    ComGoogleAppsBigtopDataItemsChangesStorageSyncCoordinator *syncCoordinator_;
    ComGoogleAppsBigtopDataStorageControllersWriteSequenceIdTableController *writeSequenceIdTableController_;
    ComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsSyncer *messageDetailsSyncer_;
    ComGoogleAppsBigtopDataItemsStorageControllersFiltersTableController *filtersTableController_;
    ComGoogleAppsBigtopDataItemsStorageFilterChangesCoordinator *filterChangesCoordinator_;
    ComGoogleAppsBigtopDataItemsSyncApiMessageFetchingOptions *messageFetchingOptions_;
    id <ComGoogleCaribouComponentsServerpermidsItemServerPermIdGenerator> idGenerator_;
    id <JavaxInjectProvider> messageBasedUiEnabled_;
    ComGoogleAppsXplatStorageDbTransactionPromiseFactory *transactionPromiseFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (id)applyRemoteChangesAndReapplyLocalChangesWithJavaUtilList:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_SyncResultsReinsertionType:(id)arg2 withJavaUtilConcurrentExecutor:(id)arg3;
- (id)applyRemoteChangesAndReapplyLocalChangesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2 withComGoogleAppsBigtopDataItemsItemsProto_SyncResultsReinsertionType:(id)arg3;
- (id)applyRemoteChangesAndSkipApplyingLocalChangesWithJavaUtilList:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2;
- (id)applyRemoteChangesAndSkipApplyingLocalChangesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)applyLocalOnlyChangesWithJavaUtilList:(id)arg1;
- (id)applyLocalOnlyChangesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)insertAndApplyLocalChangesWithJavaUtilList:(id)arg1;
- (id)insertAndApplyLocalChangesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;

@end
