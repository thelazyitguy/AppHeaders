//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GBTFileCache, NSError, NSString, NSURL;
@protocol GBTCacheItem;

@protocol GBTFileCacheListener <NSObject>

@optional
- (void)cacheDidFinishClearing:(GBTFileCache *)arg1;
- (void)cache:(GBTFileCache *)arg1 didRemoveCacheItem:(id <GBTCacheItem>)arg2;
- (void)cache:(GBTFileCache *)arg1 didFailToDownloadNetworkURL:(NSURL *)arg2 forCacheKey:(NSString *)arg3 error:(NSError *)arg4;
- (void)cache:(GBTFileCache *)arg1 didDownloadCacheItem:(id <GBTCacheItem>)arg2 forNetworkURL:(NSURL *)arg3;
- (void)cache:(GBTFileCache *)arg1 willDownloadCacheItem:(id <GBTCacheItem>)arg2 forNetworkURL:(NSURL *)arg3;
- (void)cacheDidInitializeIndex:(GBTFileCache *)arg1;
@end
