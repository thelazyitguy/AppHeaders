//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerItem, AVURLAsset, NSDictionary, NSError, NSURL;
@protocol NfPlaybackDelegate;

@interface VideoURLPlayback : NSObject
{
    _Bool _playerItemIsReady;
    _Bool _playbackReachedEnd;
    _Bool _didUserStartPlayback;
    _Bool _playbackStalled;
    _Bool _allowAirplay;
    float _rate;
    id <NfPlaybackDelegate> _playbackDelegate;
    NSURL *_videoURL;
    double _bookmarkSeconds;
    double _durationSeconds;
    NSDictionary *_trackingInfo;
    AVURLAsset *_avAsset;
    AVPlayer *_avPlayer;
    AVPlayerItem *_avPlayerItem;
    id _periodicTimeObserver;
    double _playbackTime;
    NSError *_playerError;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *playerError; // @synthesize playerError=_playerError;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) _Bool allowAirplay; // @synthesize allowAirplay=_allowAirplay;
@property(nonatomic) _Bool playbackStalled; // @synthesize playbackStalled=_playbackStalled;
@property(nonatomic) _Bool didUserStartPlayback; // @synthesize didUserStartPlayback=_didUserStartPlayback;
@property(nonatomic) _Bool playbackReachedEnd; // @synthesize playbackReachedEnd=_playbackReachedEnd;
@property(nonatomic) _Bool playerItemIsReady; // @synthesize playerItemIsReady=_playerItemIsReady;
@property(retain, nonatomic) id periodicTimeObserver; // @synthesize periodicTimeObserver=_periodicTimeObserver;
@property(retain, nonatomic) AVPlayerItem *avPlayerItem; // @synthesize avPlayerItem=_avPlayerItem;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) AVURLAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(retain, nonatomic) NSDictionary *trackingInfo; // @synthesize trackingInfo=_trackingInfo;
@property(nonatomic) double durationSeconds; // @synthesize durationSeconds=_durationSeconds;
@property(nonatomic) double bookmarkSeconds; // @synthesize bookmarkSeconds=_bookmarkSeconds;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) __weak id <NfPlaybackDelegate> playbackDelegate; // @synthesize playbackDelegate=_playbackDelegate;
- (void)playerPeriodicTimeObserverCallback:(CDStruct_1b6d18a9)arg1;
- (void)playerItemFailedToReachEnd:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)endObservingPlayer:(id)arg1;
- (void)beginObservingPlayer:(id)arg1;
- (void)endObservingPlayerItem:(id)arg1;
- (void)beginObservingPlayerItem:(id)arg1;
- (void)closePlayback;
- (void)startPlaybackWithTrackingInfo:(id)arg1;
- (void)loadAvPlayer:(double)arg1;
- (void)loadAvAsset;
- (void)initiatePlayback:(id)arg1 duration:(double)arg2 startingPts:(double)arg3 creditsStart:(double)arg4 trackingInfo:(id)arg5 allowAirplay:(_Bool)arg6;
- (id)initWithVideoURL:(id)arg1;

@end
