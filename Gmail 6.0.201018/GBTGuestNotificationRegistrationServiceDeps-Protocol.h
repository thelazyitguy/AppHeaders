//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOProvider;
@protocol GBTAuthzenService, GBTRemoteNotificationRegistrationService;

@protocol GBTGuestNotificationRegistrationServiceDeps <NSObject>
@property(readonly, nonatomic) GOOProvider *remoteNotificationRegistrationServiceProvider;
@property(readonly, nonatomic) GOOProvider *authzenServiceProvider;
@property(readonly, nonatomic) id <GBTRemoteNotificationRegistrationService> remoteNotificationRegistrationService;
@property(readonly, nonatomic) id <GBTAuthzenService> authzenService;
@end
