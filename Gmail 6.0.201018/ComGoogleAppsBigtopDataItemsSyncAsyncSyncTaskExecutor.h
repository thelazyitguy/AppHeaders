//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsSyncAsyncSyncTaskExecutor_SyncTask, ComGoogleAppsXplatJobsJobQueue, XPTExecutionGuard;
@protocol JavaUtilSet, JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsSyncAsyncSyncTaskExecutor : NSObject
{
    id lock_;
    id <JavaUtilSet> pendingSyncTasks_;
    ComGoogleAppsBigtopDataItemsSyncAsyncSyncTaskExecutor_SyncTask *currentSyncTask_;
    id <JavaxInjectProvider> executor_;
    id <JavaxInjectProvider> currentJob_;
    ComGoogleAppsXplatJobsJobQueue *jobQueue_;
    XPTExecutionGuard *executionGuard_;
}

+ (void)initialize;
- (void)dealloc;
- (id)submitAndWaitForAllPendingChangesSyncedWithComGoogleCommonUtilConcurrentAsyncCallable:(id)arg1 withJBTSConfigureSyncRequest_SyncMode:(id)arg2 withComGoogleAppsBigtopDataItemsItemsProto_SyncJoinMode:(id)arg3 withComGoogleAppsBigtopDataItemsItemsProto_RequestPriority:(id)arg4;
- (id)submitAndWaitForFullSyncWithComGoogleCommonUtilConcurrentAsyncCallable:(id)arg1 withJBTSConfigureSyncRequest_SyncMode:(id)arg2 withComGoogleAppsBigtopDataItemsItemsProto_SyncJoinMode:(id)arg3 withComGoogleAppsBigtopDataItemsItemsProto_RequestPriority:(id)arg4;
- (void)setCurrentAllPendingChangesSyncedDone;
- (id)getCurrentAllPendingChangesSyncedFuture;

@end
