//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GPCPromise;
@protocol YTCameraRecordingSettings;

@protocol YTCameraCaptureManagerRecording <NSObject>
@property(readonly, nonatomic) CDStruct_1b6d18a9 recordedDuration;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
@property(readonly, nonatomic) _Bool canStartRecording;
- (GPCPromise *)stopRecording;
- (GPCPromise *)startRecordingWithRecordingSettings:(id <YTCameraRecordingSettings>)arg1;
@end
