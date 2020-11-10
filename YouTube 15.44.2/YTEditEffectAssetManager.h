//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSHashTable, NSMutableSet, NSSet, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface YTEditEffectAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_backgroundFileOpQueue;
    NSMutableSet *_cachedAssetIDs;
    NSHashTable *_assetAvailableObservers;
    GIMMe *_gimme;
    NSString *_effectAssetsDirectoryPath;
    NSURLSession *_session;
}

+ (id)errorMessageForErrorCode:(long long)arg1;
+ (id)ensureTrailingSlash:(id)arg1;
+ (id)assetIDForRemoteURL:(id)arg1 assetBaseURLs:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSString *effectAssetsDirectoryPath; // @synthesize effectAssetsDirectoryPath=_effectAssetsDirectoryPath;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)bundleAssetsMissingFromAssetDirectoryContents:(id)arg1 error:(id *)arg2;
- (id)copyBundleAssetsToAssetsDirectory:(id)arg1;
- (void)notifyAssetAvailableObserversAssetsDidBecomeUnavailable:(id)arg1;
- (void)notifyAssetAvailableObserversAssetsDidBecomeAvailable:(id)arg1;
- (void)removeCachedAssetID:(id)arg1;
- (void)addCachedAssetID:(id)arg1;
- (void)setCachedAssetIDs:(id)arg1;
- (id)storageURLForAssetID:(id)arg1;
- (_Bool)persistTempFileURL:(id)arg1 withPermanentURL:(id)arg2 error:(id *)arg3;
- (void)deleteAssetWithAssetID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)assetFetchDidCompleteForAsset:(id)arg1 remoteURL:(id)arg2 localURL:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)removeAssetAvailableObserver:(id)arg1;
- (void)addAssetAvailableObserver:(id)arg1;
@property(readonly, nonatomic) NSSet *availableAssetIDs;
- (void)deleteAssetsWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAssetWithURL:(id)arg1 assetID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithEffectAssetsDirectoryPath:(id)arg1;
- (id)init;

@end

