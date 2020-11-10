//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBackgroundFetchDelegate-Protocol.h"
#import "SPTRemoteConfigurationService-Protocol.h"

@class NSString, SPTAllocationContext, SPTRemoteConfiguration, SPTRemoteConfigurationCoreBridgeImplementation, SPTRemoteConfigurationFeatureProperties;
@protocol SPTBootstrapService, SPTContainerService, SPTCoreService, SPTEventSenderService, SPTNetworkService, SPTRemoteConfigurationIntegration, SPTRemoteConfigurationResolver;

@interface SPTRemoteConfigurationServiceImplementation : NSObject <SPTBackgroundFetchDelegate, SPTRemoteConfigurationService>
{
    id <SPTContainerService> _containerService;
    id <SPTBootstrapService> _bootstrapService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkService;
    id <SPTEventSenderService> _eventSenderService;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    id <SPTRemoteConfigurationIntegration> _remoteConfigurationIntegration;
    SPTRemoteConfiguration *_remoteConfiguration;
    SPTRemoteConfigurationFeatureProperties *_properties;
    SPTRemoteConfigurationCoreBridgeImplementation *_coreBridge;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTRemoteConfigurationCoreBridgeImplementation *coreBridge; // @synthesize coreBridge=_coreBridge;
@property(retain, nonatomic) SPTRemoteConfigurationFeatureProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) SPTRemoteConfiguration *remoteConfiguration; // @synthesize remoteConfiguration=_remoteConfiguration;
@property(retain, nonatomic) id <SPTRemoteConfigurationIntegration> remoteConfigurationIntegration; // @synthesize remoteConfigurationIntegration=_remoteConfigurationIntegration;
@property(retain, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTBootstrapService> bootstrapService; // @synthesize bootstrapService=_bootstrapService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setupRemoteConfiguration;
- (void)idleStateWasReached;
- (void)userWillLogoutNotificationReceived:(id)arg1;
- (void)unload;
- (void)load;
- (id)provideRemoteConfigurationIntegration;
- (id)provideRemoteConfigurationResolver;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

