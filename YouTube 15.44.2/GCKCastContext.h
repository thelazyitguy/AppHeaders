//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GCKRuntimeConfigurationValueObserver-Protocol.h>

@class GCKAnalyticsEventLogger, GCKAppContextInformationStore, GCKCastDeviceProvider, GCKCastOptions, GCKClearcutEventSink, GCKDatabase, GCKDeviceProviderRegistry, GCKDiagnosticListener, GCKDiscoveryManager, GCKNNetworkReachability, GCKPhysicalVolumeButtonController, GCKPrecacheController, GCKRuntimeConfiguration, GCKSessionManager, GCKUIExpandedMediaControlsViewController, NSString;
@protocol GCKUIImageCache, GCKUIImagePicker;

@interface GCKCastContext : NSObject <GCKRuntimeConfigurationValueObserver>
{
    GCKCastDeviceProvider *_castDeviceProvider;
    GCKDiagnosticListener *_diagnosticListener;
    GCKClearcutEventSink *_clearcutEventSink;
    _Bool _enableClearcutAnalytics;
    GCKPhysicalVolumeButtonController *_physicalVolumeButtonController;
    _Bool _castUnavailableButtonVisibleIfRequired;
    unsigned long long _castState;
    GCKDiscoveryManager *_discoveryManager;
    GCKSessionManager *_sessionManager;
    GCKDatabase *_database;
    GCKNNetworkReachability *_networkReachability;
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    GCKDeviceProviderRegistry *_deviceProviderRegistry;
    GCKRuntimeConfiguration *_runtimeConfiguration;
    GCKAppContextInformationStore *_appContextInformationStore;
    GCKCastOptions *_castOptions;
    GCKPrecacheController *_precacheController;
}

+ (id)resourceBundle;
+ (void)unsetSharedInstance;
+ (_Bool)setSharedInstanceWithOptions:(id)arg1 error:(id *)arg2;
+ (void)setSharedInstanceWithOptions:(id)arg1;
+ (_Bool)isSharedInstanceInitialized;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) GCKPrecacheController *precacheController; // @synthesize precacheController=_precacheController;
@property(retain, nonatomic) GCKCastOptions *castOptions; // @synthesize castOptions=_castOptions;
@property(readonly, nonatomic) _Bool castUnavailableButtonVisibleIfRequired; // @synthesize castUnavailableButtonVisibleIfRequired=_castUnavailableButtonVisibleIfRequired;
@property(readonly, nonatomic) GCKAppContextInformationStore *appContextInformationStore; // @synthesize appContextInformationStore=_appContextInformationStore;
@property(retain, nonatomic) GCKRuntimeConfiguration *runtimeConfiguration; // @synthesize runtimeConfiguration=_runtimeConfiguration;
@property(retain, nonatomic) GCKDeviceProviderRegistry *deviceProviderRegistry; // @synthesize deviceProviderRegistry=_deviceProviderRegistry;
@property(retain, nonatomic) GCKAnalyticsEventLogger *analyticsEventLogger; // @synthesize analyticsEventLogger=_analyticsEventLogger;
@property(retain, nonatomic) GCKNNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(retain, nonatomic) GCKDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) GCKSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) GCKDiscoveryManager *discoveryManager; // @synthesize discoveryManager=_discoveryManager;
@property(nonatomic) unsigned long long castState; // @synthesize castState=_castState;
- (_Bool)isProbableCastUser;
- (void)localNetworkPermissionDidChangeNotification:(id)arg1;
- (_Bool)shouldShowCastUnavailableIcon;
- (_Bool)shouldStartDiscoveryAfterTapOnCastButton;
- (id)dumpStates;
- (void)runtimeConfiguration:(id)arg1 value:(id)arg2 didChangeFrom:(id)arg3 to:(id)arg4;
- (void)updateCastingState;
- (void)unregisterDeviceProviderForCategory:(id)arg1;
- (void)registerDeviceProvider:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)appContextInformationProvider;
- (void)setLaunchCredentialsData:(id)arg1;
- (void)precacheData:(id)arg1 requestItems:(id)arg2;
- (void)precacheItems:(id)arg1;
- (void)precacheData:(id)arg1;
- (void)logAPIUsageForCastOptions;
- (void)updateAnalyticsLoggingOptionsWithRuntimeConfiguration;
- (void)enableClearcutAnalyticsIfNecessary;
- (void)enableDiagnosticListenerIfNecessary;
- (id)createPrecacheController;
- (id)createAnalyticsEventLogger;
- (void)dealloc;
- (void)tearDown;
- (id)initWithCastOptions:(id)arg1;
- (_Bool)inGuestModeTest;
- (_Bool)inTestingEnvironment;
- (id)getUIContext;
- (void)presentDefaultExpandedMediaControls;
- (void)clearCastInstructionsShownFlag;
- (_Bool)presentCastInstructionsViewControllerOnceWithCastButton:(id)arg1;
- (_Bool)presentCastInstructionsViewControllerOnce;
- (id)createMiniMediaControlsViewController;
- (id)createCastContainerControllerForViewController:(id)arg1;
- (void)expandedControlsRequested;
- (void)presentCastDialog;
- (id)uiResources;
- (id)castStoryboard;
@property(readonly, nonatomic) GCKUIExpandedMediaControlsViewController *defaultExpandedMediaControlsViewController;
@property(nonatomic) _Bool useDefaultExpandedMediaControls;
@property(retain, nonatomic) id <GCKUIImagePicker> imagePicker;
@property(retain, nonatomic) id <GCKUIImageCache> imageCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

