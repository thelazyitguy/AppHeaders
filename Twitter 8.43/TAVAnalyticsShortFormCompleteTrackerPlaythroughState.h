//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TAVAnalyticsPlayedRangesTracker;

@interface TAVAnalyticsShortFormCompleteTrackerPlaythroughState : NSObject
{
    _Bool _firedShortFormComplete;
    TAVAnalyticsPlayedRangesTracker *_playedRangesTracker;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool firedShortFormComplete; // @synthesize firedShortFormComplete=_firedShortFormComplete;
@property(retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker; // @synthesize playedRangesTracker=_playedRangesTracker;
- (id)init;

@end
