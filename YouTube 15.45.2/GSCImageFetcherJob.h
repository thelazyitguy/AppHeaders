//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GSCImageFetcherRequestDelegate-Protocol.h>

@class GSCImageCacheItem, GSCImageCacheReservedItem, GSCImageFetcherCache, GSCImageFetcherCacheBlockControl, GSCImageFetcherDebugTiming, GSCImageFetcherHTTPFetcher, GSCImageFetcherJobList, GSCImageUrl, NSData, NSError, NSMutableSet, NSString, UIImage;
@protocol GSCImageFetcherJobDelegate, GSCImageUrlCustomLoadControl, OS_dispatch_queue;

@interface GSCImageFetcherJob : NSObject <GSCImageFetcherRequestDelegate>
{
    id <GSCImageFetcherJobDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_jobSerialQueue;
    GSCImageUrl *_imageURL;
    NSString *_sourceUrlString;
    NSString *_fetcherUrlString;
    unsigned short _requestFlags;
    NSMutableSet *_requests;
    GSCImageFetcherCache *_cache;
    GSCImageCacheItem *_cacheItem;
    GSCImageCacheReservedItem *_reservedItem;
    NSData *_data;
    NSError *_error;
    unsigned short _resultType;
    GSCImageFetcherHTTPFetcher *_fetcher;
    GSCImageFetcherCacheBlockControl *_blockControl;
    id <GSCImageUrlCustomLoadControl> _customLoadControl;
    UIImage *_unCachedImage;
    int _PHImageRequestID;
    GSCImageFetcherDebugTiming *_debugTiming;
    _Bool _canceled;
    _Bool _highPriority;
    _Bool _lowPriority;
    _Bool _prefetchPriority;
    unsigned short _scheduleType;
    GSCImageFetcherJobList *_jobList;
    GSCImageFetcherJob *_next;
    GSCImageFetcherJob *_previous;
    NSString *_urlString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GSCImageFetcherDebugTiming *debugTiming; // @synthesize debugTiming=_debugTiming;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) unsigned short requestFlags; // @synthesize requestFlags=_requestFlags;
@property(nonatomic) _Bool prefetchPriority; // @synthesize prefetchPriority=_prefetchPriority;
@property(nonatomic) _Bool lowPriority; // @synthesize lowPriority=_lowPriority;
@property(nonatomic) _Bool highPriority; // @synthesize highPriority=_highPriority;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(retain, nonatomic) GSCImageFetcherJob *previous; // @synthesize previous=_previous;
@property(retain, nonatomic) GSCImageFetcherJob *next; // @synthesize next=_next;
@property(retain, nonatomic) GSCImageFetcherJobList *jobList; // @synthesize jobList=_jobList;
@property(nonatomic) unsigned short scheduleType; // @synthesize scheduleType=_scheduleType;
- (void)loadVideoThumbnailForAVAsset:(id)arg1 info:(id)arg2 requestSize:(struct CGSize)arg3 frameTimeMs:(long long)arg4 fallbackBlock:(CDUnknownBlockType)arg5 handler:(CDUnknownBlockType)arg6;
- (_Bool)phImageManagerLoadLocalAsset;
- (id)imageFromData:(id)arg1;
- (void)createBlockControl;
- (void)removeUrlFromCache;
- (void)cacheImage:(id)arg1 withData:(id)arg2;
- (void)didLoadFromNetwork:(id)arg1 error:(id)arg2 responseFlags:(unsigned short)arg3;
- (void)loadProxyFromDiskCache;
- (void)didLoadFromCustomBlockWithImage:(id)arg1 error:(id)arg2;
- (void)loadFromCustomBlock;
- (void)removeReservedItem;
- (_Bool)loadFromNetwork;
- (_Bool)decodeFromData;
- (_Bool)loadFromDiskCache;
- (_Bool)loadCompletedData;
- (void)cacheImageFromLocalFile:(id)arg1;
- (_Bool)loadLocalFile;
- (void)didLocalAssetFetch:(id)arg1 jpegData:(id)arg2 error:(id)arg3;
- (_Bool)loadLocalAsset;
- (_Bool)checkImageCache;
- (_Bool)isLocalAssetFetch;
- (void)cancelJob;
- (void)changeToDecodeJob;
- (void)changeToNetworkJob;
- (void)removeCanceledRequest:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)load;
- (void)completed;
- (_Bool)attachRequest:(id)arg1;
- (void)dealloc;
- (id)initWithImageUrl:(id)arg1 urlString:(id)arg2 delegate:(id)arg3 cache:(id)arg4 requestFlags:(unsigned short)arg5 request:(id)arg6 jobSerialQueue:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
