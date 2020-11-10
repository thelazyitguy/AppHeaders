//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"
#import "SPTURISubtypeHandler-Protocol.h"

@class NSString, SPNavigationController, SPTAllocationContext;
@protocol SPContextMenuFeature, SPTAudioPreviewService, SPTCollectionPlatformService, SPTContainerService, SPTEncoreIntegrationService, SPTExplicitContentService, SPTFreeTierAllSongsRegistry, SPTFreeTierAllSongsService, SPTFreeTierPreCurationService, SPTFreeTierPresentationService, SPTGLUEService, SPTPageLoaderViewService, SPTPerformanceMetricsService, SPTPodcastFeature, SPTRemoteConfigurationResolver, SPTRemoteConfigurationService, SPTSelfPresentingViewController, SPTUBIService, SPTURIDispatchService;

@interface SPTFreeTierAllSongsUIService : NSObject <SPTService, SPTURISubtypeHandler>
{
    id <SPTContainerService> _containerService;
    id <SPTAudioPreviewService> _audioPreviewService;
    id <SPTGLUEService> _glueService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTFreeTierAllSongsService> _allSongsService;
    id <SPTFreeTierPresentationService> _freeTierPresentationService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTFreeTierPreCurationService> _preCurationService;
    id <SPTPodcastFeature> _podcastService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTUBIService> _ubiService;
    id <SPTPageLoaderViewService> _pageLoaderViewService;
    id <SPTEncoreIntegrationService> _encoreIntegrationService;
    id <SPTFreeTierAllSongsRegistry> _registry;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPNavigationController<SPTSelfPresentingViewController> *_navigationController;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPNavigationController<SPTSelfPresentingViewController> *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(retain, nonatomic) id <SPTFreeTierAllSongsRegistry> registry; // @synthesize registry=_registry;
@property(nonatomic) __weak id <SPTEncoreIntegrationService> encoreIntegrationService; // @synthesize encoreIntegrationService=_encoreIntegrationService;
@property(nonatomic) __weak id <SPTPageLoaderViewService> pageLoaderViewService; // @synthesize pageLoaderViewService=_pageLoaderViewService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastService; // @synthesize podcastService=_podcastService;
@property(nonatomic) __weak id <SPTFreeTierPreCurationService> preCurationService; // @synthesize preCurationService=_preCurationService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTFreeTierPresentationService> freeTierPresentationService; // @synthesize freeTierPresentationService=_freeTierPresentationService;
@property(nonatomic) __weak id <SPTFreeTierAllSongsService> allSongsService; // @synthesize allSongsService=_allSongsService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTAudioPreviewService> audioPreviewService; // @synthesize audioPreviewService=_audioPreviewService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (void)unregisterLinkHandler;
- (void)registerLinkHandler;
- (id)provideAllSongsViewControllerWithPageLoaderForURI:(id)arg1;
- (void)dismissAllSongsModal;
- (void)provideAllSongsViewControllerForURI:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)pageLoaderEnabled;
- (id)provideAllSongsViewControllerForURI:(id)arg1 dataSource:(id)arg2;
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

