//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/HAMVideoDecoder-Protocol.h>

@class HAMFormatDescription, NSDictionary, NSString;
@protocol HAMVideoDecoderDelegate, OS_dispatch_queue;

@interface HAMAsyncVTVideoDecoder : NSObject <HAMVideoDecoder>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    NSObject<OS_dispatch_queue> *_tearDownQueue;
    HAMFormatDescription *_formatDescription;
    // Error parsing type: {once_flag="control_"{atomic<unsigned int>="__a_"{__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >="__a_value"AI}}}, name: _outputFormatDescriptionOnceFlag
    HAMFormatDescription *_outputFormatDescription;
    NSDictionary *_pixelBufferAttributes;
    // Error parsing type: {atomic<int>="__a_"{__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >="__a_value"Ai}}, name: _samplesPendingDecode
    // Error parsing type: {atomic<unsigned int>="__a_"{__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >="__a_value"AI}}, name: _frameEra
    _Bool _terminated;
    struct OpaqueVTDecompressionSession *_decompressionSession;
    id <HAMVideoDecoderDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <HAMVideoDecoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleError:(id)arg1;
- (void)handleErrorWithDetails:(id)arg1 status:(int)arg2 periodID:(long long)arg3 formatSelection:(id)arg4;
- (void)tearDownDecodeSession;
- (void)internalPrepare;
- (void)internalDecodeSampleBuffer:(id)arg1 frameEra:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)decodeSampleBuffer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canAcceptFormatWithDescription:(id)arg1;
- (void)terminate;
- (void)discardPendingFrames;
- (void)prepare;
@property(readonly, nonatomic) int samplesPendingDecode;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 decodeQueue:(id)arg3 formatDescription:(id)arg4 pixelBufferAttributes:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

