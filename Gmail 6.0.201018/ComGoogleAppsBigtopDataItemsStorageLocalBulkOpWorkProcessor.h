//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsStorageBulkChangesHelper, ComGoogleAppsBigtopDataItemsStorageChangesCoordinator, ComGoogleAppsBigtopDataItemsStorageControllersItemChangesTableController, ComGoogleAppsBigtopDataItemsStorageControllersItemsTableController, ComGoogleAppsBigtopDataItemsStorageControllersLocalBulkOpWorkTableController, ComGoogleAppsBigtopDataItemsStorageItemsCoordinator, ComGoogleAppsBigtopDataItemsStorageItemsStorageUpdatePublisher, ComGoogleAppsBigtopDataItemsStorageProcessLocalBulkOpWorkJobFactory, ComGoogleAppsBigtopDataStorageControllersWriteSequenceIdTableController, ComGoogleAppsXplatStorageDbTransactionPromiseFactory, JavaLangLong, XPTExecutionGuard;
@protocol ComGoogleAppsXplatObserveSettable, JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsStorageLocalBulkOpWorkProcessor : NSObject
{
    ComGoogleAppsBigtopDataItemsStorageBulkChangesHelper *bulkChangesHelper_;
    ComGoogleAppsBigtopDataItemsStorageChangesCoordinator *changesCoordinator_;
    id <JavaxInjectProvider> executor_;
    id <JavaxInjectProvider> currentJobPriority_;
    ComGoogleAppsBigtopDataItemsStorageControllersItemChangesTableController *itemChangesTableController_;
    ComGoogleAppsBigtopDataItemsStorageItemsCoordinator *itemsCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageControllersItemsTableController *itemsTableController_;
    ComGoogleAppsBigtopDataItemsStorageControllersLocalBulkOpWorkTableController *localBulkOpWorkTableController_;
    ComGoogleAppsBigtopDataItemsStorageItemsStorageUpdatePublisher *itemsStorageUpdatePublisher_;
    ComGoogleAppsBigtopDataItemsStorageProcessLocalBulkOpWorkJobFactory *processLocalBulkOpWorkJobFactory_;
    ComGoogleAppsBigtopDataStorageControllersWriteSequenceIdTableController *writeSequenceIdTableController_;
    id <ComGoogleAppsXplatObserveSettable> settableItemsSyncControlServiceNeedsToSync_;
    id lock_;
    ComGoogleAppsXplatStorageDbTransactionPromiseFactory *transactionPromiseFactory_;
    XPTExecutionGuard *executionGuard_;
    JavaLangLong *needToSyncAfterFinishingWorkId_;
}

+ (void)initialize;
- (void)dealloc;
- (id)forceSyncAfterFinishingRollbackWorkIfStillPending;
- (id)forceSyncAfterFinishingRollbackWorkIfStillPendingWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)process;

@end

