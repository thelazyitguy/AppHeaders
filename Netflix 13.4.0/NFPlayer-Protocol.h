//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@class AVPlayer, NFPlayerRequest, NSDictionary, NSString;
@protocol NFPlayer, NFPlayerDelegate, NFPlayerFactory, NfPlaybackLoggingController, NfSubtitleAudioController;

@protocol NFPlayer <NSObject>
@property(readonly, nonatomic) AVPlayer *avPlayer;
@property(readonly, nonatomic) float persistentRate;
@property(nonatomic) float rate;
@property(nonatomic) float volume;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) _Bool currentItemPlaybackLikelyToKeepUp;
@property(readonly, nonatomic) _Bool externalPlaybackActive;
@property(readonly, nonatomic) _Bool allowsExternalPlayback;
@property(readonly, nonatomic) NSString *uniqueRequestId;
@property(readonly, nonatomic) id <NFPlayerFactory> playerFactory;
@property(readonly, nonatomic) __weak id <NFPlayerDelegate> delegate;
@property(readonly, nonatomic) NSString *xid;
@property double preferredVideoNominalBps;
@property(readonly, nonatomic) id <NfPlaybackLoggingController> loggingController;
@property(readonly, nonatomic) id <NfSubtitleAudioController> subtitleAudioController;
@property(readonly, nonatomic) NSString *playbackId;
@property(readonly, nonatomic) NSString *movieId;
- (void)pipDidStop;
- (void)pipDidStart;
- (void)percentSubtitleFontSize:(double)arg1;
- (void)positionSubtitleWithPercent:(double)arg1;
- (void)stop;
- (_Bool)seekFrom:(double)arg1 to:(double)arg2 completion:(void (^)(_Bool))arg3;
- (void)beginScrubbing;
- (void)pause;
- (void)play;
- (void)closePlayback;
- (void)startPlaybackWithTrackingInfo:(NSDictionary *)arg1;
- (void)presentAVPlayer;
- (NSDictionary *)aspectDetails;

@optional
- (id <NFPlayer>)forkedPlayerWithRequest:(NFPlayerRequest *)arg1 delegate:(id <NFPlayerDelegate>)arg2;
- (void)prepareForPresentation;
@end

