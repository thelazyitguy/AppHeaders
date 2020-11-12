//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLComputePipelineState;

@interface TFLComputeTask : NSObject
{
    id <MTLComputePipelineState> _program;
    struct vector<(anonymous namespace)::InputBuffer, std::__1::allocator<(anonymous namespace)::InputBuffer>> _inputBuffers;
    struct vector<(anonymous namespace)::OutputBuffer, std::__1::allocator<(anonymous namespace)::OutputBuffer>> _outputBuffers;
    vector_aaf4ae7b _immutableBuffers;
    struct vector<(anonymous namespace)::UniformBuffer, std::__1::allocator<(anonymous namespace)::UniformBuffer>> _uniformBuffers;
    struct Vec3<unsigned int> _groupsSize;
    struct Vec3<unsigned int> _groupsCount;
    // Error parsing type: {function<std::__1::pair<tflite::gpu::Vec3<unsigned int>, tflite::gpu::Vec3<unsigned int> > (const std::__1::map<unsigned int, tflite::gpu::StrongShape<tflite::gpu::Layout::BHWC>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, tflite::gpu::StrongShape<tflite::gpu::Layout::BHWC> > > > &)>="__f_"{__value_func<std::__1::pair<tflite::gpu::Vec3<unsigned int>, tflite::gpu::Vec3<unsigned int> > (const std::__1::map<unsigned int, tflite::gpu::StrongShape<tflite::gpu::Layout::BHWC>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, tflite::gpu::StrongShape<tflite::gpu::Layout::BHWC> > > > &)>="__buf_"{type="__lx"[24C]}"__f_"^{__base<std::__1::pair<tflite::gpu::Vec3<unsigned int>, tflite::gpu::Vec3<unsigned int> > (const std::__1::map<unsigned int, tflite::gpu::StrongShape<tflite::gpu::Layout::BHWC>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, tflite::gpu::StrongShape<tflite::gpu::Layout::BHWC> > > > &)>}}}, name: _resizeFunction
    basic_string_90719d97 _description;
    struct MetalArguments _metal_args;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithEncoder:(id)arg1;
- (void)updateBuffers:(const map_7fc45808 *)arg1;
- (_Bool)hasInOutIds:(const set_531c353a *)arg1;
- (Status_154abcfe)assignBuffers:(map_7fc45808 *)arg1 outputIds:(const vector_12da65de *)arg2 usageRecordIds:(const map_99d22aef *)arg3 sharedBufferIds:(const vector_06e666a8 *)arg4 sharedBuffers:(const vector_aaf4ae7b *)arg5;
- (Status_154abcfe)setInputDimensionsWithDevice:(id)arg1 dimensions:(map_f5500562 *)arg2;
- (Status_154abcfe)compileWithDevice:(id)arg1 taskDescriptor:(shared_ptr_cee610e7)arg2 runtimeOptions:(const struct RuntimeOptions *)arg3;

@end
