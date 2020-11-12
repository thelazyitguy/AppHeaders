//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HuluAPI/IMonitorNotifier.h>

@class ConvivaConnectionType, ConvivaContentInfo, ConvivaEventQueue, ConvivaStreamerProxy, ConvivaTimer, NSString;

@interface MonitorStreamerProxy : IMonitorNotifier
{
    ConvivaStreamerProxy *_streamerProxy;
    ConvivaStreamerProxy *_tempStreamerProxy;
    ConvivaEventQueue *_eventQueue;
    ConvivaConnectionType *_connectionType;
    long long _sessionId;
    double _sessionStartTimeMs;
    double _adStartTimeMs;
    double _lastUpdateTimeMs;
    unsigned long long _manualContentLengthSec;
    int _playerState;
    int _joinTimeMs;
    int _adTimeMs;
    long long _videoWidth;
    long long _videoHeight;
    NSString *_cdnServerIP;
    NSString *_networkType;
    NSString *_moduleVersion;
    NSString *_moduleName;
    _Bool isUpdateMetadataCalled;
    _Bool isRenderedFramesUpdated;
    NSString *_linkEncryption;
    double _signalStrength;
    long long _droppedFramerate;
    long long _renderedFramerate;
    ConvivaContentInfo *_cci;
    int _bitrateKbps;
    int _avgbitrateKbps;
    unsigned long long _totalPlayingBits;
    int _encodedFps;
    long long _totalPlayingFps;
    int _playingFpsSamples;
    ConvivaTimer *_fpsSampleTimer;
    _Bool _isProxyCreatedOutside;
    _Bool _isPlayerSeeking;
    _Bool _isCTsetExternal;
    _Bool _externalBitrateReporting;
}

@property(readonly, nonatomic) _Bool externalBitrateReporting; // @synthesize externalBitrateReporting=_externalBitrateReporting;
- (void).cxx_destruct;
- (void)setModuleName:(id)arg1;
- (void)setModuleVersion:(id)arg1;
- (_Bool)isRenderedFramesUpdatedAtleastOnce;
- (_Bool)isUpdateMetadataCalled;
- (void)updateMetadata:(id)arg1;
- (void)TESTAPI_dispatchSyncSampleFps;
- (_Bool)isPlayerSeeking;
- (void)setSeekEvent:(long long)arg1 seekPosition:(long long)arg2;
- (void)setRenderedFramerate:(long long)arg1;
- (void)setDroppedFramerate:(long long)arg1;
- (void)handleNetworkChange:(id)arg1;
- (void)makeLocationSampleEvent:(double)arg1 longitude:(double)arg2 permissionStatus:(int)arg3;
- (void)makeSignalStrengthSampleEvent;
- (void)setSignalStrength:(double)arg1;
- (void)setLinkEncryption:(id)arg1;
- (void)setConnectionType:(id)arg1 external:(unsigned char)arg2;
- (void)setVideoHeight:(long long)arg1;
- (void)setVideoWidth:(long long)arg1;
- (void)sampleFps;
- (void)setContentLength:(long long)arg1;
- (void)updateEvent:(id)arg1;
- (void)updateHb:(id)arg1;
- (void)enqueueEvent:(id)arg1 data:(id)arg2 atTime:(int)arg3;
- (void)enqueueErrorEvent:(id)arg1 atTime:(int)arg2;
- (void)enqueueMetadaStateChangeEvent:(id)arg1 newvalue:(id)arg2;
- (void)enqueueAvgBitrateChangeEvent:(int)arg1 atTime:(int)arg2;
- (void)enqueueCDNStateChangeEvent:(id)arg1 atTime:(int)arg2;
- (void)enqueueBitrateChangeEvent:(int)arg1 atTime:(int)arg2;
- (void)enqueueStateChangeEvent:(id)arg1 oldState:(id)arg2 newState:(id)arg3 atTime:(int)arg4;
- (void)setVideoDimensionChages:(long long)arg1 videoHeight:(long long)arg2;
- (void)onError:(id)arg1;
- (_Bool)isCustomStreamerProxy;
- (void)setAdBufferLength:(long long)arg1;
- (void)setAdPlayHeadTime:(long long)arg1;
- (void)setAdVideoResolutionWidth:(long long)arg1 andHeight:(long long)arg2;
- (void)setAdPlayerVersion:(id)arg1;
- (void)setAdPlayerName:(id)arg1;
- (void)setAdPlayerState:(int)arg1;
- (id)sanitizeTags:(id)arg1;
- (void)errorLoggingForMissingMetadata:(id)arg1;
- (void)setPlayingState:(int)arg1;
- (void)updateMeasurementsAt:(int)arg1;
- (void)setCDNServerIP:(id)arg1;
- (void)setBitrate:(int)arg1;
- (id)streamerProxy;
- (int)sessionTimeMs;
- (void)cleanup;
- (void)setAverageBitrate:(int)arg1;
- (void)setStream:(int)arg1 cdn:(id)arg2 resource:(id)arg3;
- (void)adEnd;
- (void)adStart;
- (void)updateConnectionType;
- (void)attachStreamer:(id)arg1;
- (void)pauseMonitor;
- (id)initWithStreamerProxy:(id)arg1 eventQueue:(id)arg2 contentInfo:(id)arg3 options:(id)arg4 sessionId:(long long)arg5 sessionStartTimeMs:(double)arg6;
- (void)log:(id)arg1;

@end
