//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTPlaylistPanelActionCoordinatorDelegate-Protocol.h"
#import "YTPlaylistPanelControllerProtocol-Protocol.h"
#import "YTPlaylistPanelControlsViewDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSHashTable, NSString, YTIAutoplayRenderer, YTIEngagementPanelSupportedRenderers, YTIPlaylistPanelRenderer, YTIPlaylistPanelVideoRenderer, YTIWatchNextResponse, YTInteractionLoggingProxyButton, YTPlaylistPanelActionCoordinator, YTPlaylistPanelCollectionViewController;
@protocol YTPlaylistPanelControllerDelegate, YTPlaylistPanelControllerPlaybackDelegate, YTResponder;

@interface YTPlaylistPanelController : NSObject <YTPlaylistPanelActionCoordinatorDelegate, YTResponder, YTPlaylistPanelControllerProtocol, YTPlaylistPanelControlsViewDelegate>
{
    NSString *_playlistID;
    id <YTResponder> _playlistPanelCollectionViewControllerParentResponder;
    YTPlaylistPanelCollectionViewController *_playlistPanelCollectionViewController;
    YTInteractionLoggingProxyButton *_shuffleButtonProxy;
    YTIPlaylistPanelRenderer *_playlistPanelRenderer;
    YTIPlaylistPanelVideoRenderer *_loadAtEntity;
    YTIAutoplayRenderer *_previousAutoplayRenderer;
    unsigned long long _previousVideoIndex;
    _Bool _loopWasEnabled;
    YTPlaylistPanelActionCoordinator *_playlistPanelCoordinator;
    _Bool _shouldDestroyOldPlaylist;
    _Bool _hasError;
    _Bool _playlistEngagementPanelVisible;
    _Bool _shuffleEnabled;
    _Bool _loopEnabled;
    id <YTResponder> _parentResponder;
    id <YTPlaylistPanelControllerPlaybackDelegate> _playlistPanelPlaybackDelegate;
    GIMMe *_gimme;
    YTIWatchNextResponse *_watchNextResponse;
    YTIEngagementPanelSupportedRenderers *_playlistEngagementPanelSupportedRenderers;
    id <YTPlaylistPanelControllerDelegate> _delegate;
    NSHashTable *_eventObservers;
    unsigned long long _videoIndex;
}

+ (id)playlistTitleWithPlaylistPanelRenderer:(id)arg1;
+ (id)playlistEngagementPanelSupportedRenderersWithWatchNextResponse:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long videoIndex; // @synthesize videoIndex=_videoIndex;
@property(retain, nonatomic) YTIPlaylistPanelRenderer *playlistPanelRenderer; // @synthesize playlistPanelRenderer=_playlistPanelRenderer;
@property(retain, nonatomic) NSHashTable *eventObservers; // @synthesize eventObservers=_eventObservers;
@property(nonatomic, getter=isLoopEnabled) _Bool loopEnabled; // @synthesize loopEnabled=_loopEnabled;
@property(nonatomic, getter=isShuffleEnabled) _Bool shuffleEnabled; // @synthesize shuffleEnabled=_shuffleEnabled;
@property(nonatomic) __weak id <YTPlaylistPanelControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isPlaylistEngagementPanelVisible) _Bool playlistEngagementPanelVisible; // @synthesize playlistEngagementPanelVisible=_playlistEngagementPanelVisible;
@property(readonly, nonatomic) YTIEngagementPanelSupportedRenderers *playlistEngagementPanelSupportedRenderers; // @synthesize playlistEngagementPanelSupportedRenderers=_playlistEngagementPanelSupportedRenderers;
@property(readonly, nonatomic) YTIWatchNextResponse *watchNextResponse; // @synthesize watchNextResponse=_watchNextResponse;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTPlaylistPanelControllerPlaybackDelegate> playlistPanelPlaybackDelegate; // @synthesize playlistPanelPlaybackDelegate=_playlistPanelPlaybackDelegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)showVideoSkippedToastIfNeededWithPreviousAutoplayRenderer:(id)arg1 previousVideoIndex:(unsigned long long)arg2 loopWasEnabled:(_Bool)arg3;
- (void)removeEventObserver:(id)arg1;
- (void)addEventObserver:(id)arg1;
- (void)addScrollObserver:(id)arg1;
- (void)willSendShuffleCommand;
- (void)didTapActionButton:(id)arg1;
- (void)didTapShareButton:(id)arg1;
- (void)didTapSaveButton;
- (void)didTapLoopButton;
- (void)didTapShuffleButton;
- (void)watchNextResponseDidFailWithError:(id)arg1;
- (_Bool)shouldDestroyOldPlaylist;
- (void)willMakeWatchNextRequest:(id)arg1;
- (void)playlistEngagementPanelWillCollapse;
- (void)unloadModel;
- (void)scrollToCurrentIndex;
- (void)updateViewForCurrentVideo;
- (id)playlistMiniBarClickTrackingParams;
- (_Bool)isInfinitePlaylist;
- (id)nextVideoTitle;
- (long long)nextVideoIndex;
- (id)playlistTitle;
- (_Bool)shouldShowPlaylist;
- (_Bool)isEndOfPlaylist;
- (void)refreshPlaylistCollectionViewController;
- (id)playlistPanelCollectionViewControllerWithParentResponder:(id)arg1;
- (void)setWatchNextResponse:(id)arg1;
- (void)updateWithWatchNextResponse:(id)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
