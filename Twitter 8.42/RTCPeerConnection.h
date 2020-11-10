//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, RTCConfiguration, RTCPeerConnectionFactory, RTCSessionDescription;
@protocol RTCPeerConnectionDelegate;

@interface RTCPeerConnection : NSObject
{
    RTCPeerConnectionFactory *_factory;
    NSMutableArray *_localStreams;
    struct unique_ptr<webrtc::PeerConnectionDelegateAdapter, std::__1::default_delete<webrtc::PeerConnectionDelegateAdapter>> _observer;
    scoped_refptr_1f0d680a _peerConnection;
    unique_ptr_9751165c _nativeConstraints;
    _Bool _hasStartedRtcEventLog;
    id <RTCPeerConnectionDelegate> _delegate;
}

+ (int)nativeStatsOutputLevelForLevel:(long long)arg1;
+ (id)stringForIceGatheringState:(long long)arg1;
+ (long long)iceGatheringStateForNativeState:(int)arg1;
+ (int)nativeIceGatheringStateForState:(long long)arg1;
+ (id)stringForIceConnectionState:(long long)arg1;
+ (long long)iceConnectionStateForNativeState:(int)arg1;
+ (int)nativeIceConnectionStateForState:(long long)arg1;
+ (id)stringForConnectionState:(long long)arg1;
+ (long long)connectionStateForNativeState:(int)arg1;
+ (int)nativeConnectionStateForState:(long long)arg1;
+ (id)stringForSignalingState:(long long)arg1;
+ (long long)signalingStateForNativeState:(int)arg1;
+ (int)nativeSignalingStateForState:(long long)arg1;
@property(readonly, nonatomic) RTCPeerConnectionFactory *factory; // @synthesize factory=_factory;
@property(nonatomic) __weak id <RTCPeerConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) scoped_refptr_1f0d680a nativePeerConnection;
@property(readonly, nonatomic) NSArray *transceivers;
@property(readonly, nonatomic) NSArray *receivers;
@property(readonly, nonatomic) NSArray *senders;
- (id)senderWithKind:(id)arg1 streamId:(id)arg2;
- (void)stopRtcEventLog;
- (_Bool)startRtcEventLogWithFilePath:(id)arg1 maxSizeInBytes:(long long)arg2;
- (void)setBitrateAllocationStrategy:(unique_ptr_e9310bd8)arg1;
- (_Bool)setBweMinBitrateBps:(id)arg1 currentBitrateBps:(id)arg2 maxBitrateBps:(id)arg3;
- (void)setRemoteDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setLocalDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)answerForConstraints:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)offerForConstraints:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)addTransceiverOfType:(long long)arg1 init:(id)arg2;
- (id)addTransceiverOfType:(long long)arg1;
- (id)addTransceiverWithTrack:(id)arg1 init:(id)arg2;
- (id)addTransceiverWithTrack:(id)arg1;
- (_Bool)removeTrack:(id)arg1;
- (id)addTrack:(id)arg1 streamIds:(id)arg2;
- (void)removeStream:(id)arg1;
- (void)addStream:(id)arg1;
- (void)removeIceCandidates:(id)arg1;
- (void)addIceCandidate:(id)arg1;
- (void)close;
@property(readonly, copy, nonatomic) RTCConfiguration *configuration;
- (_Bool)setConfiguration:(id)arg1;
@property(readonly, nonatomic) long long iceGatheringState;
@property(readonly, nonatomic) long long connectionState;
@property(readonly, nonatomic) long long iceConnectionState;
@property(readonly, nonatomic) long long signalingState;
@property(readonly, nonatomic) RTCSessionDescription *remoteDescription;
@property(readonly, nonatomic) RTCSessionDescription *localDescription;
@property(readonly, nonatomic) NSArray *localStreams;
- (id)initWithFactory:(id)arg1 configuration:(id)arg2 constraints:(id)arg3 delegate:(id)arg4;
- (id)dataChannelForLabel:(id)arg1 configuration:(id)arg2;
- (void)statsForTrack:(id)arg1 statsOutputLevel:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)statisticsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)statisticsForReceiver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)statisticsForSender:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

