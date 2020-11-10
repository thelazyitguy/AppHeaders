//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTBlobStorage-Protocol.h>
#import <Module_Framework/YTBlobStorageBlocking-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class NSMutableDictionary, NSString;

@interface YTPINDiskCacheBlobStorage : NSObject <YTSystemNotificationsObserver, YTBlobStorage, YTBlobStorageBlocking>
{
    NSMutableDictionary *_blobStoreDictionary;
    NSString *_lastAccessedCacheName;
}

+ (id)existingBlobStorageUsers;
+ (id)storageKeyFromOpaqueKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)validateStorageKey:(id)arg1;
+ (id)keyPrefixFromNamespace:(id)arg1;
+ (id)cacheKeyFromBlobStorageKey:(id)arg1;
+ (id)cacheNameForUserID:(id)arg1;
+ (id)cachesRootPathURL;
+ (id)cachesRootPath;
- (void).cxx_destruct;
- (id)pinDiskCaches;
- (void)removeKeysByNamespace:(id)arg1 forDiskCache:(id)arg2;
- (void)unloadCaches;
- (id)diskCacheByName:(id)arg1;
- (id)diskCacheForUserID:(id)arg1;
- (void)appDidReceiveMemoryWarning:(id)arg1;
- (void)removeObjectForStorageKey:(id)arg1;
- (void)setObjectForStorageKey:(id)arg1 object:(id)arg2;
- (id)getObjectForStorageKey:(id)arg1;
- (void)removeObjectsMatchingStorageKey:(id)arg1;
- (void)removeObjectForStorageKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setObjectForStorageKey:(id)arg1 object:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getObjectForStorageKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithSystemNotifications:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

