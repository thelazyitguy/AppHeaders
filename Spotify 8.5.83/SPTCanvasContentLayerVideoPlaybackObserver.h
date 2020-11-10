//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMEventObserver-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, SPTCanvasContentLayerVideoPlaybackObserverDelegate, SPTCanvasModel;

@interface SPTCanvasContentLayerVideoPlaybackObserver : NSObject <BMEventObserver>
{
    _Bool _finished;
    _Bool _buffering;
    id <SPTCanvasContentLayerVideoPlaybackObserverDelegate> _delegate;
    id <SPTCanvasModel> _canvasModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool buffering; // @synthesize buffering=_buffering;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) id <SPTCanvasModel> canvasModel; // @synthesize canvasModel=_canvasModel;
@property(nonatomic) __weak id <SPTCanvasContentLayerVideoPlaybackObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithFatalError:(id)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didFailWithRecoverableError:(id)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didBecomeReadyForStreamingType:(long long)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didCreatePlaybackInBackground:(_Bool)arg1 timestamp:(double)arg2;
- (id)initWithCanvasModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

