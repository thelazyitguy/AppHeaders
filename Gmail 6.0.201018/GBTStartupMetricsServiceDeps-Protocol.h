//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOAccountScopedProvider, GOOProvider;
@protocol GBTAccountsService, GBTEventLoggingService, GBTProtectedGuestAppLifecycleService, GBTTracingManagerService, GIPAccountID, HUBAppStateManager;

@protocol GBTStartupMetricsServiceDeps <NSObject>
@property(readonly, nonatomic) GOOProvider *tracingManagerServiceProvider;
@property(readonly, nonatomic) GOOProvider *protectedGuestAppLifecycleServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *eventLoggingServiceProvider;
@property(readonly, nonatomic) GOOProvider *appStateManagerProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider;
@property(readonly, nonatomic) id <GBTTracingManagerService> tracingManagerService;
@property(readonly, nonatomic) id <GBTProtectedGuestAppLifecycleService> protectedGuestAppLifecycleService;
@property(readonly, nonatomic) id <HUBAppStateManager> appStateManager;
@property(readonly, nonatomic) id <GBTAccountsService> accountsService;
- (id <GBTEventLoggingService>)eventLoggingServiceWithAccountID:(id <GIPAccountID>)arg1;
@end
