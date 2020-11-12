//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaUtilConcurrentAtomicAtomicInteger;
@protocol JavaUtilSet;

@interface DYNSStorageControllersGroupStorageSummaryLogger_SessionGroupData : NSObject
{
    JavaUtilConcurrentAtomicAtomicInteger *cacheHitCount_;
    JavaUtilConcurrentAtomicAtomicInteger *cacheMissCount_;
    JavaUtilConcurrentAtomicAtomicInteger *cacheUpdateCount_;
    id <JavaUtilSet> distinctCacheHits_;
    JavaUtilConcurrentAtomicAtomicInteger *fetchAllGroupsCount_;
}

- (void)dealloc;
- (int)getFetchAllGroupsCount;
- (int)getDistinctCacheHitCount;
- (int)getCacheUpdateCount;
- (int)getCacheMissCount;
- (int)getCacheHitCount;
- (void)logFetchAllGroups;
- (void)logCacheUpdateWithInt:(int)arg1;
- (void)logCacheMissWithInt:(int)arg1;
- (void)logCacheHitWithJavaUtilList:(id)arg1;

@end
