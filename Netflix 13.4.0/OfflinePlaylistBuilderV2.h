//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/PlaylistBuilder-Protocol.h>

@class NSDictionary, NSMutableArray, NSNumber, NSString;
@protocol InititalBandwidthCapReporterDelegate, PlatformConfigProvider, PlaylistBuilderDelegate;

@interface OfflinePlaylistBuilderV2 : NSObject <PlaylistBuilder>
{
    _Bool _supportFairplay;
    _Bool _isExternalDisplay;
    _Bool _isVariablesInPlaylistEnabled;
    _Bool _isBranchingStreamSelectionEnabled;
    _Bool _isOffline;
    _Bool _isWifi;
    _Bool _isHEVCSupported;
    _Bool _isDVSupported;
    _Bool _is1440PlaybackEnabled;
    _Bool _supportNonSyntheticCdns;
    int _maxBufferingTimeMs;
    int _minPrebufferSize;
    float _assumedMediaRateForPrebuffering;
    NSString *_dateTimeTag;
    NSNumber *_totalPlaylistTimeNumber;
    NSString *_playbackId;
    NSString *_protocolPrefix;
    NSString *_fpsappcertVer;
    NSString *_deviceModel;
    long long _mediaCombinationMode;
    id <PlatformConfigProvider> _playbackConfig;
    id <PlaylistBuilderDelegate> _playlistBuilderDelegate;
    id <InititalBandwidthCapReporterDelegate> _inititalBandwidthCapReporterDelegate;
    NSMutableArray *_segmentList;
    NSDictionary *_profilePreferenceRankings;
}

- (void).cxx_destruct;
@property(nonatomic) float assumedMediaRateForPrebuffering; // @synthesize assumedMediaRateForPrebuffering=_assumedMediaRateForPrebuffering;
@property(nonatomic) int minPrebufferSize; // @synthesize minPrebufferSize=_minPrebufferSize;
@property(nonatomic) int maxBufferingTimeMs; // @synthesize maxBufferingTimeMs=_maxBufferingTimeMs;
@property(retain, nonatomic) NSDictionary *profilePreferenceRankings; // @synthesize profilePreferenceRankings=_profilePreferenceRankings;
@property(retain, nonatomic) NSMutableArray *segmentList; // @synthesize segmentList=_segmentList;
@property(nonatomic) __weak id <InititalBandwidthCapReporterDelegate> inititalBandwidthCapReporterDelegate; // @synthesize inititalBandwidthCapReporterDelegate=_inititalBandwidthCapReporterDelegate;
@property(nonatomic) __weak id <PlaylistBuilderDelegate> playlistBuilderDelegate; // @synthesize playlistBuilderDelegate=_playlistBuilderDelegate;
@property(nonatomic) __weak id <PlatformConfigProvider> playbackConfig; // @synthesize playbackConfig=_playbackConfig;
@property(nonatomic) _Bool supportNonSyntheticCdns; // @synthesize supportNonSyntheticCdns=_supportNonSyntheticCdns;
@property(nonatomic) long long mediaCombinationMode; // @synthesize mediaCombinationMode=_mediaCombinationMode;
@property(nonatomic) _Bool is1440PlaybackEnabled; // @synthesize is1440PlaybackEnabled=_is1440PlaybackEnabled;
@property(nonatomic) _Bool isDVSupported; // @synthesize isDVSupported=_isDVSupported;
@property(nonatomic) _Bool isHEVCSupported; // @synthesize isHEVCSupported=_isHEVCSupported;
@property(nonatomic) _Bool isWifi; // @synthesize isWifi=_isWifi;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(nonatomic) _Bool isBranchingStreamSelectionEnabled; // @synthesize isBranchingStreamSelectionEnabled=_isBranchingStreamSelectionEnabled;
@property(nonatomic) _Bool isVariablesInPlaylistEnabled; // @synthesize isVariablesInPlaylistEnabled=_isVariablesInPlaylistEnabled;
@property(nonatomic) _Bool isExternalDisplay; // @synthesize isExternalDisplay=_isExternalDisplay;
@property(nonatomic) _Bool supportFairplay; // @synthesize supportFairplay=_supportFairplay;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSString *fpsappcertVer; // @synthesize fpsappcertVer=_fpsappcertVer;
@property(copy, nonatomic) NSString *protocolPrefix; // @synthesize protocolPrefix=_protocolPrefix;
@property(copy, nonatomic) NSString *playbackId; // @synthesize playbackId=_playbackId;
@property(retain, nonatomic) NSNumber *totalPlaylistTimeNumber; // @synthesize totalPlaylistTimeNumber=_totalPlaylistTimeNumber;
@property(retain, nonatomic) NSString *dateTimeTag; // @synthesize dateTimeTag=_dateTimeTag;
- (void)updatePlaylist:(id)arg1 withVideoTrack:(id)arg2 audioGroups:(id)arg3 movieDetails:(id)arg4 movieHeaderDownloader:(id)arg5 hasSubtitles:(_Bool)arg6 rankedCdns:(id)arg7 forExternalDisplay:(_Bool)arg8;
- (void)updatePlaylist:(id)arg1 withVideoStreams:(id)arg2 audioGroups:(id)arg3 movieDetails:(id)arg4 movieHeaderDownloader:(id)arg5 hasSubtitles:(_Bool)arg6 rankedCdns:(id)arg7 forExternalDisplay:(_Bool)arg8;
- (void)addVideoTracksToPlaylist:(id)arg1 withAudioGroups:(id)arg2 manifest:(id)arg3 movieDetails:(id)arg4 movieHeaderDownloader:(id)arg5 hasSubtitles:(_Bool)arg6 rankedCdns:(id)arg7 forExternalDisplay:(_Bool)arg8;
- (void)addVideoTracksToPlaylistForBranching:(id)arg1 withAudioGroups:(id)arg2 manifest:(id)arg3 movieDetails:(id)arg4 movieHeaderDownloader:(id)arg5 hasSubtitles:(_Bool)arg6 rankedCdns:(id)arg7 forExternalDisplay:(_Bool)arg8;
- (void)updatePlaylist:(id)arg1 withAudioGroups:(id)arg2 movieDetails:(id)arg3 assistiveAudioEnabled:(_Bool)arg4;
- (id)collectAudioGroupsWithManifest:(id)arg1 rankedCdns:(id)arg2 assitiveAudioEnabled:(_Bool)arg3;
- (void)updateAudioGroups:(id)arg1 requiredLanguagesSet:(id)arg2 requiredAudioGroup:(id)arg3 withGroupToLanguageMap:(id)arg4;
- (void)filterAudioGroups:(id)arg1 missingLanguagesSet:(id)arg2 withGroupToLanguageMap:(id)arg3;
- (id)minimumAACGroupIdentifierFromGroupToLanguageMap:(id)arg1;
- (id)aacCodecId;
- (void)dumpVideoStreams:(id)arg1 ofName:(id)arg2;
- (id)buildWebVTTPlaylist:(id)arg1 movieDuration:(unsigned int)arg2 cdnId:(id)arg3;
- (id)buildDashIFramePlaylist:(id)arg1 cdnId:(id)arg2 movieDetails:(id)arg3;
- (_Bool)shouldEnableIFrames:(_Bool)arg1;
- (id)buildAVPlaylist:(id)arg1 streamMediaType:(long long)arg2 cdnId:(id)arg3 movieDetails:(id)arg4 maxSegmentInSecond:(long long)arg5 withMovieHeaderDownloader:(id)arg6;
- (id)getStreamUrl:(id)arg1 contentHeader:(id)arg2;
- (void)setTotalPlaylistTime:(double)arg1;
- (id)buildVariantPlaylist:(id)arg1 forKey:(id)arg2 withMovieHeaderDownloader:(id)arg3;
- (void)prepareVariantPlaylistWithMovieDetails:(id)arg1 forKey:(id)arg2 withMovieHeaderDownloader:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)buildMasterPlaylist:(id)arg1 forExternalDisplay:(_Bool)arg2 withManifest:(id)arg3 andMovieHeaderDownloader:(id)arg4;
- (_Bool)isAVCHighStream:(id)arg1;
- (_Bool)isHEVCStream:(id)arg1;
- (_Bool)isHDRStream:(id)arg1;
- (id)finalCodecConversion:(id)arg1 stream:(id)arg2;
- (_Bool)isHDR:(id)arg1;
- (_Bool)buildSubtitleGroups:(id)arg1 manifest:(id)arg2 rankedCdns:(id)arg3 movieDetails:(id)arg4;
- (id)validCdnForStream:(id)arg1 rankedCdns:(id)arg2;
- (_Bool)isAudioTrack:(id)arg1 inTrackPrefereceArray:(id)arg2;
- (_Bool)isTextTrack:(id)arg1 inTrackPrefereceArray:(id)arg2;
- (id)sortedVideoStreamsWithTrack:(id)arg1 movieDetails:(id)arg2 movieHeaderDownloader:(id)arg3;
- (void)pushLowerInitialBitRateUpFor:(id)arg1;
- (void)insertVideoStream:(id)arg1 toArray:(id)arg2 minimumBitrate:(unsigned int)arg3 maximumBitrate:(unsigned int)arg4 throughput:(unsigned int)arg5 videoHeightCap:(int)arg6;
- (_Bool)isFeasibleBelowMinimum:(int)arg1 andThroughput:(int)arg2;
- (_Bool)isFeasibleAboveMinimum:(int)arg1 andThroughput:(int)arg2;
- (int)bytesForMsOfBitrate:(int)arg1 andkBpsBitRate:(int)arg2;
- (int)msForBytesOfBitrate:(int)arg1 andkBpsBitRate:(int)arg2;
- (id)interleavedArrayWithArray:(id)arg1 andArray:(id)arg2 andArray:(id)arg3;
- (id)codecsForProfile:(long long)arg1;
- (int)determinePeakBandwidthFrom:(int)arg1 fallbackTo:(int)arg2;
- (id)hlsVersion;
- (void)setupButteringTimeLimits;
- (void)dealloc;
- (id)initWithPlaybackId:(id)arg1 protocolPrefix:(id)arg2 fpsappcertVer:(id)arg3 playlistBuilderDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
