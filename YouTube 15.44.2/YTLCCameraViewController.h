//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTCameraCaptureManagerDelegate-Protocol.h>
#import <Module_Framework/YTLCCustomThumbnailPhotoCapturer-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class GIMMe, NSString, UIView;
@protocol VCCameraPreviewer, YTCameraCaptureManager;

@interface YTLCCameraViewController : UIViewController <YTCameraCaptureManagerDelegate, YTSystemNotificationsObserver, YTLCCustomThumbnailPhotoCapturer>
{
    _Bool _enableCameraViewRefactor;
    GIMMe *_gimme;
    id <YTCameraCaptureManager> _cameraCaptureManager;
    long long _captureVideoOrientation;
    UIView<VCCameraPreviewer> *_renderView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableCameraViewRefactor; // @synthesize enableCameraViewRefactor=_enableCameraViewRefactor;
@property(retain, nonatomic) UIView<VCCameraPreviewer> *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) long long captureVideoOrientation; // @synthesize captureVideoOrientation=_captureVideoOrientation;
@property(retain, nonatomic) id <YTCameraCaptureManager> cameraCaptureManager; // @synthesize cameraCaptureManager=_cameraCaptureManager;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (long long)captureOrientationForInterfaceOrientation:(long long)arg1;
- (void)captureManagerCaptureError:(id)arg1;
- (void)captureManager:(id)arg1 didFailWithError:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)captureManager:(id)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2 withPresentationTimestamp:(CDStruct_1b6d18a9)arg3;
- (void)appDidEnterBackground:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)captureStillImageAsynchronously:(CDUnknownBlockType)arg1;
- (void)shutdownCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)setUpCamera;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)cameraDirection;
- (void)toggleCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setPostFilter:(id)arg1;
- (void)loadView;
- (id)initWithCameraCaptureManager:(id)arg1 enableCameraViewRefactor:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

