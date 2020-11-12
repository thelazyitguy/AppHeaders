//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/RCHInterstitialWebviewControllerDelegate-Protocol.h>
#import <Module_Framework/RCHNotificationCenterHelperDelegate-Protocol.h>
#import <Module_Framework/RCHPersistenceBasedResurfacingHelperDelegate-Protocol.h>
#import <Module_Framework/RCHPolledNotificationsHelperDelegate-Protocol.h>
#import <Module_Framework/RCHService-Protocol.h>

@class NSData, NSMutableArray, NSString, RCHAccountListChangeHelper, RCHPersistenceBasedResurfacingHelper, RCHPolledNotificationsHelper;
@protocol CHMEventService, GIKSharedLibraryService, OS_dispatch_queue, RCHAccountIDConverter, RCHInterstitialWebviewControllerProtocol, RCHNotificationCenterHelper, RCHNotificationLoggingProtocol, RCHNotificationsServiceProtocol, RCHPersistenceServiceProtocol, RCHServiceDelegate;

@interface RCHServiceImpl : NSObject <RCHInterstitialWebviewControllerDelegate, RCHNotificationCenterHelperDelegate, RCHPersistenceBasedResurfacingHelperDelegate, RCHPolledNotificationsHelperDelegate, RCHService>
{
    _Bool _enablePolling;
    _Bool _enableNotificationDismissal;
    _Bool _delayNetworkActivities;
    id <RCHServiceDelegate> _delegate;
    id <CHMEventService> _chimeEventService;
    id <GIKSharedLibraryService> _sharedLibraryService;
    id <RCHAccountIDConverter> _accountIDConverter;
    id <RCHNotificationCenterHelper> _notificationCenterHelper;
    RCHPolledNotificationsHelper *_polledNotificationsHelper;
    double _registrationInterval;
    NSString *_APIKey;
    long long _APIEndpoint;
    NSData *_deviceToken;
    id <RCHNotificationLoggingProtocol> _loggingService;
    RCHAccountListChangeHelper *_accountListHelper;
    RCHPersistenceBasedResurfacingHelper *_resurfacingHelper;
    NSMutableArray *_notificationsToBeMarkedAsRead;
    NSData *_outdatedDeviceToken;
    NSObject<OS_dispatch_queue> *_operationQueue;
    id <RCHPersistenceServiceProtocol> _persistenceService;
    id <RCHNotificationsServiceProtocol> _notificationsService;
    id <RCHInterstitialWebviewControllerProtocol> _interstitialController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <RCHInterstitialWebviewControllerProtocol> interstitialController; // @synthesize interstitialController=_interstitialController;
@property(retain, nonatomic) id <RCHNotificationsServiceProtocol> notificationsService; // @synthesize notificationsService=_notificationsService;
@property(retain, nonatomic) id <RCHPersistenceServiceProtocol> persistenceService; // @synthesize persistenceService=_persistenceService;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSData *outdatedDeviceToken; // @synthesize outdatedDeviceToken=_outdatedDeviceToken;
@property(retain, nonatomic) NSMutableArray *notificationsToBeMarkedAsRead; // @synthesize notificationsToBeMarkedAsRead=_notificationsToBeMarkedAsRead;
@property(retain, nonatomic) RCHPersistenceBasedResurfacingHelper *resurfacingHelper; // @synthesize resurfacingHelper=_resurfacingHelper;
@property(retain, nonatomic) RCHAccountListChangeHelper *accountListHelper; // @synthesize accountListHelper=_accountListHelper;
@property(retain, nonatomic) id <RCHNotificationLoggingProtocol> loggingService; // @synthesize loggingService=_loggingService;
@property(retain, nonatomic) NSData *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(nonatomic) long long APIEndpoint; // @synthesize APIEndpoint=_APIEndpoint;
@property(retain, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
@property(nonatomic) double registrationInterval; // @synthesize registrationInterval=_registrationInterval;
@property(nonatomic) _Bool delayNetworkActivities; // @synthesize delayNetworkActivities=_delayNetworkActivities;
@property(nonatomic) _Bool enableNotificationDismissal; // @synthesize enableNotificationDismissal=_enableNotificationDismissal;
@property(nonatomic) _Bool enablePolling; // @synthesize enablePolling=_enablePolling;
@property(retain, nonatomic) RCHPolledNotificationsHelper *polledNotificationsHelper; // @synthesize polledNotificationsHelper=_polledNotificationsHelper;
@property(retain, nonatomic) id <RCHNotificationCenterHelper> notificationCenterHelper; // @synthesize notificationCenterHelper=_notificationCenterHelper;
@property(retain, nonatomic) id <RCHAccountIDConverter> accountIDConverter; // @synthesize accountIDConverter=_accountIDConverter;
@property(retain, nonatomic) id <GIKSharedLibraryService> sharedLibraryService; // @synthesize sharedLibraryService=_sharedLibraryService;
@property(retain, nonatomic) id <CHMEventService> chimeEventService; // @synthesize chimeEventService=_chimeEventService;
@property(nonatomic) __weak id <RCHServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invokeOnMainThreadWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)storeNotificationWithOriginalUserInfo:(id)arg1 fetchedNotification:(id)arg2;
- (id)gaiaIDsOnDevice;
- (void)resurfaceIfNecessaryWithGaiaAccountIDs:(id)arg1 currentIndex:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)executeNotificationsServiceDependentTasksOnForeground;
- (void)executeNotificationsServiceDependentTasksOnLaunch;
- (void)executeNotificationsServiceDependentTasks;
- (void)configureNotificationsServiceDependentServices;
- (void)configureResurfacingHelper;
- (void)configureAccountListHelper;
- (void)unregisterForOutdatedDeviceTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateReadStateForQueuedNotificationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateDeviceTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)executePostNotificationsServiceCreationTasks;
- (void)configureNotificationsServiceWithChimeConfiguration:(id)arg1;
- (void)configureNotificationsServiceIfNecessary;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)polledNotificationsHelper:(id)arg1 didFailToReadNotification:(id)arg2 gaiaAccountID:(id)arg3 error:(id)arg4;
- (void)polledNotificationsHelper:(id)arg1 didReadNotification:(id)arg2 gaiaAccountID:(id)arg3;
- (_Bool)isSurfacedNotification:(id)arg1 forPolledNotificationsHelper:(id)arg2;
- (id)interstitialWebviewControllerForResurfacingHelper:(id)arg1;
- (void)notificationCenterHelper:(id)arg1 didFailToReadNotification:(id)arg2 error:(id)arg3;
- (void)notificationCenterHelper:(id)arg1 didReadNotification:(id)arg2;
- (id)presentingViewControllerForInterstitialWebviewController:(id)arg1;
- (void)resurfaceIfNecessary;
- (void)pollIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (id)initWithSharedLibraryService:(id)arg1 accountIDConverter:(id)arg2 persistenceService:(id)arg3 interstitialController:(id)arg4 notificationCenterHelper:(id)arg5 notificationsService:(id)arg6 loggingService:(id)arg7 enablePolling:(_Bool)arg8 enableNotificationDismissal:(_Bool)arg9 delayNetworkActivities:(_Bool)arg10 registrationInterval:(double)arg11;
- (id)initWithSharedLibraryService:(id)arg1 accountIDConverter:(id)arg2 persistenceService:(id)arg3 interstitialController:(id)arg4 notificationCenterHelper:(id)arg5 APIKey:(id)arg6 APIEndpoint:(long long)arg7 chimeEventService:(id)arg8 enablePolling:(_Bool)arg9 enableNotificationDismissal:(_Bool)arg10 delayNetworkActivities:(_Bool)arg11 registrationInterval:(double)arg12;
- (id)initWithSSOService:(id)arg1 configuration:(id)arg2;
- (id)initWithServiceConfigurationProvider:(id)arg1 ssoService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
