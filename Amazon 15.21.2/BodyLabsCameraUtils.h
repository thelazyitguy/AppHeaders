//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BodyLabsCameraUtils : NSObject
{
}

+ (id)getCiImageFromBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraPosition:(long long)arg2;
+ (id)convertBufferToUIImage:(struct opaqueCMSampleBuffer *)arg1 previewSize:(struct CGSize)arg2 position:(long long)arg3;
+ (id)captureSessionPresetForVideoResolution:(long long)arg1;
+ (float)temperatureForWhiteBalance:(long long)arg1;
+ (long long)videoOrientationForDeviceOrientation:(long long)arg1;
+ (long long)videoOrientationForInterfaceOrientation:(long long)arg1;
+ (id)deviceWithMediaType:(id)arg1 preferringPosition:(long long)arg2;

@end
