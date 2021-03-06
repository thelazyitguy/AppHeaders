//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatSubscribePublisher-Protocol.h"

@class DYNSDataUiMessageConverter, NSString, XPTExecutionGuard, XPTLifecycle;
@protocol ComGoogleAppsXplatObserveObservable, ComGoogleAppsXplatObserveObserver, ComGoogleAppsXplatObserveSettable, DYNSStorageApiTopicMessageStorageController, DYNSSyncStateFailedMessagesState, JavaxInjectProvider;

@interface DYNSSyncV2SubscriptionsMessageDeliveryPublisher : NSObject <ComGoogleAppsXplatSubscribePublisher>
{
    id <DYNSSyncStateFailedMessagesState> failedMessagesState_;
    XPTLifecycle *lifecycle_;
    id <ComGoogleAppsXplatObserveObservable> messageDeliveryEventsObservable_;
    id <ComGoogleAppsXplatObserveObserver> messageDeliveryEventsObserver_;
    id <JavaxInjectProvider> executorProvider_;
    id <ComGoogleAppsXplatObserveSettable> messageDeliverySnapshotSettable_;
    id <DYNSStorageApiTopicMessageStorageController> topicMessageStorageController_;
    DYNSDataUiMessageConverter *uiMessageConverter_;
    XPTExecutionGuard *uiPublishGuard_;
}

+ (void)initialize;
- (void)dealloc;
- (id)changeConfigurationWithId:(id)arg1;
- (id)getLifecycle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

