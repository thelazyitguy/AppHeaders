//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTLCAudioVideoTransmissionDelegate-Protocol.h>
#import <Module_Framework/YTLCScreencastAudioManager-Protocol.h>

@class NSString, UIView;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, ObjcCameraWrapper, VCCameraPreviewer, YTLCAudioVideoTransmission, YTLCEventLogger, YTLCVideoCoreSessionDelegate;

@interface YTLCVideoCoreSession : NSObject <YTLCAudioVideoTransmissionDelegate, YTLCScreencastAudioManager>
{
    struct shared_ptr<videocore::Split> _audioSplit;
    struct shared_ptr<videocore::IAudio> _audioSource;
    struct shared_ptr<videocore::iOS::CameraSource> _cameraSource;
    struct shared_ptr<videocore::iOS::YTCameraSource> _youTubeCameraSource;
    struct shared_ptr<videocore::PixelBufferCallbackTransform> _callbackTransform;
    struct shared_ptr<videocore::Split> _videoSplit;
    struct shared_ptr<videocore::Split> _videoMixerSplit;
    struct shared_ptr<videocore::iOS::YTLCFPSMonitor> _fpsMonitor;
    struct shared_ptr<videocore::iOS::YTLCAudioVideoWriterController> _hdWriterController;
    struct shared_ptr<videocore::simpleApi::PixelBufferOutput> _pbOutput;
    struct shared_ptr<videocore::AspectTransform> _aspectTransform;
    struct shared_ptr<videocore::PositionTransform> _positionTransform;
    struct shared_ptr<videocore::IVideoMixer> _videoMixer;
    struct shared_ptr<videocore::Apple::PixelBufferSource> _pixelBufferSource;
    time_point_e708cccf m_epoch;
    int m_aspectMode;
    NSObject<OS_dispatch_group> *_graphManagementGroup;
    NSObject<OS_dispatch_queue> *_graphManagementQueue;
    NSObject<OS_dispatch_source> *_measurementTimer;
    NSObject<OS_dispatch_queue> *_measurementQueue;
    float _videoZoomFactor;
    CDUnknownBlockType _transformCallback;
    id <ObjcCameraWrapper> _cameraCaptureManager;
    _Bool _enableYouTubeCamera;
    _Bool _screencastEnabled;
    _Bool _drishtiFPSMonitoringEnabled;
    _Bool _HDUploadReplaceArchiveEnabled;
    _Bool _frontCameraMirroringEnabled;
    _Bool _ended;
    _Bool _microphoneEnabled;
    long long _interfaceOrientation;
    unsigned long long _initialLastSentTimestamp;
    NSString *_cameraSourceFilter;
    NSString *_videoIDString;
    id <YTLCAudioVideoTransmission> _audioVideoTransmission;
    id <YTLCEventLogger> _eventLogger;
    _Bool _torch;
    _Bool _micMuted;
    _Bool _paused;
    _Bool _continuousAutofocus;
    _Bool _continuousExposure;
    int _fps;
    int _audioChannelCount;
    float _audioSampleRate;
    long long _sessionState;
    UIView<VCCameraPreviewer> *_previewView;
    NSString *_captureSessionPreset;
    long long _cameraState;
    NSString *_versionString;
    long long _filter;
    id <YTLCVideoCoreSessionDelegate> _delegate;
    struct CGSize _videoSize;
    struct CGPoint _focusPointOfInterest;
    struct CGPoint _exposurePointOfInterest;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) id <YTLCVideoCoreSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
@property(nonatomic) _Bool continuousExposure; // @synthesize continuousExposure=_continuousExposure;
@property(nonatomic) _Bool continuousAutofocus; // @synthesize continuousAutofocus=_continuousAutofocus;
@property(nonatomic) struct CGPoint exposurePointOfInterest; // @synthesize exposurePointOfInterest=_exposurePointOfInterest;
@property(nonatomic) struct CGPoint focusPointOfInterest; // @synthesize focusPointOfInterest=_focusPointOfInterest;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) _Bool micMuted; // @synthesize micMuted=_micMuted;
@property(nonatomic) float audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) int audioChannelCount; // @synthesize audioChannelCount=_audioChannelCount;
@property(nonatomic) _Bool torch; // @synthesize torch=_torch;
@property(nonatomic) long long cameraState; // @synthesize cameraState=_cameraState;
@property(nonatomic) int fps; // @synthesize fps=_fps;
@property(nonatomic) NSString *captureSessionPreset; // @synthesize captureSessionPreset=_captureSessionPreset;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(readonly, nonatomic) UIView<VCCameraPreviewer> *previewView; // @synthesize previewView=_previewView;
@property(readonly, nonatomic) long long sessionState; // @synthesize sessionState=_sessionState;
- (void)screencastDidOutputAudioBufferList:(struct AudioBufferList *)arg1 inNumberFrames:(unsigned long long)arg2;
- (id)audioVideoTransmissionForProtocol:(unsigned long long)arg1 webRTCBWEWindowSizeInPackets:(id)arg2 webRTCBWEBackOffFactor:(id)arg3 webRTCVideoCodecPreferences:(id)arg4 webRTCUseBitrateAdjuster:(_Bool)arg5 webRTCUseLevel4:(_Bool)arg6 webRTCH264DataRateLimit:(float)arg7 webRTCDisableFrameDropper:(_Bool)arg8;
- (void)endSessionAtEndOfBroadcast:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (double)frameDuration;
- (void)resizeVideoBuffers;
- (shared_ptr_88879b08)activeCameraSource;
- (void)shutdownMeasurement;
- (void)startMeasurement;
- (void)setUpAudioGraph;
- (void)setUpVideoGraph;
- (void)setUpHDUpload;
- (void)setUpGraph;
- (void)sendStreamEventLogsToURL:(id)arg1 logID:(id)arg2;
- (void)cancelHDUploadReplace;
- (void)startHDRecord;
- (void)addPixelBufferSource:(id)arg1;
- (void)transformedBufferReady:(struct __CVBuffer *)arg1;
- (_Bool)setVideoZoomFactor:(double)arg1;
- (void)captureStillImageAsynchronously:(CDUnknownBlockType)arg1;
- (void)getCameraPreviewLayer:(id *)arg1;
- (void)startWebRTCSessionWithURL:(id)arg1 streamKey:(id)arg2 streamEventLogSettings:(id)arg3;
- (void)startRtmpSessionWithURL:(id)arg1 streamKey:(id)arg2;
- (void)dealloc;
- (id)initWithStreamSettings:(id)arg1 cameraState:(long long)arg2 interfaceOrientation:(long long)arg3 frontCameraMirroringEnabled:(_Bool)arg4 transformCallback:(CDUnknownBlockType)arg5 cameraCaptureManager:(id)arg6 microphoneEnabled:(_Bool)arg7 cameraPreview:(id)arg8 lastSentTimestamp:(unsigned long long)arg9 drishtiFPSMonitoringEnabled:(_Bool)arg10 HDUploadReplaceArchiveEnabled:(_Bool)arg11 videoIDString:(id)arg12 webRTC1080:(_Bool)arg13 eventLogger:(id)arg14;
- (void)didSetUpVideoInput:(shared_ptr_e661351a)arg1;
- (void)didSetUpAudioInput:(shared_ptr_e661351a)arg1;
- (void)debugStringDidChange:(id)arg1;
- (void)bitrateDidChange:(long long)arg1 bitrate:(int)arg2;
- (void)videoSizeDidChange:(struct CGSize)arg1;
- (void)detectedThroughput:(int)arg1 bytesSent:(int)arg2;
- (void)networkDidDisconnect;
- (void)networkDidStartReconnecting;
- (void)networkErrorDidOccur;
- (void)networkSessionDidStart;
- (void)networkDidConnect;
@property(readonly, nonatomic) int estimatedThroughput;
@property(nonatomic) int increaseDeltaSeconds;
@property(nonatomic) int settlementDelaySeconds;
@property(nonatomic) int measurementDelaySeconds;
@property(readonly, nonatomic) _Bool firstVideoFrameSent;
@property(readonly, nonatomic) _Bool firstAudioFrameSent;
@property(nonatomic) _Bool useAdaptiveBitrate;
@property(nonatomic) int bitrateCeiling;
@property(readonly, nonatomic) long long totalMediaBytesSent;
@property(nonatomic) int bitrate;
@property(readonly, nonatomic) _Bool torchSupported;
- (void)setAudioBitrate:(int)arg1;
@property(readonly, nonatomic, getter=isHDRecordActive) _Bool HDRecordActive;
- (void)setSessionState:(long long)arg1;
- (void)setAVCaptureSessionPreset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

