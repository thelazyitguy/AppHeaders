//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GBTOfflineAttachmentServiceImplDeps, GIPAccountID;

@interface GBTAttachmentCacheKeyMap : NSObject
{
    id <GIPAccountID> _accountID;
    id <GBTOfflineAttachmentServiceImplDeps> _serviceDeps;
    struct sqlite3 *_database;
}

- (void).cxx_destruct;
- (void)closeDatabase;
- (_Bool)createDatabaseTables;
- (_Bool)openDatabase;
- (_Bool)initializeDatabaseIfNeeded;
@property(readonly, nonatomic) NSString *databasePath;
- (void)deleteSapiCacheKey:(id)arg1;
- (void)setIosCacheKey:(id)arg1 forSapiCacheKey:(id)arg2;
- (id)iosCacheKeyForSapiCacheKey:(id)arg1;
- (id)allSapiCacheKeys;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 offlineAttachmentServiceImplDeps:(id)arg2;

@end
