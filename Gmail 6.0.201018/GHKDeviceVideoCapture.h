//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GHKVideoCapture.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "GHKVideoProcessorSink-Protocol.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, CIContext, GHKImpressionReporter, GHKLowLightCalculatorParameters, GHKMediaPipeProcessorParameters, GHKVideoFrameProcessingInfoTracker, GTYCIImageToCVPixelBufferConverter, NSMutableDictionary, NSString;
@protocol GTYLowLightCalculator;

@interface GHKDeviceVideoCapture : GHKVideoCapture <AVCaptureVideoDataOutputSampleBufferDelegate, GHKVideoProcessorSink>
{
    AVCaptureSession *_captureSession;
    long long _captureDevicePosition;
    AVCaptureDeviceInput *_captureInput;
    AVCaptureVideoDataOutput *_captureOutput;
    unsigned long long _maxFrameRate;
    unsigned long long _minFrameRate;
    int _maxResolutionPixelCount;
    int _requestedPixelCount;
    unsigned long long _originalMinFrameRate;
    unsigned long long _originalMaxFrameRate;
    NSMutableDictionary *_defaultExposureModeByDevice;
    double _iOSVersion;
    struct CGSize _lastCapturedImageSize;
    unsigned int _lastCapturedImageFormat;
    NSString *_sessionPreset;
    GTYCIImageToCVPixelBufferConverter *_lowLightConverter;
    struct CGSize _lowLightConverterSize;
    unsigned int _pixelFormat;
    GHKMediaPipeProcessorParameters *_mediaPipeProcessorParameters;
    _Bool _lastReportedLowLightDetectionState;
    int _lastReportedExposureMode;
    _Bool _pendingInterruptionEvent;
    CIContext *_context;
    struct __CVBuffer *_blackImage;
    GHKLowLightCalculatorParameters *_lowLightParameters;
    GHKImpressionReporter *_impressionReporter;
    GHKVideoFrameProcessingInfoTracker *_videoFrameProcessingInfoTracker;
    id <GTYLowLightCalculator> _lowLightCalculator;
}

+ (id)suitableRangeFrom:(id)arg1 forMinFrameRate:(double)arg2 maxFrameRate:(double)arg3;
+ (id)vgaOrLowerSessionPresetFromPreset:(id)arg1;
+ (unsigned long long)defaultMinFrameRate;
+ (unsigned long long)defaultMaxFrameRate;
+ (id)defaultSessionPreset;
- (void).cxx_destruct;
@property(retain) id <GTYLowLightCalculator> lowLightCalculator; // @synthesize lowLightCalculator=_lowLightCalculator;
@property(readonly, nonatomic) GHKVideoFrameProcessingInfoTracker *videoFrameProcessingInfoTracker; // @synthesize videoFrameProcessingInfoTracker=_videoFrameProcessingInfoTracker;
@property(readonly, nonatomic) GHKImpressionReporter *impressionReporter; // @synthesize impressionReporter=_impressionReporter;
- (id)lowLightParameters;
- (void)adjustVideoMinFrameRate:(double *)arg1 maxFrameRate:(double *)arg2 toDevice:(id)arg3;
- (struct __CVBuffer *)createBlackImageBufferWithSize:(struct CGSize)arg1;
- (_Bool)supportedImageFormat:(unsigned int)arg1;
- (_Bool)shouldChangeCaptureFormat:(id)arg1;
- (void)captureSessionRuntimeError:(id)arg1;
- (void)captureSessionDidStartRunning:(id)arg1;
- (void)captureSessionDidStopRunning:(id)arg1;
- (void)captureSessionInterruptionEnded:(id)arg1;
- (void)captureSessionWasInterrupted:(id)arg1;
- (id)captureFormatForDevice:(id)arg1;
- (struct CGSize)desiredSizeForPixelCount:(int)arg1;
- (void)updateVideoWithOrientation:(long long)arg1;
- (void)didChangeOrientation:(id)arg1;
- (id)captureDeviceForPosition:(long long)arg1;
- (id)captureDeviceInputForPosition:(long long)arg1;
- (void)requestCameraPermissions;
- (void)setupCaptureInputWithOrientation:(long long)arg1;
- (void)setupCaptureOutput;
- (long long)bestAutomaticExposureModeForDevice:(id)arg1;
- (void)storeDefaultExposureModeForDevice:(id)arg1;
- (struct __CVBuffer *)brightenedSampleBufferFromSampleBuffer:(struct __CVBuffer *)arg1 amount:(double)arg2;
- (void)configureDevice:(id)arg1 forLowLightModeWithParameters:(id)arg2;
- (void)restoreParametersToDefaultForDevice:(id)arg1;
- (void)reportImpressionsForBrightness:(double)arg1 adjustment:(id)arg2;
- (void)videoProcessor:(id)arg1 didProcessImageBuffer:(struct __CVBuffer *)arg2;
- (void)handleImageBufferFrame:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)addObservers;
- (void)setupCaptureSession;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)setLowLightParameters:(id)arg1;
- (void)updateRunningState;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isUsingFrontCamera;
- (void)setRequestedPixelCount:(int)arg1;
- (void)setUsingFrontCamera:(_Bool)arg1;
- (_Bool)isFormatSupported:(id)arg1;
- (id)makeEmbeddedMediaPipeProcessor;
- (void)attachVideoProcessor:(id)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithCaptureSession:(id)arg1 sessionPreset:(id)arg2 minFrameRate:(unsigned long long)arg3 maxFrameRate:(unsigned long long)arg4 pixelFormat:(unsigned int)arg5 mediaPipeProcessorParameters:(id)arg6 impressionReporter:(id)arg7 videoFrameInfoTracker:(id)arg8 useManualVideoCaptureSetup:(_Bool)arg9 stopVideoCaptureOnBackground:(_Bool)arg10;
- (id)initWithSessionPreset:(id)arg1 minFrameRate:(unsigned long long)arg2 maxFrameRate:(unsigned long long)arg3 pixelFormat:(unsigned int)arg4 mediaPipeProcessorParameters:(id)arg5 impressionReporter:(id)arg6 videoFrameInfoTracker:(id)arg7 useManualVideoCaptureSetup:(_Bool)arg8 stopVideoCaptureOnBackground:(_Bool)arg9;
- (id)initWithSessionPreset:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
