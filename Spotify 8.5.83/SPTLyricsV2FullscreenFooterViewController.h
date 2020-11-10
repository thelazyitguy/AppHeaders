//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLyricsV2DurationController-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"
#import "SPTNowPlayingDurationUnitViewModelDelegate-Protocol.h"
#import "SPTNowPlayingPlaybackActionsHandlerObserver-Protocol.h"

@class NSString, SPTLyricsV2Configuration, SPTLyricsV2FullscreenFooterView, SPTPlayerTrack, SPTVocalRemovalConfiguration;
@protocol SPTLyricsV2FullscreenFooterViewControllerDelegate, SPTNowPlayingDurationUnitViewModel, SPTNowPlayingPlaybackActionsHandler;

@interface SPTLyricsV2FullscreenFooterViewController : UIViewController <SPTLyricsV2DurationController, SPTNetworkConnectivityControllerObserver, SPTNowPlayingDurationUnitViewModelDelegate, SPTNowPlayingPlaybackActionsHandlerObserver>
{
    _Bool _didBecomeVisible;
    _Bool _didLoadShareDestination;
    _Bool _didLogVocalRemovalButtonImpression;
    _Bool _forceDisablePlaybackControls;
    id <SPTLyricsV2FullscreenFooterViewControllerDelegate> _delegate;
    id <SPTNowPlayingDurationUnitViewModel> _durationViewModel;
    id <SPTNowPlayingPlaybackActionsHandler> _playbackActionsHandler;
    SPTPlayerTrack *_track;
    SPTLyricsV2Configuration *_lyricsConfiguration;
    SPTVocalRemovalConfiguration *_vocalRemovalConfiguration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceDisablePlaybackControls; // @synthesize forceDisablePlaybackControls=_forceDisablePlaybackControls;
@property(nonatomic) _Bool didLogVocalRemovalButtonImpression; // @synthesize didLogVocalRemovalButtonImpression=_didLogVocalRemovalButtonImpression;
@property(nonatomic) _Bool didLoadShareDestination; // @synthesize didLoadShareDestination=_didLoadShareDestination;
@property(nonatomic) _Bool didBecomeVisible; // @synthesize didBecomeVisible=_didBecomeVisible;
@property(readonly, nonatomic) SPTVocalRemovalConfiguration *vocalRemovalConfiguration; // @synthesize vocalRemovalConfiguration=_vocalRemovalConfiguration;
@property(readonly, nonatomic) SPTLyricsV2Configuration *lyricsConfiguration; // @synthesize lyricsConfiguration=_lyricsConfiguration;
@property(readonly, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
@property(readonly, nonatomic) id <SPTNowPlayingPlaybackActionsHandler> playbackActionsHandler; // @synthesize playbackActionsHandler=_playbackActionsHandler;
@property(readonly, nonatomic) id <SPTNowPlayingDurationUnitViewModel> durationViewModel; // @synthesize durationViewModel=_durationViewModel;
@property(nonatomic) __weak id <SPTLyricsV2FullscreenFooterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateSliderAccessibilityIncrementStep:(double)arg1;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)shareButtonTapped;
- (void)toggleVocalRemovalMode;
- (void)logShareButtonIfNeeded;
- (void)updateShareButton;
- (void)updateMenuButton;
- (void)updateVocalRemovalButton;
- (void)updatePlayPauseButton;
- (void)updateProgressSlider;
- (_Bool)isSeekingAllowed;
- (_Bool)isResumingAllowed;
- (_Bool)isPausingAllowed;
- (void)playbackActionsHandlerDidPlayPause:(id)arg1;
- (void)trackMetadataDidFinishUpdating;
- (void)trackMetadataDidMove:(_Bool)arg1;
- (void)trackPositionDidChange;
- (_Bool)nowPlayingSliderDisallowSeeking:(id)arg1;
- (double)nowPlayingSliderAnimationSpeed:(id)arg1;
- (double)nowPlayingSliderCurrentDuration:(id)arg1;
- (double)nowPlayingSliderCurrentPosition:(id)arg1;
- (_Bool)nowPlayingDurationViewShouldAlwaysShowDurationLabels:(id)arg1;
- (id)nowPlayingDurationView:(id)arg1 timeRemainingTextForSliderValue:(float)arg2;
- (id)nowPlayingDurationView:(id)arg1 timeTakenTextForSliderValue:(float)arg2;
- (void)nowPlayingDurationViewToggleTimeRemainingLabel:(id)arg1;
- (void)nowPlayingDurationViewDidTapSlider:(id)arg1;
- (void)nowPlayingDurationViewDidEndScrubbing:(id)arg1;
- (void)nowPlayingDurationViewDidScrub:(id)arg1;
- (void)nowPlayingDurationViewDidBeginScrubbing:(id)arg1;
- (void)nowPlayingDurationViewProgressDidChange:(id)arg1;
- (void)updateControlsOnVocalRemovalStateChanged:(_Bool)arg1;
- (void)updateWithStyle:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initializeShareButton;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithTrack:(id)arg1 lyricsConfiguration:(id)arg2 vocalRemovalConfiguration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTLyricsV2FullscreenFooterView *view; // @dynamic view;

@end

