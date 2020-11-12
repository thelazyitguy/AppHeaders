//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AmazonChimeSDKMedia/RTCAudioSessionActivationDelegate-Protocol.h>

@class AVAudioSession, AVAudioSessionDataSourceDescription, AVAudioSessionRouteDescription, NSArray, NSString;

@interface Chime_RTCAudioSession : NSObject <RTCAudioSessionActivationDelegate>
{
    struct CriticalSection _crit;
    AVAudioSession *_session;
    int _activationCount;
    int _lockRecursionCount;
    int _webRTCSessionCount;
    _Bool _isActive;
    _Bool _useManualAudio;
    _Bool _isAudioEnabled;
    _Bool _canPlayOrRecord;
    _Bool _isInterrupted;
    _Bool _ignoresPreferredAttributeConfigurationErrors;
    vector_03b67401 _delegates;
}

+ (id)lockError;
+ (id)sharedInstance;
@property(readonly, nonatomic) AVAudioSession *session; // @synthesize session=_session;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)notifyFailedToSetActive:(_Bool)arg1 error:(id)arg2;
- (void)notifyDidSetActive:(_Bool)arg1;
- (void)notifyWillSetActive:(_Bool)arg1;
- (void)notifyDidDetectPlayoutGlitch:(long long)arg1;
- (void)notifyDidChangeOutputVolume:(float)arg1;
- (void)notifyDidStopPlayOrRecord;
- (void)notifyDidStartPlayOrRecord;
- (void)notifyDidChangeCanPlayOrRecord:(_Bool)arg1;
- (void)notifyMediaServicesWereReset;
- (void)notifyMediaServicesWereLost;
- (void)notifyDidChangeRouteWithReason:(unsigned long long)arg1 previousRoute:(id)arg2;
- (void)notifyDidEndInterruptionWithShouldResumeSession:(_Bool)arg1;
- (void)notifyDidBeginInterruption;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)audioSessionDidDeactivate:(id)arg1;
- (void)audioSessionDidActivate:(id)arg1;
- (void)updateCanPlayOrRecord;
- (void)updateAudioSessionAfterEvent;
- (id)configurationErrorWithDescription:(id)arg1;
- (_Bool)unconfigureWebRTCSession:(id *)arg1;
- (_Bool)configureWebRTCSession:(id *)arg1;
- (_Bool)endWebRTCSession:(id *)arg1;
- (_Bool)beginWebRTCSession:(id *)arg1;
- (_Bool)checkLock:(id *)arg1;
@property(nonatomic) _Bool isInterrupted;
@property(readonly) _Bool canPlayOrRecord;
@property(readonly, nonatomic) int webRTCSessionCount;
- (long long)decrementActivationCount;
- (int)incrementActivationCount;
@property(readonly, nonatomic) int activationCount;
- (void)removeZeroedDelegates;
- (void)pushDelegate:(id)arg1;
@property(readonly, nonatomic) vector_03b67401 delegates; // @synthesize delegates=_delegates;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)handleSilenceSecondaryAudioHintNotification:(id)arg1;
- (void)handleMediaServicesWereReset:(id)arg1;
- (void)handleMediaServicesWereLost:(id)arg1;
- (void)handleRouteChangeNotification:(id)arg1;
- (void)handleInterruptionNotification:(id)arg1;
- (_Bool)setOutputDataSource:(id)arg1 error:(id *)arg2;
- (_Bool)setInputDataSource:(id)arg1 error:(id *)arg2;
- (_Bool)setPreferredInput:(id)arg1 error:(id *)arg2;
- (_Bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredInputNumberOfChannels:(long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
- (_Bool)setPreferredSampleRate:(double)arg1 error:(id *)arg2;
- (_Bool)setInputGain:(float)arg1 error:(id *)arg2;
- (_Bool)setMode:(id)arg1 error:(id *)arg2;
- (_Bool)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
@property(readonly) double preferredIOBufferDuration;
@property(readonly) double IOBufferDuration;
@property(readonly) double outputLatency;
@property(readonly) double inputLatency;
@property(readonly) float outputVolume;
@property(readonly) long long outputNumberOfChannels;
@property(readonly) long long inputNumberOfChannels;
@property(readonly) double preferredSampleRate;
@property(readonly) double sampleRate;
@property(readonly) AVAudioSessionDataSourceDescription *outputDataSource;
@property(readonly) NSArray *outputDataSources;
@property(readonly) AVAudioSessionDataSourceDescription *inputDataSource;
@property(readonly) NSArray *inputDataSources;
@property(readonly) _Bool inputAvailable;
@property(readonly) _Bool inputGainSettable;
@property(readonly) float inputGain;
@property(readonly) long long maximumOutputNumberOfChannels;
@property(readonly) long long maximumInputNumberOfChannels;
@property(readonly) AVAudioSessionRouteDescription *currentRoute;
@property(readonly) _Bool secondaryAudioShouldBeSilencedHint;
@property(readonly) NSString *mode;
@property(readonly) unsigned long long categoryOptions;
@property(readonly) NSString *category;
- (void)unlockForConfiguration;
- (void)lockForConfiguration;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(nonatomic) _Bool ignoresPreferredAttributeConfigurationErrors; // @synthesize ignoresPreferredAttributeConfigurationErrors=_ignoresPreferredAttributeConfigurationErrors;
@property(nonatomic) _Bool isAudioEnabled;
@property(nonatomic) _Bool useManualAudio;
@property(readonly, nonatomic) _Bool isLocked;
@property(readonly, nonatomic) _Bool isActive;
- (void)setIsActive:(_Bool)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAudioSession:(id)arg1;
- (id)init;
- (_Bool)setConfiguration:(id)arg1 active:(_Bool)arg2 shouldSetActive:(_Bool)arg3 error:(id *)arg4;
- (_Bool)setConfiguration:(id)arg1 active:(_Bool)arg2 error:(id *)arg3;
- (_Bool)setConfiguration:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
