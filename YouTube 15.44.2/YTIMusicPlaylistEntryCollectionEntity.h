//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIMusicPlaylistEntryCollectionEntity : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *continuationToken; // @dynamic continuationToken;
@property(nonatomic) _Bool hasContinuationToken; // @dynamic hasContinuationToken;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasParentPlaylist; // @dynamic hasParentPlaylist;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *parentPlaylist; // @dynamic parentPlaylist;

@end

