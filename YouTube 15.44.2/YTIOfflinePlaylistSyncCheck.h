//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface YTIOfflinePlaylistSyncCheck : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool autoSync; // @dynamic autoSync;
@property(nonatomic) long long clientLastInvalidationTimestamp; // @dynamic clientLastInvalidationTimestamp;
@property(nonatomic) _Bool hasAutoSync; // @dynamic hasAutoSync;
@property(nonatomic) _Bool hasClientLastInvalidationTimestamp; // @dynamic hasClientLastInvalidationTimestamp;
@property(nonatomic) _Bool hasOfflineDateAddedTimestamp; // @dynamic hasOfflineDateAddedTimestamp;
@property(nonatomic) _Bool hasOfflineLastModifiedTimestamp; // @dynamic hasOfflineLastModifiedTimestamp;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) long long offlineDateAddedTimestamp; // @dynamic offlineDateAddedTimestamp;
@property(nonatomic) long long offlineLastModifiedTimestamp; // @dynamic offlineLastModifiedTimestamp;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(retain, nonatomic) NSMutableArray *videoIdsArray; // @dynamic videoIdsArray;
@property(readonly, nonatomic) unsigned long long videoIdsArray_Count; // @dynamic videoIdsArray_Count;

@end

