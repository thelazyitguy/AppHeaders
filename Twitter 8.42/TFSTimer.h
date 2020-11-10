//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSRunLoop, NSString, NSTimer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TFSTimer : NSObject
{
    NSTimer *_nsTimer;
    NSObject<OS_dispatch_source> *_gcdSource;
    _Bool _paused;
    NSString *_logProperties;
    // Error parsing type: {?="lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"predicate"{atomic_flag="_Value"AB}}, name: _buildLogPropertiesToken
    NSRunLoop *_targetRunLoop;
    NSString *_targetRunLoopMode;
    NSObject<OS_dispatch_queue> *_targetGCDQueue;
    _Bool _repeats;
    _Bool _shouldSilenceLogging;
    NSDate *_fireDate;
    double _tolerance;
    CDUnknownBlockType _block;
    double _timeInterval;
    long long _backgroundingBehavior;
    id _userInfo;
    id _target;
    SEL _selector;
    NSDate *_backgroundDate;
}

+ (void)initialize;
+ (id)queuedTimerOnQueue:(id)arg1 withTimeInterval:(double)arg2 repeats:(_Bool)arg3 backgroundingBehavior:(long long)arg4 block:(CDUnknownBlockType)arg5;
+ (id)queuedTimerOnQueue:(id)arg1 withTimeInterval:(double)arg2 repeats:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
+ (id)queuedTimerOnQueue:(id)arg1 withTimeInterval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6 backgroundingBehavior:(long long)arg7;
+ (id)queuedTimerOnQueue:(id)arg1 withTimeInterval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 backgroundingBehavior:(long long)arg3 block:(CDUnknownBlockType)arg4;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5 backgroundingBehavior:(long long)arg6;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)timerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 backgroundingBehavior:(long long)arg3 block:(CDUnknownBlockType)arg4;
+ (id)timerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5 backgroundingBehavior:(long long)arg6;
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
- (void).cxx_destruct;
@property(retain) NSDate *backgroundDate; // @synthesize backgroundDate=_backgroundDate;
@property _Bool shouldSilenceLogging; // @synthesize shouldSilenceLogging=_shouldSilenceLogging;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) long long backgroundingBehavior; // @synthesize backgroundingBehavior=_backgroundingBehavior;
@property(readonly, nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void)_tfs_timer_applyGCDTimerToSource;
- (void)_tfs_timer_setUpGCDTimer:(id)arg1;
- (void)_tfs_timer_applyToQueue:(id)arg1;
- (void)applyToQueue:(id)arg1;
- (id)_tfs_timer_NSTimer;
- (void)scheduleWithCurrentRunLoop;
- (void)_tfs_timer_scheduleWithRunLoop:(id)arg1 mode:(id)arg2;
- (void)scheduleWithRunLoop:(id)arg1 mode:(id)arg2;
- (void)_tfs_timer_applicationWillForeground;
- (void)_applicationWillForeground:(id)arg1;
- (void)_applicationDidBackground:(id)arg1;
- (void)_timerDidFire:(id)arg1;
- (void)_fireInternal;
- (id)_logProperties;
- (void)_tfs_timer_cleanup;
- (void)_tfs_timer_invalidate;
- (_Bool)_tfs_timer_isValid;
- (void)invalidate;
- (void)fire;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property double tolerance; // @synthesize tolerance=_tolerance;
@property(retain) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, getter=isValid) _Bool valid;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6 backgroundingBehavior:(long long)arg7;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(_Bool)arg3 backgroundingBehavior:(long long)arg4 block:(CDUnknownBlockType)arg5;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6 backgroundingBehavior:(long long)arg7 block:(CDUnknownBlockType)arg8;
- (id)init;
- (void)dealloc;

@end

