//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIInnerTubeContext;

@interface YTIAutoOfflineRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *autoOfflineChannelChecksArray; // @dynamic autoOfflineChannelChecksArray;
@property(readonly, nonatomic) unsigned long long autoOfflineChannelChecksArray_Count; // @dynamic autoOfflineChannelChecksArray_Count;
@property(retain, nonatomic) NSMutableArray *autoOfflineVideoListChecksArray; // @dynamic autoOfflineVideoListChecksArray;
@property(readonly, nonatomic) unsigned long long autoOfflineVideoListChecksArray_Count; // @dynamic autoOfflineVideoListChecksArray_Count;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) float currentBatteryLevel; // @dynamic currentBatteryLevel;
@property(nonatomic) unsigned int currentDeviceTimeSeconds; // @dynamic currentDeviceTimeSeconds;
@property(nonatomic) unsigned long long currentOfflineStorageBytes; // @dynamic currentOfflineStorageBytes;
@property(retain, nonatomic) NSMutableArray *currentOfflinedContentsArray; // @dynamic currentOfflinedContentsArray;
@property(readonly, nonatomic) unsigned long long currentOfflinedContentsArray_Count; // @dynamic currentOfflinedContentsArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasCurrentBatteryLevel; // @dynamic hasCurrentBatteryLevel;
@property(nonatomic) _Bool hasCurrentDeviceTimeSeconds; // @dynamic hasCurrentDeviceTimeSeconds;
@property(nonatomic) _Bool hasCurrentOfflineStorageBytes; // @dynamic hasCurrentOfflineStorageBytes;
@property(nonatomic) _Bool hasTimeSinceLastOfflinePlaybackSeconds; // @dynamic hasTimeSinceLastOfflinePlaybackSeconds;
@property(nonatomic) _Bool hasTotalOfflineStorageBytes; // @dynamic hasTotalOfflineStorageBytes;
@property(retain, nonatomic) NSMutableArray *offlineCandidateChecksArray; // @dynamic offlineCandidateChecksArray;
@property(readonly, nonatomic) unsigned long long offlineCandidateChecksArray_Count; // @dynamic offlineCandidateChecksArray_Count;
@property(nonatomic) unsigned int timeSinceLastOfflinePlaybackSeconds; // @dynamic timeSinceLastOfflinePlaybackSeconds;
@property(nonatomic) unsigned long long totalOfflineStorageBytes; // @dynamic totalOfflineStorageBytes;

@end
