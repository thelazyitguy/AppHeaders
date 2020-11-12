//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleRtcMeetingsV1DocumentInfo, ComGoogleRtcMeetingsV1MeetingSpace_CallInfo_CallSettings, ComGoogleRtcMeetingsV1MeetingSpace_CallInfo_PaygateInfo, ComGoogleRtcMeetingsV1MeetingSpace_Presenter, ComGoogleRtcMeetingsV1MeetingSpace_RecordingInfo, ComGoogleRtcMeetingsV1MeetingSpace_StreamingSessionInfo, NSString;
@protocol ComGoogleProtobufProtocolStringList, JavaUtilList;

@protocol ComGoogleRtcMeetingsV1MeetingSpace_CallInfoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getSupportedCaptionLanguagesWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getSupportedCaptionLanguagesList;
- (int)getSupportedCaptionLanguagesCount;
- (ComGoogleRtcMeetingsV1MeetingSpace_CallInfo_PaygateInfo *)getPaygateInfo;
- (_Bool)hasPaygateInfo;
- (ComGoogleRtcMeetingsV1DocumentInfo *)getAttachedDocumentsWithInt:(int)arg1;
- (id <JavaUtilList>)getAttachedDocumentsList;
- (int)getAttachedDocumentsCount;
- (ComGoogleRtcMeetingsV1MeetingSpace_CallInfo_CallSettings *)getSettings;
- (_Bool)hasSettings;
- (ComGoogleRtcMeetingsV1MeetingSpace_StreamingSessionInfo *)getStreamingSessionsWithInt:(int)arg1;
- (id <JavaUtilList>)getStreamingSessionsList;
- (int)getStreamingSessionsCount;
- (NSString *)getMediaBackendInfo;
- (_Bool)hasMediaBackendInfo;
- (int)getMaxJoinedDevices;
- (_Bool)hasMaxJoinedDevices;
- (NSString *)getOrganizationName;
- (_Bool)hasOrganizationName;
- (NSString *)getCalendarEventId;
- (_Bool)hasCalendarEventId;
- (ComGoogleRtcMeetingsV1MeetingSpace_RecordingInfo *)getRecordingInfo;
- (_Bool)hasRecordingInfo;
- (ComGoogleRtcMeetingsV1MeetingSpace_Presenter *)getPresenter;
- (_Bool)hasPresenter;
@end
