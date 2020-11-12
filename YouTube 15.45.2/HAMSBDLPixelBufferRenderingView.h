//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/HAMPixelBufferRenderingView-Protocol.h>

@class AVSampleBufferDisplayLayer, HAMPixelBuffer, NSArray, NSDictionary, NSString;
@protocol HAMPixelBufferRenderingViewErrorDelegate, HAMPixelBufferRenderingViewFrameSizeDelegate;

@interface HAMSBDLPixelBufferRenderingView : UIView <HAMPixelBufferRenderingView>
{
    AVSampleBufferDisplayLayer *_layer;
    _Bool _pixelBufferAttributesChanged;
    HAMPixelBuffer *_lastRenderedPixelBuffer;
    // Error parsing type: {atomic<CGSize>="__a_"{__cxx_atomic_impl<CGSize, std::__1::__cxx_atomic_base_impl<CGSize> >="__a_value"A{CGSize}}}, name: _lastRenderedFrameSize
    int _layerRenderFailures;
    _Bool _prepared;
    id <HAMPixelBufferRenderingViewErrorDelegate> _errorDelegate;
    id <HAMPixelBufferRenderingViewFrameSizeDelegate> _frameSizeDelegate;
}

+ (Class)layerClass;
+ (id)supportedPixelFormats;
+ (id)requiredPixelBufferAttributes;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool prepared; // @synthesize prepared=_prepared;
@property(nonatomic) __weak id <HAMPixelBufferRenderingViewFrameSizeDelegate> frameSizeDelegate; // @synthesize frameSizeDelegate=_frameSizeDelegate;
@property(nonatomic) __weak id <HAMPixelBufferRenderingViewErrorDelegate> errorDelegate; // @synthesize errorDelegate=_errorDelegate;
- (void)willMoveToWindow:(id)arg1;
- (void)appDidEnterBackground;
- (void)pixelBufferAttributesWillChange;
- (_Bool)renderPixelBuffer:(id)arg1;
- (void)terminate;
- (void)reset;
- (void)clear;
- (_Bool)prepareAndReturnError:(id *)arg1;
@property(readonly, nonatomic) NSArray *supportedPixelFormats;
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributes;
@property(readonly, nonatomic) struct CGRect videoRect;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
