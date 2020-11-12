//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class A9VSCameraCoordinateConverter, A9VSCreditCardReader, A9VSGiftCardReader, AVCaptureDevice, AVCaptureInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, FlowManager, NSArray, NSMutableDictionary, NSString, UIView;
@protocol A9VSCameraManagerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface A9VSCameraManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _running;
    _Bool _paused;
    _Bool _stopped;
    float _frameRate;
    id <A9VSCameraManagerDelegate> _delegate;
    UIView *_cameraView;
    long long _orientation;
    long long _cameraViewOrientation;
    NSArray *_captureModules;
    long long _hardwareLevel;
    NSObject<OS_dispatch_queue> *_cameraProcessingQueue;
    NSObject<OS_dispatch_queue> *_stateChangeQueue;
    NSObject<OS_dispatch_queue> *_metricsQueue;
    NSObject<OS_dispatch_queue> *_cameraSwitchQueue;
    NSObject<OS_dispatch_semaphore> *_cameraSwitchSemaphore;
    long long _fullPixelFormat;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_camera;
    AVCaptureInput *_captureInput;
    AVCaptureVideoDataOutput *_captureOutput;
    AVCaptureVideoPreviewLayer *_previewLayer;
    A9VSCameraCoordinateConverter *_coordinateConverter;
    NSMutableDictionary *_stateChangeTimings;
    struct CGSize _fullFrameSize;
    struct CGRect _aperture;
}

+ (id)keyPathsForValuesAffectingEnableTorchMode;
+ (id)keyPathsForValuesAffectingTorchModeAvailable;
+ (_Bool)userHasBeenRestrictedFromCameraAccess;
+ (_Bool)userHasDeniedCameraAccess;
+ (_Bool)isSupported;
+ (id)cameraManagerForGiftCardReaderWithDelegate:(id)arg1 deviceID:(id)arg2 sessionID:(id)arg3 marketplace:(id)arg4;
+ (id)cameraManagerForFlowWithDelegate:(id)arg1 username:(id)arg2 secret:(id)arg3 application:(id)arg4 version:(id)arg5 serverURL:(id)arg6;
+ (id)cameraManagerForFlowWithDelegate:(id)arg1 username:(id)arg2 secret:(id)arg3 application:(id)arg4 version:(id)arg5 serverURL:(id)arg6 deviceID:(id)arg7 sessionID:(id)arg8;
+ (id)cameraManagerForFlowWithDelegate:(id)arg1 username:(id)arg2 secret:(id)arg3 application:(id)arg4 version:(id)arg5 serverURL:(id)arg6 deviceID:(id)arg7 sessionID:(id)arg8 marketplace:(id)arg9;
+ (id)cameraManagerForFlowWithDelegate:(id)arg1 username:(id)arg2 secret:(id)arg3 application:(id)arg4 version:(id)arg5 serverURL:(id)arg6 deviceID:(id)arg7 clientSessionContext:(id)arg8 marketplace:(id)arg9;
+ (id)cameraManagerForFlowWithDelegate:(id)arg1 username:(id)arg2 secret:(id)arg3 application:(id)arg4 version:(id)arg5 serverURL:(id)arg6 deviceID:(id)arg7 languageCode:(id)arg8 clientSessionContext:(id)arg9 marketplace:(id)arg10;
+ (id)cameraManagerForCreditCardReaderWithDelegate:(id)arg1 portraitOrientation:(_Bool)arg2 deviceID:(id)arg3 sessionID:(id)arg4 marketplace:(id)arg5 performVerification:(_Bool)arg6;
@property(retain, nonatomic) NSMutableDictionary *stateChangeTimings; // @synthesize stateChangeTimings=_stateChangeTimings;
@property(retain, nonatomic) A9VSCameraCoordinateConverter *coordinateConverter; // @synthesize coordinateConverter=_coordinateConverter;
@property(nonatomic, getter=isStopped) _Bool stopped; // @synthesize stopped=_stopped;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) struct CGRect aperture; // @synthesize aperture=_aperture;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureVideoDataOutput *captureOutput; // @synthesize captureOutput=_captureOutput;
@property(retain, nonatomic) AVCaptureInput *captureInput; // @synthesize captureInput=_captureInput;
@property(retain, nonatomic) AVCaptureDevice *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) long long fullPixelFormat; // @synthesize fullPixelFormat=_fullPixelFormat;
@property(nonatomic) struct CGSize fullFrameSize; // @synthesize fullFrameSize=_fullFrameSize;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *cameraSwitchSemaphore; // @synthesize cameraSwitchSemaphore=_cameraSwitchSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cameraSwitchQueue; // @synthesize cameraSwitchQueue=_cameraSwitchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateChangeQueue; // @synthesize stateChangeQueue=_stateChangeQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cameraProcessingQueue; // @synthesize cameraProcessingQueue=_cameraProcessingQueue;
@property(nonatomic) float frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) long long hardwareLevel; // @synthesize hardwareLevel=_hardwareLevel;
@property(retain, nonatomic) NSArray *captureModules; // @synthesize captureModules=_captureModules;
@property(nonatomic) long long cameraViewOrientation; // @synthesize cameraViewOrientation=_cameraViewOrientation;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UIView *cameraView; // @synthesize cameraView=_cameraView;
@property(nonatomic) __weak id <A9VSCameraManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)stop:(_Bool)arg1;
- (void)stop:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)start;
- (void)logStateChangeTime:(double)arg1 forState:(id)arg2;
- (void)handleOrientationNotification:(id)arg1;
- (void)stopTrackingOrientation;
- (void)startTrackingOrientation;
- (id)latencyMetrics;
- (void)replaceActiveModulesWithModules:(id)arg1;
- (void)replaceActiveModulesWithModule:(id)arg1;
- (_Bool)addCaptureModule:(id)arg1;
@property(readonly, nonatomic, getter=isZoomAvailable) _Bool zoomAvailable; // @dynamic zoomAvailable;
- (void)resetCameraZoomFactor;
- (void)handleZoomInOutWithGesture:(id)arg1;
@property(nonatomic, getter=isTorchModeEnabled) _Bool torchModeEnabled; // @dynamic torchModeEnabled;
@property(readonly, nonatomic, getter=isTorchModeAvailable) _Bool torchModeAvailable; // @dynamic torchModeAvailable;
- (struct CGRect)imageRectForCameraViewRect:(struct CGRect)arg1;
- (struct CGPoint)imagePointOfInterestForCameraViewPoint:(struct CGPoint)arg1;
- (struct CGRect)cameraViewRectForImageRect:(struct CGRect)arg1;
- (struct CGPoint)cameraViewPointForImagePoint:(struct CGPoint)arg1;
- (void)focusOnPointOfInterest:(struct CGPoint)arg1;
- (void)checkHardware;
- (unsigned long long)numberOfCoresOnDevice;
@property(readonly, nonatomic, getter=isCameraFacingFront) _Bool cameraFacingFront; // @dynamic cameraFacingFront;
@property(readonly, nonatomic, getter=isFrontCameraAvailable) _Bool frontCameraAvailable; // @dynamic frontCameraAvailable;
- (id)captureDeviceWithPosition:(long long)arg1;
- (void)toggleCameraDirection:(CDUnknownBlockType)arg1;
- (void)toggleCameraDirectionSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)switchInputCamera:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1 onCaptureSession:(id)arg2 camera:(id)arg3;
- (void)setVideoFormat:(long long)arg1 onOutput:(id)arg2;
- (long long)videoFormatForCameraManagerImageFormat:(long long)arg1;
- (_Bool)initialVideoCaptureSetup;
- (_Bool)configureCamera:(id)arg1 withFrameSize:(struct CGSize)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
@property(readonly, nonatomic) A9VSGiftCardReader *giftCardReader; // @dynamic giftCardReader;
@property(readonly, nonatomic) FlowManager *flowManager; // @dynamic flowManager;
@property(readonly, nonatomic) A9VSCreditCardReader *creditCardReader; // @dynamic creditCardReader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
