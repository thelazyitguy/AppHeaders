//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTAccountsServiceListener-Protocol.h"
#import "GBTRemoteNotificationRegistrationService-Protocol.h"
#import "GBTSyncClientManagerListener-Protocol.h"

@class GBTAccessTokenCollector, NSData, NSString, NSTimer, RegisterRequestFactory;
@protocol GBTRemoteNotificationRegistrationServiceDeps, GBTRemoteNotificationRegistrationStrategy;

@interface GBTRemoteNotificationRegistrationServiceImpl : NSObject <GBTAccountsServiceListener, GBTSyncClientManagerListener, GBTRemoteNotificationRegistrationService>
{
    id <GBTRemoteNotificationRegistrationServiceDeps> _deps;
    _Bool _successfullyRegisteredForNotifications;
    int _failedRegistrationCount;
    NSData *_savedDeviceToken;
    id <GBTRemoteNotificationRegistrationStrategy> _registrationStrategy;
    GBTAccessTokenCollector *_accessTokenCollector;
    RegisterRequestFactory *_registerRequestFactory;
    NSTimer *_retryRegistrationTimer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool successfullyRegisteredForNotifications; // @synthesize successfullyRegisteredForNotifications=_successfullyRegisteredForNotifications;
@property(nonatomic) int failedRegistrationCount; // @synthesize failedRegistrationCount=_failedRegistrationCount;
@property(retain, nonatomic) NSTimer *retryRegistrationTimer; // @synthesize retryRegistrationTimer=_retryRegistrationTimer;
@property(retain, nonatomic) RegisterRequestFactory *registerRequestFactory; // @synthesize registerRequestFactory=_registerRequestFactory;
@property(retain, nonatomic) GBTAccessTokenCollector *accessTokenCollector; // @synthesize accessTokenCollector=_accessTokenCollector;
@property(retain, nonatomic) id <GBTRemoteNotificationRegistrationStrategy> registrationStrategy; // @synthesize registrationStrategy=_registrationStrategy;
@property(retain, nonatomic) NSData *savedDeviceToken; // @synthesize savedDeviceToken=_savedDeviceToken;
- (void)syncClientManager:(id)arg1 didAddSyncClientForAccount:(id)arg2;
- (void)authenticatorDidUnselectAccount:(id)arg1;
- (void)authenticatorDidSelectAccount:(id)arg1;
- (void)authenticatorHasNoAccountsSignedIn;
- (void)experimentChanged:(id)arg1;
- (void)resetRetryRegistrationState;
- (void)scheduleRegistrationTimer;
- (void)clearRegistrationTimer;
- (id)anyEligibleAccountAuthorization;
- (_Bool)emailEligibleForNotifications:(id)arg1;
- (id)accountsEligibleForNotifications;
- (void)sendRegisterRequest:(id)arg1 withAuth:(id)arg2 isDeregister:(_Bool)arg3 forceRetry:(_Bool)arg4;
- (void)deregisterPushNotificationsForAllUsersWithAuth:(id)arg1;
- (void)deregisterPushNotificationsForAllUsers;
- (void)maybeRegisterPushNotificationsForUsersInMap:(id)arg1 errorAccounts:(id)arg2;
- (void)updatePushNotificationsForUsers;
- (_Bool)shouldRegisterPushNotifications;
- (void)checkDeviceTokenAndUpdatePushNotifications;
- (void)triggerOSNotificationRegistrationIfNeeded;
- (id)fetchRemoteBadgeCounts;
- (void)updatePushNotifications;
- (void)didFailAuthorization;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
@property(readonly, copy, nonatomic) NSString *deviceTokenDebugString;
- (void)dealloc;
- (id)initWithDeps:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
