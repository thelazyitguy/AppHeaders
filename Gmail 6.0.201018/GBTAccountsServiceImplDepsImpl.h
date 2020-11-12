//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTAccountsServiceImplDeps-Protocol.h"

@class GOOProvider, NSArray, NSString;
@protocol GBTAccountProviderService, GBTAuthorizationService, GBTIMAPAccountProviderService, HUBAccountsUIService, SSOService;

@interface GBTAccountsServiceImplDepsImpl : NSObject <GBTAccountsServiceImplDeps>
{
    GOOProvider *_accountProviderServiceProvider;
    GOOProvider *_accountsUIServiceProvider;
    GOOProvider *_authorizationServiceProvider;
    GOOProvider *_IMAPAccountProviderServiceProvider;
    GOOProvider *_SSOServiceProvider;
    GOOProvider *_accountWipeoutHandlersProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *accountWipeoutHandlersProvider; // @synthesize accountWipeoutHandlersProvider=_accountWipeoutHandlersProvider;
@property(readonly, nonatomic) GOOProvider *SSOServiceProvider; // @synthesize SSOServiceProvider=_SSOServiceProvider;
@property(readonly, nonatomic) GOOProvider *IMAPAccountProviderServiceProvider; // @synthesize IMAPAccountProviderServiceProvider=_IMAPAccountProviderServiceProvider;
@property(readonly, nonatomic) GOOProvider *authorizationServiceProvider; // @synthesize authorizationServiceProvider=_authorizationServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsUIServiceProvider; // @synthesize accountsUIServiceProvider=_accountsUIServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountProviderServiceProvider; // @synthesize accountProviderServiceProvider=_accountProviderServiceProvider;
@property(readonly, nonatomic) NSArray *accountWipeoutHandlers;
@property(readonly, nonatomic) id <SSOService> SSOService;
@property(readonly, nonatomic) id <GBTIMAPAccountProviderService> IMAPAccountProviderService;
@property(readonly, nonatomic) id <GBTAuthorizationService> authorizationService;
@property(readonly, nonatomic) id <HUBAccountsUIService> accountsUIService;
@property(readonly, nonatomic) id <GBTAccountProviderService> accountProviderService;
- (id)initWithAccountProviderServiceProvider:(id)arg1 accountsUIServiceProvider:(id)arg2 authorizationServiceProvider:(id)arg3 IMAPAccountProviderService:(id)arg4 SSOServiceProvider:(id)arg5 accountWipeoutHandlersProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
