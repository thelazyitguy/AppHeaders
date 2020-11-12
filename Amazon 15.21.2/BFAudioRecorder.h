//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BFAudioSource.h"

#import "BFAudioRecordingOrchestatorDelegate-Protocol.h"
#import "BFVoiceActivityDetectorDelegate-Protocol.h"
#import "NSStreamDelegate-Protocol.h"

@class BFAudioRecordingOrchestrator, BFEncoder, BFVoiceActivityDetector, NSMutableData, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface BFAudioRecorder : BFAudioSource <NSStreamDelegate, BFAudioRecordingOrchestatorDelegate, BFVoiceActivityDetectorDelegate>
{
    BFAudioRecordingOrchestrator *mAudioOrchestrator;
    BFVoiceActivityDetector *mVoiceActivityDetector;
    BFEncoder *mEncoder;
    NSMutableData *mAudioBuffer;
    unsigned long long mNumOfBytesEncoded;
    NSObject<OS_dispatch_queue> *mAudioProcessingQueue;
    struct AudioStreamBasicDescription mAudioRecordingFormat;
    _Bool _isRecording;
}

+ (id)createEncoderFromAudioEncoding:(long long)arg1 audioStreamFormat:(struct AudioStreamBasicDescription)arg2;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
- (void).cxx_destruct;
- (void)didHaveEndOfSpeech;
- (void)didHaveStartOfSpeech;
- (void)didHaveError:(id)arg1;
- (void)didDetectSoundLevelChange:(double)arg1;
- (void)didRecordAudio:(id)arg1;
- (void)didStopRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didStopRecording;
- (void)didStartRecording;
- (void)didReadyForRecording;
- (void)dispatchBlockOnAudioProcessingQueue:(CDUnknownBlockType)arg1;
- (void)dispatchBlockOnDelegateQueue:(CDUnknownBlockType)arg1;
- (unsigned long long)audioBufferSize;
- (id)encodeAudio:(id)arg1;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)start;
- (id)init;
- (id)initWithEncoding:(long long)arg1;
- (id)initWithEncoding:(long long)arg1 voiceActivityDetectorConfiguration:(id)arg2;
- (id)initWithEncoding:(long long)arg1 voiceActivityDetectorConfiguration:(id)arg2 allowAudioPlayback:(_Bool)arg3;
- (id)initWithEncoding:(long long)arg1 voiceActivityDetectorConfiguration:(id)arg2 allowAudioPlayback:(_Bool)arg3 manageAVAudioSessionActive:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
