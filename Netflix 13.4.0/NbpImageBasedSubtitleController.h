//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NFImageBasedSubtitleController-Protocol.h>

@class BladeRunnerPlaybackReporter, ISCParser, NSArray, NSData, NSDictionary, NSString, NSTimer;
@protocol NFImageBasedSubtitleViewProvider, NfSubtitleAudioController, PlatformConfigProvider;

@interface NbpImageBasedSubtitleController : NSObject <NFImageBasedSubtitleController>
{
    _Bool _airplayActive;
    _Bool _forceRebuffers;
    _Bool _additionalLoggingForISCAroundTimeouts;
    _Bool _notificationStall;
    _Bool _dontSendIntrplay;
    id <NFImageBasedSubtitleViewProvider> _viewProvider;
    BladeRunnerPlaybackReporter *_playbackReporter;
    id <PlatformConfigProvider> _platformConfig;
    ISCParser *_iscParser;
    long long _subtitleWidth;
    long long _subtitleHeight;
    NSArray *_imageBasedSubtitleGroup;
    NSDictionary *_imageBasedSubtitleSelected;
    NSTimer *_imageBasedSubtitlesTimer;
    long long _timeInMS;
    long long _timerUpdateCounter;
    long long _playerTimerCounter;
    long long _timeInMsLoadSubtitles;
    long long _timeInMsSelectSubtitles;
    NSData *_offlineData;
    id <NfSubtitleAudioController> _playbackDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool dontSendIntrplay; // @synthesize dontSendIntrplay=_dontSendIntrplay;
@property(nonatomic) _Bool notificationStall; // @synthesize notificationStall=_notificationStall;
@property(nonatomic) _Bool additionalLoggingForISCAroundTimeouts; // @synthesize additionalLoggingForISCAroundTimeouts=_additionalLoggingForISCAroundTimeouts;
@property(nonatomic) __weak id <NfSubtitleAudioController> playbackDelegate; // @synthesize playbackDelegate=_playbackDelegate;
@property(copy, nonatomic) NSData *offlineData; // @synthesize offlineData=_offlineData;
@property(nonatomic) long long timeInMsSelectSubtitles; // @synthesize timeInMsSelectSubtitles=_timeInMsSelectSubtitles;
@property(nonatomic) long long timeInMsLoadSubtitles; // @synthesize timeInMsLoadSubtitles=_timeInMsLoadSubtitles;
@property(nonatomic) long long playerTimerCounter; // @synthesize playerTimerCounter=_playerTimerCounter;
@property(nonatomic) long long timerUpdateCounter; // @synthesize timerUpdateCounter=_timerUpdateCounter;
@property(nonatomic) long long timeInMS; // @synthesize timeInMS=_timeInMS;
@property(retain, nonatomic) NSTimer *imageBasedSubtitlesTimer; // @synthesize imageBasedSubtitlesTimer=_imageBasedSubtitlesTimer;
@property(copy, nonatomic) NSDictionary *imageBasedSubtitleSelected; // @synthesize imageBasedSubtitleSelected=_imageBasedSubtitleSelected;
@property(copy, nonatomic) NSArray *imageBasedSubtitleGroup; // @synthesize imageBasedSubtitleGroup=_imageBasedSubtitleGroup;
@property(nonatomic) long long subtitleHeight; // @synthesize subtitleHeight=_subtitleHeight;
@property(nonatomic) long long subtitleWidth; // @synthesize subtitleWidth=_subtitleWidth;
@property(retain, nonatomic) ISCParser *iscParser; // @synthesize iscParser=_iscParser;
@property(retain, nonatomic) id <PlatformConfigProvider> platformConfig; // @synthesize platformConfig=_platformConfig;
@property(nonatomic) _Bool forceRebuffers; // @synthesize forceRebuffers=_forceRebuffers;
@property(nonatomic) _Bool airplayActive; // @synthesize airplayActive=_airplayActive;
@property(nonatomic) __weak BladeRunnerPlaybackReporter *playbackReporter; // @synthesize playbackReporter=_playbackReporter;
@property(nonatomic) __weak id <NFImageBasedSubtitleViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
- (void)disposeImageBasedSubtitles;
- (void)presentImageBasedSubtitles;
- (void)resume;
- (void)suspend;
- (void)disableImageBasedSubtitlesTimer;
- (void)enableImageBasedSubtitlesTimer;
- (_Bool)selected;
- (_Bool)selectedForcedNarrative;
- (_Bool)selectedClosedCaption;
- (id)selectedBCP47;
- (void)timeUpdate:(unsigned int)arg1;
- (void)updateTimer:(id)arg1;
- (id)errorCode:(long long)arg1 errorMessage:(id)arg2;
- (void)loadImageBasedSubtitleGroup:(id)arg1;
- (void)updateISCFromPlaylistEntry:(id)arg1;
- (void)selectISC:(id)arg1 details:(id)arg2;
- (void)stopSubtitles;
- (id)initWithManifestImageBasedSubtitleInformation:(id)arg1 playbackDelegate:(id)arg2 playbackReporter:(id)arg3 platformConfig:(id)arg4;
- (_Bool)selectSubtitleFromName:(id)arg1;
- (_Bool)selectImageBasedSubtitle:(id)arg1;
- (void)deselectSubtitle;
- (void)circulateSubtitlesWithArray:(id)arg1;
- (void)cleanUpImageBasedSubtitles;
- (void)userInteraction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

