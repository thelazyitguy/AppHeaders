//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceLibrarySessionObserver-Protocol.h"

@class NSArray, NSString;
@protocol SPTPlayer, SPTVoiceLibrarySession;

@interface SPTAdVoiceSpeechRecognitionCommandEffectHandler : NSObject <SPTVoiceLibrarySessionObserver>
{
    id <SPTVoiceLibrarySession> _voiceSession;
    id <SPTPlayer> _player;
    NSArray *_intents;
    CDUnknownBlockType _eventSink;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType eventSink; // @synthesize eventSink=_eventSink;
@property(copy, nonatomic) NSArray *intents; // @synthesize intents=_intents;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTVoiceLibrarySession> voiceSession; // @synthesize voiceSession=_voiceSession;
- (void)voiceSession:(id)arg1 didUpdateIntermediateResponse:(id)arg2;
- (void)voiceSession:(id)arg1 didFailWithError:(id)arg2;
- (void)voiceSession:(id)arg1 didReceiveFinalResponse:(id)arg2;
- (void)voiceSessionDidStartListening:(id)arg1;
- (void)voiceSessionWillStartListening:(id)arg1;
- (void)handleEffect:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)stopSpeechRecognition;
- (void)startSpeechRecognition;
- (void)dealloc;
- (id)initWithVoiceSession:(id)arg1 player:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
