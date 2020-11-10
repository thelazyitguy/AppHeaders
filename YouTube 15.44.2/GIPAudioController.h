//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GIPAudioPlayerDelegate-Protocol.h>

@class AVAudioSession, GIPAudioPlayer;

@interface GIPAudioController : NSObject <GIPAudioPlayerDelegate>
{
    AVAudioSession *_audioSession;
    _Bool _isActive;
    GIPAudioPlayer *_player;
    unsigned int _audioSessionCategory;
    long long _iPodPlaybackState;
    _Bool _isInterrupted;
    _Bool _activeWhenInterrupted;
    _Bool _inputIsAvailable;
    _Bool _useSpeakerOutput;
    _Bool _resumePlayingAfterAudio;
    _Bool _allowBluetoothInput;
    _Bool _allowBluetoothA2DP;
    _Bool _allowDucking;
    _Bool _interruptSpokenAudio;
    unsigned int _noMicAudioSessionCategory;
}

+ (id)systemMusicPlayer;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned int noMicAudioSessionCategory; // @synthesize noMicAudioSessionCategory=_noMicAudioSessionCategory;
@property(nonatomic) _Bool interruptSpokenAudio; // @synthesize interruptSpokenAudio=_interruptSpokenAudio;
@property(nonatomic) _Bool allowDucking; // @synthesize allowDucking=_allowDucking;
@property(nonatomic) _Bool allowBluetoothA2DP; // @synthesize allowBluetoothA2DP=_allowBluetoothA2DP;
@property(nonatomic) _Bool allowBluetoothInput; // @synthesize allowBluetoothInput=_allowBluetoothInput;
@property(nonatomic) _Bool resumePlayingAfterAudio; // @synthesize resumePlayingAfterAudio=_resumePlayingAfterAudio;
@property(nonatomic) _Bool useSpeakerOutput; // @synthesize useSpeakerOutput=_useSpeakerOutput;
- (_Bool)wasMusicPlaying;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)receivedRouteChangeNotification:(id)arg1;
- (void)receivedInterruptionNotification:(id)arg1;
- (void)resetToMatchAVAudioSession;
- (unsigned int)intForCategoryString:(id)arg1;
- (id)stringForCategoryInt:(unsigned int)arg1;
- (void)updateAudioOutputOverrideIfNeeded;
- (unsigned long long)optionsForCategory:(id)arg1;
- (void)inputIsAvailableChanged:(_Bool)arg1;
- (void)endInterruptionWithFlags:(unsigned long long)arg1;
- (void)endInterruption;
- (void)beginInterruption;
- (void)notifyPlaybackComplete:(id)arg1;
- (void)playbackDidComplete:(id)arg1;
- (void)stopPlayback;
- (_Bool)playSound:(id)arg1 identifier:(id)arg2 async:(_Bool)arg3;
- (_Bool)playSound:(id)arg1 identifier:(id)arg2;
- (_Bool)playSound:(id)arg1;
- (_Bool)isBluetoothAudioPortAvailable;
- (_Bool)isInitialized;
- (_Bool)audioInputAvailable;
- (_Bool)hasExternalMicrophone;
- (_Bool)isMusicPlaying;
- (_Bool)isPlaying;
- (_Bool)audioSessionSetInactive;
- (id)audioSessionCategoryString;
- (_Bool)setAudioSessionCategory:(unsigned int)arg1;
- (unsigned int)audioSessionCategory;
- (_Bool)audioSessionSetActive;
- (_Bool)audioInit;
- (_Bool)audioInitIfAvailable;
- (void)dealloc;
- (id)init;

@end

