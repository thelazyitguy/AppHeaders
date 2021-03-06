//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTMetrics-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplCommonSpanImpl_Dependencies, NSString, XPTLoggingManager;
@protocol DaggerLazy, JBTLoggingCounterManager;

@interface ComGoogleAppsBigtopSyncClientImplMetricsMetricsImpl : NSObject <JBTMetrics>
{
    ComGoogleAppsBigtopSyncClientImplCommonSpanImpl_Dependencies *spanDeps_;
    id <JBTLoggingCounterManager> counterManager_;
    id <DaggerLazy> userActionRecorder_;
    XPTLoggingManager *loggingManager_;
}

+ (void)initialize;
- (void)dealloc;
- (void)recordEventWithKeysForWebWithJBTCBigTopCommonEnums_Metric:(id)arg1 withJavaUtilList:(id)arg2 withInt:(int)arg3;
- (void)incrementCounterByWithKeysForWebWithJBTCBigTopCommonEnums_Metric:(id)arg1 withJavaUtilList:(id)arg2 withDouble:(double)arg3;
- (void)recordUserActionValueWithTagsForWebWithJBTCBigTopCommonEnums_Metric:(id)arg1 withInt:(int)arg2 withJavaUtilList:(id)arg3;
- (void)recordUserActionWithTagsForWebWithJBTCBigTopCommonEnums_Metric:(id)arg1 withJavaUtilList:(id)arg2;
- (void)recordUserActionValueWithTagsWithJBTCBigTopCommonEnums_Metric:(id)arg1 withInt:(int)arg2 withJavaUtilList:(id)arg3;
- (void)recordUserActionWithTagsWithJBTCBigTopCommonEnums_Metric:(id)arg1 withJavaUtilList:(id)arg2;
- (void)recordUserActionValueWithJBTCBigTopCommonEnums_Metric:(id)arg1 withInt:(int)arg2;
- (void)recordUserActionWithJBTCBigTopCommonEnums_Metric:(id)arg1;
- (void)stop;
- (void)flush;
- (void)recordEventWithKeysWithJBTCBigTopCommonEnums_Metric:(id)arg1 withJavaUtilList:(id)arg2 withInt:(int)arg3;
- (void)recordEventWithJBTCBigTopCommonEnums_Metric:(id)arg1 withInt:(int)arg2;
- (void)incrementCounterByWithKeysWithJBTCBigTopCommonEnums_Metric:(id)arg1 withJavaUtilList:(id)arg2 withDouble:(double)arg3;
- (void)incrementCounterByWithJBTCBigTopCommonEnums_Metric:(id)arg1 withDouble:(double)arg2;
- (id)getDummySpan;
- (id)startSpanRelativeAtWithJBTCBigTopCommonEnums_Metric:(id)arg1 withDouble:(double)arg2 withDouble:(double)arg3;
- (id)startSpanAtWithJBTCBigTopCommonEnums_Metric:(id)arg1 withDouble:(double)arg2;
- (id)startSpanWithJBTCBigTopCommonEnums_Metric:(id)arg1;
- (id)createSpanFromSectionWithXPTAsyncTraceSection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

