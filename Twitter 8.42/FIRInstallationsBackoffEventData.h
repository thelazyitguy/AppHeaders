//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface FIRInstallationsBackoffEventData : NSObject
{
    long long _eventType;
    NSDate *_lastEventDate;
    long long _eventCount;
    double _backoffTimeInterval;
}

+ (double)randomMilliseconds;
+ (double)recoverableErrorBackoffTimeForAttemptNumber:(long long)arg1;
+ (double)backoffTimeIntervalWithEvent:(long long)arg1 eventCount:(long long)arg2;
@property(readonly, nonatomic) double backoffTimeInterval; // @synthesize backoffTimeInterval=_backoffTimeInterval;
@property(readonly, nonatomic) long long eventCount; // @synthesize eventCount=_eventCount;
@property(readonly, nonatomic) NSDate *lastEventDate; // @synthesize lastEventDate=_lastEventDate;
@property(readonly, nonatomic) long long eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)initWithEvent:(long long)arg1 lastEventDate:(id)arg2 eventCount:(long long)arg3;

@end

