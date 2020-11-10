//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTTransferEntityModel.h>

#import <Module_Framework/YTMutableEntity-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface YTMutableTransferEntityModel : YTTransferEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllOfflineVideoStreamsArray;
- (void)removeOfflineVideoStreamsArray:(id)arg1;
- (void)addOfflineVideoStreamsArray:(id)arg1;
@property(copy, nonatomic) NSDictionary *entityMetadata; // @dynamic entityMetadata;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *preferredAudioTrack; // @dynamic preferredAudioTrack;
@property(nonatomic) int maximumDownloadQuality; // @dynamic maximumDownloadQuality;
@property(nonatomic) long long enqueuedTimestampMs; // @dynamic enqueuedTimestampMs;
@property(retain, nonatomic) NSString *cotn; // @dynamic cotn;
@property(retain, nonatomic) NSArray *streamProgressArray; // @dynamic streamProgressArray;
@property(nonatomic) int transferState; // @dynamic transferState;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

