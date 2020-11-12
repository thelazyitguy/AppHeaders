//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageResolveService-Protocol.h"

@class NSString, SPTAllocationContext, SPTImageResolveCoreProjectionMapEndpoint, SPTImageResolveFactory, SPTImageResolveManager;
@protocol SPTRemoteConfigurationService, SPTSessionService;

@interface SPTImageResolveServiceImplementation : NSObject <SPTImageResolveService>
{
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTSessionService> _sessionService;
    SPTImageResolveFactory *_factory;
    SPTImageResolveManager *_imageResolveManager;
    SPTImageResolveCoreProjectionMapEndpoint *_coreProjectionMapEndpoint;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTImageResolveCoreProjectionMapEndpoint *coreProjectionMapEndpoint; // @synthesize coreProjectionMapEndpoint=_coreProjectionMapEndpoint;
@property(retain, nonatomic) SPTImageResolveManager *imageResolveManager; // @synthesize imageResolveManager=_imageResolveManager;
@property(retain, nonatomic) SPTImageResolveFactory *factory; // @synthesize factory=_factory;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
- (id)createImageResolver;
- (void)unload;
- (void)idleStateWasReached;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
