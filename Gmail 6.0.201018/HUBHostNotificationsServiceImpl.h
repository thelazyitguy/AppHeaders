//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBHostNotificationMetricsService-Protocol.h"
#import "HUBHostRemoteNotificationsService-Protocol.h"
#import "HUBHostUserNotificationsService-Protocol.h"

@class NSArray, NSString, PRMTimerCollectible;
@protocol HUBHostNotificationsServiceDependencies;

@interface HUBHostNotificationsServiceImpl : NSObject <HUBHostRemoteNotificationsService, HUBHostUserNotificationsService, HUBHostNotificationMetricsService>
{
    id <HUBHostNotificationsServiceDependencies> _deps;
    NSArray *_guestNotificationsServices;
    NSArray *_guestNotificationRegistrationServices;
    PRMTimerCollectible *_registrationLatencyTimer;
    long long _expectedRegistrations;
}

- (void).cxx_destruct;
- (void)setHubChimeRegistrationModeEnabled;
- (void)clearHubChimeRegistrationIfNeeededWithDeviceToken:(id)arg1;
- (void)clearDynamiteRegistrationIfNeededWithDeviceToken:(id)arg1;
- (void)showUnhandledNotificationSnackbarError;
- (void)processUnhandledNotificationResponseWithResponseActionIdentifier:(id)arg1;
- (id)apnsDeviceTokenHex:(id)arg1;
- (void)storeDeviceToken:(id)arg1;
- (void)maybeUpdateBadgeCountCacheWithUserInfo:(id)arg1;
- (id)notificationContentForForceUpgrade;
- (void)sendUpgradeNotificationIfNeededWithResponseActionIdentifier:(id)arg1;
- (id)notificationContentForUnknownNotificationActionError;
- (_Bool)sendUnknownNotificationActionError;
- (_Bool)shouldForceUpdateForNotification:(id)arg1;
- (id)accountFromNotification:(id)arg1 withGuestService:(id)arg2;
- (void)guestService:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)categoryIDFromNotification:(id)arg1;
- (id)categoryFromUserInfoPayload:(id)arg1;
- (_Bool)guestService:(id)arg1 canHandleNotificationWithCategoryID:(id)arg2;
- (void)setBadgeCount:(long long)arg1;
- (void)registerCategories;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)startCollectingMetricForRegistration:(id)arg1;
- (void)registeredForNotifications;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (id)initWithDeps:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
