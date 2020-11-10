//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableSet, YTRetryStateStore;

@interface YTRetryTaskController : NSObject
{
    YTRetryStateStore *_retryStateStore;
    NSMutableSet *_timers;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)notifyRetryableTaskBecameAvailable;
- (void)removeRetryTaskObserver:(id)arg1;
- (void)addRetryTaskObserver:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)scheduleRetryTimerWithDate:(id)arg1;
- (void)fetchAndScheduleTimersForRetryableTasks;
- (void)setCurrentUserID:(id)arg1;
- (void)retryTaskWithID:(id)arg1 maxRetryDate:(id)arg2 retryableStore:(id)arg3 retryConfig:(id)arg4 responseBlock:(CDUnknownBlockType)arg5;
- (id)init;
- (id)initWithRetryStateStore:(id)arg1;

@end

