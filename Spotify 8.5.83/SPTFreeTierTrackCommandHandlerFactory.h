//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTEntitySeeAllSongsService, SPTHubCommandHandlerFactory, SPTHubsRendererFactory, SPTLinkDispatcher, SPTPlayerFeature, SPTUBILogger, SPTUBIPageInstanceIdentifierProvider, _TtP17OfflineMixFeature26SPTOfflineMixModelProvider_;

@interface SPTFreeTierTrackCommandHandlerFactory : NSObject
{
    id <SPTHubCommandHandlerFactory> _defaultCommandHandlerFactory;
    id <SPTPlayerFeature> _playerService;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTEntitySeeAllSongsService> _entitySeeAllSongsService;
    id <_TtP17OfflineMixFeature26SPTOfflineMixModelProvider_> _offlineMixModelProvider;
    id <SPTUBILogger> _ubiLogger;
    id <SPTUBIPageInstanceIdentifierProvider> _pageInstanceIdProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTUBIPageInstanceIdentifierProvider> pageInstanceIdProvider; // @synthesize pageInstanceIdProvider=_pageInstanceIdProvider;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <_TtP17OfflineMixFeature26SPTOfflineMixModelProvider_> offlineMixModelProvider; // @synthesize offlineMixModelProvider=_offlineMixModelProvider;
@property(readonly, nonatomic) __weak id <SPTEntitySeeAllSongsService> entitySeeAllSongsService; // @synthesize entitySeeAllSongsService=_entitySeeAllSongsService;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) __weak id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(readonly, nonatomic) id <SPTHubCommandHandlerFactory> defaultCommandHandlerFactory; // @synthesize defaultCommandHandlerFactory=_defaultCommandHandlerFactory;
- (id)createLoggerForViewURI:(id)arg1;
- (id)createCommandHandlerForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignalSource:(id)arg3 offlineModel:(id)arg4;
- (id)initWithDefaultCommandHandlerFactory:(id)arg1 playerService:(id)arg2 hubsRendererFactory:(id)arg3 linkDispatcher:(id)arg4 allSongsService:(id)arg5 offlineMixModelProvider:(id)arg6 ubiLogger:(id)arg7 pageInstanceIdProvider:(id)arg8;

@end

