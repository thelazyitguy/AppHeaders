//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTAppRouterGuestRegistrationServiceDeps-Protocol.h"

@class GOOAccountScopedProvider, GOOProvider, NSString;
@protocol GBTIncomingDeepLinksService;

@interface GBTAppRouterGuestRegistrationServiceDepsImpl : NSObject <GBTAppRouterGuestRegistrationServiceDeps>
{
    GOOAccountScopedProvider *_accountSettingsServiceProvider;
    GOOProvider *_incomingDeepLinksServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *incomingDeepLinksServiceProvider; // @synthesize incomingDeepLinksServiceProvider=_incomingDeepLinksServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *accountSettingsServiceProvider; // @synthesize accountSettingsServiceProvider=_accountSettingsServiceProvider;
@property(readonly, nonatomic) id <GBTIncomingDeepLinksService> incomingDeepLinksService;
- (id)accountSettingsServiceWithAccountID:(id)arg1;
- (id)initWithAccountSettingsServiceProvider:(id)arg1 incomingDeepLinksServiceProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
