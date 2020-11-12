//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTSQLiteDatabaseAsynchronous-Protocol.h>
#import <Module_Framework/YTSQLiteDatabaseSynchronous-Protocol.h>

@class FMDatabase, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface YTSQLiteDatabase : NSObject <YTSQLiteDatabaseAsynchronous, YTSQLiteDatabaseSynchronous>
{
    NSString *_name;
    NSString *_prefix;
    NSArray *_migrations;
    _Bool _inMemoryDatabase;
    FMDatabase *_db;
    NSObject<OS_dispatch_queue> *_operationQueue;
}

+ (id)databaseFilenameForPrefix:(id)arg1 name:(id)arg2;
+ (id)directoryForDatabaseWithSubDirectory:(id)arg1;
+ (id)getPrefixesWithResourcesForName:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteResourcesForPrefixes:(id)arg1 name:(id)arg2 error:(id *)arg3;
+ (void)deleteResourcesForName:(id)arg1;
- (void).cxx_destruct;
- (_Bool)setDatabaseVersion:(id)arg1 version:(unsigned long long)arg2;
- (unsigned long long)getDatabaseVersion:(id)arg1;
- (id)generateDatabaseURL;
- (id)runMigrations:(id)arg1;
- (id)openDatabase:(id)arg1;
- (id)setupSQLiteDatabase;
- (_Bool)isClosed;
- (id)db;
- (void)wipe;
- (void)close;
- (id)open;
- (void)inTransactionAsync:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)inDatabaseAsync:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithName:(id)arg1 prefix:(id)arg2 migrations:(id)arg3 inMemoryDatabase:(_Bool)arg4;
- (id)initInMemoryDatabaseWithName:(id)arg1 prefix:(id)arg2 setupBlock:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 prefix:(id)arg2 migrations:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
