//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NFPlaylistPlayerDataSource-Protocol.h>

@class NSDictionary;
@protocol NFPlaylist, NFPlaylistPlayerDataSourceChangeObserver, NFPlaylistSegment;

@protocol NFPlaylistPlayerMutableDataSource <NFPlaylistPlayerDataSource>
@property(nonatomic) __weak id <NFPlaylistPlayerDataSourceChangeObserver> changeObserver;
- (void)updatePlaylist:(id <NFPlaylist>)arg1 trackingInfo:(NSDictionary *)arg2 startPosition:(CDStruct_aa637a14)arg3;
- (void)updateNextSegmentWeightsForSegment:(id <NFPlaylistSegment>)arg1 nextSegmentWeights:(NSDictionary *)arg2;
- (void)clearNextSegmentAfter:(id <NFPlaylistSegment>)arg1;
- (void)setNextSegmentAfter:(id <NFPlaylistSegment>)arg1 to:(id <NFPlaylistSegment>)arg2;
@end
