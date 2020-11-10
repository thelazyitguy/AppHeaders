//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class PTVBroadcastController, PTVPlaybackPoint;

@protocol PTVBroadcastControllerObserver <NSObject>

@optional
- (void)broadcastHasModeratorsDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerDidDetectCopyrightViolation:(PTVBroadcastController *)arg1;
- (void)broadcastController:(PTVBroadcastController *)arg1 didUpdateGuestViewsMaxY:(double)arg2;
- (void)broadcastControllerDidChangeGuestCallInsDisabledState:(PTVBroadcastController *)arg1;
- (void)broadcastControllerDidAddOrRemoveLoggedInGuestCallerSession:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastAcceptsGuestsDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastIsPrivateDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerDidUpdateHasRetweetedBroadcast:(PTVBroadcastController *)arg1;
- (void)broadcastController:(PTVBroadcastController *)arg1 didUpdatePlaybackPointFrom:(PTVPlaybackPoint *)arg2;
- (void)broadcastController:(PTVBroadcastController *)arg1 willUpdatePlaybackPointTo:(PTVPlaybackPoint *)arg2;
- (void)broadcastControllerDidUpdateTheaterModeEnabled:(PTVBroadcastController *)arg1;
- (void)broadcastControllerHasSharedBroadcastWithAllFollowersDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerDidChangeBroadcaster:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastReplayTitleEditedDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastViewerSharingEnabledDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastShareDataDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastBestEndDateDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastNTotalWatchedDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastNWatchingTotalDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastAcceptsGiftsDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastProfileImageURLDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastBroadcastingTitleDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastLocationTitleDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastHasLocationDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastUserNameDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastUserDisplayNameDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastUserIDDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastHeartThemesDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastPreferredImageURLDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastAvailableForReplayDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerBroadcastStateDidChange:(PTVBroadcastController *)arg1;
- (void)broadcastControllerDidChangeBroadcast:(PTVBroadcastController *)arg1;
- (void)broadcastControllerWillChangeBroadcast:(PTVBroadcastController *)arg1;
@end

