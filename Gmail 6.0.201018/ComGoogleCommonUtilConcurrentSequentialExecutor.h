//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilConcurrentExecutor-Protocol.h"

@class ComGoogleCommonUtilConcurrentSequentialExecutor_QueueWorker, ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState, NSString;
@protocol JavaUtilConcurrentExecutor, JavaUtilDeque;

@interface ComGoogleCommonUtilConcurrentSequentialExecutor : NSObject <JavaUtilConcurrentExecutor>
{
    id <JavaUtilConcurrentExecutor> executor_;
    id <JavaUtilDeque> queue_;
    ComGoogleCommonUtilConcurrentSequentialExecutor_WorkerRunningState *workerRunningState_;
    long long workerRunCount_;
    ComGoogleCommonUtilConcurrentSequentialExecutor_QueueWorker *worker_;
}

+ (void)initialize;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)executeWithJavaLangRunnable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
