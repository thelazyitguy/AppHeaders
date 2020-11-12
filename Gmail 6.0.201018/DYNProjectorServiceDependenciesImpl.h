//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNProjectorServiceDependencies-Protocol.h"

@class GOOProvider, NSString;
@protocol DYNExperimentsService, DYNNavigationService, DYNSharedLayerService, DYNTimerEventLoggingService, GIPAccountID, GSCNavigationService, GSCRootNavigationControllerProvider, HUBLinkRouterService, SSOService;

@interface DYNProjectorServiceDependenciesImpl : NSObject <DYNProjectorServiceDependencies>
{
    id <GIPAccountID> _accountID;
    GOOProvider *_dynNavigationServiceProvider;
    GOOProvider *_experimentsServiceProvider;
    GOOProvider *_gscNavigationServiceProvider;
    GOOProvider *_linkRouterServiceProvider;
    GOOProvider *_navigationProviderProvider;
    GOOProvider *_sharedLayerServiceProvider;
    GOOProvider *_ssoServiceProvider;
    GOOProvider *_timerEventLoggingServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *timerEventLoggingServiceProvider; // @synthesize timerEventLoggingServiceProvider=_timerEventLoggingServiceProvider;
@property(readonly, nonatomic) GOOProvider *ssoServiceProvider; // @synthesize ssoServiceProvider=_ssoServiceProvider;
@property(readonly, nonatomic) GOOProvider *sharedLayerServiceProvider; // @synthesize sharedLayerServiceProvider=_sharedLayerServiceProvider;
@property(readonly, nonatomic) GOOProvider *navigationProviderProvider; // @synthesize navigationProviderProvider=_navigationProviderProvider;
@property(readonly, nonatomic) GOOProvider *linkRouterServiceProvider; // @synthesize linkRouterServiceProvider=_linkRouterServiceProvider;
@property(readonly, nonatomic) GOOProvider *gscNavigationServiceProvider; // @synthesize gscNavigationServiceProvider=_gscNavigationServiceProvider;
@property(readonly, nonatomic) GOOProvider *experimentsServiceProvider; // @synthesize experimentsServiceProvider=_experimentsServiceProvider;
@property(readonly, nonatomic) GOOProvider *dynNavigationServiceProvider; // @synthesize dynNavigationServiceProvider=_dynNavigationServiceProvider;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) id <DYNTimerEventLoggingService> timerEventLoggingService;
@property(readonly, nonatomic) id <SSOService> ssoService;
@property(readonly, nonatomic) id <DYNSharedLayerService> sharedLayerService;
@property(readonly, nonatomic) id <GSCRootNavigationControllerProvider> navigationProvider;
@property(readonly, nonatomic) id <HUBLinkRouterService> linkRouterService;
@property(readonly, nonatomic) id <GSCNavigationService> gscNavigationService;
@property(readonly, nonatomic) id <DYNExperimentsService> experimentsService;
@property(readonly, nonatomic) id <DYNNavigationService> dynNavigationService;
- (id)initWithAccountID:(id)arg1 dynNavigationService:(id)arg2 experimentsServiceProvider:(id)arg3 gscNavigationService:(id)arg4 linkRouterServiceProvider:(id)arg5 navigationProvider:(id)arg6 sharedLayerService:(id)arg7 ssoService:(id)arg8 timerEventLoggingService:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
