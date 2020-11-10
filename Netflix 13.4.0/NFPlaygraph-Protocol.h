//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString;
@protocol NFPlaygraphSegment;

@protocol NFPlaygraph <NSObject>
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSString *playgraphId;
@property(readonly, nonatomic) NSString *transitionType;
@property(readonly, nonatomic) NSString *type;
- (CDStruct_aa637a14)positionAtViewableTime:(double)arg1 inVideoId:(NSNumber *)arg2;
- (CDStruct_aa637a14)positionAtSegment:(NSString *)arg1 segmentOffset:(double)arg2;
- (CDStruct_aa637a14)positionAtSegment:(NSString *)arg1 viewableTime:(double)arg2;
- (CDStruct_aa637a14)positionAtStartOfSegment:(NSString *)arg1;
- (CDStruct_aa637a14)positionAtPlaygraphOffsetAlongDefaultPlaybackPath:(double)arg1;
- (CDStruct_aa637a14)initialPosition;
- (void)calculateDefaultPathDuration;
- (void)bredthFirstTraversalFromSegmentId:(NSString *)arg1 maxDepth:(unsigned long long)arg2 usingBlock:(void (^)(id <NFPlaygraphSegment>, unsigned long long, _Bool *))arg3;
- (void)depthFirstTraversalFromSegmentId:(NSString *)arg1 usingBlock:(void (^)(id <NFPlaygraphSegment>, unsigned long long, _Bool *))arg2;
- (void)defaultPathTraversal:(void (^)(id <NFPlaygraphSegment>, unsigned long long, _Bool *))arg1;
- (_Bool)isPlaybackContiguousFromSegment:(id <NFPlaygraphSegment>)arg1 toSegment:(id <NFPlaygraphSegment>)arg2;
- (double)playerTimeForPlaygraphOffset:(double)arg1;
- (double)playgraphOffsetForPlayerTime:(double)arg1 inSegment:(id <NFPlaygraphSegment>)arg2;
- (NSString *)segmentIdAtPlaygraphTime:(double)arg1;
- (NSArray *)segmentIdsForPosition:(double)arg1 inViewableId:(unsigned long long)arg2;
- (id <NFPlaygraphSegment>)segmentById:(NSString *)arg1;
- (NSString *)initialSegmentId;
@end
