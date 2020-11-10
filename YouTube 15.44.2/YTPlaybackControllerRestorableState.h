//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTIWatchNextResponse, YTPlayerTransition, YTSingleVideoTime;

@interface YTPlaybackControllerRestorableState : NSObject
{
    _Bool _inlinePlaybackActive;
    int _playerViewLayout;
    YTPlayerTransition *_playerTransition;
    YTSingleVideoTime *_time;
    double _expansionCoefficient;
    YTIWatchNextResponse *_watchNextResponse;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTIWatchNextResponse *watchNextResponse; // @synthesize watchNextResponse=_watchNextResponse;
@property(readonly, nonatomic) _Bool inlinePlaybackActive; // @synthesize inlinePlaybackActive=_inlinePlaybackActive;
@property(readonly, nonatomic) double expansionCoefficient; // @synthesize expansionCoefficient=_expansionCoefficient;
@property(readonly, nonatomic) int playerViewLayout; // @synthesize playerViewLayout=_playerViewLayout;
@property(readonly, nonatomic) YTSingleVideoTime *time; // @synthesize time=_time;
@property(readonly, nonatomic) YTPlayerTransition *playerTransition; // @synthesize playerTransition=_playerTransition;
- (id)initWithPlayerTransition:(id)arg1 time:(id)arg2 playerViewLayout:(int)arg3 expansionCoefficient:(double)arg4 inlinePlaybackActive:(_Bool)arg5 watchNextResponse:(id)arg6;

@end

