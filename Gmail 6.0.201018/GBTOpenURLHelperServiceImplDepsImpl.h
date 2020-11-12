//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTOpenURLHelperServiceImplDeps-Protocol.h"

@class GOOProvider, NSString;
@protocol GBTUrlService, GIPAccountID, HUBLinkRouterService, HUBLinkrouterBigtopFeatureService;

@interface GBTOpenURLHelperServiceImplDepsImpl : NSObject <GBTOpenURLHelperServiceImplDeps>
{
    id <GIPAccountID> _accountID;
    GOOProvider *_linkrouterBigtopFeatureServiceProvider;
    GOOProvider *_linkRouterServiceProvider;
    GOOProvider *_urlServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *urlServiceProvider; // @synthesize urlServiceProvider=_urlServiceProvider;
@property(readonly, nonatomic) GOOProvider *linkRouterServiceProvider; // @synthesize linkRouterServiceProvider=_linkRouterServiceProvider;
@property(readonly, nonatomic) GOOProvider *linkrouterBigtopFeatureServiceProvider; // @synthesize linkrouterBigtopFeatureServiceProvider=_linkrouterBigtopFeatureServiceProvider;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) id <GBTUrlService> urlService;
@property(readonly, nonatomic) id <HUBLinkRouterService> linkRouterService;
@property(readonly, nonatomic) id <HUBLinkrouterBigtopFeatureService> linkrouterBigtopFeatureService;
- (id)initWithAccountID:(id)arg1 linkrouterBigtopFeatureServiceProvider:(id)arg2 linkRouterServiceProvider:(id)arg3 urlServiceProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
