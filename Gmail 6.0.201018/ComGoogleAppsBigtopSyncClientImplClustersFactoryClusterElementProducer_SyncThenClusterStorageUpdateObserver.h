//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor;
@protocol ComGoogleAppsXplatDaggerAsyncProvider, ComGoogleAppsXplatObserveObservable, ComGoogleCommonTimeClock;

@interface ComGoogleAppsBigtopSyncClientImplClustersFactoryClusterElementProducer_SyncThenClusterStorageUpdateObserver : NSObject
{
    id <ComGoogleCommonTimeClock> clock_;
    id <ComGoogleAppsXplatObserveObservable> observableClusterStorageUpdate_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> sync_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
}

- (void)dealloc;
- (id)triggerSyncAndObserve;

@end
