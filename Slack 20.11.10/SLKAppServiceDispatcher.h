//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _TtP5Slack23AppCoordinatorInterface_;

@interface SLKAppServiceDispatcher : NSObject
{
    // Error parsing type: , name: appCoordinator
    // Error parsing type: , name: pushNotificationService
    // Error parsing type: , name: notificationClearingService
    // Error parsing type: , name: applicationBadgeNumberService
    // Error parsing type: , name: bgTaskRegistrationService
    // Error parsing type: , name: callsManagementService
    // Error parsing type: , name: conversationRefreshTaskScheduler
    // Error parsing type: , name: teamSwitchService
    // Error parsing type: , name: localDraftSyncingService
    // Error parsing type: , name: sharedChannelInviteRedirectService
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAppServiceFactoryObj:(id)arg1;
@property(nonatomic, readonly) id <_TtP5Slack23AppCoordinatorInterface_> appCoordinator; // @synthesize appCoordinator;
- (void)redirectToSharedChannelInviteOnLoginWithDependencies:(id)arg1 presentingViewController:(id)arg2;
- (void)cleanDraftsWithDependencies:(id)arg1;
- (void)didSwitchToTeamWithTeamId:(id)arg1;
- (void)applicationDidFailToRegisterForRemoteNotifications:(id)arg1 error:(id)arg2;
- (void)applicationDidRegisterForRemoteNotifications:(id)arg1 deviceToken:(id)arg2;
- (void)performPushNotificationRegistrationForLogin;
- (void)performPushNotificationRegistrationForAppLaunchWithIsUserLoggedIn:(_Bool)arg1;
- (void)monitorForApplicationBadgeNumberWithDependencies:(id)arg1;
- (void)monitorForNotificationClearingWithDependencies:(id)arg1;
- (void)scheduleConversationRefreshTaskOnAppBackgrounded;
- (void)monitorForOutgoingCallsWithDependencies:(id)arg1;
- (void)showIncomingCallWithData:(id)arg1 dependencies:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)disconnectCallWithCallSessionClient:(id)arg1;
- (void)performRegistrationForBGTasksWithApplication:(id)arg1 dependencies:(id)arg2;

@end
