//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class NSArray, NSURL;
@protocol SPTPlaylistModel;

@interface SPTFreeTierPlaylistRemoveTrackAction : SPAction
{
    NSArray *_trackURLs;
    NSURL *_playlistURL;
    id <SPTPlaylistModel> _playlistModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, nonatomic) NSArray *trackURLs; // @synthesize trackURLs=_trackURLs;
- (id)execute:(id)arg1;
- (long long)style;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithTrackURLs:(id)arg1 playlistURL:(id)arg2 playlistModel:(id)arg3 logContext:(id)arg4;

@end

