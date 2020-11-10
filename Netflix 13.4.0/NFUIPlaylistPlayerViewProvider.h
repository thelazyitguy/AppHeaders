//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIPlayerViewController.h"

#import "NFPlayerViewProvider-Protocol.h"

@class NFUIPlaylistPlayerView, NSString;

@interface NFUIPlaylistPlayerViewProvider : NFUIPlayerViewController <NFPlayerViewProvider>
{
}

- (id)auxiliaryDisplayProvider;
- (void)disposeLayerForPlayer:(id)arg1 forPlaybackId:(id)arg2;
- (id)prepareLayerForPlayer:(id)arg1 playbackId:(id)arg2;
- (void)presentPlayer:(id)arg1 forPlaybackId:(id)arg2;
- (id)createPlayerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NFUIPlaylistPlayerView *playerView; // @dynamic playerView;
@property(readonly) Class superclass;

@end

