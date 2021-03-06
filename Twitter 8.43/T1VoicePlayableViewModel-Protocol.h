//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;
@protocol T1StatusViewModel;

@protocol T1VoicePlayableViewModel
@property(nonatomic) _Bool isMuted;
@property(readonly, nonatomic) _Bool isPaused;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) NSString *playerIdentifier;
@property(readonly, nonatomic) id <T1StatusViewModel> representedStatusViewModel;
- (void)seekToTime:(double)arg1;
- (void)togglePlayback;
- (void)pause;
- (void)play;
- (_Bool)isRepresentingStatus:(id <T1StatusViewModel>)arg1;
@end

