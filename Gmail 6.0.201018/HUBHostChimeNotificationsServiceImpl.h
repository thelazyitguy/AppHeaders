//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBHostGoogleNotificationsService-Protocol.h"

@class CHMConfiguration, CHMNotificationsService, NSString;
@protocol HUBHostChimeNotificationsServiceDependencies;

@interface HUBHostChimeNotificationsServiceImpl : NSObject <HUBHostGoogleNotificationsService>
{
    CHMConfiguration *_configuration;
    CHMNotificationsService *_notificationService;
    id <HUBHostChimeNotificationsServiceDependencies> _services;
}

- (void).cxx_destruct;
- (id)convertChimeBadgeResult:(id)arg1;
- (id)allActiveGaiaAccounts;
- (_Bool)isNotificationClientIDSameAsChimeConfiguration:(id)arg1;
- (id)fetchMultiUserBadgeCounts;
- (id)updateThreadReadStateForNotification:(id)arg1;
- (void)dismissReadNotificationsIfNeededForNotification:(id)arg1;
- (void)setLazyRegistrationInterval:(double)arg1;
- (id)unregisterAllAccountsWithDeviceToken:(id)arg1;
- (id)bulkRegisterForNotificationsForAllActiveAccountsWithDeviceToken:(id)arg1;
- (id)initWithHostChimeNotificationsServiceDependencies:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
