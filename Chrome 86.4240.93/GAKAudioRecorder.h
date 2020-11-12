//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GAKAudioSource.h>

#import <ChromeInternal/GAKAudioSink-Protocol.h>

@class NSString;

@interface GAKAudioRecorder : GAKAudioSource <GAKAudioSink>
{
    // Error parsing type: {?="buffer"^v"length"I"tail"I"head"I"fillCount"Ai"atomic"B}, name: _audioBuffer
    int _capacityBytes;
    long long _receivedBytes;
    long long _outputCursor;
    double _bytesPerSecond;
    _Bool _playing;
    _Bool _recording;
}

@property(nonatomic) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
- (long long)outputCursor;
- (void)produceAudioFromOutputCursor;
- (void)handleAudio:(struct AudioBufferList *)arg1 fromSource:(id)arg2;
- (id)audioFrom:(double)arg1 duration:(double)arg2;
@property(readonly, nonatomic) double capacity;
@property(readonly, nonatomic) double recordingTimestamp;
- (void)seekToTime:(double)arg1;
@property(nonatomic) double outputTimestamp;
- (void)dealloc;
- (id)initWithSource:(id)arg1 minimumCapacity:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
