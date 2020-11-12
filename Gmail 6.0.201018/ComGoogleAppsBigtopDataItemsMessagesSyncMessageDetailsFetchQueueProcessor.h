//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsFetchQueue, ComGoogleAppsBigtopDataItemsStorageItemsCoordinator, ComGoogleAppsBigtopDataItemsStorageSyncstatusItemsSyncStatusManager, ComGoogleAppsXplatJobsJobQueue, XPTExecutionGuard, XPTIncompleteFuturesSet;
@protocol ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncService, ComGoogleAppsXplatObserveSettable, JBTLoggingCounterManager, JavaxInjectProvider, XPTCountersApi;

@interface ComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsFetchQueueProcessor : NSObject
{
    ComGoogleAppsBigtopDataItemsStorageItemsCoordinator *itemsCoordinator_;
    ComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsFetchQueue *queue_;
    id <ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncService> server_;
    int maxItemsToRequestPerDetailsFetch_;
    int maxMessagesToRequestPerDetailsFetch_;
    _Bool forceFetchItemSummary_;
    id <ComGoogleAppsXplatObserveSettable> begunProcessingMessageDetailsFetchQueue_;
    id <ComGoogleAppsXplatObserveSettable> processedInitialMessageDetailsFetchesInQueue_;
    ComGoogleAppsBigtopDataItemsStorageSyncstatusItemsSyncStatusManager *itemsSyncStatusManager_;
    ComGoogleAppsXplatJobsJobQueue *jobQueue_;
    id <JavaxInjectProvider> executor_;
    XPTExecutionGuard *interactiveFetchGuard_;
    XPTExecutionGuard *nonInteractiveFetchGuard_;
    XPTIncompleteFuturesSet *pendingInteractiveFetches_;
    XPTIncompleteFuturesSet *pendingNonInteractiveFetches_;
    // Error parsing type: AB, name: firstCallToProcessQueueAsync_
    id <XPTCountersApi> countersApi_;
    id <JBTLoggingCounterManager> counterManager_;
}

+ (void)initialize;
- (void)dealloc;
- (_Bool)canFulfillQueuedFetchWithResponseWithComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsFetchQueue_QueuedFetch:(id)arg1 withLong:(long long)arg2;
- (id)processQueueAsync;

@end
