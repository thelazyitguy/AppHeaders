//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsItemlistsItemListsServiceComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsItemlistsDaggerItemListsServiceComponentImpl : NSObject <ComGoogleAppsBigtopDataItemsItemlistsItemListsServiceComponentImpl>
{
    id <JavaxInjectProvider> currentJobExecutorProvider_;
    id <JavaxInjectProvider> rootLifecycleProvider_;
    id <JavaxInjectProvider> getActiveItemsTrackerProvider_;
    id <JavaxInjectProvider> getChronologicalSearchItemListEntryFetcherProvider_;
    id <JavaxInjectProvider> getListByIdsItemListEntryFetcherProvider_;
    id <JavaxInjectProvider> getQueryBasedItemListEntryFetcherProvider_;
    id <JavaxInjectProvider> dispatchingItemListEntryFetcherProvider_;
    id <JavaxInjectProvider> enableUploadOnlySyncProvider_;
    id <JavaxInjectProvider> runEvictionAfterStoppingItemListsProvider_;
    id <JavaxInjectProvider> getItemsBackfillerProvider_;
    id <JavaxInjectProvider> getItemsSyncControlServiceProvider_;
    id <JavaxInjectProvider> servicesSystemProvider_;
    id <JavaxInjectProvider> provideServiceFactoryProvider_;
    id <JavaxInjectProvider> provideServiceStubProvider_;
    id <JavaxInjectProvider> getOptimisticItemListChangeApplierProvider_;
    id <JavaxInjectProvider> getItemListSnapshotObserversProvider_;
    id <JavaxInjectProvider> getBackfillItemsEvictorJobFactoryProvider_;
    id <JavaxInjectProvider> getObservableItemsStorageUpdateHintProvider_;
    id <JavaxInjectProvider> getObservableProvider_;
    id <JavaxInjectProvider> getObservableProvider2_;
    id <JavaxInjectProvider> observableProvider_;
    id <JavaxInjectProvider> getChangeRequestedObservableProvider_;
    id <JavaxInjectProvider> settableProvider_;
    id <JavaxInjectProvider> jobQueueProvider_;
    id <JavaxInjectProvider> jobJoiningExecutorProvider_;
    id <JavaxInjectProvider> getSettingsClientProvider_;
    id <JavaxInjectProvider> skipBackfillForSyncedViewsProvider_;
    id <JavaxInjectProvider> getLabelIdsToSyncProvider_;
    id <JavaxInjectProvider> syncSubscriptionProvider_;
    id <JavaxInjectProvider> provideItemsSyncSubscriptionProvider_;
    id <JavaxInjectProvider> provideEnablePerLabelItemSyncSettingsProvider_;
    id <JavaxInjectProvider> syncPriorityInboxLabelsProvider_;
    id <JavaxInjectProvider> providePriorityInboxLabelsSyncedProvider_;
    id <JavaxInjectProvider> itemListViewTypeSyncHelperProvider_;
    id <JavaxInjectProvider> hasPersistentStoreProvider_;
    id <JavaxInjectProvider> getObservableProvider3_;
    id <JavaxInjectProvider> clockProvider_;
    id <JavaxInjectProvider> provideUseSyncToRefreshSyncedLabelsProvider_;
    id <JavaxInjectProvider> itemListSyncStateProvider_;
    id <JavaxInjectProvider> getlustersHaveBeenProducedProvider_;
    id <JavaxInjectProvider> overfetchEnabledProvider_;
    id <JavaxInjectProvider> provideDisableOverfetchForNonInboxViewsProvider_;
    id <JavaxInjectProvider> overfetchCountProvider_;
    id <JavaxInjectProvider> suppressSnapshotsForViewHeldItemsInPriorityInboxProvider_;
    id <JavaxInjectProvider> suppressSnapshotsForViewHeldItemsInSearchProvider_;
    id <JavaxInjectProvider> provideViewHeldActionStateControllerProvider_;
    id <JavaxInjectProvider> adsEnabledProvider_;
    id <JavaxInjectProvider> getAdsItemListSnapshotDecoratorProvider_;
    id <JavaxInjectProvider> itemListManagerProvider_;
    id <JavaxInjectProvider> itemListsServiceServerProvider_;
}

- (void)dealloc;
- (id)getMemoryItemListProvider;
- (id)getItemListConfigProvider;
- (id)getItemListsService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
