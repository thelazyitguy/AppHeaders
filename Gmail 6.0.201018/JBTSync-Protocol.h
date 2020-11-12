//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JBTSyncStatus, JBTSync_SyncOptions, JavaLangInteger, OrgJodaTimeInstant;
@protocol ComGoogleCommonUtilConcurrentListenableFuture, JBTBackgroundSyncPoller, JBTCallback, JBTCanceler, JBTEventListener, JBTId, JBTSpan, JBTSubscription, JavaUtilList;

@protocol JBTSync <JavaObject>
- (id <JBTBackgroundSyncPoller>)createPollerWithJavaUtilList:(id <JavaUtilList>)arg1;
- (void)removeListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)addListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (JBTSyncStatus *)getOverallStatus;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)syncImmediatelyWithOptionsWithJavaUtilList:(id <JavaUtilList>)arg1 withOrgJodaTimeInstant:(OrgJodaTimeInstant *)arg2 withJBTSync_SyncOptions:(JBTSync_SyncOptions *)arg3;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)syncImmediatelyWithJavaUtilList:(id <JavaUtilList>)arg1 withOrgJodaTimeInstant:(OrgJodaTimeInstant *)arg2;
- (id <JBTCanceler>)syncNowWithJavaUtilList:(id <JavaUtilList>)arg1 withJavaLangInteger:(JavaLangInteger *)arg2 withJBTSpan:(id <JBTSpan>)arg3 withJBTCallback:(id <JBTCallback>)arg4;
- (id <JavaUtilList>)getAllSubscriptionIds;
- (id <JBTSubscription>)getSubscriptionWithJBTId:(id <JBTId>)arg1;
- (_Bool)isInitialized;
@end
