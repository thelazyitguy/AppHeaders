//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UJET/AVCaptureFileOutputRecordingDelegate-Protocol.h>
#import <UJET/UIGestureRecognizerDelegate-Protocol.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, CAAnimation, CALayer, NSString, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView;

@interface UjetLLSimpleCamera : UIViewController <AVCaptureFileOutputRecordingDelegate, UIGestureRecognizerDelegate>
{
    _Bool _videoEnabled;
    _Bool _audioEnabled;
    _Bool _recording;
    _Bool _zoomingEnabled;
    _Bool _fixOrientationAfterCapture;
    _Bool _tapToFocus;
    _Bool _useDeviceOrientation;
    _Bool _audioGranted;
    CDUnknownBlockType _onDeviceChange;
    CDUnknownBlockType _onError;
    CDUnknownBlockType _onStartRecording;
    NSString *_cameraQuality;
    unsigned long long _flash;
    unsigned long long _mirror;
    unsigned long long _position;
    long long _whiteBalanceMode;
    double _maxScale;
    UIView *_preview;
    AVCaptureStillImageOutput *_stillImageOutput;
    AVCaptureSession *_session;
    AVCaptureDevice *_videoCaptureDevice;
    AVCaptureDevice *_audioCaptureDevice;
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCaptureDeviceInput *_audioDeviceInput;
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;
    UITapGestureRecognizer *_tapGesture;
    CALayer *_focusBoxLayer;
    CAAnimation *_focusBoxAnimation;
    AVCaptureMovieFileOutput *_movieFileOutput;
    UIPinchGestureRecognizer *_pinchGesture;
    double _beginGestureScale;
    double _effectiveScale;
    CDUnknownBlockType _didRecordCompletionBlock;
}

+ (_Bool)isRearCameraAvailable;
+ (_Bool)isFrontCameraAvailable;
+ (void)requestMicrophonePermission:(CDUnknownBlockType)arg1;
+ (void)requestCameraPermission:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType didRecordCompletionBlock; // @synthesize didRecordCompletionBlock=_didRecordCompletionBlock;
@property(nonatomic) _Bool audioGranted; // @synthesize audioGranted=_audioGranted;
@property(nonatomic) double effectiveScale; // @synthesize effectiveScale=_effectiveScale;
@property(nonatomic) double beginGestureScale; // @synthesize beginGestureScale=_beginGestureScale;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property(retain, nonatomic) AVCaptureMovieFileOutput *movieFileOutput; // @synthesize movieFileOutput=_movieFileOutput;
@property(retain, nonatomic) CAAnimation *focusBoxAnimation; // @synthesize focusBoxAnimation=_focusBoxAnimation;
@property(retain, nonatomic) CALayer *focusBoxLayer; // @synthesize focusBoxLayer=_focusBoxLayer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer; // @synthesize captureVideoPreviewLayer=_captureVideoPreviewLayer;
@property(retain, nonatomic) AVCaptureDeviceInput *audioDeviceInput; // @synthesize audioDeviceInput=_audioDeviceInput;
@property(retain, nonatomic) AVCaptureDeviceInput *videoDeviceInput; // @synthesize videoDeviceInput=_videoDeviceInput;
@property(retain, nonatomic) AVCaptureDevice *audioCaptureDevice; // @synthesize audioCaptureDevice=_audioCaptureDevice;
@property(retain, nonatomic) AVCaptureDevice *videoCaptureDevice; // @synthesize videoCaptureDevice=_videoCaptureDevice;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(retain, nonatomic) UIView *preview; // @synthesize preview=_preview;
@property(nonatomic) _Bool useDeviceOrientation; // @synthesize useDeviceOrientation=_useDeviceOrientation;
@property(nonatomic) _Bool tapToFocus; // @synthesize tapToFocus=_tapToFocus;
@property(nonatomic) _Bool fixOrientationAfterCapture; // @synthesize fixOrientationAfterCapture=_fixOrientationAfterCapture;
@property(nonatomic) double maxScale; // @synthesize maxScale=_maxScale;
@property(nonatomic, getter=isZoomingEnabled) _Bool zoomingEnabled; // @synthesize zoomingEnabled=_zoomingEnabled;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic) long long whiteBalanceMode; // @synthesize whiteBalanceMode=_whiteBalanceMode;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) unsigned long long mirror; // @synthesize mirror=_mirror;
@property(readonly, nonatomic) unsigned long long flash; // @synthesize flash=_flash;
@property(copy, nonatomic) NSString *cameraQuality; // @synthesize cameraQuality=_cameraQuality;
@property(copy, nonatomic) CDUnknownBlockType onStartRecording; // @synthesize onStartRecording=_onStartRecording;
@property(copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(copy, nonatomic) CDUnknownBlockType onDeviceChange; // @synthesize onDeviceChange=_onDeviceChange;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)orientationForConnection;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showFocusBox:(struct CGPoint)arg1;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)alterFocusBox:(id)arg1 animation:(id)arg2;
- (void)addDefaultFocusBox;
- (void)previewTapped:(id)arg1;
- (id)cameraWithPosition:(long long)arg1;
- (void)setCameraPosition:(unsigned long long)arg1;
- (unsigned long long)togglePosition;
- (_Bool)updateFlashMode:(unsigned long long)arg1;
- (_Bool)isTorchAvailable;
- (_Bool)isFlashAvailable;
- (id)captureConnection;
- (void)passError:(id)arg1;
- (void)enableTorch:(_Bool)arg1;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)stopRecording;
- (void)startRecordingWithOutputUrl:(id)arg1 didRecord:(CDUnknownBlockType)arg2;
- (void)capture:(CDUnknownBlockType)arg1;
- (void)capture:(CDUnknownBlockType)arg1 exactSeenImage:(_Bool)arg2;
- (void)capture:(CDUnknownBlockType)arg1 exactSeenImage:(_Bool)arg2 animationBlock:(CDUnknownBlockType)arg3;
- (void)stop;
- (void)initialize;
- (void)start;
- (void)attachToViewController:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)handlePinchGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLoad;
- (void)setupWithQuality:(id)arg1 position:(unsigned long long)arg2 audioEnabled:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuality:(id)arg1 position:(unsigned long long)arg2 audioEnabled:(_Bool)arg3;
- (id)initWithAudioEnabled:(_Bool)arg1;
- (id)init;
- (id)cropImage:(id)arg1 usingPreviewLayer:(id)arg2;
- (struct CGPoint)convertToPointOfInterestFromViewCoordinates:(struct CGPoint)arg1 previewLayer:(id)arg2 ports:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
