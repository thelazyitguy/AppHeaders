//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTSapiShutdownCoordinator-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplCommonScheduler, ComGoogleAppsXplatJobsJobLauncher, ComGoogleAppsXplatJobsJobSystem, NSString, XPTLifecycle;
@protocol ComGoogleAppsBigtopDataCommonLifecycleEventsController, DaggerLazy, JBTMetrics;

@interface ComGoogleAppsBigtopSyncClientImplShutdownSapiShutdownCoordinatorImpl : NSObject <JBTSapiShutdownCoordinator>
{
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    id <ComGoogleAppsBigtopDataCommonLifecycleEventsController> lifecycleEventsController_;
    XPTLifecycle *sapiLifecycle_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    id <DaggerLazy> pendingMutationsPusher_;
    id <DaggerLazy> loggingManager_;
    id <DaggerLazy> controlServiceClient_;
    ComGoogleAppsXplatJobsJobLauncher *jobLauncher_;
    ComGoogleAppsXplatJobsJobSystem *jobSystem_;
    id <JBTMetrics> metrics_;
    ComGoogleAppsBigtopSyncClientImplCommonScheduler *scheduler_;
}

+ (void)initialize;
- (void)dealloc;
- (id)shutdownBtd;
- (void)hibernateWithInt:(int)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (void)shutdownWithInt:(int)arg1 withJBTCallback:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
