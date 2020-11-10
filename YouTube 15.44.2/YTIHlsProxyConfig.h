//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIHlsProxyConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float bitrateEstimateScale; // @dynamic bitrateEstimateScale;
@property(copy, nonatomic) NSString *condensedURLPrefix; // @dynamic condensedURLPrefix;
@property(nonatomic) int defaultInitialBitrate; // @dynamic defaultInitialBitrate;
@property(nonatomic) int deterministicOutputVersion; // @dynamic deterministicOutputVersion;
@property(nonatomic) _Bool doNotCache; // @dynamic doNotCache;
@property(nonatomic) _Bool enableFmp4; // @dynamic enableFmp4;
@property(nonatomic) _Bool enableMediaPlaylistProxy; // @dynamic enableMediaPlaylistProxy;
@property(nonatomic) _Bool enableMediaRedirect; // @dynamic enableMediaRedirect;
@property(nonatomic) _Bool enablePlaylistErrorBlacklist; // @dynamic enablePlaylistErrorBlacklist;
@property(nonatomic) _Bool enableProxy; // @dynamic enableProxy;
@property(nonatomic) int fmp4MaxTargetDuration; // @dynamic fmp4MaxTargetDuration;
@property(nonatomic) int forcedManifestRefreshIntervalMs; // @dynamic forcedManifestRefreshIntervalMs;
@property(nonatomic) _Bool hasBitrateEstimateScale; // @dynamic hasBitrateEstimateScale;
@property(nonatomic) _Bool hasCondensedURLPrefix; // @dynamic hasCondensedURLPrefix;
@property(nonatomic) _Bool hasDefaultInitialBitrate; // @dynamic hasDefaultInitialBitrate;
@property(nonatomic) _Bool hasDeterministicOutputVersion; // @dynamic hasDeterministicOutputVersion;
@property(nonatomic) _Bool hasDoNotCache; // @dynamic hasDoNotCache;
@property(nonatomic) _Bool hasEnableFmp4; // @dynamic hasEnableFmp4;
@property(nonatomic) _Bool hasEnableMediaPlaylistProxy; // @dynamic hasEnableMediaPlaylistProxy;
@property(nonatomic) _Bool hasEnableMediaRedirect; // @dynamic hasEnableMediaRedirect;
@property(nonatomic) _Bool hasEnablePlaylistErrorBlacklist; // @dynamic hasEnablePlaylistErrorBlacklist;
@property(nonatomic) _Bool hasEnableProxy; // @dynamic hasEnableProxy;
@property(nonatomic) _Bool hasFmp4MaxTargetDuration; // @dynamic hasFmp4MaxTargetDuration;
@property(nonatomic) _Bool hasForcedManifestRefreshIntervalMs; // @dynamic hasForcedManifestRefreshIntervalMs;
@property(nonatomic) _Bool hasHlsChunkHost; // @dynamic hasHlsChunkHost;
@property(nonatomic) _Bool hasIgnoreLivePlaylistFetchErrors; // @dynamic hasIgnoreLivePlaylistFetchErrors;
@property(nonatomic) _Bool hasIndepdendentSegments; // @dynamic hasIndepdendentSegments;
@property(nonatomic) _Bool hasInitialStreamSelectionStrategy; // @dynamic hasInitialStreamSelectionStrategy;
@property(nonatomic) _Bool hasLivePlaylistMaxLengthSeconds; // @dynamic hasLivePlaylistMaxLengthSeconds;
@property(nonatomic) _Bool hasMaxInitialBitrate; // @dynamic hasMaxInitialBitrate;
@property(nonatomic) _Bool hasPlaylistFetchMaxRetries; // @dynamic hasPlaylistFetchMaxRetries;
@property(nonatomic) _Bool hasPlaylistFetchTimeoutMs; // @dynamic hasPlaylistFetchTimeoutMs;
@property(nonatomic) _Bool hasUseAverageBandwidth; // @dynamic hasUseAverageBandwidth;
@property(nonatomic) _Bool hasUseErrorTolerantParser; // @dynamic hasUseErrorTolerantParser;
@property(nonatomic) _Bool hasUseHlsLivePlaybackStart; // @dynamic hasUseHlsLivePlaybackStart;
@property(nonatomic) _Bool hasUseNewPlaylistCache; // @dynamic hasUseNewPlaylistCache;
@property(copy, nonatomic) NSString *hlsChunkHost; // @dynamic hlsChunkHost;
@property(nonatomic) _Bool ignoreLivePlaylistFetchErrors; // @dynamic ignoreLivePlaylistFetchErrors;
@property(nonatomic) _Bool indepdendentSegments; // @dynamic indepdendentSegments;
@property(nonatomic) int initialStreamSelectionStrategy; // @dynamic initialStreamSelectionStrategy;
@property(nonatomic) float livePlaylistMaxLengthSeconds; // @dynamic livePlaylistMaxLengthSeconds;
@property(nonatomic) int maxInitialBitrate; // @dynamic maxInitialBitrate;
@property(nonatomic) int playlistFetchMaxRetries; // @dynamic playlistFetchMaxRetries;
@property(nonatomic) int playlistFetchTimeoutMs; // @dynamic playlistFetchTimeoutMs;
@property(nonatomic) _Bool useAverageBandwidth; // @dynamic useAverageBandwidth;
@property(nonatomic) _Bool useErrorTolerantParser; // @dynamic useErrorTolerantParser;
@property(nonatomic) _Bool useHlsLivePlaybackStart; // @dynamic useHlsLivePlaybackStart;
@property(nonatomic) _Bool useNewPlaylistCache; // @dynamic useNewPlaylistCache;

@end

