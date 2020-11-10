//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GAKAudioUnit.h>

#import <Module_Framework/GAKAudioSink-Protocol.h>

@class NSString;
@protocol GAKStreamRendererUnitDelegate;

@interface GAKStreamRendererUnit : GAKAudioUnit <GAKAudioSink>
{
    // Error parsing type: {?="buffer"^v"length"I"tail"I"head"I"fillCount"Ai"atomic"B}, name: _audioBuffer
    void *_fillRingBufferMessage;
    unsigned char _atomicTestFlags;
    unsigned int _bufferCapacityFrames;
    unsigned int _bufferCountFrames;
    id <GAKStreamRendererUnitDelegate> _delegate;
    struct AudioStreamBasicDescription _audioFormat;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int bufferCountFrames; // @synthesize bufferCountFrames=_bufferCountFrames;
@property(readonly, nonatomic) unsigned int bufferCapacityFrames; // @synthesize bufferCapacityFrames=_bufferCapacityFrames;
@property(readonly, nonatomic) struct AudioStreamBasicDescription audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) __weak id <GAKStreamRendererUnitDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleAudio:(struct AudioBufferList *)arg1 fromSource:(id)arg2;
- (void)fillAudioBuffer;
- (id)leaveGraph;
- (id)joinGraph:(id)arg1;
- (void)clearBuffer;
@property(readonly, nonatomic) unsigned int bufferAvailableSpaceFrames;
- (void)dealloc;
- (id)initWithAudioFormat:(struct AudioStreamBasicDescription)arg1 bufferCapacityFrames:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

