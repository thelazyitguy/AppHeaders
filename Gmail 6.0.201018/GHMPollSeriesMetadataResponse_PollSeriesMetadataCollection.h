//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GHMSyncMetadata, NSMutableArray;

@interface GHMPollSeriesMetadataResponse_PollSeriesMetadataCollection : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSyncMetadata; // @dynamic hasSyncMetadata;
@property(retain, nonatomic) NSMutableArray *pollSeriesMetadataArray; // @dynamic pollSeriesMetadataArray;
@property(readonly, nonatomic) unsigned long long pollSeriesMetadataArray_Count; // @dynamic pollSeriesMetadataArray_Count;
@property(retain, nonatomic) GHMSyncMetadata *syncMetadata; // @dynamic syncMetadata;

@end
