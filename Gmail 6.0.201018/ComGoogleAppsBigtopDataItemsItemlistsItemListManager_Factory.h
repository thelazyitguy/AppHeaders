//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsItemlistsItemListManager_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> rootLifecycleProvider_;
    id <JavaxInjectProvider> activeItemsTrackerProvider_;
    id <JavaxInjectProvider> itemListEntryFetcherProvider_;
    id <JavaxInjectProvider> enableUploadOnlySyncProvider_;
    id <JavaxInjectProvider> runEvictionAfterStoppingItemListsProvider_;
    id <JavaxInjectProvider> itemsBackfillerProvider_;
    id <JavaxInjectProvider> itemsSyncControlServiceProvider_;
    id <JavaxInjectProvider> itemsSyncControlServiceFactoryProvider_;
    id <JavaxInjectProvider> optimisticItemListChangeApplierProvider_;
    id <JavaxInjectProvider> snapshotObserversProvider_;
    id <JavaxInjectProvider> backfillItemsEvictorJobFactoryProvider_;
    id <JavaxInjectProvider> observableItemStorageUpdateProvider_;
    id <JavaxInjectProvider> observableAdChangedEventProvider_;
    id <JavaxInjectProvider> observableTopPromoChangedEventProvider_;
    id <JavaxInjectProvider> pendingChangesProvider_;
    id <JavaxInjectProvider> observableChangeRequestedProvider_;
    id <JavaxInjectProvider> itemListUpdateEventProvider_;
    id <JavaxInjectProvider> jobQueueProvider_;
    id <JavaxInjectProvider> jobJoiningExecutorProvider_;
    id <JavaxInjectProvider> executorProvider_;
    id <JavaxInjectProvider> settingsClientProvider_;
    id <JavaxInjectProvider> skipBackfillForSyncedViewsProvider_;
    id <JavaxInjectProvider> itemListViewTypeSyncHelperProvider_;
    id <JavaxInjectProvider> latestBackfilledServerVersionTrackerProvider_;
    id <JavaxInjectProvider> hasPersistentStoreProvider_;
    id <JavaxInjectProvider> itemListSyncStateProvider_;
    id <JavaxInjectProvider> clustersHaveBeenProducedProvider_;
    id <JavaxInjectProvider> overfetchEnabledProvider_;
    id <JavaxInjectProvider> overfetchCountProvider_;
    id <JavaxInjectProvider> viewHeldActionStateControllerProvider_;
    id <JavaxInjectProvider> adsEnabledProvider_;
    id <JavaxInjectProvider> adsDecoratorProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
