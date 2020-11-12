//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSMutableArray, NSURL;
@protocol OS_dispatch_queue, TFNTwitterVideoSegmentWriterDelegate;

@interface TFNTwitterVideoSegmentWriter : NSObject
{
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_audioInput;
    AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdapter;
    unsigned char _rotation;
    _Bool _useAudio;
    id <TFNTwitterVideoSegmentWriterDelegate> _delegate;
    NSURL *_segmentURL;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_bufferedAudioSamples;
    long long _orientation;
    long long _status;
    AVAssetWriter *_writer;
    CDStruct_1b6d18a9 _videoFrameDuration;
    CDStruct_1b6d18a9 _bufferedAudioStartTime;
    CDStruct_1b6d18a9 _cutoffTime;
    CDStruct_1b6d18a9 _endTime;
    CDStruct_1b6d18a9 _maxRecordingInterval;
    CDStruct_1b6d18a9 _minRecordingInterval;
    CDStruct_1b6d18a9 _startTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
@property(nonatomic) _Bool useAudio; // @synthesize useAudio=_useAudio;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned char rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) CDStruct_1b6d18a9 minRecordingInterval; // @synthesize minRecordingInterval=_minRecordingInterval;
@property(nonatomic) CDStruct_1b6d18a9 maxRecordingInterval; // @synthesize maxRecordingInterval=_maxRecordingInterval;
@property(nonatomic) CDStruct_1b6d18a9 endTime; // @synthesize endTime=_endTime;
@property(nonatomic) CDStruct_1b6d18a9 cutoffTime; // @synthesize cutoffTime=_cutoffTime;
@property(nonatomic) CDStruct_1b6d18a9 bufferedAudioStartTime; // @synthesize bufferedAudioStartTime=_bufferedAudioStartTime;
@property(retain, nonatomic) NSMutableArray *bufferedAudioSamples; // @synthesize bufferedAudioSamples=_bufferedAudioSamples;
@property(nonatomic) CDStruct_1b6d18a9 videoFrameDuration; // @synthesize videoFrameDuration=_videoFrameDuration;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSURL *segmentURL; // @synthesize segmentURL=_segmentURL;
@property(nonatomic) __weak id <TFNTwitterVideoSegmentWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_destroy;
- (void)_didFinishRecording;
- (_Bool)_configureAudioInput;
- (_Bool)_configureVideoInput;
- (void)_updateRecordingProgress;
- (void)_finishRecording;
- (void)_startRecordingAtPresentationTime:(CDStruct_1b6d18a9)arg1;
- (void)_checkReadyToRecordAtPresentationTime:(CDStruct_1b6d18a9)arg1;
- (void)_appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)didCaptureAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_cropAndRotatePlane:(unsigned long long)arg1 srcPixelBuffer:(struct __CVBuffer *)arg2 dstPixelBuffer:(struct __CVBuffer *)arg3;
- (void)_appendPixelBuffer:(struct __CVBuffer *)arg1 presentationTime:(CDStruct_1b6d18a9)arg2;
- (void)didCaptureVideoPixelBuffer:(struct __CVBuffer *)arg1 presentationTime:(CDStruct_1b6d18a9)arg2;
- (void)_stopRecording;
- (void)stopRecording;
- (void)startRecordingWithVideoOrientation:(long long)arg1 devicePosition:(long long)arg2 useAudio:(_Bool)arg3 minRecordingInterval:(CDStruct_1b6d18a9)arg4 maxRecordingInterval:(CDStruct_1b6d18a9)arg5;
- (id)initWithMovieDirectoryURL:(id)arg1;
- (id)init;

@end
