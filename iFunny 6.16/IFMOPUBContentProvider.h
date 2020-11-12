//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IFMOPUBAssetDownloader, IFMOPUBCache, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface IFMOPUBContentProvider : NSObject
{
    IFMOPUBCache *_cache;
    IFMOPUBAssetDownloader *_assetDownloader;
    NSMutableDictionary *_deferredCompletionBlocks;
    NSMutableSet *_loadingUrls;
    NSObject<OS_dispatch_queue> *_synchronizeQueue;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizeQueue; // @synthesize synchronizeQueue=_synchronizeQueue;
@property(retain, nonatomic) NSMutableSet *loadingUrls; // @synthesize loadingUrls=_loadingUrls;
@property(retain, nonatomic) NSMutableDictionary *deferredCompletionBlocks; // @synthesize deferredCompletionBlocks=_deferredCompletionBlocks;
@property(retain, nonatomic) IFMOPUBAssetDownloader *assetDownloader; // @synthesize assetDownloader=_assetDownloader;
@property(retain, nonatomic) IFMOPUBCache *cache; // @synthesize cache=_cache;
- (void)didLoadAsset:(id)arg1 fromUrl:(id)arg2;
- (void)saveAsDeferredCompletionBlock:(CDUnknownBlockType)arg1 withUrl:(id)arg2;
- (void)preloadAssetForUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)assetForUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initPrivate;

@end
