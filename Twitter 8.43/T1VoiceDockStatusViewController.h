//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1VoiceDockStatusContentViewDelegate-Protocol.h>
#import <T1Twitter/T1VoiceDockableViewController-Protocol.h>
#import <T1Twitter/T1VoicePlayableCollectionViewModelObserver-Protocol.h>

@class NSArray, NSString, T1VoiceDockPlaybackExpandedViewController, T1VoiceTrackViewModel, TFNTwitterAccount, UIView;
@protocol T1VoiceDockViewControllerContainer, T1VoiceDockableContent;

@interface T1VoiceDockStatusViewController : TFNViewController <T1VoiceDockStatusContentViewDelegate, T1VoicePlayableCollectionViewModelObserver, T1VoiceDockableViewController>
{
    _Bool _hasAudioFocus;
    id <T1VoiceDockViewControllerContainer> _dockContainer;
    TFNTwitterAccount *_account;
    NSArray *_timelinePlayers;
    T1VoiceTrackViewModel *_viewModel;
    T1VoiceDockPlaybackExpandedViewController *_expandedViewController;
}

+ (id)new;
- (void).cxx_destruct;
@property(nonatomic) __weak T1VoiceDockPlaybackExpandedViewController *expandedViewController; // @synthesize expandedViewController=_expandedViewController;
@property(retain, nonatomic) T1VoiceTrackViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSArray *timelinePlayers; // @synthesize timelinePlayers=_timelinePlayers;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool hasAudioFocus; // @synthesize hasAudioFocus=_hasAudioFocus;
@property(nonatomic) __weak id <T1VoiceDockViewControllerContainer> dockContainer; // @synthesize dockContainer=_dockContainer;
- (void)tfx_voiceDockExpandEnabledParameterChanged;
- (void)logClickActionOnElement:(id)arg1;
- (id)scribeParameters;
- (id)scribeSection;
- (id)scribePage;
- (long long)_t1_handleSkipBackwardCommand:(id)arg1;
- (long long)_t1_handleSkipForwardCommand:(id)arg1;
- (long long)_t1_handleChangePlaybackPositionCommand:(id)arg1;
- (long long)_t1_handlePauseCommand:(id)arg1;
- (long long)_t1_handlePlayCommand:(id)arg1;
- (void)_t1_updateControlCenterWithPlaybackState:(id)arg1;
- (void)_t1_cleanUpCommandCenter;
- (void)_t1_setUpCommandCenter;
@property(readonly, nonatomic) NSString *playerIdentifier;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) _Bool isPaused;
- (void)setMuted:(_Bool)arg1;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) UIView<T1VoiceDockableContent> *dockContentView;
- (void)voiceDockViewCloseButtonWasTapped:(id)arg1;
- (void)voiceDockViewPlayPauseButtonWasTapped:(id)arg1;
- (void)voiceDockViewWasTapped:(id)arg1;
- (void)voicePlayableViewModel:(id)arg1 didUpdateClip:(id)arg2;
- (void)voicePlayableViewModel:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (id)_t1_statusContentView;
- (void)togglePlaybackForStatus:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool allowAutoplay;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
