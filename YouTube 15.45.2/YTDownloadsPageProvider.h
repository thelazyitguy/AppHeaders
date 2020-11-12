//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSString, YTDownloadsPlatformElementsController, YTIDownloadsPageEndpoint;
@protocol YTIdentityProvider, YTIdentityScopedPersistentEntityStoreProvider;

@interface YTDownloadsPageProvider : NSObject
{
    YTDownloadsPlatformElementsController *_downloadsPlatformElementsController;
    _Bool _useElementsForDownloadedVideos;
    _Bool _useElementsForDownloadedPlaylists;
    _Bool _startTransformersForNonElements;
    _Bool _isElementsDownloadsPageDownloadedBundleEnabled;
    id <YTIdentityProvider> _identityProvider;
    id <YTIdentityScopedPersistentEntityStoreProvider> _identityScopedPersistentEntityStoreProvider;
    int _bannerType;
    GIMMe *_gimme;
    YTIDownloadsPageEndpoint *_endpoint;
    NSString *_continuationToken;
    unsigned long long _options;
}

+ (id)downloadsPageTokenMatchWithToken:(id)arg1;
+ (id)textForFilterType:(int)arg1;
+ (id)bannerSectionRendererWithButtonURL:(id)arg1 buttonVeType:(int)arg2 bannerTitle:(id)arg3 bannerVeType:(int)arg4;
+ (id)travelBannerSectionRenderer;
+ (id)continuationRequestWithToken:(id)arg1;
+ (void)provideDownloadsPageWithGIMMe:(id)arg1 endpoint:(id)arg2 continuationToken:(id)arg3 options:(unsigned long long)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(readonly, nonatomic) YTIDownloadsPageEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)commuteEntryPointRenderer;
- (int)requestTypeForToken:(id)arg1;
- (id)clientVEMessageWithMessage:(id)arg1 veType:(int)arg2;
- (id)hiddenFilterReloadContinuationDataWithIsBlendedOfflineRequest:(_Bool)arg1;
- (id)reloadContinuationDataForFilterType:(int)arg1 isBlendedOfflineRequest:(_Bool)arg2;
- (id)sortMenuItemForFilterType:(int)arg1 selectedFilterType:(int)arg2 filterVEType:(int)arg3 isBlendedOfflineRequest:(_Bool)arg4;
- (id)dropdownItemForFilterType:(int)arg1 selectedFilterType:(int)arg2 filterVEType:(int)arg3 isBlendedOfflineRequest:(_Bool)arg4;
- (id)backgroundPromoWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)messageWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)noDownloadsMessageWithFilterType:(int)arg1 hasRecommendations:(_Bool)arg2;
- (id)continuationBrowseResponseForSection:(id)arg1;
- (id)browseResponseFromBannerSection:(id)arg1 downloadsSection:(id)arg2 recommendationsSection:(id)arg3 disclaimerRenderer:(id)arg4;
- (id)recommendationSectionRendererFromItems:(id)arg1;
- (id)elementsDownloadsSectionItemsPromise;
- (id)elementsRecommendedVideosSectionPromise;
- (id)sectionRendererFromRecommendedVideos:(id)arg1;
- (id)offlineItemSectionRendererWithRenderers:(id)arg1 headerRenderer:(id)arg2 filterType:(int)arg3 isBlendedOfflineRequest:(_Bool)arg4;
- (_Bool)expiringContentInVideos:(id)arg1;
- (id)offlineItemSectionSupportedRenderersFromContents:(id)arg1 licensesMap:(id)arg2;
- (id)compactPlaylistRendererFromOfflinePlaylist:(id)arg1;
- (id)compactVideoRendererFromOfflineVideo:(id)arg1 videoIndex:(unsigned long long)arg2;
- (id)compactVideoRendererFromDrmOfflineVideo:(id)arg1 drmLicense:(id)arg2 videoIndex:(unsigned long long)arg3;
- (id)sortedContentsFromContentsLists:(id)arg1;
- (id)sortDescriptors;
- (id)headerRendererWithFilterType:(int)arg1 isBlendedOfflineRequest:(_Bool)arg2;
- (id)filterRendererWithFilterType:(int)arg1 isBlendedOfflineRequest:(_Bool)arg2;
- (id)singletonVideosFromAllVideos:(id)arg1;
- (id)drmLicensesMap:(id)arg1;
- (id)recommendationsPromise;
- (id)allDRMEntitiesPromise;
- (id)offlineVideosPromiseWithPinTypes:(int)arg1;
- (id)allVideosPromise;
- (id)playlistsPromise;
- (_Bool)showPlaylists;
- (_Bool)showVideos;
- (_Bool)isOfflineVideoEndpointOverrideEnabled;
- (_Bool)isTexitBannerEnabled;
- (_Bool)isOfflineTravelMessagingEnabled;
- (_Bool)isForceOfflineTravelMessagingEnabled;
- (_Bool)areDownloadRecommendationsEnabled;
- (_Bool)isBlendedOfflineRequest;
- (void)recommendationsSectionReloadWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)bannerSectionReloadWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)downloadsSectionReloadWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldShowTravelBannerFromVideos:(id)arg1;
- (id)bannerSectionFromVideos:(id)arg1;
- (void)createFullBrowseResponseWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)constructDownloadPageWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)initWithEndpoint:(id)arg1 continuationToken:(id)arg2 options:(unsigned long long)arg3;

@end
