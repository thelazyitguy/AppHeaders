//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTPlayerObservableTime-Protocol.h>

@class GIMMe, NSNumber, NSString, YTSingleVideoTime;
@protocol HAMClock, MLPlayer, MLPlayerItem, YTSingleVideoData;

@interface YTSingleVideoControllerTime : NSObject <YTPlayerObservableTime>
{
    id <HAMClock> _clock;
    id <YTSingleVideoData> _videoData;
    id <MLPlayer> _player;
    id <MLPlayerItem> _playerItem;
    NSNumber *_cachedHLSStartTime;
    GIMMe *_gimme;
    id <MLPlayerItem> _contentPlayerItem;
    double _AVContentBaseTime;
}

- (void).cxx_destruct;
@property(nonatomic) double AVContentBaseTime; // @synthesize AVContentBaseTime=_AVContentBaseTime;
@property(nonatomic) __weak id <MLPlayerItem> contentPlayerItem; // @synthesize contentPlayerItem=_contentPlayerItem;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (double)timeOffset;
- (void)segmentAtMediaTime:(double)arg1 shouldApproximateSegment:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) YTSingleVideoTime *localTime;
- (void)segmentNumberAndDurationAtMediaTime:(double)arg1 shouldApproximateSegment:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)productionTimeFromMediaTime:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool supportsSegmentTimelineQueries;
- (id)currentVideoTimeWithoutOffset;
@property(readonly, nonatomic) YTSingleVideoTime *currentVideoTime;
@property(readonly, nonatomic) double maximumSeekableMediaTime;
@property(readonly, nonatomic) double minimumSeekableMediaTime;
@property(readonly, nonatomic) double totalMediaTime;
@property(readonly, nonatomic) double bufferedMediaTime;
- (id)initWithVideoData:(id)arg1 player:(id)arg2 playerItem:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
