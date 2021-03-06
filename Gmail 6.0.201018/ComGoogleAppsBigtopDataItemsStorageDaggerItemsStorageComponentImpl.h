//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsStorageItemsStorageComponentImpl-Protocol.h"

@class NSString;
@protocol ComGoogleAppsBigtopDataItemsStorageControllersItemsStorageControllersComponent, ComGoogleAppsBigtopDataStorageStorageComponent, JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsStorageDaggerItemsStorageComponentImpl : NSObject <ComGoogleAppsBigtopDataItemsStorageItemsStorageComponentImpl>
{
    id <ComGoogleAppsBigtopDataStorageStorageComponent> storageComponent_;
    id <ComGoogleAppsBigtopDataItemsStorageControllersItemsStorageControllersComponent> itemsStorageControllersComponent_;
    id <JavaxInjectProvider> rootLifecycleProvider_;
    id <JavaxInjectProvider> jobQueueProvider_;
    id <JavaxInjectProvider> btdDatabaseProvider_;
    id <JavaxInjectProvider> currentJobExecutorProvider_;
    id <JavaxInjectProvider> getClustersTableControllerProvider_;
    id <JavaxInjectProvider> getClusterTombstonesTableControllerProvider_;
    id <JavaxInjectProvider> getItemChangesTableControllerProvider_;
    id <JavaxInjectProvider> itemMessagesCoordinatorProvider_;
    id <JavaxInjectProvider> getItemMessageTombstonesTableControllerProvider_;
    id <JavaxInjectProvider> getItemSyncReasonsTableControllerProvider_;
    id <JavaxInjectProvider> getItemVisibilityTableControllerProvider_;
    id <JavaxInjectProvider> currentJobPriorityProvider_;
    id <JavaxInjectProvider> getChangeApplierProvider_;
    id <JavaxInjectProvider> clockProvider_;
    id <JavaxInjectProvider> randomProvider_;
    id <JavaxInjectProvider> changeRetryCalculatorProvider_;
    id <JavaxInjectProvider> getItemAppliedChangeFactoryProvider_;
    id <JavaxInjectProvider> getItemsTableControllerProvider_;
    id <JavaxInjectProvider> getLocalBulkOpWorkTableControllerProvider_;
    id <JavaxInjectProvider> getSingleItemChangeConverterProvider_;
    id <JavaxInjectProvider> sqlDatabaseProvider_;
    id <JavaxInjectProvider> syncHealthEventLoggerProvider_;
    id <JavaxInjectProvider> recordProvider_;
    id <JavaxInjectProvider> transactionPromiseFactoryProvider_;
    id <JavaxInjectProvider> syncHealthRecorderProvider_;
    id <JavaxInjectProvider> changesCoordinatorProvider_;
    id <JavaxInjectProvider> itemVisibilityUpdateWorkProcessorProvider_;
    id <JavaxInjectProvider> writeSequenceIdTableControllerProvider_;
    id <JavaxInjectProvider> clustersCoordinatorProvider_;
    id <JavaxInjectProvider> getItemVisibilityCalculatorProvider_;
    id <JavaxInjectProvider> itemsEvictorProvider_;
    id <JavaxInjectProvider> getItemTombstonesTableControllerProvider_;
    id <JavaxInjectProvider> getItemVisibilityTombstonesTableControllerProvider_;
    id <JavaxInjectProvider> itemsStorageUpdateHintCalculatorProvider_;
    id <JavaxInjectProvider> getSettableItemsStorageUpdateHintProvider_;
    id <JavaxInjectProvider> itemsTombstoneEvictorProvider_;
    id <JavaxInjectProvider> getSettingsClientProvider_;
    id <JavaxInjectProvider> deviceSupportsOfflineSearchProvider_;
    id <JavaxInjectProvider> webOfflineProvider_;
    id <JavaxInjectProvider> provideOfflineSearchIndexingEnabledProvider_;
    id <JavaxInjectProvider> getSystemPropertiesClientProvider_;
    id <JavaxInjectProvider> itemsStorageUpdatePublisherProvider_;
    id <JavaxInjectProvider> getSyncReasonsTableControllerProvider_;
    id <JavaxInjectProvider> syncReasonsCoordinatorProvider_;
    id <JavaxInjectProvider> enableClassicGmailUpdatesClusterProvider_;
    id <JavaxInjectProvider> systemClustersProvider_;
    id <JavaxInjectProvider> vaultClustersProvider_;
    id <JavaxInjectProvider> outboxEnabledProvider_;
    id <JavaxInjectProvider> forceFetchItemSummaryOnDetailsFetchProvider_;
    id <JavaxInjectProvider> provideIsWorkflowAssistFrameworkEnabledProvider_;
    id <JavaxInjectProvider> getWorkflowAssistVisibilitySettingsProvider_;
    id <JavaxInjectProvider> getItemsQueryProtoCacheProvider_;
    id <JavaxInjectProvider> showScheduledLabelInLeftNavProvider_;
    id <JavaxInjectProvider> includeAssistiveTravelClusterProvider_;
    id <JavaxInjectProvider> includeAssistivePurchaseClusterProvider_;
    id <JavaxInjectProvider> archivedFolderEnabledProvider_;
    id <JavaxInjectProvider> getMessageVisibilityHelperFactoryProvider_;
    id <JavaxInjectProvider> itemMessageDocAttachmentsCoordinatorProvider_;
    id <JavaxInjectProvider> itemsCoordinatorProvider_;
    id <JavaxInjectProvider> getItemVisibilityUpdateWorkTableControllerProvider_;
    id <JavaxInjectProvider> processItemVisibilityUpdateWorkJobFactoryProvider_;
    id <JavaxInjectProvider> xplatCountersApiProvider_;
    id <JavaxInjectProvider> increaseVisibilityRecalculationBatchSizeProvider_;
    id <JavaxInjectProvider> getActiveItemsTrackerProvider_;
    id <JavaxInjectProvider> enableDaysToSyncProvider_;
    id <JavaxInjectProvider> provideDefaultDaysToSyncSettingProvider_;
    id <JavaxInjectProvider> maxItemsToSyncProvider_;
    id <JavaxInjectProvider> targetDaysToSyncValueOverrideProvider_;
    id <JavaxInjectProvider> maxItemsToSyncWithTargetDaysProvider_;
    id <JavaxInjectProvider> targetItemsToSyncProvider_;
    id <JavaxInjectProvider> provideTargetItemsToSyncProvider_;
    id <JavaxInjectProvider> provideEvictionFinishedSettableProvider_;
    id <JavaxInjectProvider> xplatDbTableControllersProvider_;
    id <JavaxInjectProvider> itemsEvictorJobFactoryProvider_;
    id <JavaxInjectProvider> bulkChangesHelperProvider_;
    id <JavaxInjectProvider> processLocalBulkOpWorkJobFactoryProvider_;
    id <JavaxInjectProvider> settableProvider_;
    id <JavaxInjectProvider> localBulkOpWorkProcessorProvider_;
    id <JavaxInjectProvider> shouldRecalculateItemVisibilityOnStartupProvider_;
    id <JavaxInjectProvider> itemsControllersInitJobFactoryProvider_;
    id <JavaxInjectProvider> syncHealthRecorderInitJobFactoryProvider_;
    id <JavaxInjectProvider> timeServiceProvider_;
    id <JavaxInjectProvider> getWorkflowAssistVisibilitySettingsProvider2_;
    id <JavaxInjectProvider> itemVisibilityRecalculationSchedulerProvider_;
    id <JavaxInjectProvider> jobJoiningExecutorProvider_;
    id <JavaxInjectProvider> getLabelCountsTableControllerProvider_;
    id <JavaxInjectProvider> labelCountsCacheProvider_;
    id <JavaxInjectProvider> postCriticalStartObservableProvider_;
    id <JavaxInjectProvider> getObservableProvider_;
    id <JavaxInjectProvider> labelCountsCoordinatorProvider_;
    id <JavaxInjectProvider> isIntegrationTestProvider_;
    id <JavaxInjectProvider> provideItemsStorageComponentLifecycleProvider_;
    id <JavaxInjectProvider> getItemsSyncStateTableControllerProvider_;
    id <JavaxInjectProvider> getVisibleLabelsFetcherProvider_;
    id <JavaxInjectProvider> itemsQueryExecutorProvider_;
    id <JavaxInjectProvider> sectionedInboxPromosHelperProvider_;
    id <JavaxInjectProvider> getTopPromoEntriesFetcherProvider_;
    id <JavaxInjectProvider> sectionTeaserHelperProvider_;
    id <JavaxInjectProvider> topPromoEnabledProvider_;
    id <JavaxInjectProvider> staleResultsTrimmerProvider_;
    id <JavaxInjectProvider> itemsQueryManagerProvider_;
    id <JavaxInjectProvider> bulkItemChangesCoordinatorProvider_;
    id <JavaxInjectProvider> itemChangeTransformerProvider_;
    id <JavaxInjectProvider> changeBatcherProvider_;
    id <JavaxInjectProvider> defaultSyncSubscriptionMessagesLackingDetailsCalculatorProvider_;
    id <JavaxInjectProvider> getFiltersTableControllerProvider_;
    id <JavaxInjectProvider> filterChangesCoordinatorProvider_;
}

- (void)dealloc;
- (id)getSettableEvictionFinished;
- (id)getObservableEvictionFinished;
- (id)getFilterChangesCoordinator;
- (id)getItemsStorageUpdateHintCalculator;
- (id)getLabelCountsCoordinator;
- (id)getItemVisibilityUpdateWorkProcessor;
- (id)getItemVisibilityRecalculationScheduler;
- (id)getItemsTombstoneEvictor;
- (id)getItemsQueryManager;
- (id)getItemsStorageUpdatePublisher;
- (id)getSyncReasonsCoordinator;
- (id)getLocalBulkOpWorkProcessor;
- (id)getDefaultSyncSubscriptionMessagesLackingDetailsCalculator;
- (id)getChangeBatcher;
- (id)getSyncHealthRecorder;
- (id)getItemsEvictorJobFactory;
- (id)getItemsEvictor;
- (id)getItemChangeTransformer;
- (id)getProcessLocalBulkOpWorkJobFactory;
- (id)getBulkItemsChangesCoordinator;
- (id)getBulkChangesHelper;
- (id)getChangesCoordinator;
- (id)getClustersCoordinator;
- (id)getItemsCoordinator;
- (id)getLifecycle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

