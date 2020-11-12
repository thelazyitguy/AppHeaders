//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBLinkRouterServiceDependencies-Protocol.h"

@class GOOProvider, NSString;
@protocol GIPAccountID, HUBAppRouterService, HUBGrowthKitProtectedService, HUBProjectorService, SSOService;

@interface HUBLinkRouterServiceDependenciesImpl : NSObject <HUBLinkRouterServiceDependencies>
{
    id <GIPAccountID> _accountID;
    GOOProvider *_appRouterServiceProvider;
    GOOProvider *_growthKitProtectedServiceProvider;
    GOOProvider *_projectorServiceProvider;
    GOOProvider *_SSOServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *SSOServiceProvider; // @synthesize SSOServiceProvider=_SSOServiceProvider;
@property(readonly, nonatomic) GOOProvider *projectorServiceProvider; // @synthesize projectorServiceProvider=_projectorServiceProvider;
@property(readonly, nonatomic) GOOProvider *growthKitProtectedServiceProvider; // @synthesize growthKitProtectedServiceProvider=_growthKitProtectedServiceProvider;
@property(readonly, nonatomic) GOOProvider *appRouterServiceProvider; // @synthesize appRouterServiceProvider=_appRouterServiceProvider;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) id <SSOService> SSOService;
@property(readonly, nonatomic) id <HUBProjectorService> projectorService;
@property(readonly, nonatomic) id <HUBGrowthKitProtectedService> growthKitProtectedService;
@property(readonly, nonatomic) id <HUBAppRouterService> appRouterService;
- (id)initWithAccountID:(id)arg1 appRouterServiceProvider:(id)arg2 growthKitProtectedServiceProvider:(id)arg3 projectorServiceProvider:(id)arg4 SSOServiceProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
