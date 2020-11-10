//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue, NSFileManager, NSString;
@protocol OS_dispatch_queue;

@interface DatabaseManager : NSObject
{
    FMDatabaseQueue *_dbQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSFileManager *_fileManager;
    NSString *_accountCachePath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accountCachePath; // @synthesize accountCachePath=_accountCachePath;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(readonly, nonatomic) FMDatabaseQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(readonly, copy, nonatomic) NSString *currentDbDirectoryPath;
- (void)removeOldCacheDirectory;
- (void)deleteFilesInDirectory:(id)arg1 withCondition:(CDUnknownBlockType)arg2;
- (void)createDatabaseQueue;
- (void)cleanupOldDatabases;
- (void)transactionInBackground:(CDUnknownBlockType)arg1;
- (void)databaseInBackground:(CDUnknownBlockType)arg1;
- (id)initWithFileManager:(id)arg1 accountCachePath:(id)arg2;

@end
