//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@class BladeRunnerSyntheticStopEventStore, NSArray, NSString;

@protocol BladeRunnerSyntheticStopEventStoreDelegate <NSObject>
- (void)failureToClearTimestampsInSyntheticStopStore:(BladeRunnerSyntheticStopEventStore *)arg1;
- (void)failureToClearSyntheticStopStore:(BladeRunnerSyntheticStopEventStore *)arg1 forXidTimestamp:(NSString *)arg2;
- (void)failureToClearSyntheticStopStore:(BladeRunnerSyntheticStopEventStore *)arg1 forXid:(NSString *)arg2;
- (void)failureToClearSyntheticStopStore:(BladeRunnerSyntheticStopEventStore *)arg1 events:(NSArray *)arg2;
@end

