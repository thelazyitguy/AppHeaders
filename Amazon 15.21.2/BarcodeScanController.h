//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FlowCameraProcessorDelegate-Protocol.h"

@class A9VSCameraManager, AWBarcodeScanOverlayView, CMMotionManager, NSDate, NSString, UIView;
@protocol BarcodeScanDelegate;

@interface BarcodeScanController : UIViewController <FlowCameraProcessorDelegate>
{
    _Bool _isRunning;
    _Bool _isScanning;
    _Bool _hasCurAcceleration;
    NSString *_overrideBackButtonTitle;
    id <BarcodeScanDelegate> _scanDelegate;
    A9VSCameraManager *_captureManager;
    AWBarcodeScanOverlayView *_overlayView;
    UIView *_videoPreviewView;
    CMMotionManager *_motionManager;
    double _curAccelerationX;
    double _curAccelerationY;
    double _curAccelerationZ;
    double _accelerometerThreshold;
    NSDate *_steadinessTimestamp;
}

@property(retain, nonatomic) NSDate *steadinessTimestamp; // @synthesize steadinessTimestamp=_steadinessTimestamp;
@property(nonatomic) _Bool hasCurAcceleration; // @synthesize hasCurAcceleration=_hasCurAcceleration;
@property(nonatomic) double accelerometerThreshold; // @synthesize accelerometerThreshold=_accelerometerThreshold;
@property(nonatomic) double curAccelerationZ; // @synthesize curAccelerationZ=_curAccelerationZ;
@property(nonatomic) double curAccelerationY; // @synthesize curAccelerationY=_curAccelerationY;
@property(nonatomic) double curAccelerationX; // @synthesize curAccelerationX=_curAccelerationX;
@property _Bool isScanning; // @synthesize isScanning=_isScanning;
@property _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) UIView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(retain, nonatomic) AWBarcodeScanOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) A9VSCameraManager *captureManager; // @synthesize captureManager=_captureManager;
@property(nonatomic) __weak id <BarcodeScanDelegate> scanDelegate; // @synthesize scanDelegate=_scanDelegate;
@property(retain, nonatomic) NSString *overrideBackButtonTitle; // @synthesize overrideBackButtonTitle=_overrideBackButtonTitle;
- (void).cxx_destruct;
- (void)setupSettingsView;
- (void)processAcceleration:(CDStruct_39925896)arg1;
- (void)cameraManagerAction:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraManagerDidFailSetupWithError:(id)arg1;
- (void)didReceiveServerFailure:(long long)arg1 withMessage:(id)arg2;
- (void)targetRecognitionDidChange:(id)arg1;
- (void)stopScan;
- (void)endScan;
- (void)startScan:(id)arg1;
- (void)reset;
- (id)createVideoPreview:(struct CGRect)arg1;
- (void)applicationDidEnterBackground;
- (void)setUpCaptureManagerAndVideoPreview;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
