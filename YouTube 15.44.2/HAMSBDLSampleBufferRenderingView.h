//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/HAMFrameSourceDelegate-Protocol.h>
#import <Module_Framework/HAMSystemNotificationsObserver-Protocol.h>

@class AVSampleBufferDisplayLayer, AVSampleBufferRenderSynchronizer, HAMSBDLSampleBufferRenderingViewJankWrapper, NSMutableArray, NSObject, NSString;
@protocol HAMFrameSource, OS_dispatch_queue;

@interface HAMSBDLSampleBufferRenderingView : UIView <HAMSystemNotificationsObserver, HAMFrameSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    HAMSBDLSampleBufferRenderingViewJankWrapper *_view;
    AVSampleBufferDisplayLayer *_layer;
    id <HAMFrameSource> _frameSource;
    struct OpaqueCMTimebase *_frameSourceControlTimebase;
    AVSampleBufferRenderSynchronizer *_frameSourceSynchronizer;
    AVSampleBufferRenderSynchronizer *_synchronizer;
    CDStruct_1b6d18a9 _lastSamplePresentationTime;
    // Error parsing type: {atomic<CGSize>="__a_"{__cxx_atomic_impl<CGSize, std::__1::__cxx_atomic_base_impl<CGSize> >="__a_value"A{CGSize}}}, name: _lastEnqueuedFrameSize
    double _maxWindowDimension;
    NSMutableArray *_queuedSampleBuffersWhileFlushing;
    _Bool _removeImageOnFlush;
    _Bool _waitingForSeek;
    _Bool _isInForeground;
    _Bool _flushWhenApplicationIsInForeground;
    _Bool _pictureInPictureActive;
}

+ (id)requiredPixelBufferAttributes;
- (void).cxx_destruct;
- (id)syncQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layerFailedToDecode:(id)arg1;
- (void)failWithError:(id)arg1 isDecodingError:(_Bool)arg2;
- (void)flushAndRemoveImage:(_Bool)arg1;
- (void)forceFlushAndRemoveImage:(_Bool)arg1;
- (void)flush;
- (void)enqueueSampleBuffer:(id)arg1;
- (void)removeLayerFromSynchronizer;
- (void)deactivateFrameSource;
- (void)activateFrameSource;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)frameSource:(id)arg1 didProduceSampleBuffer:(id)arg2;
- (void)frameSourceDidSeek:(id)arg1;
- (void)frameSourceDidUnpause:(id)arg1;
- (void)frameSourceDidPause:(id)arg1;
- (void)frameSourceDidDeactivate:(id)arg1;
- (void)frameSource:(id)arg1 synchronizerDidChange:(id)arg2;
- (void)frameSourceDidActivate:(id)arg1 synchronizer:(id)arg2;
- (void)frameSourceDidActivate:(id)arg1 controlTimebase:(struct OpaqueCMTimebase *)arg2;
@property(readonly, nonatomic) _Bool readyForMoreMediaData;
- (void)pictureInPictureActiveDidChange:(_Bool)arg1;
@property(readonly, nonatomic) struct CGSize displayLayerRenderSize;
@property(readonly, nonatomic) AVSampleBufferDisplayLayer *displayLayer;
@property(readonly, nonatomic) struct CGRect videoRect;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

