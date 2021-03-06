//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTShortsAVPlayerViewReadyToPlayObserver-Protocol.h"
#import "YTShortsCreationPlayer-Protocol.h"
#import "YTShortsCreationPlayerMediaTimeObserver-Protocol.h"
#import "YTShortsCreationPlayerSeekableWithPrecision-Protocol.h"
#import "YTShortsCreationVideoPlayerOutputDelegate-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class NSString, UIImageView, YTEditGLKRenderer, YTShortsCreationVideoPlayer;
@protocol YTShortsCreationPlayerMediaTimeObserver;

@interface YTShortsCreationPlaybackViewController : UIViewController <YTShortsCreationPlayer, YTShortsCreationPlayerSeekableWithPrecision, YTShortsAVPlayerViewReadyToPlayObserver, YTShortsCreationVideoPlayerOutputDelegate, YTShortsCreationPlayerMediaTimeObserver, YTSystemNotificationsObserver>
{
    long long _renderMode;
    YTShortsCreationVideoPlayer *_player;
    UIImageView *_placeholderView;
    _Bool _isOnscreen;
    _Bool _wasPlaying;
    YTEditGLKRenderer *_renderer;
    id <YTShortsCreationPlayerMediaTimeObserver> _mediaTimeObserver;
    CDUnknownBlockType _isPlayingChangeHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType isPlayingChangeHandler; // @synthesize isPlayingChangeHandler=_isPlayingChangeHandler;
@property(nonatomic) __weak id <YTShortsCreationPlayerMediaTimeObserver> mediaTimeObserver; // @synthesize mediaTimeObserver=_mediaTimeObserver;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)shortsCreationPlayer:(id)arg1 mediaTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)player:(id)arg1 failedToRenderFrameAtTime:(double)arg2;
- (void)player:(id)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2 timestamp:(double)arg3;
- (void)playerViewReadyForDisplay:(id)arg1;
@property(readonly, nonatomic) YTEditGLKRenderer *renderer; // @synthesize renderer=_renderer;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 precision:(CDStruct_1b6d18a9)arg2 completion:(CDUnknownBlockType)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) CDStruct_1b6d18a9 loopSeekPrecision;
@property(nonatomic) float playbackRate; // @dynamic playbackRate;
- (void)update;
- (void)invalidate;
- (void)rewind;
- (void)replay;
- (void)pause;
- (void)play;
@property(nonatomic, getter=isLooping) _Bool looping;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)setEffectProcessor:(id)arg1;
- (id)effectProcessor;
- (void)stopObservingPlayingState:(id)arg1;
- (void)startObservingPlayingState:(id)arg1;
- (void)playerDidLoad;
- (void)removePlaceholderImage;
- (void)setPlaceholderImage:(id)arg1;
@property(nonatomic) CDStruct_e83c9415 timeRange;
- (void)setAudioMix:(id)arg1;
- (void)setAsset:(id)arg1 videoComposition:(id)arg2 placeholder:(id)arg3;
- (void)setAssetURL:(id)arg1 placeholder:(id)arg2;
- (void)stopObserving;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)startObserving;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (id)initWithRenderMode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

