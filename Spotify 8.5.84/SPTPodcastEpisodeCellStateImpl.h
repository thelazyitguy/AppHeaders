//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastEpisodeCellState-Protocol.h"

@class NSString, SPTPodcastEpisodeCachedProgress;
@protocol SPTPodcastEpisode;

@interface SPTPodcastEpisodeCellStateImpl : NSObject <SPTPodcastEpisodeCellState>
{
    _Bool _isEpisodePlaying;
    _Bool _isEpisodeActive;
    _Bool _isEpisodeUnfinished;
    _Bool _canBeMarkedAsPlayed;
    _Bool _canBeDownloaded;
    _Bool _canBeSaved;
    id <SPTPodcastEpisode> _podcastEpisode;
    SPTPodcastEpisodeCachedProgress *_cachedProgress;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTPodcastEpisodeCachedProgress *cachedProgress; // @synthesize cachedProgress=_cachedProgress;
@property(nonatomic) _Bool canBeSaved; // @synthesize canBeSaved=_canBeSaved;
@property(nonatomic) _Bool canBeDownloaded; // @synthesize canBeDownloaded=_canBeDownloaded;
@property(nonatomic) _Bool canBeMarkedAsPlayed; // @synthesize canBeMarkedAsPlayed=_canBeMarkedAsPlayed;
@property(nonatomic) _Bool isEpisodeUnfinished; // @synthesize isEpisodeUnfinished=_isEpisodeUnfinished;
@property(nonatomic) _Bool isEpisodeActive; // @synthesize isEpisodeActive=_isEpisodeActive;
@property(nonatomic) _Bool isEpisodePlaying; // @synthesize isEpisodePlaying=_isEpisodePlaying;
@property(retain, nonatomic) id <SPTPodcastEpisode> podcastEpisode; // @synthesize podcastEpisode=_podcastEpisode;
- (id)quotes;
- (id)musicAndTalkArtists;
- (_Bool)isInYourEpisodes;
- (_Bool)isEpisodeMusicAndTalk;
- (_Bool)isEpisodePlayable;
- (_Bool)isEpisodeExplicit;
- (id)podcastImageURL;
- (_Bool)supportsGranularProgressUpdates;
- (double)syncProgress;
- (long long)offlineSyncStatus;
- (double)listeningProgress;
- (id)longDescription;
- (id)currentStatusWithFormatter:(id)arg1;
- (id)podcastSubtitle;
- (id)podcastTitle;
- (id)initWithPodcastEpisode:(id)arg1 cachedProgress:(id)arg2 isEpisodePlaying:(_Bool)arg3 isEpisodeActive:(_Bool)arg4 isEpisodeUnfinished:(_Bool)arg5 canBeMarkedAsPlayed:(_Bool)arg6 canBeDownloaded:(_Bool)arg7 canBeSaved:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
