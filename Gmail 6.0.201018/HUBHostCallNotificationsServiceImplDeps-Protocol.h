//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOProvider;
@protocol GCKCallsGuestNotificationsService, HUBAppScopedAppAvailabilityService;

@protocol HUBHostCallNotificationsServiceImplDeps <NSObject>
@property(readonly, nonatomic) GOOProvider *callsGuestNotificationsServiceProvider;
@property(readonly, nonatomic) GOOProvider *appScopedAppAvailabilityServiceProvider;
@property(readonly, nonatomic) id <GCKCallsGuestNotificationsService> callsGuestNotificationsService;
@property(readonly, nonatomic) id <HUBAppScopedAppAvailabilityService> appScopedAppAvailabilityService;
@end
