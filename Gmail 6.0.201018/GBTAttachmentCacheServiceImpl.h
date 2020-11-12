//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTAttachmentCacheService-Protocol.h"

@class NSMutableDictionary, NSNumber, NSString;
@protocol GBTAccountSettingsService, GBTAccountsService, GBTAuthorizationService, GIPAccountID;

@interface GBTAttachmentCacheServiceImpl : NSObject <GBTAttachmentCacheService>
{
    id <GIPAccountID> _accountID;
    id <GBTAccountSettingsService> _accountSettingsService;
    id <GBTAccountsService> _accountsService;
    id <GBTAuthorizationService> _authorizationService;
    NSMutableDictionary *_attachmentCaches;
    NSNumber *_cachedOfflineBlobsExperimentEnabled;
}

+ (void)expireOldItemsForCache:(id)arg1;
+ (void)setParams:(const CDStruct_5545a7c9 *)arg1 forCache:(id)arg2;
- (void).cxx_destruct;
- (id)lockerAttachmentCache;
- (id)inlineAttachmentCache;
- (id)attachmentCache;
- (id)attachmentCacheWithParams:(const CDStruct_5545a7c9 *)arg1;
- (void)setAuthorizerForCacheIfNeeded:(id)arg1;
- (void)resetAttachmentCachesIfNeeded;
- (id)keyForOfflineAttachmentCachingEnabled;
- (id)uniqueIDForCurrentUser;
- (id)attachmentCacheKeyForAttachmentDownloadURL:(id)arg1;
- (id)asyncAttachmentCacheMetadataForAttachment:(id)arg1;
- (id)attachmentCacheMetadataForAttachment:(id)arg1;
- (id)inlineAttachmentCacheForMessage:(id)arg1;
- (id)attachmentCacheForAttachment:(id)arg1;
- (void)clearCaches;
- (void)expireOldCacheItems;
@property(nonatomic) _Bool offlineAttachmentCachingEnabled;
- (id)initWithAccountID:(id)arg1 accountSettingsService:(id)arg2 accountsService:(id)arg3 authorizationService:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
