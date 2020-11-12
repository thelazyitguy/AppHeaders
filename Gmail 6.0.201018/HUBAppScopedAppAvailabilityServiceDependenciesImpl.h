//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBAppScopedAppAvailabilityServiceDependencies-Protocol.h"

@class GOOAccountScopedProvider, GOOProvider, NSString;
@protocol GSCAccountsService;

@interface HUBAppScopedAppAvailabilityServiceDependenciesImpl : NSObject <HUBAppScopedAppAvailabilityServiceDependencies>
{
    GOOProvider *_accountsServiceProvider;
    GOOAccountScopedProvider *_protectedAppAvailabilityServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOAccountScopedProvider *protectedAppAvailabilityServiceProvider; // @synthesize protectedAppAvailabilityServiceProvider=_protectedAppAvailabilityServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider; // @synthesize accountsServiceProvider=_accountsServiceProvider;
- (id)protectedAppAvailabilityServiceWithAccountID:(id)arg1;
@property(readonly, nonatomic) id <GSCAccountsService> accountsService;
- (id)initWithAccountsServiceProvider:(id)arg1 protectedAppAvailabilityServiceProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
