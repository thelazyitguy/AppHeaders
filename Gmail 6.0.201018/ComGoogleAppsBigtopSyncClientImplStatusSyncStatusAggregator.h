//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopCommonUtilLifecycleTracker, ComGoogleCommonCollectImmutableList;
@protocol ComGoogleAppsXplatObserveSettable, JavaUtilConcurrentExecutor, JavaUtilList;

@interface ComGoogleAppsBigtopSyncClientImplStatusSyncStatusAggregator : NSObject
{
    ComGoogleAppsBigtopCommonUtilLifecycleTracker *lifecycleTracker_;
    ComGoogleCommonCollectImmutableList *syncStatuses_;
    id <ComGoogleAppsXplatObserveSettable> aggregatedSyncStatus_;
    id <JavaUtilConcurrentExecutor> executor_;
    id <JavaUtilList> disposables_;
}

- (void)dealloc;
- (void)stop;
- (void)start;

@end
