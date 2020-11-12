//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBComponentDefaults, SPTPremiumDestinationHubManagerConfiguration, SPTPremiumDestinationScrollCommandHandler;
@protocol HUBIconImageResolver, SPTHubCommandHandlerFactory;

@interface SPTPremiumDestinationHubManager : NSObject
{
    HUBComponentDefaults *_componentDefaults;
    id <HUBIconImageResolver> _iconImageResolver;
    id <SPTHubCommandHandlerFactory> _commandHandlerFactory;
    SPTPremiumDestinationHubManagerConfiguration *_configuration;
    SPTPremiumDestinationScrollCommandHandler *_scrollCommandHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTPremiumDestinationScrollCommandHandler *scrollCommandHandler; // @synthesize scrollCommandHandler=_scrollCommandHandler;
@property(retain, nonatomic) SPTPremiumDestinationHubManagerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <SPTHubCommandHandlerFactory> commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) id <HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
- (id)provideViewControllerForURL:(id)arg1 referrerIdentifier:(id)arg2 viewModelProvider:(id)arg3 reloadSignalSource:(id)arg4;
- (id)createCommandDispatcherForURL:(id)arg1 referrerIdentifier:(id)arg2 interactionLogger:(id)arg3 reloadSignalSource:(id)arg4;
- (id)createViewModelProviderWithContentOperations:(id)arg1;
- (id)createRemoteContentOperationsWithContentURLResolver:(id)arg1 reloadSignalSource:(id)arg2;
- (id)createLocalContentOperationsWithFileURL:(id)arg1;
- (id)providePremiumDestinationHubsRemoteURLResolver;
- (id)provideLocalPDPEvolutionJSONPreviewViewControllerForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (id)provideLocalJSONPreviewViewControllerForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (id)provideViewControllerForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (id)initWithHubManagerConfiguration:(id)arg1;

@end
