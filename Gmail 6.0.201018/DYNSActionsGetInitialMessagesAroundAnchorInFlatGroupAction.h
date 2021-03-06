//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSDataUiMessageConverter, DYNSNetworkConnectivityOfflineExceptionHandler, DYNSSyncV2GetInitialMessagesAroundAnchorInFlatGroupLauncher, DYNSSyncV2SubscriptionsUiSubscriptionManager;
@protocol ComGoogleAppsXplatObserveSettable, DYNSNetworkConnectivityNetworkConnectionState, DYNSStorageApiFlatGroupStorageCoordinator, DYNSStorageApiTopicMessageStorageController, DYNSSyncApiSmartReplyManager, DYNSSyncStatePendingMessagesState, JavaxInjectProvider;

@interface DYNSActionsGetInitialMessagesAroundAnchorInFlatGroupAction : NSObject
{
    id <DYNSStorageApiFlatGroupStorageCoordinator> flatGroupStorageCoordinator_;
    id <JavaxInjectProvider> executorProvider_;
    id <ComGoogleAppsXplatObserveSettable> messageEventsSettable_;
    DYNSSyncV2GetInitialMessagesAroundAnchorInFlatGroupLauncher *getInitialMessagesAroundAnchorInFlatGroupLauncher_;
    id <DYNSNetworkConnectivityNetworkConnectionState> networkConnectionState_;
    DYNSNetworkConnectivityOfflineExceptionHandler *offlineExceptionHandler_;
    id <DYNSSyncStatePendingMessagesState> pendingMessagesState_;
    id <DYNSSyncApiSmartReplyManager> smartReplyManager_;
    id <DYNSStorageApiTopicMessageStorageController> topicMessageStorageController_;
    DYNSDataUiMessageConverter *uiMessageConverter_;
    DYNSSyncV2SubscriptionsUiSubscriptionManager *uiSubscriptionManager_;
}

+ (void)initialize;
- (void)dealloc;
- (id)executeAroundAnchorMessageWithDYNSCommonGroupId:(id)arg1 withDYNSCommonMessageId:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)executeAroundAnchorTimestampWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3 withInt:(int)arg4;

@end

