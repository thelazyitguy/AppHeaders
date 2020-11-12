//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTEntityStoreObserver-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSMutableSet, NSString, YTDownloadsPlatformTemplateLoader, YTEntityTransformationController, YTSetupLock;
@protocol YTIdentityProvider, YTIdentityScopedPersistentEntityStoreProvider, YTInMemoryEntityStore;

@interface YTDownloadsPlatformElementsController : NSObject <YTEntityStoreObserver, YTUserChangedObserver>
{
    id <YTInMemoryEntityStore> _inMemoryEntityStore;
    id <YTIdentityProvider> _identityProvider;
    id <YTIdentityScopedPersistentEntityStoreProvider> _identityScopedPersistentEntityStoreProvider;
    _Bool _enableDRAPTransformerIntegration;
    YTDownloadsPlatformTemplateLoader *_templateLoader;
    YTSetupLock *_recsListLock;
    _Bool _isDomoFaultOnRequestEnabled;
    _Bool _isDomoSynchronousTransformOnRequestEnabled;
    _Bool _isElementsDownloadsPageDownloadedBundleEnabled;
    _Bool _isDomoLoggingFieldsOnEmlModelEnabled;
    YTEntityTransformationController *_transformationController;
    NSMutableSet *_preTransformedVideoIDs;
    GIMMe *_gimme;
}

+ (id)getElementModelOfType:(id)arg1 fromBlueprintFunction:(CDUnknownFunctionPointerType)arg2 onceToken:(long long *)arg3 blueprintOut:(id *)arg4 elementOut:(id *)arg5;
+ (id)rendererWithElement:(id)arg1;
+ (id)contentIDFromElementRenderer:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)allVideosPromise;
- (id)transformedMainVideo:(id)arg1 videoID:(id)arg2 offlineVideo:(id)arg3;
- (void)projectPersistedRecsListEntity:(id)arg1 associationKeys:(id)arg2 videosPromise:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)projectPersistedRecsListEntity:(id)arg1 fromInitialFetch:(_Bool)arg2;
- (id)legacyRecommendedItemRendererWithVideoEntityKey:(id)arg1 playlistEntityKey:(id)arg2 isLargeFormFactor:(_Bool)arg3 localizedStrings:(id)arg4;
- (id)recommendedVideoRendererWithVideoID:(id)arg1 isLargeFormFactor:(_Bool)arg2 localizedStrings:(id)arg3;
- (id)downloadedPlaylistRendererWithOfflinePlaylistData:(id)arg1;
- (id)downloadedVideoRendererWithVideoID:(id)arg1;
- (id)legacyRecommendedItemElementWithVideoEntityKey:(id)arg1 playlistEntityKey:(id)arg2 isLargeFormFactor:(_Bool)arg3 localizedStrings:(id)arg4;
- (id)recommendedVideoElementWithVideoID:(id)arg1 isLargeFormFactor:(_Bool)arg2 localizedStrings:(id)arg3;
- (id)downloadedPlaylistElementWithPlaylistData:(id)arg1;
- (id)downloadedVideoElementWithVideoId:(id)arg1;
- (id)clientVeSpecWithUIType:(int)arg1 contentId:(id)arg2;
- (void)startTransformationForVideoId:(id)arg1;
- (void)buildRecommendationsSectionItemsWithListEntity:(id)arg1 isLargeFormFactor:(_Bool)arg2 localizedStrings:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)buildDownloadsSectionItemsWithListEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)setupUserSpecificState;
- (void)userDidChange;
- (void)didUpdateKey:(id)arg1 inEntityStore:(id)arg2 withUpdateType:(unsigned long long)arg3 previousEntity:(id)arg4 entity:(id)arg5;
- (id)downloadQualityPickerElementWithModel:(id)arg1;
- (void)getRecommendationsSectionItemsWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getDownloadsPageSectionItemsWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
