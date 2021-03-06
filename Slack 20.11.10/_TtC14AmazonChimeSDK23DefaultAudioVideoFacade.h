//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC14AmazonChimeSDK27MeetingSessionConfiguration;
@protocol _TtP14AmazonChimeSDK16DeviceController_, _TtP14AmazonChimeSDK19VideoTileController_, _TtP14AmazonChimeSDK24RealtimeControllerFacade_, _TtP14AmazonChimeSDK26AudioVideoControllerFacade_, _TtP14AmazonChimeSDK27ActiveSpeakerDetectorFacade_, _TtP14AmazonChimeSDK6Logger_;

@interface _TtC14AmazonChimeSDK23DefaultAudioVideoFacade : NSObject
{
    // Error parsing type: , name: configuration
    // Error parsing type: , name: logger
    // Error parsing type: , name: audioVideoController
    // Error parsing type: , name: realtimeController
    // Error parsing type: , name: deviceController
    // Error parsing type: , name: videoTileController
    // Error parsing type: , name: activeSpeakerDetector
}

- (void).cxx_destruct;
- (id)init;
- (void)hasBandwidthPriorityCallbackWithHasBandwidthPriority:(_Bool)arg1;
- (void)removeActiveSpeakerObserverWithObserver:(id)arg1;
- (void)addActiveSpeakerObserverWithPolicy:(id)arg1 observer:(id)arg2;
- (void)resumeRemoteVideoTileWithTileId:(long long)arg1;
- (void)pauseRemoteVideoTileWithTileId:(long long)arg1;
- (void)removeVideoTileObserverWithObserver:(id)arg1;
- (void)addVideoTileObserverWithObserver:(id)arg1;
- (void)unbindVideoViewWithTileId:(long long)arg1;
- (void)bindVideoViewWithVideoView:(id)arg1 tileId:(long long)arg2;
- (id)getActiveCamera;
- (void)switchCamera;
- (void)removeDeviceChangeObserverWithObserver:(id)arg1;
- (void)addDeviceChangeObserverWithObserver:(id)arg1;
- (void)chooseAudioDeviceWithMediaDevice:(id)arg1;
- (id)listAudioDevices;
- (void)removeMetricsObserverWithObserver:(id)arg1;
- (void)addMetricsObserverWithObserver:(id)arg1;
- (void)removeAudioVideoObserverWithObserver:(id)arg1;
- (void)addAudioVideoObserverWithObserver:(id)arg1;
- (_Bool)realtimeSendDataMessageWithTopic:(id)arg1 data:(id)arg2 lifetimeMs:(int)arg3 error:(id *)arg4;
- (void)removeRealtimeDataMessageObserverFromTopicWithTopic:(id)arg1;
- (void)addRealtimeDataMessageObserverWithTopic:(id)arg1 observer:(id)arg2;
- (void)removeRealtimeObserverWithObserver:(id)arg1;
- (void)addRealtimeObserverWithObserver:(id)arg1;
- (_Bool)realtimeLocalUnmute;
- (_Bool)realtimeLocalMute;
- (void)stopRemoteVideo;
- (void)startRemoteVideo;
- (void)stopLocalVideo;
- (_Bool)startLocalVideoAndReturnError:(id *)arg1;
- (void)stop;
- (_Bool)startAndReturnError:(id *)arg1;
- (_Bool)startWithCallKitEnabled:(_Bool)arg1 error:(id *)arg2;
- (id)initWithAudioVideoController:(id)arg1 realtimeController:(id)arg2 deviceController:(id)arg3 videoTileController:(id)arg4 activeSpeakerDetector:(id)arg5;
@property(nonatomic, readonly) id <_TtP14AmazonChimeSDK27ActiveSpeakerDetectorFacade_> activeSpeakerDetector; // @synthesize activeSpeakerDetector;
@property(nonatomic, readonly) id <_TtP14AmazonChimeSDK19VideoTileController_> videoTileController; // @synthesize videoTileController;
@property(nonatomic, readonly) id <_TtP14AmazonChimeSDK16DeviceController_> deviceController; // @synthesize deviceController;
@property(nonatomic, readonly) id <_TtP14AmazonChimeSDK24RealtimeControllerFacade_> realtimeController; // @synthesize realtimeController;
@property(nonatomic, readonly) id <_TtP14AmazonChimeSDK26AudioVideoControllerFacade_> audioVideoController; // @synthesize audioVideoController;
@property(nonatomic, readonly) id <_TtP14AmazonChimeSDK6Logger_> logger; // @synthesize logger;
@property(nonatomic, readonly) _TtC14AmazonChimeSDK27MeetingSessionConfiguration *configuration; // @synthesize configuration;

@end

