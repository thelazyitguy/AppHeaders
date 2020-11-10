//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTIOfflineChannelSupportedDatas, YTIThumbnailDetails;

@interface YTIOfflinePlaylistData : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) YTIThumbnailDetails *avatarThumbnail;
- (id)collageThumbnailDetails;
- (id)playlistBundleData;
- (_Bool)isCommuteBundle;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalMetadadatasArray; // @dynamic additionalMetadadatasArray;
@property(readonly, nonatomic) unsigned long long additionalMetadadatasArray_Count; // @dynamic additionalMetadadatasArray_Count;
@property(retain, nonatomic) YTIOfflineChannelSupportedDatas *channel; // @dynamic channel;
@property(nonatomic) _Bool hasChannel; // @dynamic hasChannel;
@property(nonatomic) _Bool hasIsPrivate; // @dynamic hasIsPrivate;
@property(nonatomic) _Bool hasLastModifiedTimestamp; // @dynamic hasLastModifiedTimestamp;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasPrivacy; // @dynamic hasPrivacy;
@property(nonatomic) _Bool hasShareURL; // @dynamic hasShareURL;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool isPrivate; // @dynamic isPrivate;
@property(nonatomic) long long lastModifiedTimestamp; // @dynamic lastModifiedTimestamp;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(nonatomic) int privacy; // @dynamic privacy;
@property(copy, nonatomic) NSString *shareURL; // @dynamic shareURL;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSMutableArray *videosArray; // @dynamic videosArray;
@property(readonly, nonatomic) unsigned long long videosArray_Count; // @dynamic videosArray_Count;

@end

