//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/SegmentItemPreparationStrategyBase.h>

@interface RemainingTimeThresholdBasedPreparationStrategy : SegmentItemPreparationStrategyBase
{
    double _remainingTimeThreshold;
    double _numberOfItemsAllowedLoadingInParallel;
}

@property(nonatomic) double numberOfItemsAllowedLoadingInParallel; // @synthesize numberOfItemsAllowedLoadingInParallel=_numberOfItemsAllowedLoadingInParallel;
@property(nonatomic) double remainingTimeThreshold; // @synthesize remainingTimeThreshold=_remainingTimeThreshold;
- (void)prepareForPlaylistPlayer:(id)arg1 forPosition:(CDStruct_aa637a14)arg2;
- (_Bool)shouldPrepareAdditionalSegmentItemsForPlaylistPlayer:(id)arg1;
- (void)playlistPlayer:(id)arg1 didUpdatePlaylistPosition:(CDStruct_aa637a14)arg2;
- (id)init;

@end
