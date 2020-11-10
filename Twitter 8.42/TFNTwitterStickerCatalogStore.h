//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray, TFNTwitterAccount, TFNTwitterStickerCatalog, TFNTwitterStickerCategory;

@interface TFNTwitterStickerCatalogStore : NSObject
{
    unsigned long long _state;
    _Bool _receivedNetworkCatalogBeforeCache;
    TFNTwitterStickerCatalog *_networkCatalog;
    NSMutableArray *_pendingLoadingCompletionBlocks;
    NSMutableArray *_pendingNetworkCompletionBlocks;
    _Bool _networkRequestInProgress;
    NSDate *_minValidCacheDateForFeatured;
    NSDate *_minValidCacheDate;
    TFNTwitterAccount *_account;
    TFNTwitterStickerCatalog *_catalog;
    NSDictionary *_variantPreferences;
    TFNTwitterStickerCategory *_lastSelectedCategory;
    NSDate *_lastUpdatedFromNetwork;
}

+ (id)_sharedQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool networkRequestInProgress; // @synthesize networkRequestInProgress=_networkRequestInProgress;
@property(readonly, nonatomic) NSDate *lastUpdatedFromNetwork; // @synthesize lastUpdatedFromNetwork=_lastUpdatedFromNetwork;
@property(copy, nonatomic) TFNTwitterStickerCategory *lastSelectedCategory; // @synthesize lastSelectedCategory=_lastSelectedCategory;
@property(readonly, nonatomic) NSDictionary *variantPreferences; // @synthesize variantPreferences=_variantPreferences;
@property(readonly, nonatomic) TFNTwitterStickerCatalog *catalog; // @synthesize catalog=_catalog;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSDate *minValidCacheDate; // @synthesize minValidCacheDate=_minValidCacheDate;
@property(copy, nonatomic) NSDate *minValidCacheDateForFeatured; // @synthesize minValidCacheDateForFeatured=_minValidCacheDateForFeatured;
- (void)_mergeNetworkCatalog;
- (void)_receiveNetworkCatalog:(id)arg1;
- (void)_requestNetworkCatalog;
- (void)processAfterCacheLoaded:(CDUnknownBlockType)arg1 afterNetworkUpdate:(CDUnknownBlockType)arg2;
- (id)_filePath;
- (void)_saveToFile;
- (void)flush;
- (void)updatePreferredVariant:(id)arg1 forStickerWithVariants:(id)arg2;
- (void)updateMostRecentSticker:(id)arg1;
- (void)_receiveLocalCache:(id)arg1;
- (void)_loadLocalCache;
- (void)processAfterCacheLoaded:(CDUnknownBlockType)arg1;
- (id)initWithAccount:(id)arg1;

@end
