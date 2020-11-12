//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebRTC/RTCVideoEncoder-Protocol.h>

@class NSString, RTCVideoCodecInfo;

@interface RTCVideoEncoderH264 : NSObject <RTCVideoEncoder>
{
    RTCVideoCodecInfo *_codecInfo;
    struct unique_ptr<webrtc::BitrateAdjuster, std::__1::default_delete<webrtc::BitrateAdjuster>> _bitrateAdjuster;
    unsigned int _targetBitrateBps;
    unsigned int _encoderBitrateBps;
    unsigned int _encoderFrameRate;
    unsigned int _maxAllowedFrameRate;
    unsigned long long _packetizationMode;
    optional_746748f1 _profile_level_id;
    CDUnknownBlockType _callback;
    int _width;
    int _height;
    struct OpaqueVTCompressionSession *_compressionSession;
    struct __CVPixelBufferPool *_pixelBufferPool;
    unsigned long long _mode;
    struct H264BitstreamParser _h264BitstreamParser;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _frameScaleBuffer;
    _Bool _useBFrames;
}

@property _Bool useBFrames; // @synthesize useBFrames=_useBFrames;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)scalingSettings;
- (void)frameWasEncoded:(int)arg1 flags:(unsigned int)arg2 sampleBuffer:(struct opaqueCMSampleBuffer *)arg3 codecSpecificInfo:(id)arg4 width:(int)arg5 height:(int)arg6 renderTimeMs:(long long)arg7 timestamp:(unsigned int)arg8 rotation:(long long)arg9;
- (void)setEncoderBitrateBps:(unsigned int)arg1 frameRate:(unsigned int)arg2;
- (void)setBitrateBps:(unsigned int)arg1 frameRate:(unsigned int)arg2;
- (id)implementationName;
- (void)destroyCompressionSession;
- (void)configureCompressionSession;
- (int)resetCompressionSessionWithPixelFormat:(unsigned int)arg1;
- (_Bool)resetCompressionSessionIfNeededWithFrame:(id)arg1;
- (unsigned int)pixelFormatOfFrame:(id)arg1;
- (long long)releaseEncoder;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (void)dealloc;
- (id)initWithCodecInfo:(id)arg1;
- (id)initWithCodecInfo:(id)arg1 usingBFrames:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
