//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSpotlightService-Protocol.h"

@class NSString, SPTAllocationContext, SPTSpotlightIndexImplementation;
@protocol SPTCollectionPlatformService, SPTImageLoadingService, SPTNetworkService, SPTPlaylistPlatformService, SPTSettingsFeature, SPTSpotlightIndexGatekeeper, SPTUserActivityService;

@interface SPTSpotlightServiceImplementation : NSObject <SPTSpotlightService>
{
    id <SPTUserActivityService> _userActivityService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTNetworkService> _networkService;
    id <SPTImageLoadingService> _imageLoadingService;
    id <SPTSettingsFeature> _settingsService;
    SPTSpotlightIndexImplementation *_index;
    id <SPTSpotlightIndexGatekeeper> _gatekeeper;
}

+ (_Bool)isSpotlightIndexingSupportedByOS;
+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTSpotlightIndexGatekeeper> gatekeeper; // @synthesize gatekeeper=_gatekeeper;
@property(retain, nonatomic) SPTSpotlightIndexImplementation *index; // @synthesize index=_index;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTImageLoadingService> imageLoadingService; // @synthesize imageLoadingService=_imageLoadingService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTUserActivityService> userActivityService; // @synthesize userActivityService=_userActivityService;
- (void)registerSettings;
- (void)registerUpdateIndexSetting;
- (void)registerDropIndexSetting;
- (id)provideSpotlightIndex;
- (id)provideItemsProviders;
- (id)createItemsImageLoader;
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
