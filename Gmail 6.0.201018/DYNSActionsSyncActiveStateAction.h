//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaUtilOptional;
@protocol DYNSCommonAppFocusStateTracker, DYNSCommonDeviceNotificationEnablingTracker, DYNSNetworkApiWebChannelPushService, DYNSNetworkApiWebChannelSendService, JavaUtilConcurrentScheduledExecutorService;

@interface DYNSActionsSyncActiveStateAction : NSObject
{
    id lock_;
    id <DYNSCommonAppFocusStateTracker> appFocusStateTracker_;
    id <DYNSCommonDeviceNotificationEnablingTracker> deviceNotificationEnablingTracker_;
    id <JavaUtilConcurrentScheduledExecutorService> activeStateExecutor_;
    id <DYNSNetworkApiWebChannelSendService> webChannelSendService_;
    id <DYNSNetworkApiWebChannelPushService> webChannelPushService_;
    _Bool isActive_;
    JavaUtilOptional *clientInteractiveStateOptional_;
    JavaUtilOptional *pendingPingEvent_;
}

+ (void)initialize;
- (void)dealloc;
- (id)syncOnClientStateChangedWithDYNProtoPingEvent_ClientInteractiveState:(id)arg1;
- (id)executeWithBoolean:(_Bool)arg1;

@end
