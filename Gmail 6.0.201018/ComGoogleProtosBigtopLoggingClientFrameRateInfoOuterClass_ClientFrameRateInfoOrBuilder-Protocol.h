//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleProtosBigtopLoggingClientFrameRateInfoOuterClass_ClientFrameRateInfo_DurationBucket, ComGoogleProtosBigtopLoggingClientFrameRateInfoOuterClass_ClientFrameRateInfo_SessionType, ComGoogleProtosBigtopLoggingClientFrameRateInfoOuterClass_ClientFrameRateInfo_TypingInfo;
@protocol JavaUtilList;

@protocol ComGoogleProtosBigtopLoggingClientFrameRateInfoOuterClass_ClientFrameRateInfoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleProtosBigtopLoggingClientFrameRateInfoOuterClass_ClientFrameRateInfo_TypingInfo *)getTypingInfo;
- (_Bool)hasTypingInfo;
- (ComGoogleProtosBigtopLoggingClientFrameRateInfoOuterClass_ClientFrameRateInfo_SessionType *)getSessionType;
- (_Bool)hasSessionType;
- (ComGoogleProtosBigtopLoggingClientFrameRateInfoOuterClass_ClientFrameRateInfo_DurationBucket *)getFrameDurationBucketsWithInt:(int)arg1;
- (id <JavaUtilList>)getFrameDurationBucketsList;
- (int)getFrameDurationBucketsCount;
- (int)getSessionDurationSecs;
- (_Bool)hasSessionDurationSecs;
- (int)getFrameCount;
- (_Bool)hasFrameCount;
@end
