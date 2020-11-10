//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTAccessoryManagerSessionService, SPTBMWCarAPIFeature, SPTExternalIntegrationPlatformService, SPTRemoteConfigurationService;

@interface SPTBMWCarAPILoginSessionFeatureImplementation : NSObject <SPTService>
{
    id <SPTBMWCarAPIFeature> _bmwFeature;
    id <SPTExternalIntegrationPlatformService> _externalIntegrationPlatformService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTAccessoryManagerSessionService> _accessorySessionService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SPTAccessoryManagerSessionService> accessorySessionService; // @synthesize accessorySessionService=_accessorySessionService;
@property(readonly, nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlatformService> externalIntegrationPlatformService; // @synthesize externalIntegrationPlatformService=_externalIntegrationPlatformService;
@property(readonly, nonatomic) __weak id <SPTBMWCarAPIFeature> bmwFeature; // @synthesize bmwFeature=_bmwFeature;
- (void)disable;
- (void)enable;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

