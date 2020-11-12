//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatSubscribePublisher-Protocol.h"

@class ComGoogleAppsXplatJobsJobJoiningExecutor, DYNSSyncV2SubscriptionsSpamDmInvitesListPaginatedWorldHelper, DYNSSyncV2SubscriptionsSpamDmInvitesListSnapshotPublisher, DYNSSyncV2SubscriptionsSpamDmInvitesListStore, DYNSUIModelsSpamDmInvitesListConfig, JavaUtilConcurrentAtomicAtomicBoolean, JavaUtilOptional, NSString, XPTExecutionGuard, XPTLifecycle;
@protocol ComGoogleAppsXplatObserveObservable, ComGoogleAppsXplatObserveObserver, DYNSUsersApiUserManager, JavaUtilMap, JavaxInjectProvider;

@interface DYNSSyncV2SubscriptionsSpamDmInvitesListPublisher : NSObject <ComGoogleAppsXplatSubscribePublisher>
{
    id <JavaxInjectProvider> executorProvider_;
    ComGoogleAppsXplatJobsJobJoiningExecutor *jobJoiningExecutor_;
    DYNSSyncV2SubscriptionsSpamDmInvitesListPaginatedWorldHelper *spamDmInvitesListPaginatedWorldHelper_;
    DYNSSyncV2SubscriptionsSpamDmInvitesListSnapshotPublisher *spamDmInvitesListSnapshotPublisher_;
    id <DYNSUsersApiUserManager> userManager_;
    XPTLifecycle *lifecycle_;
    id lock_;
    XPTExecutionGuard *syncListFromServerExecutionGuard_;
    XPTExecutionGuard *groupDataUpdatedEventsExecutionGuard_;
    id <ComGoogleAppsXplatObserveObservable> connectionChangedEventObservable_;
    id <ComGoogleAppsXplatObserveObservable> groupDataUpdatedObservable_;
    id <ComGoogleAppsXplatObserveObservable> uiMembersUpdatedEventObservable_;
    id <ComGoogleAppsXplatObserveObserver> connectionChangedEventObserver_;
    id <ComGoogleAppsXplatObserveObserver> groupDataUpdatedObserver_;
    id <ComGoogleAppsXplatObserveObserver> uiMembersUpdatedEventObserver_;
    DYNSUIModelsSpamDmInvitesListConfig *config_;
    JavaUtilOptional *currentUiSpamDmInvitesList_;
    DYNSSyncV2SubscriptionsSpamDmInvitesListStore *spamDmInvitesListStore_;
    id <JavaUtilMap> updatedGroupsMap_;
    JavaUtilConcurrentAtomicAtomicBoolean *shouldRecoverFromNetworkIssue_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getLifecycle;
- (id)changeConfigurationWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
