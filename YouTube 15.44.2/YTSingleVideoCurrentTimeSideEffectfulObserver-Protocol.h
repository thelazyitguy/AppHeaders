//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class YTSingleVideoTime;
@protocol YTSingleVideoObservable;

@protocol YTSingleVideoCurrentTimeSideEffectfulObserver <NSObject>
- (void)potentiallyMutatedSingleVideo:(id <YTSingleVideoObservable>)arg1 currentVideoTimeDidChange:(YTSingleVideoTime *)arg2;
@end

