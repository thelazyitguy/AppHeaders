//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSSyncv2ApiUserDndSyncManager-Protocol.h"

@class NSString;
@protocol ComGoogleAppsXplatObserveObservable, ComGoogleAppsXplatObserveObserver, DYNSStatusApiAccountOwnerStatusManager, JavaUtilConcurrentExecutor;

@interface DYNSSyncV2CoordinatorsUserDndSyncManagerImpl : NSObject <DYNSSyncv2ApiUserDndSyncManager>
{
    id <DYNSStatusApiAccountOwnerStatusManager> accountOwnerStatusManager_;
    id <ComGoogleAppsXplatObserveObservable> connectionChangedEventObservable_;
    id <JavaUtilConcurrentExecutor> executor_;
    id <ComGoogleAppsXplatObserveObservable> userDataInvalidatedEventObservable_;
    id lock_;
    _Bool hasStarted_;
    id <ComGoogleAppsXplatObserveObserver> connectionChangedObserver_;
    id <ComGoogleAppsXplatObserveObserver> userDataInvalidatedObserver_;
}

+ (void)initialize;
- (void)dealloc;
- (void)stop;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

