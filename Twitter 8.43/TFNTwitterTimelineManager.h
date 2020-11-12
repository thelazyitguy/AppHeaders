//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSOperation, TFNTwitterAccount, TFNTwitterHomeTimeline, TFNTwitterTimeline;

@interface TFNTwitterTimelineManager : NSObject
{
    NSArray *_timelines;
    double _timelinesUpdatedTime;
    NSOperation *_loadOtherTimelinesOperation;
    id _urtNotificationsTimeline;
    TFNTwitterTimeline *_selectedTimeline;
    TFNTwitterAccount *_account;
}

+ (void)setTimelineFactory:(id)arg1;
+ (id)timelineFactory;
- (void).cxx_destruct;
@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TFNTwitterTimeline *selectedTimeline; // @synthesize selectedTimeline=_selectedTimeline;
@property(readonly, nonatomic) id urtNotificationsTimeline; // @synthesize urtNotificationsTimeline=_urtNotificationsTimeline;
@property(readonly, copy, nonatomic) NSArray *timelines; // @synthesize timelines=_timelines;
- (void)_postNotificationName:(id)arg1 timeline:(id)arg2 updateType:(id)arg3 fromIndex:(unsigned long long)arg4;
- (void)_timelineDidFinishDeserialization:(id)arg1;
- (void)_deserializeTimelines:(id)arg1;
- (void)accountDidBecomeActive;
- (void)refreshAllTimelinesWithSource:(long long)arg1;
- (id)allRefreshableTimelines;
- (void)performTimelineSwitchForAutoSwitch:(_Bool)arg1 useLatestTweetsTimeline:(_Bool)arg2 timelineLoadingAfterManualSwitch:(_Bool)arg3 source:(long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (_Bool)shouldResetToTopTimeline;
- (void)reconstructTimelineForIdentifier:(id)arg1;
- (id)timelineWithIdentifier:(id)arg1;
@property(readonly, nonatomic) TFNTwitterHomeTimeline *homeTimeline;
- (void)dealloc;
- (id)plistDictionaryValue;
- (id)initWithAccount:(id)arg1 plistDictionary:(id)arg2;

@end
