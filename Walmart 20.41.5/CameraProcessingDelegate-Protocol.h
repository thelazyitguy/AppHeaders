//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BAMCheckout/NSObject-Protocol.h>

@class NSArray;

@protocol CameraProcessingDelegate <NSObject>
- (void)captureSessionManagerDidFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 outputImageFrame:(char *)arg2 outputRect:(struct CGRect)arg3;
- (void)captureSessionManagerDidOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@optional
- (void)captureSessionManagerDidOutputmetaData:(NSArray *)arg1;
- (void)captureSessionManagerFlashNeeded:(_Bool)arg1;
@end

