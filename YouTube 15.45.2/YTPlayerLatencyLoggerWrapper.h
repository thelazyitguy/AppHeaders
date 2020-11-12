//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTSingleVideoAudioFormatSelectionObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoLifecycleStateObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoMediaStateObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoVideoFormatSelectionObserver-Protocol.h>

@class MLFormat, NSString;
@protocol YTLatencyTickLoggerProtocol, YTSingleVideoObservable;

@interface YTPlayerLatencyLoggerWrapper : NSObject <YTSingleVideoMediaStateObserver, YTSingleVideoVideoFormatSelectionObserver, YTSingleVideoAudioFormatSelectionObserver, YTSingleVideoLifecycleStateObserver>
{
    id <YTSingleVideoObservable> _videoObservable;
    _Bool _pausedBeforePlaybackLogged;
    MLFormat *_reportingFormat;
    id <YTLatencyTickLoggerProtocol> _latencyLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <YTLatencyTickLoggerProtocol> latencyLogger; // @synthesize latencyLogger=_latencyLogger;
- (id)adFormatForAdInterrupt:(id)arg1;
- (void)logPlaybackStartedTickAndShutDown;
- (void)maybeLogPausedBeforePlaybackTick;
- (void)logPlayerTypeActionInfo;
- (void)setVideoObservable:(id)arg1;
- (void)shutDown;
- (void)handleMediaStateChangeToState:(long long)arg1;
- (void)handleFormatChangeWithFormat:(id)arg1;
- (void)singleVideo:(id)arg1 lifecycleStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)singleVideo:(id)arg1 didSelectAudioFormat:(id)arg2;
- (void)singleVideo:(id)arg1 didSelectVideoFormat:(id)arg2;
- (void)singleVideo:(id)arg1 mediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)playbackControllerDidReset;
- (void)playbackControllerWillStartAdSurveyWithAdInterrupt:(id)arg1;
- (void)playbackControllerWillStartPrerollBreak;
- (void)playbackControllerWillActivateVideoWithObservable:(id)arg1;
- (void)playbackControllerWillSendPlayerRequest;
- (void)playbackControllerWillSendEarlyPlayerRequest;
- (void)playbackControllerDidFinishPlayabilityResolutionFlow;
- (void)playbackControllerDidReceiveContentPlaybackData:(id)arg1;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
