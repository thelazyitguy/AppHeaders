//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSSyncWebChannelPushEventDispatcher-Protocol.h"

@class DYNSDataModelsConvertersMessageConverter, DYNSSyncApiRevisionedEventConverter, DYNSSyncV2EntitiesGroupEntityManagerRegistry, DYNSSyncV2GetGroupSyncLauncher, DYNSSyncV2GroupEventHandlerLauncher, DYNSSyncV2UserEventHandlerLauncher, DYNSSyncV2WebChannelEventBufferManager, DYNSSyncWebChannelPushEventDispatcherImpl_WebChannelPushEventObserver, JavaUtilConcurrentAtomicAtomicBoolean, NSString;
@protocol ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser, ComGoogleAppsXplatObserveObservable, ComGoogleAppsXplatObserveSettable, DYNSAnalyticsClearcutEventsLogger, DYNSFlagsSharedConfiguration, DYNSStatusApiUserStatusManager, DYNSSyncApiSmartReplyManager, DYNSSyncStateUnviewedInvitedRoomsCountManager, JavaUtilConcurrentExecutor;

@interface DYNSSyncWebChannelPushEventDispatcherImpl : NSObject <DYNSSyncWebChannelPushEventDispatcher>
{
    DYNSSyncWebChannelPushEventDispatcherImpl_WebChannelPushEventObserver *webChannelPushEventObserver_;
    id <ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser> accountUser_;
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    id <JavaUtilConcurrentExecutor> executor_;
    DYNSSyncV2GetGroupSyncLauncher *getGroupSyncLauncher_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
    DYNSSyncV2GroupEventHandlerLauncher *groupEventHandlerLauncher_;
    DYNSDataModelsConvertersMessageConverter *messageConverter_;
    id <ComGoogleAppsXplatObserveObservable> pushEventObservable_;
    DYNSSyncApiRevisionedEventConverter *revisionedEventConverter_;
    id <ComGoogleAppsXplatObserveSettable> typingStateChangedEventSettable_;
    id <ComGoogleAppsXplatObserveSettable> webChannelPushNotificationEventSettable_;
    id <DYNSFlagsSharedConfiguration> configuration_;
    id <DYNSSyncApiSmartReplyManager> smartReplyManager_;
    id <DYNSSyncStateUnviewedInvitedRoomsCountManager> unviewedInvitedRoomsCountManager_;
    DYNSSyncV2UserEventHandlerLauncher *userEventHandlerLauncher_;
    id <DYNSStatusApiUserStatusManager> userStatusManager_;
    DYNSSyncV2WebChannelEventBufferManager *webChannelEventBufferManager_;
    JavaUtilConcurrentAtomicAtomicBoolean *initialized_;
}

+ (void)initialize;
- (void)dealloc;
- (void)initialize__;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
