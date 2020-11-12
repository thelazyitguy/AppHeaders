//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALXAudioSource.h"

@class NSInputStream;

@interface ALXAudioProducerForAutomation : ALXAudioSource
{
    CDUnknownBlockType _completionHandler;
    NSInputStream *_stream;
}

@property(copy, nonatomic) NSInputStream *stream; // @synthesize stream=_stream;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (id)getAudioSampleUrlFromParameterAtIndex:(int)arg1;
- (void)stopProducingAudio;
- (void)startProducingAudio;
- (void)prepareProducingAudio;
- (void)createProcessedAudioStreamWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
