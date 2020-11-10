//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVDIAnalyticsScribe/NSCoding-Protocol.h>
#import <TVDIAnalyticsScribe/TBase-Protocol.h>

@class NSString, TVDIAnalyticsScribeBitrateMetrics, TVDIAnalyticsScribeLiveOrNonLiveHeartbeatMetrics;

@interface TVDIAnalyticsScribeHeartbeat : NSObject <TBase, NSCoding>
{
    _Bool _startProgramDateTimeMillisIsSet;
    _Bool _endProgramDateTimeMillisIsSet;
    _Bool _bufferingDurationMillisIsSet;
    _Bool _sampledBitsPerSecondIsSet;
    _Bool _dataUsageBytesIsSet;
    _Bool _percentInViewIsSet;
    _Bool _bandwidthEstimateBpsIsSet;
    _Bool _bitrateMetricsIsSet;
    _Bool _liveOrNonLiveHeartbeatMetricsIsSet;
    _Bool _bufferingCountIsSet;
    _Bool _audibleDurationMillisIsSet;
    int _sampledBitsPerSecond;
    int _percentInView;
    int _bufferingCount;
    long long _startProgramDateTimeMillis;
    long long _endProgramDateTimeMillis;
    long long _bufferingDurationMillis;
    long long _dataUsageBytes;
    long long _bandwidthEstimateBps;
    TVDIAnalyticsScribeBitrateMetrics *_bitrateMetrics;
    TVDIAnalyticsScribeLiveOrNonLiveHeartbeatMetrics *_liveOrNonLiveHeartbeatMetrics;
    long long _audibleDurationMillis;
}

+ (id)instanceWithStartProgramDateTimeMillis:(long long)arg1 endProgramDateTimeMillis:(long long)arg2 bufferingDurationMillis:(long long)arg3 dataUsageBytes:(long long)arg4 percentInView:(int)arg5 liveOrNonLiveHeartbeatMetrics:(id)arg6 bufferingCount:(int)arg7 error:(id *)arg8;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool audibleDurationMillisIsSet; // @synthesize audibleDurationMillisIsSet=_audibleDurationMillisIsSet;
@property(nonatomic) long long audibleDurationMillis; // @synthesize audibleDurationMillis=_audibleDurationMillis;
@property(readonly, nonatomic) _Bool bufferingCountIsSet; // @synthesize bufferingCountIsSet=_bufferingCountIsSet;
@property(nonatomic) int bufferingCount; // @synthesize bufferingCount=_bufferingCount;
@property(readonly, nonatomic) _Bool liveOrNonLiveHeartbeatMetricsIsSet; // @synthesize liveOrNonLiveHeartbeatMetricsIsSet=_liveOrNonLiveHeartbeatMetricsIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeLiveOrNonLiveHeartbeatMetrics *liveOrNonLiveHeartbeatMetrics; // @synthesize liveOrNonLiveHeartbeatMetrics=_liveOrNonLiveHeartbeatMetrics;
@property(readonly, nonatomic) _Bool bitrateMetricsIsSet; // @synthesize bitrateMetricsIsSet=_bitrateMetricsIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeBitrateMetrics *bitrateMetrics; // @synthesize bitrateMetrics=_bitrateMetrics;
@property(readonly, nonatomic) _Bool bandwidthEstimateBpsIsSet; // @synthesize bandwidthEstimateBpsIsSet=_bandwidthEstimateBpsIsSet;
@property(nonatomic) long long bandwidthEstimateBps; // @synthesize bandwidthEstimateBps=_bandwidthEstimateBps;
@property(readonly, nonatomic) _Bool percentInViewIsSet; // @synthesize percentInViewIsSet=_percentInViewIsSet;
@property(nonatomic) int percentInView; // @synthesize percentInView=_percentInView;
@property(readonly, nonatomic) _Bool dataUsageBytesIsSet; // @synthesize dataUsageBytesIsSet=_dataUsageBytesIsSet;
@property(nonatomic) long long dataUsageBytes; // @synthesize dataUsageBytes=_dataUsageBytes;
@property(readonly, nonatomic) _Bool sampledBitsPerSecondIsSet; // @synthesize sampledBitsPerSecondIsSet=_sampledBitsPerSecondIsSet;
@property(nonatomic) int sampledBitsPerSecond; // @synthesize sampledBitsPerSecond=_sampledBitsPerSecond;
@property(readonly, nonatomic) _Bool bufferingDurationMillisIsSet; // @synthesize bufferingDurationMillisIsSet=_bufferingDurationMillisIsSet;
@property(nonatomic) long long bufferingDurationMillis; // @synthesize bufferingDurationMillis=_bufferingDurationMillis;
@property(readonly, nonatomic) _Bool endProgramDateTimeMillisIsSet; // @synthesize endProgramDateTimeMillisIsSet=_endProgramDateTimeMillisIsSet;
@property(nonatomic) long long endProgramDateTimeMillis; // @synthesize endProgramDateTimeMillis=_endProgramDateTimeMillis;
@property(readonly, nonatomic) _Bool startProgramDateTimeMillisIsSet; // @synthesize startProgramDateTimeMillisIsSet=_startProgramDateTimeMillisIsSet;
@property(nonatomic) long long startProgramDateTimeMillis; // @synthesize startProgramDateTimeMillis=_startProgramDateTimeMillis;
- (id)validateNonOptionalFields;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartProgramDateTimeMillis:(long long)arg1 endProgramDateTimeMillis:(long long)arg2 bufferingDurationMillis:(long long)arg3 dataUsageBytes:(long long)arg4 percentInView:(int)arg5 liveOrNonLiveHeartbeatMetrics:(id)arg6 bufferingCount:(int)arg7;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

