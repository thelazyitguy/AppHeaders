//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class FPRMSGGaugeMetadata, NSMutableArray, NSString;

@interface FPRMSGGaugeMetric : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *androidMemoryReadingsArray; // @dynamic androidMemoryReadingsArray;
@property(readonly, nonatomic) unsigned long long androidMemoryReadingsArray_Count; // @dynamic androidMemoryReadingsArray_Count;
@property(retain, nonatomic) NSMutableArray *cpuMetricReadingsArray; // @dynamic cpuMetricReadingsArray;
@property(readonly, nonatomic) unsigned long long cpuMetricReadingsArray_Count; // @dynamic cpuMetricReadingsArray_Count;
@property(retain, nonatomic) FPRMSGGaugeMetadata *gaugeMetadata; // @dynamic gaugeMetadata;
@property(nonatomic) _Bool hasGaugeMetadata; // @dynamic hasGaugeMetadata;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(retain, nonatomic) NSMutableArray *iosMemoryReadingsArray; // @dynamic iosMemoryReadingsArray;
@property(readonly, nonatomic) unsigned long long iosMemoryReadingsArray_Count; // @dynamic iosMemoryReadingsArray_Count;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

