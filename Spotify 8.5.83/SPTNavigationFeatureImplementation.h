//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTNavigationFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTNavigationListDataLoader, SPTNavigationListStaticDataSource, SPTNavigationPageFactoryObserver, SPTNavigationSettingsRegistration;
@protocol SPTBarButtonItemManager, SPTContainerService, SPTCrashReporterService, SPTFeatureFlagSignal, SPTFreeTierService, SPTNavigationConfiguration, SPTNavigationItemTitleProvider, SPTNavigationListIdentifierFromABTestSource, SPTNavigationListProvider, SPTNetworkService, SPTRemoteConfigurationService, SPTSessionService, SPTSettingsFeature, SPTTabBarControllerFactory, SPTUBIService;

@interface SPTNavigationFeatureImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTNavigationFeature>
{
    _Bool _newExperienceEnabled;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTNetworkService> _networkFeature;
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTUBIService> _ubiService;
    id <SPTNavigationListProvider> _navigationListProvider;
    id <SPTNavigationConfiguration> _navigationConfiguration;
    SPTNavigationListStaticDataSource *_staticDataSource;
    SPTNavigationListDataLoader *_listDataLoader;
    SPTNavigationPageFactoryObserver *_pageFactoryObserver;
    SPTNavigationSettingsRegistration *_settingsRegistration;
    id <SPTNavigationListIdentifierFromABTestSource> _abTestSource;
    id <SPTTabBarControllerFactory> _tabBarFactory;
    id <SPTFreeTierService> _freeTierService;
    id <SPTFeatureFlagSignal> _freeTierFeatureFlagSignal;
    id <SPTRemoteConfigurationService> _remoteConfigService;
    id <SPTNavigationItemTitleProvider> _navigationItemTitleProvider;
    id <SPTBarButtonItemManager> _barButtonItemManager;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(nonatomic) _Bool newExperienceEnabled; // @synthesize newExperienceEnabled=_newExperienceEnabled;
@property(retain, nonatomic) id <SPTNavigationItemTitleProvider> navigationItemTitleProvider; // @synthesize navigationItemTitleProvider=_navigationItemTitleProvider;
@property(retain, nonatomic) id <SPTRemoteConfigurationService> remoteConfigService; // @synthesize remoteConfigService=_remoteConfigService;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierFeatureFlagSignal; // @synthesize freeTierFeatureFlagSignal=_freeTierFeatureFlagSignal;
@property(retain, nonatomic) id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(retain, nonatomic) id <SPTTabBarControllerFactory> tabBarFactory; // @synthesize tabBarFactory=_tabBarFactory;
@property(retain, nonatomic) id <SPTNavigationListIdentifierFromABTestSource> abTestSource; // @synthesize abTestSource=_abTestSource;
@property(retain, nonatomic) SPTNavigationSettingsRegistration *settingsRegistration; // @synthesize settingsRegistration=_settingsRegistration;
@property(retain, nonatomic) SPTNavigationPageFactoryObserver *pageFactoryObserver; // @synthesize pageFactoryObserver=_pageFactoryObserver;
@property(retain, nonatomic) SPTNavigationListDataLoader *listDataLoader; // @synthesize listDataLoader=_listDataLoader;
@property(retain, nonatomic) SPTNavigationListStaticDataSource *staticDataSource; // @synthesize staticDataSource=_staticDataSource;
@property(retain, nonatomic) id <SPTNavigationConfiguration> navigationConfiguration; // @synthesize navigationConfiguration=_navigationConfiguration;
@property(retain, nonatomic) id <SPTNavigationListProvider> navigationListProvider; // @synthesize navigationListProvider=_navigationListProvider;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (id)provideDefaultTabPriorityList;
- (id)createListWithItems:(id)arg1 identifier:(id)arg2;
- (id)listDataSources;
- (void)registerNavigationState:(id)arg1;
- (id)provideTabBarControllerFactory;
- (id)provideNavigationListIdentifierFromABTestSource;
- (id)provideNavigationConfiguration;
- (id)provideNavigationListProvider;
- (id)provideBarButtonItemManager;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
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
