//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory, ComGoogleAppsBigtopServicesGmailCommonComponentSummaryOrDetailedThreadDataFactory, ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplCommonScheduler, ComGoogleAppsBigtopSyncClientImplLivelistLiveListsManager, ComGoogleAppsBigtopSyncClientImplSearchAsyncDebugInfoFetcher, ComGoogleAppsBigtopSyncClientImplSearchAsyncQueryReplacementItemImpl_Factory, ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchContactImpl_Factory, ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchInteractionRecorder_Factory, ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchSectionsFactory, ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchSessionEndLogger_Factory, ComGoogleAppsBigtopSyncClientImplSearchAsyncSpellCorrectionItemImpl_Factory, ComGoogleAppsBigtopSyncClientImplSearchAsyncSuggestionImpl_Factory, ComGoogleAppsBigtopSyncClientImplSearchAsyncZeroStateSuggestionsCache, ComGoogleAppsBigtopSyncClientImplSearchOneboxOneBoxFactory;
@protocol ComGoogleAppsBigtopSyncClientImplCommonLiveListAdaptor, ComGoogleAppsBigtopSyncClientImplConversationsFactoryApiConversationFactory, ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory, ComGoogleAppsBigtopSyncClientImplPrefetchersApiInternalInternalPrefetchers, ComGoogleAppsBigtopSyncClientImplProducersElementProducerFactory, ComGoogleAppsBigtopSyncClientImplSearchNetworkclientNonasyncSearchNetworkClient, ComGoogleAppsBigtopSyncClientImplTasksFactoryApiTaskFactory, ComGoogleAppsXplatDaggerAsyncProvider, DaggerLazy, JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchFactory : NSObject
{
    id <ComGoogleAppsBigtopSyncClientImplConversationsFactoryApiConversationFactory> conversationFactory_;
    id <ComGoogleAppsBigtopSyncClientImplTasksFactoryApiTaskFactory> taskFactory_;
    ComGoogleAppsBigtopSyncClientImplLivelistLiveListsManager *liveListsManager_;
    id <DaggerLazy> contactFetchingListenerFactory_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> markAllAsSeenHelper_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> permanentlyDeleteAllHelper_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> selectAllApplier_;
    id <ComGoogleAppsBigtopSyncClientImplSearchNetworkclientNonasyncSearchNetworkClient> searchNetworkClient_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    ComGoogleAppsBigtopSyncClientImplCommonScheduler *scheduler_;
    int batchChangesDelayMs_;
    int configUpdateDelayMs_;
    id <ComGoogleAppsBigtopSyncClientImplProducersElementProducerFactory> elementProducerFactory_;
    id <ComGoogleAppsBigtopSyncClientImplCommonLiveListAdaptor> liveListAdaptor_;
    ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchContactImpl_Factory *searchContactFactory_;
    ComGoogleAppsBigtopSyncClientImplSearchOneboxOneBoxFactory *oneBoxFactory_;
    ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchSectionsFactory *searchSectionsFactory_;
    id <ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory> transactionFactory_;
    ComGoogleAppsBigtopSyncClientImplSearchAsyncSuggestionImpl_Factory *suggestionFactory_;
    ComGoogleAppsBigtopSyncClientImplSearchAsyncZeroStateSuggestionsCache *zeroStateSuggestionsCache_;
    ComGoogleAppsBigtopSyncClientImplSearchAsyncDebugInfoFetcher *debugInfoFetcher_;
    ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchSessionEndLogger_Factory *searchSessionEndLoggerFactory_;
    ComGoogleAppsBigtopSyncClientImplSearchAsyncSpellCorrectionItemImpl_Factory *spellCorrectionItemFactory_;
    ComGoogleAppsBigtopSyncClientImplSearchAsyncQueryReplacementItemImpl_Factory *queryReplacementItemFactory_;
    id <DaggerLazy> userActionRecorder_;
    ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchInteractionRecorder_Factory *searchInteractionRecorderFactory_;
    id <JavaxInjectProvider> itemListSnapshotVisitorProvider_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    id <JavaxInjectProvider> searchRequestThrottlerProvider_;
    ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory *messageVisibilityHelperFactory_;
    ComGoogleAppsBigtopServicesGmailCommonComponentSummaryOrDetailedThreadDataFactory *summaryOrDetailedThreadDataFactory_;
    id <JavaxInjectProvider> rankLockedItemUpdateEnabled_;
    id <JavaxInjectProvider> starStatePendingChangeObserverHolder_;
    id <ComGoogleAppsBigtopSyncClientImplPrefetchersApiInternalInternalPrefetchers> prefetchers_;
}

- (void)dealloc;
- (id)createSearchSessionId;
- (id)createSearchSessionEndLoggerWithNSString:(id)arg1;
- (id)createZeroStateSuggestions;
- (id)getDebugInfoFetcher;
- (id)getZeroStateSuggestionsCache;
- (id)createResultsWithNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)createSuggestionsWithInt:(int)arg1;

@end
