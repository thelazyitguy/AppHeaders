//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DYNSAnalyticsClearcutEventsLogger;

@interface DYNSSyncPrefetchPrefetchLogger : NSObject
{
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getPrefetchSessionGroupsCountsWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)buildPrefetchSessionResultWithDYNProtoPrefetchStrategyName:(id)arg1 withJavaUtilMap:(id)arg2 withDYNSSyncPrefetchPrefetchLogger_PrefetchSessionGroupsCounts:(id)arg3;
- (id)buildPrefetchFeaturesWithDYNSDataModelsGroup:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)getPrefetchSessionResultEventTypeWithDYNSSyncPrefetchApiPrefetchType:(id)arg1;
- (id)getPrefetchEventTypeWithDYNSSyncPrefetchApiPrefetchType:(id)arg1 withDYNSSyncPrefetchPrefetchStatus:(id)arg2;
- (void)logPrefetchSessionForTypeWithDYNSSyncPrefetchApiPrefetchType:(id)arg1 withDYNProtoPrefetchStrategyName:(id)arg2 withJavaUtilMap:(id)arg3 withDYNSSyncPrefetchPrefetchLogger_PrefetchSessionGroupsCounts:(id)arg4;
- (void)logPrefetchSessionWithComGoogleCommonCollectImmutableList:(id)arg1 withComGoogleCommonCollectImmutableMap:(id)arg2 withDYNSSyncPrefetchPrefetchStrategy:(id)arg3;
- (void)logWithDYNSSyncPrefetchPrefetchStatus:(id)arg1 withDYNSSyncPrefetchApiPrefetchType:(id)arg2 withDYNSDataModelsGroup:(id)arg3 withJavaUtilOptional:(id)arg4;

@end
