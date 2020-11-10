//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBComponentDefaults, HUBComponentRegistry, SPTFreeTierTrackBarButtonFactory, SPTFreeTierTrackCommandHandlerFactory, SPTFreeTierTrackContentOperationFactory;
@protocol GLUETheme, SPTHubsRendererFactory, SPTHugsFactory, VISREFIntegrationManager;

@interface SPTFreeTierTrackHubManager : NSObject
{
    HUBComponentRegistry *_componentRegistry;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    SPTFreeTierTrackContentOperationFactory *_contentOperationFactory;
    SPTFreeTierTrackCommandHandlerFactory *_commandHandlerFactory;
    SPTFreeTierTrackBarButtonFactory *_barButtonFactory;
    id <GLUETheme> _glueTheme;
    id <VISREFIntegrationManager> _visualRefreshIntegrationManager;
    HUBComponentDefaults *_componentDefaults;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(retain, nonatomic) id <VISREFIntegrationManager> visualRefreshIntegrationManager; // @synthesize visualRefreshIntegrationManager=_visualRefreshIntegrationManager;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) SPTFreeTierTrackBarButtonFactory *barButtonFactory; // @synthesize barButtonFactory=_barButtonFactory;
@property(readonly, nonatomic) SPTFreeTierTrackCommandHandlerFactory *commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) SPTFreeTierTrackContentOperationFactory *contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
- (id)createViewModelLoaderForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignal:(id)arg3;
- (id)createViewControllerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (_Bool)canCreateViewControllerForViewURI:(id)arg1;
- (id)initWithComponentRegistry:(id)arg1 hubsRendererFactory:(id)arg2 hugsFactory:(id)arg3 contentOperationFactory:(id)arg4 commandHandlerFactory:(id)arg5 barButtonFactory:(id)arg6 glueTheme:(id)arg7 visualRefreshIntegrationManager:(id)arg8;

@end
