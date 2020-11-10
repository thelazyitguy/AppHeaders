//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSString, NSURL, YTICameraFeatures;

@protocol YTCameraRecordingSettings <NSObject>
@property(readonly, nonatomic) YTICameraFeatures *segmentMetadata;
@property(readonly, nonatomic) NSString *resizeMode;
@property(readonly, nonatomic) unsigned long long outputHeight;
@property(readonly, nonatomic) unsigned long long outputWidth;
@property(readonly, nonatomic) double recordingRate;
@property(readonly, nonatomic) long long recordingAnalysis;
@property(readonly, nonatomic) unsigned long long audioFadeInMillis;
@property(readonly, nonatomic) _Bool audioRecordingEnabled;
@property(readonly, nonatomic) NSURL *recordingDirectory;
@property(readonly, copy, nonatomic) NSString *frontendUploadID;
@end
