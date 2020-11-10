//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTPlayerObservable-Protocol.h>

@class MLFormat, MLNerdStatsPlaybackData, NSArray, YTCaptionViewController, YTSingleVideoEventCenter, YTSingleVideoTime;
@protocol MLAudioFormatConstraint, MLCaptionTrack, MLVideoFormatConstraint, YTSingleVideoData;

@protocol YTSingleVideoObservable <YTPlayerObservable>
@property(readonly, nonatomic) YTSingleVideoTime *localTime;
@property(readonly, nonatomic) MLNerdStatsPlaybackData *nerdStatsPlaybackData;
@property(readonly, nonatomic) NSArray *availableCaptionTracks;
@property(readonly, nonatomic) YTCaptionViewController *captionViewController;
@property(readonly, nonatomic) id <MLCaptionTrack> activeCaptionTrack;
@property(readonly, nonatomic) id <MLVideoFormatConstraint> videoFormatConstraint;
@property(readonly, nonatomic) id <MLAudioFormatConstraint> audioFormatConstraint;
@property(readonly, nonatomic) MLFormat *selectedVideoFormat;
@property(readonly, nonatomic) MLFormat *selectedAudioFormat;
@property(readonly, nonatomic) NSArray *selectableVideoFormats;
@property(readonly, nonatomic) NSArray *selectableAudioFormats;
@property(readonly, nonatomic) _Bool supportsChangingPlaybackRate;
@property(readonly, nonatomic) _Bool isCurrentAspectRatioVertical;
@property(readonly, nonatomic) double currentAspectRatio;
@property(readonly, nonatomic) _Bool isPeggedToLive;
@property(readonly, nonatomic) _Bool isCurrentlyBackgroundable;
@property(readonly, nonatomic) _Bool currentVideoIsLocal;
@property(readonly, nonatomic) long long rawMediaState;
@property(readonly, nonatomic) long long mediaState;
@property(readonly, nonatomic) long long lifecycleState;
@property(readonly, nonatomic) YTSingleVideoEventCenter *eventCenter;
@property(readonly, nonatomic) id <YTSingleVideoData> videoData;
@end

