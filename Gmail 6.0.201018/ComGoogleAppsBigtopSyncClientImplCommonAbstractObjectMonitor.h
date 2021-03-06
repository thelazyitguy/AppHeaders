//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplCommonObjectMonitor-Protocol.h"

@class ComGoogleAppsBigtopCommonUtilLifecycleTracker, ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, NSString;
@protocol ComGoogleAppsBigtopSyncClientImplCommonListener, ComGoogleAppsXplatObserveObservable, ComGoogleAppsXplatObserveObserver;

@interface ComGoogleAppsBigtopSyncClientImplCommonAbstractObjectMonitor : NSObject <ComGoogleAppsBigtopSyncClientImplCommonObjectMonitor>
{
    ComGoogleAppsBigtopCommonUtilLifecycleTracker *lifecycleTracker_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    id <ComGoogleAppsXplatObserveObservable> observableUpdateMessage_;
    id <ComGoogleAppsBigtopSyncClientImplCommonListener> changeListener_;
    id <ComGoogleAppsBigtopSyncClientImplCommonListener> errorListener_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    id <ComGoogleAppsXplatObserveObserver> updatesObserver_;
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

