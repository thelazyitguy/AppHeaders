//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol ALXAudioSourceProtocol;

@protocol ALXAudioProducerDelegate <NSObject>

@optional
- (void)audioProducer:(id <ALXAudioSourceProtocol>)arg1 didHaveError:(NSError *)arg2;
- (void)audioProducerDidStopProducing:(id <ALXAudioSourceProtocol>)arg1;
- (void)audioProducerDidDetectEndOfSpeech:(id <ALXAudioSourceProtocol>)arg1;
- (void)audioProducer:(id <ALXAudioSourceProtocol>)arg1 didDetectChangeInSoundLevel:(double)arg2;
- (void)audioProducerDidDetectStartOfSpeech:(id <ALXAudioSourceProtocol>)arg1;
- (void)audioProducerDidStartProducing:(id <ALXAudioSourceProtocol>)arg1;
- (void)audioProducerReady:(id <ALXAudioSourceProtocol>)arg1;
@end
