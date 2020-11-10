//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVisualRefreshIntegrationService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTEncoreIntegrationService, SPTGLUEService, SPTImageLoadingService, SPTSortingFilteringService, SPTURIDispatchService, SPTVISREFFlagsService, _TtP28CollaborativePlaylistFeature31SPTCollaborativePlaylistService_;

@interface SPTVisualRefreshIntegrationServiceImplementation : NSObject <SPTVisualRefreshIntegrationService>
{
    id <SPTGLUEService> _glueService;
    id <SPTImageLoadingService> _imageLoadingService;
    id <SPTVISREFFlagsService> _visualRefreshService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTEncoreIntegrationService> _encoreIntegrationService;
    id <SPTSortingFilteringService> _sortingFilteringService;
    id <_TtP28CollaborativePlaylistFeature31SPTCollaborativePlaylistService_> _collaborativePlaylistService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_TtP28CollaborativePlaylistFeature31SPTCollaborativePlaylistService_> collaborativePlaylistService; // @synthesize collaborativePlaylistService=_collaborativePlaylistService;
@property(nonatomic) __weak id <SPTSortingFilteringService> sortingFilteringService; // @synthesize sortingFilteringService=_sortingFilteringService;
@property(nonatomic) __weak id <SPTEncoreIntegrationService> encoreIntegrationService; // @synthesize encoreIntegrationService=_encoreIntegrationService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTVISREFFlagsService> visualRefreshService; // @synthesize visualRefreshService=_visualRefreshService;
@property(nonatomic) __weak id <SPTImageLoadingService> imageLoadingService; // @synthesize imageLoadingService=_imageLoadingService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (id)encorePersonalizedPlaylistHeaderProviderAdditionalCallToActionEnabled:(_Bool)arg1;
- (id)encorePlaylistHeaderProviderWithP2SLayout:(_Bool)arg1 additionalCallToActionEnabled:(_Bool)arg2;
- (id)visrefPlaylistFullBleedHeaderProvider;
- (id)visrefPlaylistHeaderProvider;
- (id)visrefIntegrationManager;
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

