//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YTILatencyActionInfo, YTILatencyActionSpan, YTMonotonicDate;

@interface YTLatencyBatchEvent : NSObject
{
    long long _eventType;
    NSString *_actionNonce;
    YTMonotonicDate *_eventDate;
    NSString *_tick;
    YTILatencyActionInfo *_latencyActionInfo;
    YTILatencyActionSpan *_latencyActionSpan;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTILatencyActionSpan *latencyActionSpan; // @synthesize latencyActionSpan=_latencyActionSpan;
@property(readonly, nonatomic) YTILatencyActionInfo *latencyActionInfo; // @synthesize latencyActionInfo=_latencyActionInfo;
@property(readonly, nonatomic) NSString *tick; // @synthesize tick=_tick;
@property(readonly, nonatomic) YTMonotonicDate *eventDate; // @synthesize eventDate=_eventDate;
@property(readonly, nonatomic) NSString *actionNonce; // @synthesize actionNonce=_actionNonce;
@property(readonly, nonatomic) long long eventType; // @synthesize eventType=_eventType;
- (id)debugDescription;
- (id)initSpanEventWithSpan:(id)arg1 actionNonce:(id)arg2;
- (id)initInfoEventWithActionInfo:(id)arg1 actionNonce:(id)arg2;
- (id)initTickEventWithTick:(id)arg1 actionNonce:(id)arg2 eventDate:(id)arg3;
- (id)initBaselineEventWithActionNonce:(id)arg1 eventDate:(id)arg2;

@end

