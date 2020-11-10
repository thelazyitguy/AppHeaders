//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobilePlaylistAllSongs_AddSongsButtonEventFactory, SPTUBIMobilePlaylistAllSongs_BackButtonEventFactory, SPTUBIMobilePlaylistAllSongs_EpisodeOrTrackEventFactory, SPTUBIMobilePlaylistAllSongs_ToolbarEventFactory, SPTUBIMobilePlaylistAllSongs_TransitionViewEventFactory, SPTUBIMobilePlaylistAllSongs_TuningSectionEventFactory;

@protocol SPTUBIMobilePlaylistAllSongsEventFactory <NSObject>
- (id <SPTUBIMobilePlaylistAllSongs_TuningSectionEventFactory>)tuningSectionFactory;
- (id <SPTUBIMobilePlaylistAllSongs_EpisodeOrTrackEventFactory>)episodeOrTrackFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIMobilePlaylistAllSongs_AddSongsButtonEventFactory>)addSongsButtonFactory;
- (id <SPTUBIMobilePlaylistAllSongs_BackButtonEventFactory>)backButtonFactory;
- (id <SPTUBIMobilePlaylistAllSongs_ToolbarEventFactory>)toolbarFactory;
- (id <SPTUBIMobilePlaylistAllSongs_TransitionViewEventFactory>)transitionViewFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

