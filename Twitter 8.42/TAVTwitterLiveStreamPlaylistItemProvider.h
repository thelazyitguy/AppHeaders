//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TAVPlaylistItemProvider-Protocol.h>

@class NSString, TAVAnalyticsPlaylistItemMetadata, TAVCaptionsConfiguration, TAVTwitterBroadcastVideoContext, TFNTwitterAccount;
@protocol LHLSBandwidthSource, TAVPlayerOutputViewFactory, TAVTwitterFeatures;

@interface TAVTwitterLiveStreamPlaylistItemProvider : NSObject <TAVPlaylistItemProvider>
{
    _Bool _locationSharingRulesEnforced;
    _Bool _latestReplayPlaylist;
    TFNTwitterAccount *_account;
    id <TAVTwitterFeatures> _features;
    TAVAnalyticsPlaylistItemMetadata *_analyticsMetadata;
    TAVTwitterBroadcastVideoContext *_videoContext;
    TAVCaptionsConfiguration *_captionsConfiguration;
    id <TAVPlayerOutputViewFactory> _outputViewFactory;
    unsigned long long _maximumRetries;
    long long _hlsPlaylistLoadingPolicy;
    id <LHLSBandwidthSource> _lhlsBandwidthSource;
    CDStruct_1b6d18a9 _initialPlaybackTime;
    CDStruct_15b96cbe _bufferingConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <LHLSBandwidthSource> lhlsBandwidthSource; // @synthesize lhlsBandwidthSource=_lhlsBandwidthSource;
@property(readonly, nonatomic) long long hlsPlaylistLoadingPolicy; // @synthesize hlsPlaylistLoadingPolicy=_hlsPlaylistLoadingPolicy;
@property(readonly, nonatomic) unsigned long long maximumRetries; // @synthesize maximumRetries=_maximumRetries;
@property(readonly, nonatomic) id <TAVPlayerOutputViewFactory> outputViewFactory; // @synthesize outputViewFactory=_outputViewFactory;
@property(readonly, copy, nonatomic) TAVCaptionsConfiguration *captionsConfiguration; // @synthesize captionsConfiguration=_captionsConfiguration;
@property(readonly, nonatomic) CDStruct_15b96cbe bufferingConfiguration; // @synthesize bufferingConfiguration=_bufferingConfiguration;
@property(readonly, nonatomic) TAVTwitterBroadcastVideoContext *videoContext; // @synthesize videoContext=_videoContext;
@property(readonly, nonatomic) CDStruct_1b6d18a9 initialPlaybackTime; // @synthesize initialPlaybackTime=_initialPlaybackTime;
@property(readonly, nonatomic) _Bool latestReplayPlaylist; // @synthesize latestReplayPlaylist=_latestReplayPlaylist;
@property(readonly, nonatomic) _Bool locationSharingRulesEnforced; // @synthesize locationSharingRulesEnforced=_locationSharingRulesEnforced;
@property(readonly, copy, nonatomic) TAVAnalyticsPlaylistItemMetadata *analyticsMetadata; // @synthesize analyticsMetadata=_analyticsMetadata;
@property(readonly, nonatomic) id <TAVTwitterFeatures> features; // @synthesize features=_features;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (id)init;
- (id)private_playlistItemWithStreamStatus:(id)arg1 isLive:(_Bool)arg2 useTAVLHLSLib:(_Bool)arg3 lhlsPlayerClientVersion:(long long)arg4 cookies:(id)arg5;
- (void)private_handleStreamStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)providePlaylistItemWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccount:(id)arg1 features:(id)arg2 analyticsMetadata:(id)arg3 locationSharingRulesEnforced:(_Bool)arg4 latestReplayPlaylist:(_Bool)arg5 initialPlaybackTime:(CDStruct_1b6d18a9)arg6 videoContext:(id)arg7 bufferingConfiguration:(CDStruct_15b96cbe)arg8 captionsConfiguration:(id)arg9 outputViewFactory:(id)arg10 maximumRetries:(unsigned long long)arg11 hlsPlaylistLoadingPolicy:(long long)arg12 lhlsBandwidthSource:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

