//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASImageNode.h>

@class NSArray, NSURL, UIImage;
@protocol ASImageCacheProtocol, ASImageDownloaderProtocol, ASNetworkImageNodeDelegate;

@interface ASNetworkImageNode : ASImageNode
{
    id <ASNetworkImageNodeDelegate> _delegate;
    NSURL *_URL;
    UIImage *_defaultImage;
    long long _cacheSentinel;
    id _downloadIdentifier;
    id _downloadIdentifierForProgressBlock;
    double _currentImageQuality;
    double _renderedImageQuality;
    double _downloadProgress;
    id <ASImageDownloaderProtocol> _downloader;
    id <ASImageCacheProtocol> _cache;
    struct {
        unsigned int delegateWillStartDisplayAsynchronously:1;
        unsigned int delegateWillLoadImageFromCache:1;
        unsigned int delegateWillLoadImageFromNetwork:1;
        unsigned int delegateDidStartFetchingData:1;
        unsigned int delegateDidFailWithError:1;
        unsigned int delegateDidFinishDecoding:1;
        unsigned int delegateDidLoadImage:1;
        unsigned int delegateDidLoadImageFromCache:1;
        unsigned int delegateDidLoadImageWithInfo:1;
        unsigned int delegateDidFailToLoadImageFromCache:1;
        unsigned int downloaderImplementsSetProgress:1;
        unsigned int downloaderImplementsSetPriority:1;
        unsigned int downloaderImplementsAnimatedImage:1;
        unsigned int downloaderImplementsCancelWithResume:1;
        unsigned int downloaderImplementsDownloadWithPriority:1;
        unsigned int cacheSupportsClearing:1;
        unsigned int cacheSupportsSynchronousFetch:1;
        unsigned int imageLoaded:1;
        unsigned int imageWasSetExternally:1;
        unsigned int shouldRenderProgressImages:1;
        unsigned int shouldCacheImage:1;
    } _networkImageNodeFlags;
}

+ (_Bool)useMainThreadDelegateCallbacks;
+ (void)setUseMainThreadDelegateCallbacks:(_Bool)arg1;
- (void).cxx_destruct;
- (void)displayDidFinish;
- (void)_lazilyLoadImageIfNecessary;
- (void)_downloadImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)_locked_cancelImageDownloadWithResumePossibility:(_Bool)arg1;
- (void)_cancelImageDownloadWithResumePossibility:(_Bool)arg1;
- (void)_locked_cancelDownloadAndClearImageWithResumePossibility:(_Bool)arg1;
- (void)_cancelDownloadAndClearImageWithResumePossibility:(_Bool)arg1;
- (void)_updateProgressImageBlockOnDownloaderIfNeeded;
- (void)_updatePriorityOnDownloaderIfNeeded;
- (void)handleProgressImage:(id)arg1 progress:(double)arg2 downloadIdentifier:(id)arg3;
- (void)_updateDownloadedProgress:(double)arg1 downloadIdentifier:(id)arg2;
- (void)didEnterPreloadState;
- (void)didExitPreloadState;
- (void)didExitDisplayState;
- (void)didExitVisibleState;
- (void)didEnterVisibleState;
- (void)displayWillStartAsynchronously:(_Bool)arg1;
- (_Bool)placeholderShouldPersist;
@property _Bool shouldCacheImage;
@property _Bool shouldRenderProgressImages;
@property __weak id <ASNetworkImageNodeDelegate> delegate;
@property(readonly) double renderedImageQuality;
- (void)setRenderedImageQuality:(double)arg1;
- (void)_setDownloadProgress:(double)arg1;
@property(readonly) double downloadProgress;
- (void)setDownloadProgress:(double)arg1;
- (void)_setCurrentImageQuality:(double)arg1;
@property(readonly) double currentImageQuality;
- (void)setCurrentImageQuality:(double)arg1;
@property(retain) UIImage *defaultImage;
- (void)_locked_setDefaultImage:(id)arg1;
@property(copy) NSURL *URL;
- (void)setURL:(id)arg1 resetToDefault:(_Bool)arg2;
@property(copy) NSArray *URLs;
- (void)_locked__setImage:(id)arg1;
- (void)_setImage:(id)arg1;
- (void)_locked_setImage:(id)arg1;
@property(retain) UIImage *image; // @dynamic image;
- (id)callbackQueue;
- (void)dealloc;
- (id)init;
- (id)initWithCache:(id)arg1 downloader:(id)arg2;

@end

