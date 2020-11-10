//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTCameraCaptureManager-Protocol.h>
#import <Module_Framework/YTEditAudioSessionDelegate-Protocol.h>
#import <Module_Framework/YTEditCameraRecorderDelegate-Protocol.h>
#import <Module_Framework/YTEditCameraTimerSource-Protocol.h>
#import <Module_Framework/YTEditCaptureSessionIOManagerDelegate-Protocol.h>
#import <Module_Framework/YTEditEffectProcessorDelegate-Protocol.h>

@class AVCaptureConnection, AVCaptureDeviceInput, AVCaptureSession, CALayer, GIMMe, NSMutableSet, NSString, YTEditAudioSession, YTEditCaptureSessionIOManager, YTEditGLKBufferView, YTEditGLKRenderer;
@protocol OS_dispatch_queue, YTCameraCaptureManagerDelegate, YTCameraProfile, YTEditCameraRecordingManager, YTEditEffectProcessor;

@interface YTEditCameraCaptureManager : NSObject <YTEditCameraTimerSource, YTEditAudioSessionDelegate, YTEditCaptureSessionIOManagerDelegate, YTEditCameraRecorderDelegate, YTEditEffectProcessorDelegate, YTCameraCaptureManager>
{
    unsigned long long _backgroundRecordingID;
    _Bool _wasContinuouslyFocusing;
    _Bool _userTriggeredContinuousFocus;
    YTEditCaptureSessionIOManager *_captureSessionIOManager;
    YTEditAudioSession *_audioCaptureSession;
    AVCaptureConnection *_dataOutputConnection;
    AVCaptureConnection *_stillImageConnection;
    NSObject<OS_dispatch_queue> *_cameraQueue;
    double _backVideoZoomFactor;
    double _frontVideoZoomFactor;
    CALayer *_previewLayer;
    _Bool _shouldUseBufferPool;
    struct __CVPixelBufferPool *_pixelBufferPool;
    unsigned long long _pixelBufferPoolPixelBufferWidth;
    unsigned long long _pixelBufferPoolPixelBufferHeight;
    id <YTEditEffectProcessor> _effectProcessor;
    _Bool _active;
    id <YTCameraCaptureManagerDelegate> _delegate;
    id <YTCameraProfile> _profile;
    long long _flashMode;
    long long _torchMode;
    long long _videoOrientation;
    GIMMe *_gimme;
    AVCaptureDeviceInput *_videoInput;
    id <YTEditCameraRecordingManager> _recordingManager;
    YTEditGLKBufferView *_effectsPreviewView;
    YTEditGLKRenderer *_glRenderer;
    NSMutableSet *_capturePreviewCompletionHandlers;
}

+ (id)defaultCaptureDeviceForCameraPosition:(long long)arg1;
+ (id)defaultBackCamera;
+ (id)defaultFrontCamera;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *capturePreviewCompletionHandlers; // @synthesize capturePreviewCompletionHandlers=_capturePreviewCompletionHandlers;
@property(retain, nonatomic) YTEditGLKRenderer *glRenderer; // @synthesize glRenderer=_glRenderer;
@property(retain, nonatomic) YTEditGLKBufferView *effectsPreviewView; // @synthesize effectsPreviewView=_effectsPreviewView;
@property(retain) id <YTEditCameraRecordingManager> recordingManager; // @synthesize recordingManager=_recordingManager;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(readonly, nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(readonly, nonatomic) id <YTCameraProfile> profile; // @synthesize profile=_profile;
@property __weak id <YTCameraCaptureManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cameraQueue; // @synthesize cameraQueue=_cameraQueue;
- (void)handlePostProcessedPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)stopEffectProcessor:(id)arg1;
- (void)startEffectProcessor:(id)arg1;
- (void)tearDownEffectPreview;
- (void)setUpEffectPreview;
- (void)effectProcessor:(id)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2 withTimestamp:(double)arg3;
- (void)processPixelBuffer:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)processPixelBufferUsingPixelBufferPool:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)recordingDidEndWithCameraAsset:(id)arg1 error:(id)arg2;
- (void)recordingDidBeginWithOutputURL:(id)arg1;
- (void)audioSessionDidOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)releaseBackgroundThread;
- (void)captureInterruptionEnded:(id)arg1;
- (void)captureInterrupted:(id)arg1;
- (void)captureError:(id)arg1;
- (void)captureStop:(id)arg1;
- (void)captureStart:(id)arg1;
- (void)deviceDisconnected:(id)arg1;
- (void)deviceConnected:(id)arg1;
- (void)handleDeviceDisconnectedNotification:(id)arg1;
- (void)handleDeviceConnectedNotification:(id)arg1;
- (id)recordingManagerForProfile:(id)arg1 recordingDirectory:(id)arg2;
- (void)maybeCompleteCapturePreviewWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id)arg2;
- (id)genericCameraErrorWithErrorDict:(id)arg1;
- (void)updateConnection:(id)arg1 forDevice:(id)arg2;
- (void)subjectAreaDidChange;
- (void)attachRenderedPreviewLayer;
- (long long)setUpSession;
- (void)setEffectProcessor:(id)arg1;
- (void)resetSession;
- (long long)prepareToCaptureWithCameraProfile:(id)arg1;
- (void)addPreviewLayer:(id)arg1;
- (_Bool)isOwnedBy:(id)arg1;
- (_Bool)canAcquireCameraWithDelegate:(id)arg1;
@property(getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic, getter=isReadyToCapture) _Bool readyToCapture;
@property(retain, nonatomic) AVCaptureSession *captureSession;
- (void)executeSyncBlockOnCameraQueue:(CDUnknownBlockType)arg1;
- (void)executeAsyncBlockOnCameraQueue:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setFramerate:(int)arg1 forCaptureDevice:(id)arg2;
- (void)setFramerate:(int)arg1;
- (_Bool)continuousFocusAtPoint:(struct CGPoint)arg1;
- (_Bool)continuousFocusAtPoint:(struct CGPoint)arg1 wasUserAction:(_Bool)arg2;
- (_Bool)autoFocusAtPoint:(struct CGPoint)arg1;
- (id)setActiveCaptureDevice:(id)arg1;
- (_Bool)toggleCamera;
- (_Bool)setCameraPosition:(long long)arg1;
@property(readonly, nonatomic) long long cameraPosition;
@property(readonly, nonatomic) struct CGRect cleanAperture;
@property(readonly, nonatomic) CDStruct_1ef3fb1f videoDimensions;
@property(readonly, nonatomic, getter=isVideoMirrored) _Bool videoMirrored;
@property(readonly, nonatomic) unsigned long long availableCaptureDevices;
- (void)resetZoomFactors;
- (void)cancelVideoZoomRamp;
- (void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2;
- (_Bool)setVideoZoomFactor:(double)arg1 forDevice:(id)arg2;
- (_Bool)setVideoZoomFactor:(double)arg1;
@property(readonly, nonatomic, getter=isRampingVideoZoom) _Bool rampingVideoZoom;
@property(readonly, nonatomic) double videoZoomFactor;
@property(readonly, nonatomic) double maxAvailableVideoZoomFactor;
@property(readonly, nonatomic) double minAvailableVideoZoomFactor;
- (_Bool)toggleTorch;
- (_Bool)setTorchMode:(long long)arg1;
@property(readonly, nonatomic, getter=isTorchActive) _Bool torchActive;
@property(readonly, nonatomic, getter=isTorchAvailable) _Bool torchAvailable;
@property(readonly, nonatomic) _Bool hasTorch;
- (_Bool)toggleFlash;
- (_Bool)setFlashMode:(long long)arg1;
@property(readonly, nonatomic) _Bool hasFlash;
- (void)capturePreviewImageAsynchronously:(CDUnknownBlockType)arg1;
- (void)captureStillImageAsynchronously:(CDUnknownBlockType)arg1;
- (id)stopRecording;
- (id)startRecordingWithRecordingSettings:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 recordedDuration;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
@property(readonly, nonatomic) _Bool canStartRecording;
- (void)dealloc;
- (id)init;
- (double)durationToDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
