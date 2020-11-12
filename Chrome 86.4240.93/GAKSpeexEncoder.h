//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GAKAudioSource.h>

#import <ChromeInternal/GAKAudioSink-Protocol.h>

@class GAKDataPacketizer, NSMutableData, NSString;

@interface GAKSpeexEncoder : GAKAudioSource <GAKAudioSink>
{
    const struct SpeexMode *_speexMode;
    GAKDataPacketizer *_packetizer;
    _Bool _includeHeaderByte;
    struct SpeexBits _speexBits;
    void *_encoderState;
    int _bitRate;
    int _framesPerPacket;
    int _bytesPerPacket;
    struct AudioBufferList *_encodedAudioBufferList;
    NSMutableData *_encodedAudioData;
    int _speexQuality;
}

- (void).cxx_destruct;
@property(nonatomic) int speexQuality; // @synthesize speexQuality=_speexQuality;
- (void)reset;
- (void)handleAudio:(struct AudioBufferList *)arg1 fromSource:(id)arg2;
- (unsigned long long)encodePacket:(void *)arg1 intoData:(id)arg2;
- (void)dealloc;
- (id)initWithSampleRate:(unsigned int)arg1 formatFlags:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
