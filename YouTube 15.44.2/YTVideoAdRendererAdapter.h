//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTAdWithVideoAdTracking.h>

@class GIMMe, NSArray, NSData, NSDictionary, NSObject, NSString, NSURL, YTAdFrequencyCaps, YTAdParameters, YTIPlayerResponse, YTIVideoAdRenderer, YTIWatchNextResponse, YTPlayerResponse;
@protocol YTInstreamAd, YTPlayerService, YTResponder;

@interface YTVideoAdRendererAdapter : YTAdWithVideoAdTracking
{
    NSArray *_progressPings;
    _Bool _isPlayable;
    NSDictionary *_csiData;
    id <YTResponder> _firstResponder;
    id <YTPlayerService> _playerService;
    _Bool _fallbackAllowed;
    int _adSystem;
    int _adType;
    NSURL *_VATTURL;
    YTAdFrequencyCaps *_adFrequencyCaps;
    NSArray *_adIDs;
    YTAdParameters *_adParameters;
    YTIPlayerResponse *_adPlayerData;
    YTPlayerResponse *_adPlayerResponse;
    NSArray *_adSystems;
    NSURL *_adTagURL;
    YTIWatchNextResponse *_adWatchNextResponse;
    double _duration;
    NSString *_hostVideoID;
    NSObject<YTInstreamAd> *_prefetchedAd;
    NSArray *_requestDates;
    NSURL *_streamURL;
    GIMMe *_gimme;
    YTIVideoAdRenderer *_videoAdRenderer;
    YTIPlayerResponse *_playerResponse;
    NSData *_trackingParams;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *trackingParams; // @synthesize trackingParams=_trackingParams;
@property(retain, nonatomic) YTIPlayerResponse *playerResponse; // @synthesize playerResponse=_playerResponse;
@property(retain, nonatomic) YTIVideoAdRenderer *videoAdRenderer; // @synthesize videoAdRenderer=_videoAdRenderer;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)streamURL;
- (id)requestDates;
- (id)prefetchedAd;
- (void)setHostVideoID:(id)arg1;
- (id)hostVideoID;
- (_Bool)fallbackAllowed;
- (double)duration;
- (void)setAdWatchNextResponse:(id)arg1;
- (id)adWatchNextResponse;
- (int)adType;
- (void)setAdTagURL:(id)arg1;
- (id)adTagURL;
- (id)adSystems;
- (int)adSystem;
- (void)setAdPlayerResponse:(id)arg1;
- (id)adPlayerResponse;
- (id)adPlayerData;
- (id)adParameters;
- (id)adIDs;
- (id)adFrequencyCaps;
- (id)VATTURL;
- (id)overlayRenderer;
- (_Bool)isImmersiveSurveyWithAdPlayback;
- (_Bool)isSurveyAccompanyingVideo;
- (id)visitAdvertiserLink;
- (_Bool)isPharmaAd;
- (id)adInfoCommand;
- (id)brandInteractionRenderer;
- (id)findFirstMediaFile:(id)arg1 matching:(CDUnknownBlockType)arg2;
- (id)bestFileFrom:(id)arg1;
- (void)setPlayerResponseData:(id)arg1;
- (void)setupCsiData;
- (void)setupAdFrequencyCaps;
- (id)playerRequestFromSerializedRequest;
- (id)adLayoutLoggingData;
- (id)entersPlayerStateMiniCommands;
- (id)entersPlayerStateNormalCommands;
- (id)progressCommands;
- (id)surveyVideoDismissCommands;
- (id)instreamAdCompleteCommands;
- (id)abandonCommands;
- (id)endFullscreenCommands;
- (id)fullscreenCommands;
- (id)clickthroughCommands;
- (id)closeCommands;
- (id)skipCommands;
- (id)resumeCommands;
- (id)pauseCommands;
- (id)errorCommands;
- (id)impressionCommands;
- (void)setAdIndex:(int)arg1 totalAdsInPod:(int)arg2;
- (void)loadPlayerResponseWithResponseBlock:(CDUnknownBlockType)arg1;
- (_Bool)isUnderMinSkipDuration:(double)arg1;
- (_Bool)isPlayable;
- (_Bool)isVideo;
- (_Bool)isSurvey;
- (id)YouTubeVideoID;
- (_Bool)hasPrefetchedVATTWrapper;
- (_Bool)hasPrefetchedAd;
- (_Bool)hasVATTWrapper;
- (_Bool)isWrapper;
- (_Bool)isFilledAd;
- (_Bool)isEmpty;
- (_Bool)isInnerTubeAd;
- (_Bool)isForecastingAd;
- (int)adInstreamType;
- (id)playbackReportingAdFormat;
- (double)skipOffset;
- (_Bool)isSkippable;
- (void)setOffline:(_Bool)arg1;
- (_Bool)isOffline;
- (id)clickthroughEndpoint;
- (void)updateAdTagWithMacros:(id)arg1;
- (id)initWithVideoAdTracking:(id)arg1;
- (id)initWithVideoAdRenderer:(id)arg1 firstResponder:(id)arg2;

@end

