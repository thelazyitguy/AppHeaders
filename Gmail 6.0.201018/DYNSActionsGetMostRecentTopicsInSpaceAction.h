//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSActionsGetLocalInitialTopicsHelper, DYNSNetworkConnectivityOfflineExceptionHandler, DYNSSyncV2CoordinatorsTopicPaginationHelper, DYNSSyncV2SubscriptionsUiSubscriptionManager;
@protocol DYNSNetworkConnectivityNetworkConnectionState, DYNSStorageApiGroupStorageController, JavaxInjectProvider;

@interface DYNSActionsGetMostRecentTopicsInSpaceAction : NSObject
{
    id <JavaxInjectProvider> executorProvider_;
    DYNSActionsGetLocalInitialTopicsHelper *getLocalInitialTopicsHelper_;
    id <DYNSStorageApiGroupStorageController> groupStorageController_;
    id <DYNSNetworkConnectivityNetworkConnectionState> networkConnectionState_;
    DYNSNetworkConnectivityOfflineExceptionHandler *offlineExceptionHandler_;
    DYNSSyncV2CoordinatorsTopicPaginationHelper *topicPaginationHelper_;
    DYNSSyncV2SubscriptionsUiSubscriptionManager *uiSubscriptionManager_;
}

- (void)dealloc;
- (id)executeWithDYNSCommonSpaceId:(id)arg1 withInt:(int)arg2;

@end
