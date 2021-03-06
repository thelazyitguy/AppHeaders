//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSString;
@protocol ALBICameraDelegate, OS_dispatch_queue;

@interface InstinctQV : NSObject
{
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;
    AVCaptureDevice *_currentCaptureDevice;
    id <ALBICameraDelegate> _delegate;
    AVCaptureVideoDataOutput *_captureVideoDataOutput;
    AVCaptureStillImageOutput *_captureStillImageOutput;
    NSObject<OS_dispatch_queue> *_videoDataOutputQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoDataOutputQueue; // @synthesize videoDataOutputQueue=_videoDataOutputQueue;
@property(retain, nonatomic) AVCaptureStillImageOutput *captureStillImageOutput; // @synthesize captureStillImageOutput=_captureStillImageOutput;
@property(retain, nonatomic) AVCaptureVideoDataOutput *captureVideoDataOutput; // @synthesize captureVideoDataOutput=_captureVideoDataOutput;
@property(nonatomic) __weak id <ALBICameraDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVCaptureDevice *currentCaptureDevice; // @synthesize currentCaptureDevice=_currentCaptureDevice;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer; // @synthesize captureVideoPreviewLayer=_captureVideoPreviewLayer;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (double)ISO;
- (void)dealloc;
- (void)HSongViT;
- (_Bool)setup;
- (void)stop;
- (void)Snake;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

