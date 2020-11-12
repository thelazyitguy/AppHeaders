//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplCommonObjectMonitor-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleCommonUtilConcurrentSettableFuture, JBTPriority, NSString, XPTLifecycle;
@protocol ComGoogleAppsXplatDaggerAsyncProvider;

@interface ComGoogleAppsBigtopSyncClientImplCommonAsyncObjectMonitor : NSObject <ComGoogleAppsBigtopSyncClientImplCommonObjectMonitor>
{
    id <ComGoogleAppsXplatDaggerAsyncProvider> delegateProvider_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    XPTLifecycle *lifecycle_;
    ComGoogleCommonUtilConcurrentSettableFuture *delegate_;
    JBTPriority *priority_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getPriority;
- (void)setPriorityWithJBTPriority:(id)arg1;
- (void)stop;
- (void)startWithJBTSpan:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
