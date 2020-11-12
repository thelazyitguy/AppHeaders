//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;

@interface ALXScheduler : NSObject
{
    _Bool _repeats;
    _Bool _started;
    _Bool _paused;
    NSTimer *_timer;
    NSTimer *_startAfterTimer;
    double _timeIntervalInSec;
    id _target;
    SEL _aSelector;
    NSDate *_startingTimestamp;
    double _totalTimeElapsedInSec;
}

@property(nonatomic) double totalTimeElapsedInSec; // @synthesize totalTimeElapsedInSec=_totalTimeElapsedInSec;
@property(retain, nonatomic) NSDate *startingTimestamp; // @synthesize startingTimestamp=_startingTimestamp;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(nonatomic) SEL aSelector; // @synthesize aSelector=_aSelector;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) double timeIntervalInSec; // @synthesize timeIntervalInSec=_timeIntervalInSec;
@property(retain, nonatomic) NSTimer *startAfterTimer; // @synthesize startAfterTimer=_startAfterTimer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (double)calculateRemainingIntervalWithInterval:(double)arg1 elapsedTime:(double)arg2;
- (void)recordTimeRemaining;
- (void)runSelectorOnceThenStartTimerIfNecessary;
- (void)startAfterDelay:(double)arg1;
- (void)cancel;
- (void)pause;
- (void)resume;
- (void)start;
- (id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 repeats:(_Bool)arg4;

@end
