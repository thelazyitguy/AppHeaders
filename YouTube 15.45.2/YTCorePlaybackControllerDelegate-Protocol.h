//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTLightweightPlaybackControllerDelegate-Protocol.h>

@class NSArray, YTAdInterrupt, YTPlayabilityResolutionUserActionRequest;
@protocol YTCorePlaybackController;

@protocol YTCorePlaybackControllerDelegate <YTLightweightPlaybackControllerDelegate>
@property(readonly, nonatomic) _Bool userScrubbing;
- (void)playbackController:(id <YTCorePlaybackController>)arg1 requiresUserActionForPlayabilityResolutionWithUserActionRequest:(YTPlayabilityResolutionUserActionRequest *)arg2;
- (void)playbackController:(id <YTCorePlaybackController>)arg1 externalPlaybackActiveStateDidChange:(_Bool)arg2;
- (void)playbackController:(id <YTCorePlaybackController>)arg1 VRStateDidChange:(_Bool)arg2;
- (void)playbackControllerDidLoadPrerollAd:(id <YTCorePlaybackController>)arg1;
- (void)playbackControllerDidFinishPlayingAd:(id <YTCorePlaybackController>)arg1;
- (void)playbackController:(id <YTCorePlaybackController>)arg1 didReceiveAdMarkers:(NSArray *)arg2;
- (void)playbackController:(id <YTCorePlaybackController>)arg1 willStartAdSurveyWithAdInterrupt:(YTAdInterrupt *)arg2;
@end
