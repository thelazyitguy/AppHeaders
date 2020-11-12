//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MLPlayer-Protocol.h>

@class MLVideo, NSArray;
@protocol MLPlayerConfig, MLPlayerItem, MLPlayerItemSegment, MLQueuePlayerDelegate;

@protocol MLQueuePlayer <MLPlayer>
@property(nonatomic) __weak id <MLQueuePlayerDelegate> delegate;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 inSegment:(id <MLPlayerItemSegment>)arg4 segments:(NSArray *)arg5;
- (void)setSegments:(NSArray *)arg1;
- (void)clipSegment:(id <MLPlayerItemSegment>)arg1 atTime:(double)arg2 replaceSubsequentSegmentsWith:(NSArray *)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)addSegments:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (_Bool)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 inSegment:(id <MLPlayerItemSegment>)arg4 error:(id *)arg5;
- (void)clipSegment:(id <MLPlayerItemSegment>)arg1 toStart:(double)arg2 duration:(double)arg3 completion:(void (^)(NSError *))arg4;
- (NSArray *)segmentsForPlayerItem:(id <MLPlayerItem>)arg1;
- (NSArray *)allSegments;
- (id <MLPlayerItemSegment>)currentSegment;
- (void)removeAllSegments;
- (void)removeSegment:(id <MLPlayerItemSegment>)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)addSegment:(id <MLPlayerItemSegment>)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (id <MLPlayerItemSegment>)createSegmentWithPlayerItem:(id <MLPlayerItem>)arg1 error:(id *)arg2;
- (id <MLPlayerItemSegment>)createSegmentWithPlayerItem:(id <MLPlayerItem>)arg1 startTime:(double)arg2 duration:(double)arg3 error:(id *)arg4;
- (id <MLPlayerItem>)createPlayerItem:(MLVideo *)arg1 playerConfig:(id <MLPlayerConfig>)arg2 error:(id *)arg3;
@end
