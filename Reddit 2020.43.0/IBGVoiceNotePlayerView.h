//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIImage, UIImageView, UILabel;

@interface IBGVoiceNotePlayerView : UIView
{
    _Bool _playing;
    int _secondsElapsed;
    double _recordingDuration;
    UIImageView *_playPauseImageView;
    UILabel *_timerLabel;
    NSTimer *_playerTimer;
    UIImage *_playImage;
    UIImage *_stopImage;
}

@property(retain, nonatomic) UIImage *stopImage; // @synthesize stopImage=_stopImage;
@property(retain, nonatomic) UIImage *playImage; // @synthesize playImage=_playImage;
@property(nonatomic) int secondsElapsed; // @synthesize secondsElapsed=_secondsElapsed;
@property(retain, nonatomic) NSTimer *playerTimer; // @synthesize playerTimer=_playerTimer;
@property(retain, nonatomic) UILabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(retain, nonatomic) UIImageView *playPauseImageView; // @synthesize playPauseImageView=_playPauseImageView;
@property(nonatomic) double recordingDuration; // @synthesize recordingDuration=_recordingDuration;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
- (void).cxx_destruct;
- (void)updateTimer:(int)arg1;
- (void)updatePlayingTimer;
- (void)applyOutboundTheme;
- (void)applyInboundTheme;
- (void)updateConstraints;
- (id)init;

@end
