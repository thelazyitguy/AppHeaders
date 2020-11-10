//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NflxMovieDetails;
@protocol AppleNativeStorage, NfSubtitleAudioControllerInternal;

@interface AudioSubtitleProcessor : NSObject
{
    _Bool _fixAtmosReportingIssue;
    _Bool _supportAtmos;
    _Bool _doZxxFnFix;
    _Bool _useExtendedLanguageTagForAudio;
    unsigned int _foundKbpsAudioStream;
    NSObject<AppleNativeStorage> *_storage;
    NflxMovieDetails *_movieDetails;
    NSArray *_subtitleOptions;
    NSArray *_audioOptions;
    NSArray *_subsetSubtitleOptions;
    NSArray *_imageBasedSubtitleViewArray;
    id <NfSubtitleAudioControllerInternal> _audioSubtitleDelegate;
    long long _foundAudioProfile;
    long long _atmosKbps;
    long long _ddpKbps;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useExtendedLanguageTagForAudio; // @synthesize useExtendedLanguageTagForAudio=_useExtendedLanguageTagForAudio;
@property(nonatomic) _Bool doZxxFnFix; // @synthesize doZxxFnFix=_doZxxFnFix;
@property(nonatomic) long long ddpKbps; // @synthesize ddpKbps=_ddpKbps;
@property(nonatomic) long long atmosKbps; // @synthesize atmosKbps=_atmosKbps;
@property(nonatomic) _Bool supportAtmos; // @synthesize supportAtmos=_supportAtmos;
@property(nonatomic) long long foundAudioProfile; // @synthesize foundAudioProfile=_foundAudioProfile;
@property(nonatomic) _Bool fixAtmosReportingIssue; // @synthesize fixAtmosReportingIssue=_fixAtmosReportingIssue;
@property(retain, nonatomic) id <NfSubtitleAudioControllerInternal> audioSubtitleDelegate; // @synthesize audioSubtitleDelegate=_audioSubtitleDelegate;
@property(retain, nonatomic) NSArray *imageBasedSubtitleViewArray; // @synthesize imageBasedSubtitleViewArray=_imageBasedSubtitleViewArray;
@property(retain, nonatomic) NSArray *subsetSubtitleOptions; // @synthesize subsetSubtitleOptions=_subsetSubtitleOptions;
@property(retain, nonatomic) NSArray *audioOptions; // @synthesize audioOptions=_audioOptions;
@property(retain, nonatomic) NSArray *subtitleOptions; // @synthesize subtitleOptions=_subtitleOptions;
@property(retain, nonatomic) NflxMovieDetails *movieDetails; // @synthesize movieDetails=_movieDetails;
@property(readonly, nonatomic) NSObject<AppleNativeStorage> *storage; // @synthesize storage=_storage;
@property(nonatomic) unsigned int foundKbpsAudioStream; // @synthesize foundKbpsAudioStream=_foundKbpsAudioStream;
- (void)storeSubtitleOption:(id)arg1;
- (void)storeAudioOption:(id)arg1;
- (id)translateSubsetToSubtitleOption:(id)arg1 forAudioOption:(id)arg2;
- (id)translateSubtitleOptionToSubset:(id)arg1 forAudioOption:(id)arg2;
- (id)findForcedNarrativeSubtitleOptionForAudioOption:(id)arg1;
- (id)imageSubtitleForSubtitleOption:(id)arg1;
- (id)resolveSubtitleSelectionOption:(id)arg1 forSubtitleGroup:(id)arg2;
- (id)playbackSubtitleOptionForSubtitlePref:(id)arg1 forcedNarrativePref:(_Bool)arg2 closedCaptionedPref:(_Bool)arg3;
- (id)resolvePlaybackSubtitleOptionForImageBased:(id)arg1;
- (id)resolvePlaybackSubtitleOption:(id)arg1;
- (id)resolveOfflinePlaybackSubtitleOption:(id)arg1;
- (_Bool)audioOption:(id)arg1 downloadableId:(id)arg2;
- (id)mediaTrackIdForAudioOption:(id)arg1;
- (unsigned int)channelsFromTrackOptions:(id)arg1;
- (id)downloadableIdFromTrackOptions:(id)arg1;
- (unsigned int)kbpsFromTrackOptions:(id)arg1;
- (id)entryFromTrackOptions:(id)arg1;
- (void)audioStreamSelected:(id)arg1 downloadableId:(id)arg2;
- (id)resolveAudioSelectionOption:(id)arg1 forAudibleGroup:(id)arg2;
- (id)playbackAudioOptionForAudioPref:(id)arg1 assistiveAudioPref:(_Bool)arg2;
- (id)resolvePlaybackAudioOption:(id)arg1;
- (id)resolveOfflinePlaybackAudioOption:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

