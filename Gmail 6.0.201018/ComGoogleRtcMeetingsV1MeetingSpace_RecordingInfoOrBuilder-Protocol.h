//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleRtcMeetingsV1MeetingSpace_RecordingInfo_RecordingEvent, ComGoogleRtcMeetingsV1MeetingSpace_RecordingInfo_RecordingStatus, ComGoogleRtcMeetingsV1RecordingApplicationType, NSString;

@protocol ComGoogleRtcMeetingsV1MeetingSpace_RecordingInfoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleRtcMeetingsV1RecordingApplicationType *)getRecordingApplicationType;
- (_Bool)hasRecordingApplicationType;
- (NSString *)getOwnerDisplayName;
- (_Bool)hasOwnerDisplayName;
- (ComGoogleRtcMeetingsV1MeetingSpace_RecordingInfo_RecordingEvent *)getLatestRecordingEvent;
- (_Bool)hasLatestRecordingEvent;
- (NSString *)getProducerDeviceId;
- (_Bool)hasProducerDeviceId;
- (NSString *)getRecordingId;
- (_Bool)hasRecordingId;
- (ComGoogleRtcMeetingsV1MeetingSpace_RecordingInfo_RecordingStatus *)getRecordingStatus;
- (_Bool)hasRecordingStatus;
@end
