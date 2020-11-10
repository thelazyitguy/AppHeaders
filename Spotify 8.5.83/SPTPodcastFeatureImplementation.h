//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTUIPageService.h"

#import "SPTPodcastFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTPodcastEpisodeCellActionHandlerFactory, SPTPodcastFeatureProperties, SPTPodcastPreferences, SPTPodcastSpeedControlManagerImpl, SPTPodcastTestManagerImplementation;
@protocol CosmosFeature, SPContextMenuFeature, SPTCollectionLogger, SPTCollectionPlatformService, SPTCrashReporterService, SPTEpisodeContextMenuControllerDelegate, SPTExplicitContentService, SPTFreeTierTooltipService, SPTGLUEService, SPTPageLoaderViewService, SPTPageRegistrationToken, SPTPerformanceMetricsService, SPTPlayerFeature, SPTPodcastContextMenuProvider, SPTPodcastDataLoader, SPTPodcastEntityDataLoader, SPTPodcastEpisodeFactory, SPTPodcastFactory, SPTPodcastLogger><SPTPodcastUBILogger, SPTPodcastOffliningService, SPTPodcastRequestFactory, SPTPodcastSortingProvider, SPTPodcastUIService, SPTRecentlyPlayedService, SPTRemoteConfigurationService, SPTResolver, SPTScannablesService, SPTSessionService, SPTSettingsFeature, SPTShareFeature, SPTSleepTimerService, SPTSnackbarService, SPTSortingFilteringService, SPTUBIService, SPTUIPresentationService, SPTURIDispatchService, _TtP17PodcastDALFeature20SPTPodcastDALService_, _TtP19YourEpisodesFeature22SPTYourEpisodesService_, _TtP21PodcastQuoteUIFeature24SPTPodcastQuoteUIService_, _TtP27PodcastHTMLComponentFeature30SPTPodcastHTMLComponentService_, _TtP36PodcastNewEpisodeNotificationFeature39SPTPodcastNewEpisodeNotificationService_;

@interface SPTPodcastFeatureImplementation : SPTUIPageService <SPTPodcastFeature>
{
    _Bool _podcastEntityContentTypeRegistered;
    id <SPTSessionService> _clientSessionService;
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTSnackbarService> _snackbarService;
    id <CosmosFeature> _cosmosFeature;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTResolver> _router;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTGLUEService> _glueService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTUIPresentationService> _presentationService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTShareFeature> _shareFeature;
    id <SPTSleepTimerService> _sleepTimerFeature;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTScannablesService> _scannableService;
    id <_TtP36PodcastNewEpisodeNotificationFeature39SPTPodcastNewEpisodeNotificationService_> _podcastNewEpisodeNotificationService;
    id <SPTPodcastUIService> _podcastUIService;
    id <SPTPodcastOffliningService> _podcastOffliningService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTUBIService> _ubiService;
    id <_TtP17PodcastDALFeature20SPTPodcastDALService_> _podcastDALService;
    id <_TtP27PodcastHTMLComponentFeature30SPTPodcastHTMLComponentService_> _podcastHTMLComponentService;
    id <_TtP21PodcastQuoteUIFeature24SPTPodcastQuoteUIService_> _podcastQuoteUIService;
    id <SPTSortingFilteringService> _sortingFilteringService;
    id <SPTPageLoaderViewService> _pageLoaderViewService;
    id <_TtP19YourEpisodesFeature22SPTYourEpisodesService_> _yourEpisodesService;
    id <SPTFreeTierTooltipService> _freeTierTooltipService;
    SPTPodcastFeatureProperties *_featureProperties;
    id <SPTPodcastEntityDataLoader> _podcastEntityDataLoader;
    id <SPTPodcastContextMenuProvider> _defaultContextMenuProvider;
    id <SPTPodcastSortingProvider> _sortingProvider;
    id <SPTCollectionLogger> _collectionLogger;
    id <SPTPodcastLogger><SPTPodcastUBILogger> _logger;
    id <SPTEpisodeContextMenuControllerDelegate> _contextMenuDelegateObject;
    SPTPodcastTestManagerImplementation *_testManager;
    SPTPodcastSpeedControlManagerImpl *_podcastSpeedControlManager;
    id <SPTPodcastRequestFactory> _podcastRequestFactory;
    id <SPTPodcastDataLoader> _podcastCosmosDataLoader;
    id <SPTPodcastFactory> _podcastFactory;
    id <SPTPodcastEpisodeFactory> _podcastEpisodeFactory;
    SPTPodcastEpisodeCellActionHandlerFactory *_cellActionHandlerFactory;
    SPTPodcastPreferences *_podcastPreferences;
    id <SPTPageRegistrationToken> _podcastPageRegistration;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPageRegistrationToken> podcastPageRegistration; // @synthesize podcastPageRegistration=_podcastPageRegistration;
@property(retain, nonatomic) SPTPodcastPreferences *podcastPreferences; // @synthesize podcastPreferences=_podcastPreferences;
@property(retain, nonatomic) SPTPodcastEpisodeCellActionHandlerFactory *cellActionHandlerFactory; // @synthesize cellActionHandlerFactory=_cellActionHandlerFactory;
@property(retain, nonatomic) id <SPTPodcastEpisodeFactory> podcastEpisodeFactory; // @synthesize podcastEpisodeFactory=_podcastEpisodeFactory;
@property(retain, nonatomic) id <SPTPodcastFactory> podcastFactory; // @synthesize podcastFactory=_podcastFactory;
@property(retain, nonatomic) id <SPTPodcastDataLoader> podcastCosmosDataLoader; // @synthesize podcastCosmosDataLoader=_podcastCosmosDataLoader;
@property(retain, nonatomic) id <SPTPodcastRequestFactory> podcastRequestFactory; // @synthesize podcastRequestFactory=_podcastRequestFactory;
@property(retain, nonatomic) SPTPodcastSpeedControlManagerImpl *podcastSpeedControlManager; // @synthesize podcastSpeedControlManager=_podcastSpeedControlManager;
@property(retain, nonatomic) SPTPodcastTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTEpisodeContextMenuControllerDelegate> contextMenuDelegateObject; // @synthesize contextMenuDelegateObject=_contextMenuDelegateObject;
@property(retain, nonatomic) id <SPTPodcastLogger><SPTPodcastUBILogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(nonatomic) _Bool podcastEntityContentTypeRegistered; // @synthesize podcastEntityContentTypeRegistered=_podcastEntityContentTypeRegistered;
@property(retain, nonatomic) id <SPTPodcastSortingProvider> sortingProvider; // @synthesize sortingProvider=_sortingProvider;
@property(retain, nonatomic) id <SPTPodcastContextMenuProvider> defaultContextMenuProvider; // @synthesize defaultContextMenuProvider=_defaultContextMenuProvider;
@property(retain, nonatomic) id <SPTPodcastEntityDataLoader> podcastEntityDataLoader; // @synthesize podcastEntityDataLoader=_podcastEntityDataLoader;
@property(retain, nonatomic) SPTPodcastFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(nonatomic) __weak id <SPTFreeTierTooltipService> freeTierTooltipService; // @synthesize freeTierTooltipService=_freeTierTooltipService;
@property(nonatomic) __weak id <_TtP19YourEpisodesFeature22SPTYourEpisodesService_> yourEpisodesService; // @synthesize yourEpisodesService=_yourEpisodesService;
@property(nonatomic) __weak id <SPTPageLoaderViewService> pageLoaderViewService; // @synthesize pageLoaderViewService=_pageLoaderViewService;
@property(nonatomic) __weak id <SPTSortingFilteringService> sortingFilteringService; // @synthesize sortingFilteringService=_sortingFilteringService;
@property(nonatomic) __weak id <_TtP21PodcastQuoteUIFeature24SPTPodcastQuoteUIService_> podcastQuoteUIService; // @synthesize podcastQuoteUIService=_podcastQuoteUIService;
@property(nonatomic) __weak id <_TtP27PodcastHTMLComponentFeature30SPTPodcastHTMLComponentService_> podcastHTMLComponentService; // @synthesize podcastHTMLComponentService=_podcastHTMLComponentService;
@property(nonatomic) __weak id <_TtP17PodcastDALFeature20SPTPodcastDALService_> podcastDALService; // @synthesize podcastDALService=_podcastDALService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTPodcastOffliningService> podcastOffliningService; // @synthesize podcastOffliningService=_podcastOffliningService;
@property(nonatomic) __weak id <SPTPodcastUIService> podcastUIService; // @synthesize podcastUIService=_podcastUIService;
@property(nonatomic) __weak id <_TtP36PodcastNewEpisodeNotificationFeature39SPTPodcastNewEpisodeNotificationService_> podcastNewEpisodeNotificationService; // @synthesize podcastNewEpisodeNotificationService=_podcastNewEpisodeNotificationService;
@property(nonatomic) __weak id <SPTScannablesService> scannableService; // @synthesize scannableService=_scannableService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTSleepTimerService> sleepTimerFeature; // @synthesize sleepTimerFeature=_sleepTimerFeature;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(retain, nonatomic) id <SPTResolver> router; // @synthesize router=_router;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTSnackbarService> snackbarService; // @synthesize snackbarService=_snackbarService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (id)provideTrailerPlaybackManagerFactoryWithViewURI:(id)arg1 featureIdentifier:(id)arg2 referrerIdentifier:(id)arg3;
- (id)providePodcastPlayerWithViewURI:(id)arg1 featureIdentifier:(id)arg2 referrerIdentifier:(id)arg3;
- (id)providePodcastLogger;
- (id)provideCellActionHandlerFactory;
- (id)provideTestManager;
- (void)addSwitchToSettingsPage:(id)arg1 settingsTitle:(id)arg2 settingsDescription:(id)arg3 settingsKey:(id)arg4;
- (id)registerPageSelector:(SEL)arg1 predicate:(CDUnknownBlockType)arg2;
- (void)updateCrashReporterValues;
- (void)registerPodcastShowPage;
- (void)registerPodcastCollectionEntityContentType;
- (id)provideEpisodeCellConfigurator;
- (id)provideResolverForPodcast;
- (id)providePodcastSpeedControlManager;
- (id)provideDefaultContextMenuProvider;
- (id)provideContextMenuDelegateObject;
- (id)provideContextMenuProviderWithLinkDispatcher:(id)arg1;
- (id)provideShowContextMenuControllerForLinkDispatcher:(id)arg1;
- (id)providePodcastShowPageSectionContainers;
- (id)providePodcastViewModelForURL:(id)arg1 dataProvider:(id)arg2 podcast:(id)arg3 context:(id)arg4;
- (id)providePodcastViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)provideFeatureProperties;
- (id)provideLocalSettings;
- (_Bool)claimsURI:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

