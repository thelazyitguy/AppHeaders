//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLXOperation, NFUIDownloadMetadataModel, NFUIDownloadModel, NFUISmartDownloadService, NSMutableDictionary, NSMutableSet, NSOperationQueue;

@interface NFUIDownloadService : NSObject
{
    _Bool _loaded;
    NFUIDownloadModel *_downloadModel;
    NFUIDownloadMetadataModel *_metadataModel;
    NSOperationQueue *_userInitiatedOperationQueue;
    NSOperationQueue *_updateOperationQueue;
    NSMutableSet *_inflightUpdateIds;
    NSMutableDictionary *_fetchMetadataRequests;
    NFLXOperation *_lastLoadOperation;
    NFUISmartDownloadService *_smartDownloadsService;
}

+ (id)watchableTypes;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NFUISmartDownloadService *smartDownloadsService; // @synthesize smartDownloadsService=_smartDownloadsService;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) __weak NFLXOperation *lastLoadOperation; // @synthesize lastLoadOperation=_lastLoadOperation;
@property(retain, nonatomic) NSMutableDictionary *fetchMetadataRequests; // @synthesize fetchMetadataRequests=_fetchMetadataRequests;
@property(retain, nonatomic) NSMutableSet *inflightUpdateIds; // @synthesize inflightUpdateIds=_inflightUpdateIds;
@property(retain, nonatomic) NSOperationQueue *updateOperationQueue; // @synthesize updateOperationQueue=_updateOperationQueue;
@property(retain, nonatomic) NSOperationQueue *userInitiatedOperationQueue; // @synthesize userInitiatedOperationQueue=_userInitiatedOperationQueue;
@property(retain, nonatomic) NFUIDownloadMetadataModel *metadataModel; // @synthesize metadataModel=_metadataModel;
@property(retain, nonatomic) NFUIDownloadModel *downloadModel; // @synthesize downloadModel=_downloadModel;
- (void)refreshMetadataForVideoIds:(id)arg1 inObjectContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMissingMaturityLevelsWithObjectContext:(id)arg1;
- (_Bool)hasPendingDownloadsAlready;
- (_Bool)downloadAlreadyExistsForSourceShadowCacheId:(id)arg1;
- (void)getSmartDownloadsWithObjectContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)pinForDownloadValidation;
- (_Bool)isSmartDownloadsEnabled;
- (void)initiateBackgroundSpotlightSync:(id)arg1 objectContext:(id)arg2;
- (void)syncWithSpotlight:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshDownloadBookmarkDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)watchableIdsForAllDownloads;
- (id)diskUsageForAllDownloads;
- (id)fullPlayerVideoModelForId:(id)arg1;
- (id)episodeIdsForShowId:(id)arg1 profileGuid:(id)arg2;
- (id)showDownloadCollectionViewModelForShowId:(id)arg1 profileGuid:(id)arg2;
- (id)downloadCollectionViewModelWithActiveProfileGuid:(id)arg1 activeProfile:(id)arg2 isKids:(_Bool)arg3 isFilteringEnabled:(_Bool)arg4;
- (id)downloadCollectionViewModel;
- (id)observerForShowWithId:(id)arg1 profileGuid:(id)arg2;
- (id)observerForDownloadWithId:(id)arg1;
- (id)nextEpisodeEntityForId:(id)arg1;
- (id)watchableEntityWithId:(id)arg1;
- (id)entityWithId:(id)arg1;
- (id)downloadWithId:(id)arg1;
- (id)currentSession;
- (void)removeDownloadsWithIds:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addDownloadWithId:(id)arg1 trackId:(long long)arg2 sourceShadowCacheId:(id)arg3 objectContext:(id)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)applyConfigSettings;
- (void)refreshAll:(CDUnknownBlockType)arg1;
- (void)unload;
- (id)unloadOperation;
- (void)loadFromDiskIfNeeded:(CDUnknownBlockType)arg1;
- (id)loadOperation;
- (void)loadOperationExecution:(id)arg1;
- (id)metadataModelSync;
- (id)downloadModelSync;
- (id)ensureReadySync:(CDUnknownBlockType)arg1;
- (void)sendDebugLogs;
- (_Bool)isADownloadCurrentlyInProgress;
- (_Bool)isReady;
- (id)init;
- (void)loadThumbnailForEntity:(id)arg1 key:(id)arg2 maxSize:(double)arg3 callback:(CDUnknownBlockType)arg4;
- (void)loadDataForEntity:(id)arg1 key:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)downloadMetadataURLKeysForEntities:(id)arg1;
- (void)downloadMetadataURLKeysForEntity:(id)arg1;
- (void)loadDataForId:(id)arg1 key:(id)arg2 URL:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)fetchMetadataWithId:(id)arg1 trackId:(long long)arg2 objectContext:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)entityDictionariesForId:(id)arg1 trackId:(long long)arg2 objectContext:(id)arg3 fromResults:(id)arg4 withCallPath:(id)arg5;
- (void)fetchDownloadMetadata:(id)arg1 objectContext:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)fetchMetadataResults:(id)arg1 trackId:(long long)arg2 objectContext:(id)arg3 callback:(CDUnknownBlockType)arg4;

@end
