//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class PRMMetricKitAverage;

@interface PRMMetricKitMemoryMetric : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PRMMetricKitAverage *averageSuspendedMemoryBytes; // @dynamic averageSuspendedMemoryBytes;
@property(nonatomic) _Bool hasAverageSuspendedMemoryBytes; // @dynamic hasAverageSuspendedMemoryBytes;
@property(nonatomic) _Bool hasPeakMemoryUsageBytes; // @dynamic hasPeakMemoryUsageBytes;
@property(nonatomic) long long peakMemoryUsageBytes; // @dynamic peakMemoryUsageBytes;

@end

