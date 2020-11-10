//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSeedASessionService-Protocol.h"
#import "SPTURISubtypeHandler-Protocol.h"

@class NSString, SPTAllocationContext, SPTSeedASessionConfiguration, SPTSeedASessionFeatureProperties, SPTSeedASessionFlowCoordinator;
@protocol SPTFreeTierTasteOnboardingService, SPTPlayerFeature, SPTRemoteConfigurationService, SPTURIDispatchService;

@interface SPTSeedASessionServiceImplementation : NSObject <SPTSeedASessionService, SPTURISubtypeHandler>
{
    SPTSeedASessionConfiguration *_seedASessionConfiguration;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTFreeTierTasteOnboardingService> _tasteOnboardingService;
    id <SPTPlayerFeature> _playerService;
    SPTSeedASessionFeatureProperties *_seedASessionFeatureProperties;
    SPTSeedASessionFlowCoordinator *_flowCoordinator;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTSeedASessionFlowCoordinator *flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
@property(retain, nonatomic) SPTSeedASessionFeatureProperties *seedASessionFeatureProperties; // @synthesize seedASessionFeatureProperties=_seedASessionFeatureProperties;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTFreeTierTasteOnboardingService> tasteOnboardingService; // @synthesize tasteOnboardingService=_tasteOnboardingService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(retain, nonatomic) SPTSeedASessionConfiguration *seedASessionConfiguration; // @synthesize seedASessionConfiguration=_seedASessionConfiguration;
- (void)unregisterLinkHandler;
- (void)registerLinkHandler;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (void)initializeFlowCoordinator;
- (long long)visualTreatmentForButtonType:(long long)arg1;
- (long long)seedASessionButtonType;
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
