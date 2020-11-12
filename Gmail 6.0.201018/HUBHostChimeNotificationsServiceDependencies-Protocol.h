//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOAccountScopedProvider, GOOProvider;
@protocol DYNGuestChimeNotificationsService, DYNGuestNotificationRegistrationService, GBTGuestChimeNotificationsService, GBTGuestNotificationRegistrationService, GIPAccountID, GSCAccountsService, HUBAppAvailabilityService, HUBAppScopedAppAvailabilityService, SSOService;

@protocol HUBHostChimeNotificationsServiceDependencies <NSObject>
@property(readonly, nonatomic) GOOProvider *SSOServiceProvider;
@property(readonly, nonatomic) GOOProvider *gbtGuestNotificationRegistrationServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *gbtGuestChimeNotificationsServiceProvider;
@property(readonly, nonatomic) GOOProvider *dynGuestNotificationRegistrationServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *dynGuestChimeNotificationsServiceProvider;
@property(readonly, nonatomic) GOOProvider *appScopedAppAvailabilityServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *appAvailabilityServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider;
@property(readonly, nonatomic) id <SSOService> SSOService;
@property(readonly, nonatomic) id <GBTGuestNotificationRegistrationService> gbtGuestNotificationRegistrationService;
@property(readonly, nonatomic) id <DYNGuestNotificationRegistrationService> dynGuestNotificationRegistrationService;
@property(readonly, nonatomic) id <HUBAppScopedAppAvailabilityService> appScopedAppAvailabilityService;
@property(readonly, nonatomic) id <GSCAccountsService> accountsService;
- (id <GBTGuestChimeNotificationsService>)gbtGuestChimeNotificationsServiceWithAccountID:(id <GIPAccountID>)arg1;
- (id <DYNGuestChimeNotificationsService>)dynGuestChimeNotificationsServiceWithAccountID:(id <GIPAccountID>)arg1;
- (id <HUBAppAvailabilityService>)appAvailabilityServiceWithAccountID:(id <GIPAccountID>)arg1;
@end
