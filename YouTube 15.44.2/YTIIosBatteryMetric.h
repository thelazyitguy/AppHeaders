//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIIosBatterySample;

@interface YTIIosBatteryMetric : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIIosBatterySample *endSample; // @dynamic endSample;
@property(nonatomic) _Bool hasEndSample; // @dynamic hasEndSample;
@property(nonatomic) _Bool hasSampleDurationMs; // @dynamic hasSampleDurationMs;
@property(nonatomic) _Bool hasStartSample; // @dynamic hasStartSample;
@property(nonatomic) long long sampleDurationMs; // @dynamic sampleDurationMs;
@property(retain, nonatomic) YTIIosBatterySample *startSample; // @dynamic startSample;

@end
