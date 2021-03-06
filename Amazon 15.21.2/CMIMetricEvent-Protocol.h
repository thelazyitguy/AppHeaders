//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMIDataPoint, NSArray, NSString;

@protocol CMIMetricEvent <NSObject>
- (void)addDataPoints:(NSArray *)arg1;
- (void)addDataPoint:(CMIDataPoint *)arg1;
- (NSArray *)dataPoints;
- (void)clear;
- (void)addClickstreamStringWithName:(NSString *)arg1 value:(NSString *)arg2;
- (void)removeStringWithName:(NSString *)arg1;
- (void)addStringWithName:(NSString *)arg1 value:(NSString *)arg2;
- (void)removeTimerWithName:(NSString *)arg1;
- (void)stopTimerWithName:(NSString *)arg1;
- (void)startTimerWithName:(NSString *)arg1;
- (void)addTimerWithName:(NSString *)arg1 value:(double)arg2 samples:(long long)arg3;
- (void)addTimerWithName:(NSString *)arg1 value:(double)arg2;
- (void)removeCounterWithName:(NSString *)arg1;
- (void)addCounterWithName:(NSString *)arg1 value:(double)arg2;
- (void)anonymous:(_Bool)arg1;
- (_Bool)anonymous;
- (void)nonAnonymousSessionId:(NSString *)arg1;
- (NSString *)nonAnonymousSessionId;
- (void)nonAnonymousCustomerId:(NSString *)arg1;
- (NSString *)nonAnonymousCustomerId;
- (int)metricEventType;
- (NSString *)source;
- (NSString *)program;

@optional
- (NSArray *)dataPointsAndClear;
@end

