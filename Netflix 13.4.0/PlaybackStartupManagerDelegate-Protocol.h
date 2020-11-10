//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class BladeRunnerPlaybackReporter, NSError, NSString;
@protocol PlaybackStartupManager;

@protocol PlaybackStartupManagerDelegate
- (_Bool)isCacheExpired;
- (void)playbackStartupManager:(id <PlaybackStartupManager>)arg1 recordBreadcrumb:(NSString *)arg2;
- (_Bool)isExternalDisplayForPlaybackStartupManager:(id <PlaybackStartupManager>)arg1;
- (NSString *)playbackIdForPlaybackStartupManager:(id <PlaybackStartupManager>)arg1;
- (BladeRunnerPlaybackReporter *)playbackReporterForPlaybackStartupManager:(id <PlaybackStartupManager>)arg1;
- (void)didFinishPrefetch;
- (void)loadAVPlayerForPlaybackStartupManager:(id <PlaybackStartupManager>)arg1;
- (void)playbackStartupManagerDidExpire:(id <PlaybackStartupManager>)arg1;
- (void)playbackStartupManager:(id <PlaybackStartupManager>)arg1 didEncounterLicenseError:(NSError *)arg2 wasLDL:(_Bool)arg3;
@end
