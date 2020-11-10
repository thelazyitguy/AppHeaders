//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LHLSLib/LHLSDisplayDelegate-Protocol.h>
#import <LHLSLib/LHLSPlayerClient-Protocol.h>

@class LHLS1NetworkSessionListener, LHLSDisplayLink, NSDate, NSNumber, NSString;
@protocol LHLSNetworkSession, LHLSPlayerClientDelegate><LHLSRenderDelegate, LHLSiOSCaptionDelegate;

@interface LHLS1PlayerClientBridge : NSObject <LHLSDisplayDelegate, LHLSPlayerClient>
{
    struct optional<LHLS::v1::PlayerClient> _impl;
    struct optional<LHLS::v1::CaptionParser> _captionParser;
    struct optional<(anonymous namespace)::PlayerDataDelegateImpl> _playerDataDelegate;
    _Bool _isLive;
    LHLSDisplayLink *_displayLink;
    id <LHLSNetworkSession> _lhlsNetworkSession;
    LHLS1NetworkSessionListener *_lhlsNetworkSessionListener;
    struct function<std::__1::unique_ptr<LHLS::v1::Network::Request, std::__1::default_delete<LHLS::v1::Network::Request>>(const char *, LHLS::v1::Network::RequestListener *)> _networkRequestFactory;
    _Bool _muteAudio;
    float _volume;
    id <LHLSPlayerClientDelegate><LHLSRenderDelegate> delegate;
    id <LHLSiOSCaptionDelegate> captionDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property _Bool muteAudio; // @synthesize muteAudio=_muteAudio;
@property float volume; // @synthesize volume=_volume;
@property __weak id <LHLSiOSCaptionDelegate> captionDelegate; // @synthesize captionDelegate;
@property(nonatomic) __weak id <LHLSPlayerClientDelegate><LHLSRenderDelegate> delegate; // @synthesize delegate;
- (void)adjustPlayheadWithDesiredRPO:(double)arg1;
@property(readonly, nonatomic) NSNumber *currentRPO;
@property(readonly, nonatomic) NSNumber *minimumSafeRPO;
@property(readonly, nonatomic) NSDate *currentDate;
- (id)getMetrics;
- (void)setMaxBitrate:(int)arg1 maxWidth:(int)arg2 maxHeight:(int)arg3;
- (void)convertCaptions:(const list_97ed55ab *)arg1 at:(double)arg2;
@property(readonly) double currentMediaTime;
- (void)processCurrentFrame;
- (void)onReadyToPlay;
- (void)onEndPending;
- (void)onID3TXXXFrameWithDescription:(id)arg1 value:(id)arg2 renderTime:(double)arg3;
- (void)onJSONMetadata:(id)arg1 renderTime:(double)arg2;
- (void)onRotation:(double)arg1;
- (void)onVideoSizeWidth:(int)arg1 andHeight:(int)arg2;
- (void)mediaIsPlaying:(_Bool)arg1;
- (void)receivedData;
- (void)dispatchAtPTS:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)seekTo:(double)arg1;
@property(readonly) double duration;
@property(readonly) _Bool isCued;
@property _Bool explicitPause;
- (double)latency;
- (void)setMaxBuffer:(double)arg1;
- (void)setUplinkJitter:(double)arg1;
- (void)shutdown;
- (void)connectToURL:(id)arg1 downlinkJitterComponent:(double)arg2 minBufferLength:(double)arg3 maxBufferLength:(double)arg4 constantBufferLength:(double)arg5;
- (void)dealloc;
- (id)initWithIsLive:(_Bool)arg1 networkSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) double queueLength;
@property(readonly) Class superclass;

@end

