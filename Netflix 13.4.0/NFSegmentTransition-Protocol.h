//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSNumber, NSString;
@protocol NFPlaylistSegment;

@protocol NFSegmentTransition
@property(readonly, nonatomic) NSNumber *earliestSkipRequestOffset;
@property(retain, nonatomic) NSNumber *weight;
@property(readonly, nonatomic) NSString *destinationSegmentId;
@property(readonly, nonatomic) id <NFPlaylistSegment> destinationSegment;
@property(readonly, nonatomic) id <NFPlaylistSegment> sourceSegment;
@end

