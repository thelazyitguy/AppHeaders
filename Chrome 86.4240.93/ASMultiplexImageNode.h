//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/ASImageNode.h>

@class NSArray, NSOperation, PHImageManager;
@protocol ASImageCacheProtocol, ASImageDownloaderProtocol, ASMultiplexImageNodeDataSource, ASMultiplexImageNodeDelegate, NSCopying><NSObject;

@interface ASMultiplexImageNode : ASImageNode
{
    id <ASImageCacheProtocol> _cache;
    id <ASImageDownloaderProtocol> _downloader;
    struct {
        unsigned int downloaderImplementsSetProgress:1;
        unsigned int downloaderImplementsSetPriority:1;
        unsigned int downloaderImplementsDownloadWithPriority:1;
    } _downloaderFlags;
    id <ASMultiplexImageNodeDelegate> _delegate;
    struct {
        unsigned int downloadStart:1;
        unsigned int downloadProgress:1;
        unsigned int downloadFinish:1;
        unsigned int updatedImageDisplayFinish:1;
        unsigned int updatedImage:1;
        unsigned int displayFinish:1;
    } _delegateFlags;
    id <ASMultiplexImageNodeDataSource> _dataSource;
    struct {
        unsigned int image:1;
        unsigned int URL:1;
        unsigned int asset:1;
    } _dataSourceFlags;
    _Bool _downloadsIntermediateImages;
    // Error parsing type: {Mutex="_type"i""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_plain"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"_recursive"{recursive_mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}})}, name: _imageIdentifiersLock
    NSArray *_imageIdentifiers;
    id _loadedImageIdentifier;
    id _loadingImageIdentifier;
    id _displayedImageIdentifier;
    NSOperation *_phImageRequestOperation;
    // Error parsing type: {RecursiveMutex="_type"i""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_plain"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"_recursive"{recursive_mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}})}, name: _downloadIdentifierLock
    id _downloadIdentifier;
    _Bool _shouldRenderProgressImages;
    _Bool _cacheSupportsClearing;
    PHImageManager *_imageManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) id loadingImageIdentifier; // @synthesize loadingImageIdentifier=_loadingImageIdentifier;
@property(retain, nonatomic) PHImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(readonly, nonatomic) id <NSCopying><NSObject> displayedImageIdentifier; // @synthesize displayedImageIdentifier=_displayedImageIdentifier;
@property(copy, nonatomic) id loadedImageIdentifier; // @synthesize loadedImageIdentifier=_loadedImageIdentifier;
@property(nonatomic) _Bool downloadsIntermediateImages; // @synthesize downloadsIntermediateImages=_downloadsIntermediateImages;
@property(nonatomic) __weak id <ASMultiplexImageNodeDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <ASMultiplexImageNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_finishedLoadingImage:(id)arg1 forIdentifier:(id)arg2 error:(id)arg3;
- (void)_downloadImageWithIdentifier:(id)arg1 URL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchImageWithIdentifierFromCache:(id)arg1 URL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadNextImage;
- (id)_nextImageIdentifierToDownload;
- (void)_clearImage;
- (void)_updateProgressImageBlockOnDownloaderIfNeeded;
- (void)_updatePriorityOnDownloaderIfNeeded;
- (id)_bestImmediatelyAvailableImageFromDataSource:(id *)arg1;
- (void)_loadImageIdentifiers;
- (void)_setDownloadIdentifier:(id)arg1;
- (void)_setDisplayedImageIdentifier:(id)arg1 withImage:(id)arg2;
- (void)reloadImageIdentifierSources;
@property(copy, nonatomic) NSArray *imageIdentifiers;
@property(nonatomic) _Bool shouldRenderProgressImages;
- (void)_setImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)didExitDisplayState;
- (void)didExitVisibleState;
- (void)didEnterVisibleState;
- (void)displayWillStartAsynchronously:(_Bool)arg1;
- (_Bool)placeholderShouldPersist;
- (void)displayDidFinish;
- (void)didEnterPreloadState;
- (void)didExitPreloadState;
- (void)clearContents;
- (void)dealloc;
- (id)init;
- (id)initWithCache:(id)arg1 downloader:(id)arg2;

@end
