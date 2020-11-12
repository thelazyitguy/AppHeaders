//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsXplatJobsJobLauncher, DYNSStatusImplUserStatusUpdateScheduler_ScheduledSubscriptionUpdate;
@protocol DYNSCommonSeededRandom, DYNSStatusApiUserStatusManager, JavaUtilConcurrentScheduledExecutorService;

@interface DYNSStatusImplUserStatusUpdateScheduler : NSObject
{
    id lock_;
    ComGoogleAppsXplatJobsJobLauncher *jobLauncher_;
    id <DYNSStatusApiUserStatusManager> userStatusManager_;
    id <JavaUtilConcurrentScheduledExecutorService> scheduledExecutor_;
    id <DYNSCommonSeededRandom> seededRandom_;
    _Bool isActive_;
    DYNSStatusImplUserStatusUpdateScheduler_ScheduledSubscriptionUpdate *currentlyScheduledSubscriptionUpdate_;
    int updateIntervalVariationSeconds_;
}

+ (void)initialize;
- (void)dealloc;
- (void)setUpdateIntervalVariationForTestingWithInt:(int)arg1;
- (void)stop;
- (void)start;

@end
