//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/RCHPersistenceServiceProtocol-Protocol.h>

@class MSCFlags, MSCSharedCache, NSString;
@protocol GIKSharedLibraryService, MDILogger;

@interface RCHSharedCachePersistenceService : NSObject <RCHPersistenceServiceProtocol>
{
    MSCSharedCache *_sharedCache;
    id <GIKSharedLibraryService> _sharedLibraryService;
    id <MDILogger> _mdiLogger;
    MSCFlags *_flags;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSCFlags *flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) id <MDILogger> mdiLogger; // @synthesize mdiLogger=_mdiLogger;
@property(readonly, nonatomic) id <GIKSharedLibraryService> sharedLibraryService; // @synthesize sharedLibraryService=_sharedLibraryService;
- (void)sortNotificationInfoArray:(id)arg1;
- (id)accountNotificationDataForUserID:(id)arg1 error:(id *)arg2;
- (_Bool)isDataNotFoundError:(id)arg1;
- (id)sharedCacheGroupForUserID:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllForUserID:(id)arg1 error:(id *)arg2;
- (long long)synchronizationVersionForUserID:(id)arg1 error:(id *)arg2;
- (_Bool)storeSynchronizationVersion:(long long)arg1 forUserID:(id)arg2 error:(id *)arg3;
- (id)notificationInfosForUserID:(id)arg1 error:(id *)arg2;
- (id)latestNotificationInfoForUserID:(id)arg1 error:(id *)arg2;
- (_Bool)replaceNotificationInfos:(id)arg1 forUserID:(id)arg2 error:(id *)arg3;
- (_Bool)removeNotificationInfo:(id)arg1 forUserID:(id)arg2 error:(id *)arg3;
- (_Bool)storeNotificationInfo:(id)arg1 forUserID:(id)arg2 error:(id *)arg3;
- (id)initWithSharedLibraryService:(id)arg1 mdiLogger:(id)arg2 flags:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
