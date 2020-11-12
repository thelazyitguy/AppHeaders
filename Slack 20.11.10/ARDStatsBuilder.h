//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARDBitrateTracker, NSString;

__attribute__((visibility("hidden")))
@interface ARDStatsBuilder : NSObject
{
    NSString *_connRecvBitrate;
    NSString *_connRtt;
    NSString *_connSendBitrate;
    NSString *_localCandType;
    NSString *_remoteCandType;
    NSString *_transportType;
    NSString *_actualEncBitrate;
    NSString *_availableRecvBw;
    NSString *_availableSendBw;
    NSString *_targetEncBitrate;
    NSString *_videoEncodeMs;
    NSString *_videoInputFps;
    NSString *_videoInputHeight;
    NSString *_videoInputWidth;
    NSString *_videoSendCodec;
    NSString *_videoSendBitrate;
    NSString *_videoSendFps;
    NSString *_videoSendHeight;
    NSString *_videoSendWidth;
    NSString *_videoDecodeMs;
    NSString *_videoDecodedFps;
    NSString *_videoOutputFps;
    NSString *_videoRecvBitrate;
    NSString *_videoRecvFps;
    NSString *_videoRecvHeight;
    NSString *_videoRecvWidth;
    NSString *_audioSendBitrate;
    NSString *_audioSendCodec;
    NSString *_audioCurrentDelay;
    NSString *_audioExpandRate;
    NSString *_audioRecvBitrate;
    NSString *_audioRecvCodec;
    ARDBitrateTracker *_audioRecvBitrateTracker;
    ARDBitrateTracker *_audioSendBitrateTracker;
    ARDBitrateTracker *_connRecvBitrateTracker;
    ARDBitrateTracker *_connSendBitrateTracker;
    ARDBitrateTracker *_videoRecvBitrateTracker;
    ARDBitrateTracker *_videoSendBitrateTracker;
}

- (void).cxx_destruct;
- (void)parseVideoRecvStatsReport:(id)arg1;
- (void)parseAudioRecvStatsReport:(id)arg1;
- (void)parseRecvSsrcStatsReport:(id)arg1;
- (void)parseVideoSendStatsReport:(id)arg1;
- (void)parseAudioSendStatsReport:(id)arg1;
- (void)parseSendSsrcStatsReport:(id)arg1;
- (void)parseConnectionStatsReport:(id)arg1;
- (void)parseBweStatsReport:(id)arg1;
- (void)parseStatsReport:(id)arg1;
@property(readonly, nonatomic) NSString *statsString;
- (id)init;

@end
