//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryPageProvider-Protocol.h"

@class NSString, NSURL, SPTPodcastEpisodeCellActionHandlerFactory, SPTPodcastYourLibraryEpisodesViewModelImpl, SPTYourLibraryPodcastUnfinishedItemsProvider;
@protocol GLUETheme, SPTExplicitContentAccessManager, SPTMetaViewController, SPTNavigationRouter, SPTOfflineModeState, SPTPerformanceMetricsViewLoggerFactory, SPTPodcastDataLoader, SPTPodcastEpisodeCellConfigurator, SPTPodcastEpisodeFactory, SPTPodcastLogger, SPTPodcastRequestFactory, SPTPodcastYourLibraryPageProviderDelegate, SPTProductState, _TtP19YourEpisodesFeature26SPTYourEpisodesTestManager_, _TtP19YourEpisodesFeature27SPTYourEpisodesItemProvider_, _TtP19YourEpisodesFeature36SPTYourEpisodesEntryPointCellFactory_;

@interface SPTPodcastYourLibraryEpisodesPageProvider : NSObject <SPTYourLibraryPageProvider>
{
    unsigned long long _groupIdentifier;
    unsigned long long _providerIdentifier;
    NSString *_title;
    NSURL *_URI;
    SPTPodcastYourLibraryEpisodesViewModelImpl *_viewModel;
    id <SPTPodcastYourLibraryPageProviderDelegate> _delegate;
    id <GLUETheme> _glueTheme;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTPodcastDataLoader> _dataLoader;
    SPTPodcastEpisodeCellActionHandlerFactory *_cellActionHandlerFactory;
    id <SPTPodcastLogger> _podcastLogger;
    id <SPTPerformanceMetricsViewLoggerFactory> _viewLoggerFactory;
    id <SPTPodcastRequestFactory> _podcastRequestFactory;
    id <SPTPodcastEpisodeFactory> _episodeFactory;
    SPTYourLibraryPodcastUnfinishedItemsProvider *_unfinishedItemsProvider;
    id <SPTPodcastEpisodeCellConfigurator> _cellConfigurator;
    id <SPTOfflineModeState> _offlineStateObservable;
    id <SPTProductState> _productState;
    id <_TtP19YourEpisodesFeature26SPTYourEpisodesTestManager_> _yourEpisodesTestManager;
    id <_TtP19YourEpisodesFeature27SPTYourEpisodesItemProvider_> _yourEpisodesItemProvider;
    id <_TtP19YourEpisodesFeature36SPTYourEpisodesEntryPointCellFactory_> _yourEpisodesEntryPointCellFactory;
    id <SPTMetaViewController> _metaViewController;
    id <SPTNavigationRouter> _navigationRouter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(readonly, nonatomic) id <_TtP19YourEpisodesFeature36SPTYourEpisodesEntryPointCellFactory_> yourEpisodesEntryPointCellFactory; // @synthesize yourEpisodesEntryPointCellFactory=_yourEpisodesEntryPointCellFactory;
@property(readonly, nonatomic) id <_TtP19YourEpisodesFeature27SPTYourEpisodesItemProvider_> yourEpisodesItemProvider; // @synthesize yourEpisodesItemProvider=_yourEpisodesItemProvider;
@property(readonly, nonatomic) id <_TtP19YourEpisodesFeature26SPTYourEpisodesTestManager_> yourEpisodesTestManager; // @synthesize yourEpisodesTestManager=_yourEpisodesTestManager;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineStateObservable; // @synthesize offlineStateObservable=_offlineStateObservable;
@property(retain, nonatomic) id <SPTPodcastEpisodeCellConfigurator> cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) SPTYourLibraryPodcastUnfinishedItemsProvider *unfinishedItemsProvider; // @synthesize unfinishedItemsProvider=_unfinishedItemsProvider;
@property(retain, nonatomic) id <SPTPodcastEpisodeFactory> episodeFactory; // @synthesize episodeFactory=_episodeFactory;
@property(retain, nonatomic) id <SPTPodcastRequestFactory> podcastRequestFactory; // @synthesize podcastRequestFactory=_podcastRequestFactory;
@property(retain, nonatomic) id <SPTPerformanceMetricsViewLoggerFactory> viewLoggerFactory; // @synthesize viewLoggerFactory=_viewLoggerFactory;
@property(retain, nonatomic) id <SPTPodcastLogger> podcastLogger; // @synthesize podcastLogger=_podcastLogger;
@property(retain, nonatomic) SPTPodcastEpisodeCellActionHandlerFactory *cellActionHandlerFactory; // @synthesize cellActionHandlerFactory=_cellActionHandlerFactory;
@property(readonly, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) __weak id <SPTPodcastYourLibraryPageProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SPTPodcastYourLibraryEpisodesViewModelImpl *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(readonly, nonatomic) unsigned long long groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (id)pageViewControllerForContext:(id)arg1;
- (_Bool)claimsURI:(id)arg1;
- (id)initWithURI:(id)arg1 title:(id)arg2 delegate:(id)arg3 pageProviderIdentifier:(unsigned long long)arg4 podcastRequestFactory:(id)arg5 dataLoader:(id)arg6 unfinishedItemsProvider:(id)arg7 episodeFactory:(id)arg8 cellConfigurator:(id)arg9 explicitContentAccessManager:(id)arg10 glueTheme:(id)arg11 cellActionHandlerFactory:(id)arg12 metaViewController:(id)arg13 navigationRouter:(id)arg14 podcastLogger:(id)arg15 viewLoggerFactory:(id)arg16 offlineStateObservable:(id)arg17 productState:(id)arg18 yourEpisodesTestManager:(id)arg19 yourEpisodesItemProvider:(id)arg20 yourEpisodesEntryPointCellFactory:(id)arg21;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

