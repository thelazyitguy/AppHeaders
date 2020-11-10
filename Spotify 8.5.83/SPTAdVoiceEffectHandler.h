//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAdVoiceAuxiliaryActionsEffectHandler, SPTAdVoiceCosmosEffectHandler, SPTAdVoiceLogEffectHandler, SPTAdVoicePlayEarconEffectHandler, SPTAdVoicePlayerEffectHandler, SPTAdVoiceSpeechRecognitionCommandEffectHandler, SPTAdVoiceStartDelayTimerEffectHandler;

@interface SPTAdVoiceEffectHandler : NSObject
{
    SPTAdVoiceAuxiliaryActionsEffectHandler *_auxiliaryActionsHandler;
    SPTAdVoiceCosmosEffectHandler *_cosmosEffectHandler;
    SPTAdVoiceLogEffectHandler *_voiceLogEffectHandler;
    SPTAdVoicePlayEarconEffectHandler *_playEarconEffectHandler;
    SPTAdVoicePlayerEffectHandler *_playerEffectHandler;
    SPTAdVoiceSpeechRecognitionCommandEffectHandler *_speechRecognitionEffectHandler;
    SPTAdVoiceStartDelayTimerEffectHandler *_startDelayTimerEffectHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTAdVoiceStartDelayTimerEffectHandler *startDelayTimerEffectHandler; // @synthesize startDelayTimerEffectHandler=_startDelayTimerEffectHandler;
@property(readonly, nonatomic) SPTAdVoiceSpeechRecognitionCommandEffectHandler *speechRecognitionEffectHandler; // @synthesize speechRecognitionEffectHandler=_speechRecognitionEffectHandler;
@property(readonly, nonatomic) SPTAdVoicePlayerEffectHandler *playerEffectHandler; // @synthesize playerEffectHandler=_playerEffectHandler;
@property(readonly, nonatomic) SPTAdVoicePlayEarconEffectHandler *playEarconEffectHandler; // @synthesize playEarconEffectHandler=_playEarconEffectHandler;
@property(readonly, nonatomic) SPTAdVoiceLogEffectHandler *voiceLogEffectHandler; // @synthesize voiceLogEffectHandler=_voiceLogEffectHandler;
@property(readonly, nonatomic) SPTAdVoiceCosmosEffectHandler *cosmosEffectHandler; // @synthesize cosmosEffectHandler=_cosmosEffectHandler;
@property(readonly, nonatomic) SPTAdVoiceAuxiliaryActionsEffectHandler *auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
- (CDUnknownBlockType)postAdVoiceLogWithPositionWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)postAdVoiceLogWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)postMicOnWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)postSpeechErrorWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)postSpeechReceivedWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)clearAdSlotsWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)skipToNextTrackWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)playEarconWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)saveAdWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)playContextURIWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)speechRecognitionCommandWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)listenForAudioSignalWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)startDelayTimerWithEventSink:(CDUnknownBlockType)arg1;
- (void)handleEffect:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)initWithSpeechRecognitionCommandEffectHandler:(id)arg1 playerEffectHandler:(id)arg2 playEarconEffectHandler:(id)arg3 startDelayTimerEffectHandler:(id)arg4 cosmosEffectHandler:(id)arg5 voiceLogEffectHandler:(id)arg6 auxiliaryActionsHandler:(id)arg7;

@end

