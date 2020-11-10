//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTIAdPlaybackContext, YTIAnnotationTracking, YTIInfoCardCollection, YTILivePlaybackContext, YTIVast;

@interface YTIPlayerWatchEndpointParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int adDurationMs; // @dynamic adDurationMs;
@property(retain, nonatomic) YTIAdPlaybackContext *adPlaybackContext; // @dynamic adPlaybackContext;
@property(copy, nonatomic) NSString *adQueryId; // @dynamic adQueryId;
@property(retain, nonatomic) YTIInfoCardCollection *adsInfoCards; // @dynamic adsInfoCards;
@property(nonatomic) _Bool ageVerificationFlowCompleted; // @dynamic ageVerificationFlowCompleted;
@property(retain, nonatomic) YTIAnnotationTracking *annotationTracking; // @dynamic annotationTracking;
@property(nonatomic) _Bool autonav; // @dynamic autonav;
@property(nonatomic) unsigned int autoplayCount; // @dynamic autoplayCount;
@property(nonatomic) _Bool canOptimisticallyCutAdForYtr; // @dynamic canOptimisticallyCutAdForYtr;
@property(nonatomic) _Bool captionsAtPlaybackStartEnabled; // @dynamic captionsAtPlaybackStartEnabled;
@property(nonatomic) long long endTimeSeconds; // @dynamic endTimeSeconds;
@property(copy, nonatomic) NSString *forceAdEncrypted; // @dynamic forceAdEncrypted;
@property(nonatomic) _Bool hasAdDurationMs; // @dynamic hasAdDurationMs;
@property(nonatomic) _Bool hasAdPlaybackContext; // @dynamic hasAdPlaybackContext;
@property(nonatomic) _Bool hasAdQueryId; // @dynamic hasAdQueryId;
@property(nonatomic) _Bool hasAdsInfoCards; // @dynamic hasAdsInfoCards;
@property(nonatomic) _Bool hasAgeVerificationFlowCompleted; // @dynamic hasAgeVerificationFlowCompleted;
@property(nonatomic) _Bool hasAnnotationTracking; // @dynamic hasAnnotationTracking;
@property(nonatomic) _Bool hasAutonav; // @dynamic hasAutonav;
@property(nonatomic) _Bool hasAutoplayCount; // @dynamic hasAutoplayCount;
@property(nonatomic) _Bool hasCanOptimisticallyCutAdForYtr; // @dynamic hasCanOptimisticallyCutAdForYtr;
@property(nonatomic) _Bool hasCaptionsAtPlaybackStartEnabled; // @dynamic hasCaptionsAtPlaybackStartEnabled;
@property(nonatomic) _Bool hasEndTimeSeconds; // @dynamic hasEndTimeSeconds;
@property(nonatomic) _Bool hasForceAdEncrypted; // @dynamic hasForceAdEncrypted;
@property(nonatomic) _Bool hasIbaDisabled; // @dynamic hasIbaDisabled;
@property(nonatomic) _Bool hasInlinePlayback; // @dynamic hasInlinePlayback;
@property(nonatomic) _Bool hasIsEditor; // @dynamic hasIsEditor;
@property(nonatomic) _Bool hasIsFromReels; // @dynamic hasIsFromReels;
@property(nonatomic) _Bool hasIsGamingHeroVideo; // @dynamic hasIsGamingHeroVideo;
@property(nonatomic) _Bool hasIsInlineMuted; // @dynamic hasIsInlineMuted;
@property(nonatomic) _Bool hasIsInlineMutedControl; // @dynamic hasIsInlineMutedControl;
@property(nonatomic) _Bool hasIsLiveDestination; // @dynamic hasIsLiveDestination;
@property(nonatomic) _Bool hasIsMusicInlinePlayback; // @dynamic hasIsMusicInlinePlayback;
@property(nonatomic) _Bool hasIsMwebMutedAutoplay; // @dynamic hasIsMwebMutedAutoplay;
@property(nonatomic) _Bool hasIsPlaylistOverview; // @dynamic hasIsPlaylistOverview;
@property(nonatomic) _Bool hasIsSfvAudioItemPlayback; // @dynamic hasIsSfvAudioItemPlayback;
@property(nonatomic) _Bool hasIsSponsorshipsOfferVideo; // @dynamic hasIsSponsorshipsOfferVideo;
@property(nonatomic) _Bool hasIsTunederPlayback; // @dynamic hasIsTunederPlayback;
@property(nonatomic) _Bool hasIsTvPreview; // @dynamic hasIsTvPreview;
@property(nonatomic) _Bool hasIsUnpluggedHighlightPlayback; // @dynamic hasIsUnpluggedHighlightPlayback;
@property(nonatomic) _Bool hasIsUserRequestedStartTimeSeconds; // @dynamic hasIsUserRequestedStartTimeSeconds;
@property(nonatomic) _Bool hasKavCompleted; // @dynamic hasKavCompleted;
@property(nonatomic) _Bool hasLiveContext; // @dynamic hasLiveContext;
@property(nonatomic) _Bool hasLiveUtcStartTimeSeconds; // @dynamic hasLiveUtcStartTimeSeconds;
@property(nonatomic) _Bool hasNavigationConfidence; // @dynamic hasNavigationConfidence;
@property(nonatomic) _Bool hasPlaybackStartPaused; // @dynamic hasPlaybackStartPaused;
@property(nonatomic) _Bool hasSignInDismissed; // @dynamic hasSignInDismissed;
@property(nonatomic) _Bool hasStartRadioStation; // @dynamic hasStartRadioStation;
@property(nonatomic) _Bool hasStartTimeSeconds; // @dynamic hasStartTimeSeconds;
@property(nonatomic) _Bool hasVast; // @dynamic hasVast;
@property(nonatomic) _Bool ibaDisabled; // @dynamic ibaDisabled;
@property(nonatomic) _Bool inlinePlayback; // @dynamic inlinePlayback;
@property(nonatomic) _Bool isEditor; // @dynamic isEditor;
@property(nonatomic) _Bool isFromReels; // @dynamic isFromReels;
@property(nonatomic) _Bool isGamingHeroVideo; // @dynamic isGamingHeroVideo;
@property(nonatomic) _Bool isInlineMuted; // @dynamic isInlineMuted;
@property(nonatomic) _Bool isInlineMutedControl; // @dynamic isInlineMutedControl;
@property(nonatomic) _Bool isLiveDestination; // @dynamic isLiveDestination;
@property(nonatomic) _Bool isMusicInlinePlayback; // @dynamic isMusicInlinePlayback;
@property(nonatomic) _Bool isMwebMutedAutoplay; // @dynamic isMwebMutedAutoplay;
@property(nonatomic) _Bool isPlaylistOverview; // @dynamic isPlaylistOverview;
@property(nonatomic) _Bool isSfvAudioItemPlayback; // @dynamic isSfvAudioItemPlayback;
@property(nonatomic) _Bool isSponsorshipsOfferVideo; // @dynamic isSponsorshipsOfferVideo;
@property(nonatomic) _Bool isTunederPlayback; // @dynamic isTunederPlayback;
@property(nonatomic) _Bool isTvPreview; // @dynamic isTvPreview;
@property(nonatomic) _Bool isUnpluggedHighlightPlayback; // @dynamic isUnpluggedHighlightPlayback;
@property(nonatomic) _Bool isUserRequestedStartTimeSeconds; // @dynamic isUserRequestedStartTimeSeconds;
@property(nonatomic) _Bool kavCompleted; // @dynamic kavCompleted;
@property(retain, nonatomic) YTILivePlaybackContext *liveContext; // @dynamic liveContext;
@property(nonatomic) long long liveUtcStartTimeSeconds; // @dynamic liveUtcStartTimeSeconds;
@property(nonatomic) float navigationConfidence; // @dynamic navigationConfidence;
@property(nonatomic) _Bool playbackStartPaused; // @dynamic playbackStartPaused;
@property(nonatomic) _Bool signInDismissed; // @dynamic signInDismissed;
@property(nonatomic) _Bool startRadioStation; // @dynamic startRadioStation;
@property(nonatomic) long long startTimeSeconds; // @dynamic startTimeSeconds;
@property(retain, nonatomic) NSMutableArray *thirdPartyTrackingEventsArray; // @dynamic thirdPartyTrackingEventsArray;
@property(readonly, nonatomic) unsigned long long thirdPartyTrackingEventsArray_Count; // @dynamic thirdPartyTrackingEventsArray_Count;
@property(retain, nonatomic) YTIVast *vast; // @dynamic vast;

@end

