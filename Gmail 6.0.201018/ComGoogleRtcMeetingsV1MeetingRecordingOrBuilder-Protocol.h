//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleRtcMeetingsV1MeetingRecording_SessionStatus, ComGoogleRtcMeetingsV1RecordingApplicationType, NSString;

@protocol ComGoogleRtcMeetingsV1MeetingRecordingOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getRecordingOwnerEmail;
- (_Bool)hasRecordingOwnerEmail;
- (NSString *)getExternalId;
- (_Bool)hasExternalId;
- (ComGoogleRtcMeetingsV1RecordingApplicationType *)getRecordingApplicationType;
- (_Bool)hasRecordingApplicationType;
- (NSString *)getProducerDeviceId;
- (_Bool)hasProducerDeviceId;
- (ComGoogleRtcMeetingsV1MeetingRecording_SessionStatus *)getSessionStatus;
- (_Bool)hasSessionStatus;
- (NSString *)getTitle;
- (_Bool)hasTitle;
- (NSString *)getRecordingId;
- (_Bool)hasRecordingId;
@end
