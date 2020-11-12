//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsSyncApiInternalItemsBackfiller-Protocol.h"

@class ComGoogleAppsBigtopDataItemsChangesStorageSyncCoordinator, ComGoogleAppsBigtopDataItemsStorageChangeBatcher, ComGoogleAppsBigtopDataItemsStorageClustersCoordinator, ComGoogleAppsBigtopDataItemsStorageControllersItemsSyncStateTableController, ComGoogleAppsBigtopDataItemsStorageItemsCoordinator, ComGoogleAppsBigtopDataItemsStorageItemsStorageUpdatePublisher, ComGoogleAppsBigtopDataItemsStorageLabelCountsCoordinator, ComGoogleAppsBigtopDataItemsStorageSyncReasonsCoordinator, ComGoogleAppsBigtopDataItemsStorageSyncstatusClientSyncStateForDebuggingManager, ComGoogleAppsBigtopDataItemsStorageSyncstatusItemsSyncStatusManager, ComGoogleAppsBigtopDataItemsSyncAsyncSyncToServerResponseHandler, ComGoogleAppsBigtopDataStorageControllersWriteSequenceIdTableController, ComGoogleAppsXplatJobsJobQueue, ComGoogleAppsXplatStorageDbTransactionPromiseFactory, NSString;
@protocol ComGoogleAppsBigtopDataItemsSyncApiInternalItemsSyncer, ComGoogleAppsBigtopDataItemsSyncApiInternalSyncAndBackfillScheduler, ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncService, ComGoogleAppsXplatObserveSettable, JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsSyncAsyncDefaultItemsBackfillerImpl : NSObject <ComGoogleAppsBigtopDataItemsSyncApiInternalItemsBackfiller>
{
    ComGoogleAppsBigtopDataItemsChangesStorageSyncCoordinator *syncCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageSyncReasonsCoordinator *syncReasonsCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageClustersCoordinator *clustersCoordinator_;
    id <ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncService> itemsSyncService_;
    ComGoogleAppsBigtopDataItemsStorageControllersItemsSyncStateTableController *itemsSyncStateTableController_;
    ComGoogleAppsBigtopDataItemsStorageSyncstatusItemsSyncStatusManager *itemsSyncStatusManager_;
    ComGoogleAppsBigtopDataItemsStorageSyncstatusClientSyncStateForDebuggingManager *clientSyncStateForDebuggingManager_;
    id <ComGoogleAppsBigtopDataItemsSyncApiInternalItemsSyncer> itemsSyncer_;
    ComGoogleAppsBigtopDataItemsStorageChangeBatcher *changeBatcher_;
    ComGoogleAppsBigtopDataItemsStorageItemsStorageUpdatePublisher *itemsStorageUpdatePublisher_;
    ComGoogleAppsBigtopDataItemsStorageLabelCountsCoordinator *labelCountsCoordinator_;
    id <JavaxInjectProvider> executor_;
    id <ComGoogleAppsBigtopDataItemsSyncApiInternalSyncAndBackfillScheduler> syncAndBackfillScheduler_;
    ComGoogleAppsBigtopDataItemsSyncAsyncSyncToServerResponseHandler *syncToServerResponseHandler_;
    ComGoogleAppsXplatJobsJobQueue *jobQueue_;
    id <ComGoogleAppsXplatObserveSettable> settableBackfillFailure_;
    ComGoogleAppsBigtopDataItemsStorageItemsCoordinator *itemsCoordinator_;
    ComGoogleAppsBigtopDataStorageControllersWriteSequenceIdTableController *writeSequenceIdTableController_;
    ComGoogleAppsXplatStorageDbTransactionPromiseFactory *transactionPromiseFactory_;
    long long latestServerVersion_;
    id latestServerVersionLock_;
}

+ (void)initialize;
- (void)dealloc;
- (id)backfillViewWithComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg1 withJBTSBackfillViewRequest_BackfillViewRequestMetadata:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
