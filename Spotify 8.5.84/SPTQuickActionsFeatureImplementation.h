//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTQuickActionsFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTQuickActionsController;
@protocol SPTContainerService, SPTRecentlyPlayedService, SPTRemoteConfigurationResolver, SPTRemoteConfigurationService, SPTScannablesService, SPTURIDispatchService;

@interface SPTQuickActionsFeatureImplementation : NSObject <SPTQuickActionsFeature>
{
    id <SPTContainerService> _containerService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTScannablesService> _scannablesService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTQuickActionsController *_quickActionsController;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTQuickActionsController *quickActionsController; // @synthesize quickActionsController=_quickActionsController;
@property(retain, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTScannablesService> scannablesService; // @synthesize scannablesService=_scannablesService;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void)unload;
- (_Bool)isQuickActionsEnabled;
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

