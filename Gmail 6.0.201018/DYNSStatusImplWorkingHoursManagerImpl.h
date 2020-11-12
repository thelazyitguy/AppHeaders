//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSStatusApiWorkingHoursManager-Protocol.h"

@class JavaUtilConcurrentAtomicAtomicReference, NSString, XPTExecutionGuard;
@protocol ComGoogleAppsXplatObserveSettable, DYNSStorageApiWorkingHoursStorageController, JavaxInjectProvider;

@interface DYNSStatusImplWorkingHoursManagerImpl : NSObject <DYNSStatusApiWorkingHoursManager>
{
    id <JavaxInjectProvider> executorProvider_;
    id <ComGoogleAppsXplatObserveSettable> workingHoursSettingsUpdatedEventSettable_;
    id <DYNSStorageApiWorkingHoursStorageController> workingHoursStorageController_;
    XPTExecutionGuard *setRequestGuard_;
    JavaUtilConcurrentAtomicAtomicReference *pendingWorkingHoursUpdate_;
}

+ (void)initialize;
- (void)dealloc;
- (id)enqueueSetWorkingHoursWithDYNSModelsCommonWorkingHoursSettings:(id)arg1 withDYNSLangFunction:(id)arg2;
- (id)getCachedWorkingHours;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
