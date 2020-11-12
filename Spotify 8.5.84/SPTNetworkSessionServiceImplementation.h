//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNetworkConnectivityControllerObserver-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTNetworkFeatureProperties;
@protocol SPTLocalSettings, SPTNetworkConnectivityController, SPTNetworkService, SPTRemoteConfigurationResolver, SPTRemoteConfigurationService, SPTSessionService;

@interface SPTNetworkSessionServiceImplementation : NSObject <SPTNetworkConnectivityControllerObserver, SPTService>
{
    id <SPTNetworkService> _networkService;
    id <SPTSessionService> _sessionService;
    id <SPTNetworkConnectivityController> _networkController;
    id <SPTLocalSettings> _localSettings;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTNetworkFeatureProperties *_properties;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTNetworkFeatureProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> networkController; // @synthesize networkController=_networkController;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
- (void)userWillLogout:(id)arg1;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
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
