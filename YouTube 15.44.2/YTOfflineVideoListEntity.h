//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSData, NSDate, NSOrderedSet, NSString, YTOfflineImageEntity, YTOfflineInterleavingUpdateEntity;

@interface YTOfflineVideoListEntity : NSManagedObject
{
}

- (id)orderedVideos;
- (int)YTIOfflineVideoSelectionStrategyFromStrategy:(int)arg1;
- (id)thumbnailFilenames;
- (unsigned long long)getPendingSyncVideoCount;
@property(retain, nonatomic) NSArray *videoIDs; // @dynamic videoIDs;
- (int)statusWithCompletedVideos:(unsigned long long *)arg1 totalVideos:(unsigned long long *)arg2;
- (id)offlineStatePlaylist;
- (id)offlineVideoList;

// Remaining properties
@property(copy, nonatomic) NSString *ID; // @dynamic ID;
@property(retain, nonatomic) NSData *clickTrackingParams; // @dynamic clickTrackingParams;
@property(retain, nonatomic) YTOfflineInterleavingUpdateEntity *currentInterleavingUpdate; // @dynamic currentInterleavingUpdate;
@property(copy, nonatomic) NSDate *dateAdded; // @dynamic dateAdded;
@property(copy, nonatomic) NSDate *dateLastUpdated; // @dynamic dateLastUpdated;
@property(nonatomic) int maximumDownloadQuality; // @dynamic maximumDownloadQuality;
@property(nonatomic) unsigned long long minimumUnusedBytes; // @dynamic minimumUnusedBytes;
@property(nonatomic) int offlineVideoSelectionStrategy; // @dynamic offlineVideoSelectionStrategy;
@property(retain, nonatomic) YTOfflineImageEntity *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSString *userID; // @dynamic userID;
@property(retain, nonatomic) NSOrderedSet *videos; // @dynamic videos;

@end

