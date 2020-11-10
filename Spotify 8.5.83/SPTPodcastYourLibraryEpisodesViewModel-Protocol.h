//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, NSURL;
@protocol SPTPodcastEpisode, SPTPodcastYourLibraryEpisodesViewModelDelegate;

@protocol SPTPodcastYourLibraryEpisodesViewModel <NSObject>
@property(readonly, nonatomic) _Bool canEpisodesBeSaved;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isPlayingPodcastEpsiode) _Bool playingPodcastEpisode;
@property(readonly, nonatomic) double currentEpisodeProgress;
@property(readonly, nonatomic) NSURL *URL;
@property(nonatomic) __weak id <SPTPodcastYourLibraryEpisodesViewModelDelegate> delegate;
- (_Bool)showSeparatorForSection:(long long)arg1;
- (_Bool)isEpisodeDownloadable:(id <SPTPodcastEpisode>)arg1;
- (_Bool)isEpisodePlayingAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)isEpisodeActiveAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)isEpisodeDisabledAtIndexPath:(NSIndexPath *)arg1;
- (void)unsubscribe;
- (void)loadAndSubscribe;
- (id <SPTPodcastEpisode>)episodeAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)numberOfEntriesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfEntrySections;
- (NSString *)titleForSection:(unsigned long long)arg1;
@end

