//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, TFSTimer;

@interface TFSDeferrableTimer : NSObject
{
    _Bool _repeats;
    CDUnknownBlockType _block;
    TFSTimer *_currentTimer;
    double _timeInterval;
    double _maxDeferralTime;
    NSString *_mode;
    NSDate *_initialScheduleDate;
}

+ (id)scheduledDeferrableTimerWithTimeInterval:(double)arg1 maxDeferralTime:(double)arg2 forMode:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(retain, nonatomic) NSDate *initialScheduleDate; // @synthesize initialScheduleDate=_initialScheduleDate;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(nonatomic) double maxDeferralTime; // @synthesize maxDeferralTime=_maxDeferralTime;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) TFSTimer *currentTimer; // @synthesize currentTimer=_currentTimer;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)_tfsu_scheduleTimer;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidate;
@property(readonly, nonatomic) _Bool maximumDeferralTimeExceeded;
- (_Bool)attemptDeferral;
- (id)initWithTimeInterval:(double)arg1 maxDeferralTime:(double)arg2 forMode:(id)arg3 block:(CDUnknownBlockType)arg4;

@end
