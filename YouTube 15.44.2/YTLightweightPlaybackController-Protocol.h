//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTMacroExpansionProvider-Protocol.h>
#import <Module_Framework/YTPlayerViewLayoutProtocol-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class NSData, NSError, NSString, YTExpectedPlayerLayout, YTPlaybackConfig, YTPlaybackData, YTPlaybackDebugData, YTPlayerTransition;
@protocol MLAudioFormatConstraint, MLCaptionTrack, MLVideoFormatConstraint, YTSingleVideoObservable;

@protocol YTLightweightPlaybackController <YTMacroExpansionProvider, YTPlayerViewLayoutProtocol, YTResponder>
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) _Bool handlesAutoplayingInternally;
@property(readonly, nonatomic) YTPlaybackData *contentPlaybackData;
@property(readonly, nonatomic) id <YTSingleVideoObservable> contentVideo;
@property(readonly, nonatomic) id <YTSingleVideoObservable> activeVideo;
@property(nonatomic, getter=isActivePlayback) _Bool activePlayback;
@property(readonly, nonatomic) _Bool isPlaybackFinished;
@property(readonly, nonatomic) int state;
- (YTPlaybackDebugData *)playbackDebugData;
- (void)setAccountLinkState:(NSData *)arg1;
- (void)setClipID:(NSString *)arg1;
- (void)setBlackoutActive:(_Bool)arg1;
- (void)setUserAudioOnlyModeActive:(_Bool)arg1;
- (void)setLiveCaptionsVerticalRatio:(double)arg1;
- (void)enableCaptionsIfAvailableWithUserAction:(_Bool)arg1;
- (void)setActiveCaptionTrack:(id <MLCaptionTrack>)arg1;
- (void)setAudioFormatConstraint:(id <MLAudioFormatConstraint>)arg1;
- (void)setVideoFormatConstraint:(id <MLVideoFormatConstraint>)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)resumePlayback;
- (void)suspendPlayback;
- (void)seekToEnd;
- (void)seekToProductionTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)replay;
- (void)pause;
- (void)play;
- (void)reset;
- (void)setUpcomingPlayerTransition:(YTPlayerTransition *)arg1 playbackConfig:(YTPlaybackConfig *)arg2;
- (void)prepareToLoadWithPlayerTransition:(YTPlayerTransition *)arg1 expectedLayout:(YTExpectedPlayerLayout *)arg2;
- (void)loadWithPlayerTransition:(YTPlayerTransition *)arg1 playbackConfig:(YTPlaybackConfig *)arg2;
@end

