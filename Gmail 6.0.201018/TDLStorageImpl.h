//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TDLPlatformStorage-Protocol.h"

@class ComGoogleCommonBaseOptional, NSString;
@protocol JavaUtilConcurrentExecutor, JavaUtilSet, TDLDatabaseInitializer, TDLPlatformTrivialCorpusStorage;

@interface TDLStorageImpl : NSObject <TDLPlatformStorage>
{
    id <TDLDatabaseInitializer> databaseInitializer_;
    id <JavaUtilConcurrentExecutor> databaseExecutor_;
    id <TDLPlatformTrivialCorpusStorage> trivialCorpusStorage_;
    id <JavaUtilSet> currentExecutingFutures_;
    ComGoogleCommonBaseOptional *tasksDatabaseFuture_;
    _Bool released_;
}

+ (void)initialize;
- (void)dealloc;
- (id)batchWriteRoomsWithJavaUtilCollection:(id)arg1 withJavaUtilCollection:(id)arg2 withComGoogleProtobufTimestamp:(id)arg3;
- (id)shardsWithLocalStorage;
- (id)shardsWithPendingSyncDown;
- (id)shardsWithPendingMutations;
- (id)batchReadAllData;
- (id)release__;
- (id)getExecutingFutures;
- (id)getPlatformShardStorageWithTDLDataModelShard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
