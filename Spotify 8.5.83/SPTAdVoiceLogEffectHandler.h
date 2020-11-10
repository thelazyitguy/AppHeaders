//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAccessoryStateManager, SPTAdsBaseEntity, SPTEventSender, SPTPlayer, SPTVoiceLibrarySession;

@interface SPTAdVoiceLogEffectHandler : NSObject
{
    id <SPTAccessoryStateManager> _accessoryStateManager;
    id <SPTAdsBaseEntity> _adEntity;
    id <SPTEventSender> _eventSender;
    id <SPTPlayer> _player;
    id <SPTVoiceLibrarySession> _voiceSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTVoiceLibrarySession> voiceSession; // @synthesize voiceSession=_voiceSession;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(nonatomic) __weak id <SPTAdsBaseEntity> adEntity; // @synthesize adEntity=_adEntity;
@property(retain, nonatomic) id <SPTAccessoryStateManager> accessoryStateManager; // @synthesize accessoryStateManager=_accessoryStateManager;
- (void)logVoiceAdLogEvent:(id)arg1 position:(double)arg2 eventData:(id)arg3;
- (id)getActiveConnectedDevice;
- (void)handlePostMicOnEffect:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)handlePostSpeechErrorEffect:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)handlePostSpeechReceivedEffect:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)handlePostAdVoiceLog:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)handlePostAdVoiceLogWithPosition:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)initWithAccessoryStateManager:(id)arg1 eventSender:(id)arg2 adEntity:(id)arg3 player:(id)arg4 adVoiceSession:(id)arg5;

@end

