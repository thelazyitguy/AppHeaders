//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTDefaultPlayerOverlayViewDelegate-Protocol.h>
#import <Module_Framework/YTPlayerBarViewControllerDelegate-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>
#import <Module_Framework/YTVideoPlayerOverlayProtocol-Protocol.h>

@class GIMMe, MLNerdStatsPlaybackData, NSString, YTDefaultPlayerOverlayView, YTPlayerBarViewController, YTPlayerOverlayAutoHideController, YTPlayerOverlayErrorViewController, YTPlayerPlaybackButtonViewController;
@protocol YTResponder, YTSingleVideoObservable, YTVideoPlayerOverlayDelegate;

@interface YTDefaultPlayerOverlayViewController : UIViewController <YTDefaultPlayerOverlayViewDelegate, YTPlayerBarViewControllerDelegate, YTVideoPlayerOverlayProtocol, YTResponder>
{
    YTPlayerOverlayAutoHideController *_autoHideController;
    YTPlayerOverlayErrorViewController *_errorViewController;
    YTDefaultPlayerOverlayView *_overlayView;
    YTPlayerPlaybackButtonViewController *_playbackButtonViewController;
    YTPlayerBarViewController *_playerBarViewController;
    int _playerViewLayout;
    id <YTSingleVideoObservable> _singleVideoObservable;
    _Bool _externalPlaybackActive;
    _Bool _foregroundAudioOnly;
    _Bool _hasNextVideo;
    _Bool _hasPreviousVideo;
    _Bool _playlistControlsHidden;
    id <YTVideoPlayerOverlayDelegate> _delegate;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic, getter=arePlaylistControlsHidden) _Bool playlistControlsHidden; // @synthesize playlistControlsHidden=_playlistControlsHidden;
@property(nonatomic) _Bool hasPreviousVideo; // @synthesize hasPreviousVideo=_hasPreviousVideo;
@property(nonatomic) _Bool hasNextVideo; // @synthesize hasNextVideo=_hasNextVideo;
@property(nonatomic) _Bool foregroundAudioOnly; // @synthesize foregroundAudioOnly=_foregroundAudioOnly;
@property(nonatomic) _Bool externalPlaybackActive; // @synthesize externalPlaybackActive=_externalPlaybackActive;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTVideoPlayerOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playerBarViewControllerDidEndScrubbing:(id)arg1;
- (void)playerBarViewController:(id)arg1 didScrubToTime:(double)arg2;
- (void)playerBarViewControllerDidStartScrubbing:(id)arg1;
- (void)playerBarViewControllerDidPressToggleFullscreen:(id)arg1;
- (void)overlayViewDidTapBackground:(id)arg1;
- (int)playerViewLayout;
- (void)setPlayerViewLayout:(int)arg1;
- (void)setExpansionCoefficient:(double)arg1;
- (void)setPlaybackInSyncWithLivePlayhead:(_Bool)arg1;
- (void)setAirPlayAllowed:(_Bool)arg1;
- (void)setMinimumSeekableTime:(double)arg1 maximumSeekableTime:(double)arg2;
- (void)setMediaTime:(double)arg1;
- (void)setDownloadedTime:(double)arg1;
- (void)setTotalTime:(double)arg1;
- (void)playerStateDidChangeToState:(long long)arg1;
- (void)setPlayerResponse:(id)arg1 CPN:(id)arg2;
- (void)playerDidFailWithError:(id)arg1;
- (void)resetAndShowLoading:(_Bool)arg1;
- (_Bool)arePlayerControlsHidden;
- (void)setWatchNextResponse:(id)arg1;
@property(nonatomic, getter=isUserScrubbing) _Bool userScrubbing;
- (void)setMarkers:(id)arg1;
- (void)setActiveSingleVideo:(id)arg1;
- (void)playbackDidFinish;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool MDXPlaybackActive;
@property(nonatomic, getter=isCurrentVideoVertical) _Bool currentVideoVertical;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) MLNerdStatsPlaybackData *nerdStatsPlaybackData;
@property(readonly) Class superclass;

@end
