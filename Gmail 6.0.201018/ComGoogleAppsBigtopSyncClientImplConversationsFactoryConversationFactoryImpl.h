//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplConversationsFactoryApiConversationFactory-Protocol.h"

@class ComGoogleAppsBigtopDataMultiloginMultiLoginUrlRewriter, ComGoogleAppsBigtopServicesGmailCommonComponentSummaryThreadDataFactory, ComGoogleAppsBigtopSyncClientImplCommonCaribouUrls, ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplCommonUserinfoUserInfo, ComGoogleAppsBigtopSyncClientImplConversationsFactoryProfilePictures, ComGoogleAppsBigtopSyncClientImplLabelsVisibleVisibleLabelFactory, ComGoogleAppsBigtopSyncClientImplLivelistLiveListsManager, ComGoogleAppsBigtopSyncClientImplStarsStarStateCalculator, JBTCResolvableAsyncProvider, JBTLoggingUserActionRecorder, NSString;
@protocol ComGoogleAppsBigtopDataItemsCalendarApiCalendarEventDataService, ComGoogleAppsBigtopSyncClientImplConversationsFactoryApiThreadStateManagerFactory, ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory, ComGoogleAppsXplatDaggerAsyncProvider, ComGoogleCommonTimeClock, DaggerLazy, JBTLoggingCounterManager, JBTSettingsClient, JBTTranslationHelper, XPTCountersApi;

@interface ComGoogleAppsBigtopSyncClientImplConversationsFactoryConversationFactoryImpl : NSObject <ComGoogleAppsBigtopSyncClientImplConversationsFactoryApiConversationFactory>
{
    JBTCResolvableAsyncProvider *conversations_;
    _Bool enableStandaloneTasksAndLocation_;
    _Bool readReceiptsEnabled_;
    id <ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransactionFactory> transactionFactory_;
    ComGoogleAppsBigtopSyncClientImplCommonUserinfoUserInfo *userInfo_;
    JBTCResolvableAsyncProvider *taskFactory_;
    id <ComGoogleCommonTimeClock> clock_;
    id <JBTTranslationHelper> translationHelper_;
    ComGoogleAppsBigtopDataMultiloginMultiLoginUrlRewriter *multiLoginUrlRewriter_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *autoSpanFactory_;
    id <DaggerLazy> smartMailInfoFactory_;
    id <DaggerLazy> attachmentFactory_;
    id <DaggerLazy> smartMailCommandApplier_;
    id <DaggerLazy> lastSnoozeTracker_;
    id <DaggerLazy> snoozeConfigFactory_;
    id <DaggerLazy> snoozeCommandResultFactory_;
    id <DaggerLazy> snoozeTimeFactory_;
    id <DaggerLazy> dueDateFactory_;
    _Bool isDelegationMode_;
    id <JBTSettingsClient> settingsClient_;
    JBTLoggingUserActionRecorder *userActionRecorder_;
    id <ComGoogleAppsBigtopSyncClientImplConversationsFactoryApiThreadStateManagerFactory> threadStateManagerFactory_;
    ComGoogleAppsBigtopSyncClientImplLivelistLiveListsManager *liveListsManager_;
    id <DaggerLazy> rankRationaleFactory_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    id <DaggerLazy> metrics_;
    ComGoogleAppsBigtopSyncClientImplCommonCaribouUrls *caribouUrls_;
    _Bool snoozeOnGmailEnabled_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> calendarEventDataFactory_;
    id <ComGoogleAppsBigtopDataItemsCalendarApiCalendarEventDataService> calendarEventDataService_;
    ComGoogleAppsBigtopSyncClientImplLabelsVisibleVisibleLabelFactory *visibleLabelFactory_;
    ComGoogleAppsBigtopSyncClientImplStarsStarStateCalculator *starStateCalculator_;
    id <JBTLoggingCounterManager> counterManager_;
    id <XPTCountersApi> countersApi_;
    ComGoogleAppsBigtopSyncClientImplConversationsFactoryProfilePictures *profilePictures_;
    _Bool messageBasedUiEnabled_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> sendingMonitorProvider_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> subjectPrefixHelperProvider_;
    _Bool topPromoEventReporting_;
    _Bool isImapAccount_;
    ComGoogleAppsBigtopServicesGmailCommonComponentSummaryThreadDataFactory *summaryThreadDataFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (id)copyConversationWithJBTConversation:(id)arg1;
- (id)createDetailedConversationWithJBTId:(id)arg1 withComGoogleAppsBigtopServicesGmailCommonComponentDetailedThreadData:(id)arg2 withComGoogleCommonCollectImmutableSet:(id)arg3 withComGoogleAppsBigtopSyncClientImplProducersChangeListMetadata:(id)arg4 withJavaUtilList:(id)arg5 withJavaUtilList:(id)arg6 withJavaUtilList:(id)arg7 withJavaUtilList:(id)arg8 withComGoogleCommonBaseOptional:(id)arg9 withComGoogleCommonBaseOptional:(id)arg10;
- (id)createDetailedConversationWithJBTId:(id)arg1 withComGoogleAppsBigtopServicesGmailCommonComponentDetailedThreadData:(id)arg2 withComGoogleCommonCollectImmutableSet:(id)arg3 withComGoogleAppsBigtopSyncClientImplProducersChangeListMetadata:(id)arg4 withJavaUtilList:(id)arg5 withJavaUtilList:(id)arg6 withComGoogleCommonBaseOptional:(id)arg7 withComGoogleCommonBaseOptional:(id)arg8;
- (id)createConversationWithJBTId:(id)arg1 withComGoogleAppsBigtopServicesGmailCommonComponentSummaryItemData:(id)arg2 withComGoogleCommonCollectImmutableSet:(id)arg3 withComGoogleAppsBigtopSyncClientImplProducersChangeListMetadata:(id)arg4 withJavaUtilList:(id)arg5 withJavaUtilList:(id)arg6 withJavaUtilList:(id)arg7 withJavaUtilList:(id)arg8 withComGoogleCommonBaseOptional:(id)arg9 withComGoogleCommonBaseOptional:(id)arg10;
- (id)createConversationWithJBTId:(id)arg1 withComGoogleAppsBigtopServicesGmailCommonComponentSummaryOrDetailedThreadData:(id)arg2 withComGoogleCommonCollectImmutableSet:(id)arg3 withComGoogleAppsBigtopSyncClientImplProducersChangeListMetadata:(id)arg4 withJavaUtilList:(id)arg5 withJavaUtilList:(id)arg6 withJavaUtilList:(id)arg7 withJavaUtilList:(id)arg8 withComGoogleCommonBaseOptional:(id)arg9 withComGoogleCommonBaseOptional:(id)arg10;
- (id)createConversationWithJBTId:(id)arg1 withComGoogleAppsBigtopServicesGmailCommonComponentSummaryOrDetailedThreadData:(id)arg2 withComGoogleCommonCollectImmutableSet:(id)arg3 withComGoogleAppsBigtopSyncClientImplProducersChangeListMetadata:(id)arg4 withJavaUtilList:(id)arg5 withJavaUtilList:(id)arg6 withComGoogleCommonBaseOptional:(id)arg7 withComGoogleCommonBaseOptional:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
