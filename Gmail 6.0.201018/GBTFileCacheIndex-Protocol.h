//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol GBTCacheItem;

@protocol GBTFileCacheIndex <NSObject>
@property(readonly, nonatomic) unsigned long long sizeOfCacheInBytes;
@property(readonly, nonatomic) unsigned long long cacheItemCount;
- (void)forEachCacheItem:(void (^)(id <GBTCacheItem>))arg1;
- (id <GBTCacheItem>)cacheItemForKey:(NSString *)arg1;
- (_Bool)hasCachedFileForKey:(NSString *)arg1;
- (_Bool)hasDownloadForKey:(NSString *)arg1;
- (_Bool)hasCacheItemForKey:(NSString *)arg1;
@end

