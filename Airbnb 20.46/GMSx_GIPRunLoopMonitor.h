//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GIPSystemMonitor.h"

@class GMSx_GIPPerformanceSimpleMetric, NSThread;

@interface GMSx_GIPRunLoopMonitor : GMSx_GIPSystemMonitor
{
    NSThread *_thread;
    GMSx_GIPPerformanceSimpleMetric *_latencyMetric;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GMSx_GIPPerformanceSimpleMetric *latencyMetric; // @synthesize latencyMetric=_latencyMetric;
- (void)runLoopTaskInvokedWithStartTime:(id)arg1;
- (void)collectSamples;
- (id)initWithThread:(id)arg1 samplingIntervalMilliseconds:(int)arg2;

@end
