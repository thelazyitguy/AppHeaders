//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTSingleVideoCurrentTimeObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoCurrentTimeSideEffectfulObserver-Protocol.h>

@class GIMMe, NSMutableSet, NSString, YTIntervalTree;

@interface YTAdIntervalManager : NSObject <YTSingleVideoCurrentTimeObserver, YTSingleVideoCurrentTimeSideEffectfulObserver>
{
    YTIntervalTree *_intervalTree;
    NSMutableSet *_activeIntervals;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (_Bool)isEmpty;
- (unsigned long long)count;
- (unsigned long long)numOfIntervalsContainTime:(double)arg1;
- (void)seekTo:(double)arg1;
- (void)potentiallyMutatedSingleVideo:(id)arg1 currentVideoTimeDidChange:(id)arg2;
- (void)singleVideo:(id)arg1 currentVideoTimeDidChange:(id)arg2;
- (void)clear;
- (void)removeInterval:(id)arg1;
- (void)insertInterval:(id)arg1;
- (id)insertIntervalWithStart:(double)arg1 startInclusive:(_Bool)arg2 stop:(double)arg3 stopInclusive:(_Bool)arg4 data:(id)arg5 enterBlock:(CDUnknownBlockType)arg6 exitBlock:(CDUnknownBlockType)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

