//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@class NSNumber, NSString;
@protocol NFPlaygraphSegment;

@protocol NFPlaygraphSegmentTransition <NSObject>
@property(readonly, nonatomic) NSString *effectiveTransitionType;
@property(readonly, nonatomic) NSNumber *skipRegionOffset;
@property(readonly, nonatomic) NSString *transitionType;
@property(retain, nonatomic) NSNumber *weight;
@property(readonly, nonatomic) NSString *destinationSegmentId;
@property(readonly, nonatomic) id <NFPlaygraphSegment> destinationSegment;
@property(readonly, nonatomic) id <NFPlaygraphSegment> sourceSegment;
@end
