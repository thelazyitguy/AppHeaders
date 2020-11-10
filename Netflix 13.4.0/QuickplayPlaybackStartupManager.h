//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/BasePlaybackStartupManager.h>

@protocol PlaybackLicenseStrategy;

@interface QuickplayPlaybackStartupManager : BasePlaybackStartupManager
{
    id <PlaybackLicenseStrategy> _playbackLicenseStrategy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <PlaybackLicenseStrategy> playbackLicenseStrategy; // @synthesize playbackLicenseStrategy=_playbackLicenseStrategy;
- (id)didReceiveLicenseChallengeResponses:(id)arg1 inputError:(id)arg2;
- (void)didDeliverLicenseChallengeResponses:(id)arg1 wasAdHoc:(_Bool)arg2;
- (_Bool)canResumePrefetch;
- (_Bool)hasLicenseExpired;
- (void)closePlaybackStartupManager;
- (void)playbackStartRequested;
- (void)setupWithMovieDetails:(id)arg1 asset:(id)arg2;
- (void)processLicenseExpiration;

@end
