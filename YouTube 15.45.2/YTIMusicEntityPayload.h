//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIMusicAlbumReleaseDetailEntity, YTIMusicAlbumReleaseEntity, YTIMusicAlbumReleaseUserDetailEntity, YTIMusicArtistDetailEntity, YTIMusicArtistEntity, YTIMusicArtistUserDetailEntity, YTIMusicCollectionEntity, YTIMusicLibraryEditEntity, YTIMusicPlaylistDetailEntity, YTIMusicPlaylistEntity, YTIMusicPlaylistEntryCollectionEntity, YTIMusicPlaylistUserDetailEntity, YTIMusicShareEntity, YTIMusicTrackDetailEntity, YTIMusicTrackEntity, YTIMusicTrackUserDetailEntity;

@interface YTIMusicEntityPayload : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMusicAlbumReleaseEntity *albumRelease; // @dynamic albumRelease;
@property(retain, nonatomic) YTIMusicAlbumReleaseDetailEntity *albumReleaseDetail; // @dynamic albumReleaseDetail;
@property(retain, nonatomic) YTIMusicAlbumReleaseUserDetailEntity *albumReleaseUserDetail; // @dynamic albumReleaseUserDetail;
@property(retain, nonatomic) YTIMusicArtistEntity *artist; // @dynamic artist;
@property(retain, nonatomic) YTIMusicArtistDetailEntity *artistDetail; // @dynamic artistDetail;
@property(retain, nonatomic) YTIMusicArtistUserDetailEntity *artistUserDetail; // @dynamic artistUserDetail;
@property(retain, nonatomic) YTIMusicCollectionEntity *collection; // @dynamic collection;
@property(readonly, nonatomic) int entityOneOfCase; // @dynamic entityOneOfCase;
@property(retain, nonatomic) YTIMusicLibraryEditEntity *libraryEdit; // @dynamic libraryEdit;
@property(retain, nonatomic) YTIMusicPlaylistEntity *playlist; // @dynamic playlist;
@property(retain, nonatomic) YTIMusicPlaylistDetailEntity *playlistDetail; // @dynamic playlistDetail;
@property(retain, nonatomic) YTIMusicPlaylistEntryCollectionEntity *playlistEntryCollection; // @dynamic playlistEntryCollection;
@property(retain, nonatomic) YTIMusicPlaylistUserDetailEntity *playlistUserDetail; // @dynamic playlistUserDetail;
@property(retain, nonatomic) YTIMusicShareEntity *share; // @dynamic share;
@property(retain, nonatomic) YTIMusicTrackEntity *track; // @dynamic track;
@property(retain, nonatomic) YTIMusicTrackDetailEntity *trackDetail; // @dynamic trackDetail;
@property(retain, nonatomic) YTIMusicTrackUserDetailEntity *trackUserDetail; // @dynamic trackUserDetail;

@end

