//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSError, NSURL, YTEditCameraAsset;
@protocol YTCameraCaptureManager;

@protocol YTCameraCaptureManagerDelegate <NSObject>

@optional
- (void)captureManager:(id <YTCameraCaptureManager>)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2 withPresentationTimestamp:(CDStruct_1b6d18a9)arg3;
- (void)captureManagerSubjectAreaDidChange:(id <YTCameraCaptureManager>)arg1;
- (void)captureManagerDeviceConfigurationChanged:(id <YTCameraCaptureManager>)arg1;
- (void)captureManagerCaptureFinished:(id <YTCameraCaptureManager>)arg1;
- (void)captureManagerCaptureBegan:(id <YTCameraCaptureManager>)arg1;
- (void)captureManagerCaptureError:(id <YTCameraCaptureManager>)arg1;
- (void)captureManagerCaptureInterruptionEnded:(id <YTCameraCaptureManager>)arg1;
- (void)captureManagerCaptureInterrupted:(id <YTCameraCaptureManager>)arg1;
- (void)captureManager:(id <YTCameraCaptureManager>)arg1 didFailWithError:(NSError *)arg2;
- (void)captureManagerRecordingFinished:(id <YTCameraCaptureManager>)arg1 cameraAsset:(YTEditCameraAsset *)arg2;
- (void)captureManagerRecordingBegan:(id <YTCameraCaptureManager>)arg1 outputURL:(NSURL *)arg2;
@end

