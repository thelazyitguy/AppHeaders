//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTAccountsServiceListener-Protocol.h"
#import "GBTNotificationService-Protocol.h"

@class GBTLocalNotification, GBTNotification, GBTRemoteNotification, NSMutableArray, NSString;
@protocol GBTNotificationServiceImplDeps, GBTOpenableNotification, HUBPerformanceMonitoringContext;

@interface GBTNotificationServiceImpl : NSObject <GBTNotificationService, GBTAccountsServiceListener>
{
    id <GBTNotificationServiceImplDeps> _deps;
    NSMutableArray *_eventLoggingPromises;
    NSMutableArray *_eventLoggingPromisesAssociatedEmails;
    id <HUBPerformanceMonitoringContext> _pendingPerformanceMonitoringContext;
    id <HUBPerformanceMonitoringContext> _activePerformanceMonitoringContext;
    GBTLocalNotification<GBTOpenableNotification> *_localNotification;
    GBTRemoteNotification<GBTOpenableNotification> *_remoteNotification;
    GBTNotification<GBTOpenableNotification> *_pendingOpenableNotification;
    GBTNotification<GBTOpenableNotification> *_activeOpenableNotification;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GBTNotification<GBTOpenableNotification> *activeOpenableNotification; // @synthesize activeOpenableNotification=_activeOpenableNotification;
@property(retain, nonatomic) GBTNotification<GBTOpenableNotification> *pendingOpenableNotification; // @synthesize pendingOpenableNotification=_pendingOpenableNotification;
@property(retain, nonatomic) GBTRemoteNotification<GBTOpenableNotification> *remoteNotification; // @synthesize remoteNotification=_remoteNotification;
@property(retain, nonatomic) GBTLocalNotification<GBTOpenableNotification> *localNotification; // @synthesize localNotification=_localNotification;
- (void)authenticatorDidFinishSignInWithAccount:(id)arg1 error:(id)arg2;
- (_Bool)isBigtopNotificationEligibleForSync:(id)arg1;
- (void)didReceiveRemoteNotificationInForeground:(id)arg1;
- (id)didReceiveNotificationResponse:(id)arg1;
- (id)gaiaAccountIDFromUserInfo:(id)arg1;
- (void)processNotificationUserInfo:(id)arg1 fetchCompletionHandler:(CDUnknownBlockType)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleBackgroundActionWithIdentifier:(id)arg1 notificationUserInfo:(id)arg2 fromRemoteNotification:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleLocalNotificationWithResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleRemoteNotification:(id)arg1 withActionIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearPendingOpenableNotification;
- (void)loadPendingOpenableNotification;
- (void)enqueueOpenableNotification:(id)arg1;
- (void)maybeLaunchLocalNotification;
- (void)maybeLaunchRemoteNotification;
- (id)initWithNotificationServiceImplDeps:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
