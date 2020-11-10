//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDLMetricsCollectorDataSet;

@interface PDLBatteryCollector : NSObject
{
    _Bool _isStart;
    PDLMetricsCollectorDataSet *_batteryDataSet;
}

- (void).cxx_destruct;
@property _Bool isStart; // @synthesize isStart=_isStart;
@property(readonly, nonatomic) PDLMetricsCollectorDataSet *batteryDataSet; // @synthesize batteryDataSet=_batteryDataSet;
- (_Bool)isUnplugged;
- (void)collect;
- (void)completeCollection;
- (void)beginCollection;
@property(readonly, nonatomic) long long batteryUsagePercentage;
- (id)init;

@end

