//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GOOGRTCVideoFrameBuffer-Protocol.h>

@class NSString;

@interface GOOGRTCCVPixelBuffer : NSObject <GOOGRTCVideoFrameBuffer>
{
    int _width;
    int _height;
    int _bufferWidth;
    int _bufferHeight;
    int _cropWidth;
    int _cropHeight;
    int _cropX;
    int _cropY;
    struct __CVBuffer *_pixelBuffer;
}

+ (id)supportedPixelFormats;
@property(readonly, nonatomic) int cropHeight; // @synthesize cropHeight=_cropHeight;
@property(readonly, nonatomic) int cropWidth; // @synthesize cropWidth=_cropWidth;
@property(readonly, nonatomic) int cropY; // @synthesize cropY=_cropY;
@property(readonly, nonatomic) int cropX; // @synthesize cropX=_cropX;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)cropAndScaleARGBTo:(struct __CVBuffer *)arg1;
- (void)cropAndScaleNV12To:(struct __CVBuffer *)arg1 withTempBuffer:(char *)arg2;
- (id)toI420;
- (_Bool)cropAndScaleTo:(struct __CVBuffer *)arg1 withTempBuffer:(char *)arg2;
- (int)bufferSizeForCroppingAndScalingToWidth:(int)arg1 height:(int)arg2;
- (_Bool)requiresScalingToWidth:(int)arg1 height:(int)arg2;
- (_Bool)requiresCropping;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 adaptedWidth:(int)arg2 adaptedHeight:(int)arg3 cropWidth:(int)arg4 cropHeight:(int)arg5 cropX:(int)arg6 cropY:(int)arg7;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

