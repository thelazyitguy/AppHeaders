//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPIScreen.h"

#import "IDAudioPlayerViewDataSource-Protocol.h"
#import "IDAudioPlayerViewDelegate-Protocol.h"
#import "IDInstrumentClusterDataSource-Protocol.h"
#import "IDInstrumentClusterDelegate-Protocol.h"
#import "IDViewDelegate-Protocol.h"

@class IDLabel, IDPopupView, IDToolbarButton, MainScreenID5View, MainScreenView, NSDate, NSString, NSTimer, RAPIMainScreenConfig, UIImage;

@interface RAPIMainScreen : RAPIScreen <IDInstrumentClusterDataSource, IDInstrumentClusterDelegate, IDAudioPlayerViewDataSource, IDViewDelegate, IDAudioPlayerViewDelegate>
{
    IDToolbarButton *toolbarButtons[8];
    _Bool _progressBarVisible;
    _Bool _statusMessageShown;
    _Bool _volumePopupShownSinceLastConnect;
    _Bool _skipButtonDisplayMode;
    _Bool _seekingByTouch;
    _Bool _currentCanSkipPrev;
    _Bool _currentCanSkipNext;
    NSString *_currentArtistName;
    NSString *_currentTrackName;
    RAPIMainScreenConfig *_config;
    MainScreenView *_mainScreenView;
    MainScreenID5View *_mainScreenID5View;
    NSDate *_lastSetCoverArtTime;
    NSTimer *_playbackStateUpdateTimer;
    long long _currentCheckmarkPosition;
    long long _currentTrackTimeSecs;
    long long _totalTrackTimeSecs;
    IDPopupView *_lowVolumePopupView;
    IDLabel *_labelLowVolumeMessage;
    long long _lastSelectedICSkipButtonIndex;
    NSTimer *_progressBarTouchDebounceTimer;
    NSString *_currentAlbumName;
    long long _currentTrackIndex;
    long long _currentTrackCount;
    UIImage *_coverArtToSet;
    UIImage *_currentID5CoverArt;
}

- (void).cxx_destruct;
@property _Bool currentCanSkipNext; // @synthesize currentCanSkipNext=_currentCanSkipNext;
@property _Bool currentCanSkipPrev; // @synthesize currentCanSkipPrev=_currentCanSkipPrev;
@property(retain) UIImage *currentID5CoverArt; // @synthesize currentID5CoverArt=_currentID5CoverArt;
@property(retain) UIImage *coverArtToSet; // @synthesize coverArtToSet=_coverArtToSet;
@property long long currentTrackCount; // @synthesize currentTrackCount=_currentTrackCount;
@property long long currentTrackIndex; // @synthesize currentTrackIndex=_currentTrackIndex;
@property(retain) NSString *currentAlbumName; // @synthesize currentAlbumName=_currentAlbumName;
@property _Bool seekingByTouch; // @synthesize seekingByTouch=_seekingByTouch;
@property(retain) NSTimer *progressBarTouchDebounceTimer; // @synthesize progressBarTouchDebounceTimer=_progressBarTouchDebounceTimer;
@property long long lastSelectedICSkipButtonIndex; // @synthesize lastSelectedICSkipButtonIndex=_lastSelectedICSkipButtonIndex;
@property _Bool skipButtonDisplayMode; // @synthesize skipButtonDisplayMode=_skipButtonDisplayMode;
@property(retain) IDLabel *labelLowVolumeMessage; // @synthesize labelLowVolumeMessage=_labelLowVolumeMessage;
@property(retain) IDPopupView *lowVolumePopupView; // @synthesize lowVolumePopupView=_lowVolumePopupView;
@property _Bool volumePopupShownSinceLastConnect; // @synthesize volumePopupShownSinceLastConnect=_volumePopupShownSinceLastConnect;
@property long long totalTrackTimeSecs; // @synthesize totalTrackTimeSecs=_totalTrackTimeSecs;
@property long long currentTrackTimeSecs; // @synthesize currentTrackTimeSecs=_currentTrackTimeSecs;
@property long long currentCheckmarkPosition; // @synthesize currentCheckmarkPosition=_currentCheckmarkPosition;
@property(retain, nonatomic) NSTimer *playbackStateUpdateTimer; // @synthesize playbackStateUpdateTimer=_playbackStateUpdateTimer;
@property _Bool statusMessageShown; // @synthesize statusMessageShown=_statusMessageShown;
@property(retain) NSDate *lastSetCoverArtTime; // @synthesize lastSetCoverArtTime=_lastSetCoverArtTime;
@property(retain) MainScreenID5View *mainScreenID5View; // @synthesize mainScreenID5View=_mainScreenID5View;
@property(retain) MainScreenView *mainScreenView; // @synthesize mainScreenView=_mainScreenView;
@property(retain) RAPIMainScreenConfig *config; // @synthesize config=_config;
@property(retain) NSString *currentTrackName; // @synthesize currentTrackName=_currentTrackName;
@property(retain) NSString *currentArtistName; // @synthesize currentArtistName=_currentArtistName;
@property(nonatomic) _Bool progressBarVisible; // @synthesize progressBarVisible=_progressBarVisible;
- (void)delegate_onSkipNext;
- (void)delegate_onSkipPrev;
- (void)delegate_onSeekToPosition:(float)arg1;
- (_Bool)delegate_currentPlaylistAvailable;
- (id)delegate_getSkipNextTrackLabel;
- (id)delegate_getSkipPreviousTrackLabel;
- (_Bool)delegate_canSkipNext;
- (_Bool)delegate_canSkipPrev;
- (id)delegate_getLoadingLabel;
- (long long)delegate_getTargetScreenForRow:(long long)arg1 forGroup:(long long)arg2;
- (id)delegate_getStringForLine:(long long)arg1 forRow:(long long)arg2;
- (long long)delegate_getItemCount;
- (_Bool)delegate_canProvideDataImmediately;
- (void)onEntertainmentActive:(_Bool)arg1;
- (void)updateFocus;
- (void)showLoadingMessage;
- (void)showErrorMessage:(id)arg1;
- (void)onDisconnectedFromHeadunit;
- (void)onConnectedToHeadunit;
- (void)updateScreenContent;
- (void)invalidateScreenWithErrorMessage:(id)arg1;
- (_Bool)canProvideDataImmediately;
- (void)onFocusLost;
- (void)onFocusGained:(long long)arg1;
- (void)onViewAppeared;
- (id)getScreenDelegate;
- (void)onLowVolumePopupConfirmButton:(id)arg1;
- (void)updateVolumePopup;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)displayVolumePopupIfRequired;
- (void)hideStatusMessage;
- (void)showStatusMessage:(id)arg1 displayProgressIndicator:(_Bool)arg2;
- (void)instrumentCluster:(id)arg1 didSelectPlaylistItemAtIndex:(unsigned long long)arg2;
- (id)instrumentCluster:(id)arg1 playlistItemAtIndex:(unsigned long long)arg2;
- (long long)numberOfInstrumentClusterPlaylistItems:(id)arg1;
- (id)audioPlayer:(id)arg1 playlistItemAtIndex:(unsigned long long)arg2;
- (long long)numberOfAudioPlayerPlaylistItems:(id)arg1;
- (void)onProgressBarTouchDebounceTimer:(id)arg1;
- (void)audioPlayer:(id)arg1 didReceiveProgressBarTouch:(id)arg2;
- (void)audioPlayerDidSelectAlbum:(id)arg1;
- (void)audioPlayerDidSelectArtist:(id)arg1;
- (void)audioPlayer:(id)arg1 didSelectPlaylistItemAtIndex:(long long)arg2;
- (void)selectCurrentPlaylistTrack:(long long)arg1;
- (long long)getPlaylistItemAtIndex:(long long)arg1 artist:(id *)arg2 album:(id *)arg3 title:(id *)arg4;
- (long long)playlistItemCount;
- (void)setCheckmarkPosition:(long long)arg1 forGroup:(long long)arg2;
- (void)setToolbarTargetScreen:(long long)arg1 forButton:(long long)arg2;
- (void)setToolbarImage:(id)arg1 forButton:(long long)arg2;
- (void)setToolbarTooltip:(id)arg1 forButton:(long long)arg2;
- (void)setToolbarButtonVisible:(_Bool)arg1 forButton:(long long)arg2;
- (void)setToolbarButtonHoverable:(_Bool)arg1 clickable:(_Bool)arg2 forButton:(long long)arg3;
- (void)setupToolbar;
- (void)toolbarButtonPressedWithIndex:(long long)arg1;
- (void)toolbarButtonPressed:(id)arg1;
- (void)updatePlaybackState;
- (void)updateCoverArt;
- (void)setCoverArt:(id)arg1;
- (void)updateRemainingTrackTime;
- (void)setCurrentTrackTime:(long long)arg1;
- (void)setTotalTrackTime:(long long)arg1;
- (void)setCurrentTrackProgress:(float)arg1;
- (void)updateProgressBarVisibility;
- (void)setLogoVisible:(unsigned char)arg1;
- (void)updateMetaData;
- (void)setTrackIndex:(long long)arg1 trackCount:(long long)arg2;
- (void)setTrackIconVisible:(_Bool)arg1;
- (void)setAlbumIconVisible:(_Bool)arg1;
- (void)setArtistIconVisible:(_Bool)arg1;
- (void)setTrackIcon:(id)arg1;
- (void)setAlbumIcon:(id)arg1;
- (void)setArtistIcon:(id)arg1;
- (void)setTrackName:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 andContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
