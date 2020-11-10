//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBInt32Array, NSString;

@interface YTIPlayerLegacyDesktopWatchAdsRenderer_PlayerAdParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int ad3Module; // @dynamic ad3Module;
@property(copy, nonatomic) NSString *adAge; // @dynamic adAge;
@property(copy, nonatomic) NSString *adBreaks; // @dynamic adBreaks;
@property(nonatomic) int adDevice; // @dynamic adDevice;
@property(nonatomic) int adFlags; // @dynamic adFlags;
@property(copy, nonatomic) NSString *adGender; // @dynamic adGender;
@property(copy, nonatomic) NSString *adLanguageIso6392; // @dynamic adLanguageIso6392;
@property(nonatomic) int adLoggingFlag; // @dynamic adLoggingFlag;
@property(copy, nonatomic) NSString *adModule; // @dynamic adModule;
@property(copy, nonatomic) NSString *adPreroll; // @dynamic adPreroll;
@property(copy, nonatomic) NSString *adSlots; // @dynamic adSlots;
@property(copy, nonatomic) NSString *adTag; // @dynamic adTag;
@property(copy, nonatomic) NSString *adsenseVideoDocId; // @dynamic adsenseVideoDocId;
@property(copy, nonatomic) NSString *advideo; // @dynamic advideo;
@property(copy, nonatomic) NSString *afcRmFallback; // @dynamic afcRmFallback;
@property(nonatomic) _Bool aftv; // @dynamic aftv;
@property(nonatomic) _Bool afv; // @dynamic afv;
@property(copy, nonatomic) NSString *afvAdTag; // @dynamic afvAdTag;
@property(copy, nonatomic) NSString *afvAdTagRestrictedToInstream; // @dynamic afvAdTagRestrictedToInstream;
@property(nonatomic) int afvInstreamMax; // @dynamic afvInstreamMax;
@property(copy, nonatomic) NSString *afvInvideoAdTag; // @dynamic afvInvideoAdTag;
@property(nonatomic) _Bool afvMergeEnabled; // @dynamic afvMergeEnabled;
@property(nonatomic) _Bool allowAdInAutoplay; // @dynamic allowAdInAutoplay;
@property(nonatomic) _Bool allowAdsPayCreator; // @dynamic allowAdsPayCreator;
@property(nonatomic) _Bool allowBelowThePlayerCompanion; // @dynamic allowBelowThePlayerCompanion;
@property(nonatomic) int allowHtml5Ads; // @dynamic allowHtml5Ads;
@property(retain, nonatomic) GPBInt32Array *allowedAdsArray; // @dynamic allowedAdsArray;
@property(readonly, nonatomic) unsigned long long allowedAdsArray_Count; // @dynamic allowedAdsArray_Count;
@property(copy, nonatomic) NSString *amsBaseTag; // @dynamic amsBaseTag;
@property(nonatomic) _Bool applyFadeOnMidrolls; // @dynamic applyFadeOnMidrolls;
@property(copy, nonatomic) NSString *asLaunchedInCountry; // @dynamic asLaunchedInCountry;
@property(nonatomic) _Bool autoplay; // @dynamic autoplay;
@property(nonatomic) unsigned int c4; // @dynamic c4;
@property(copy, nonatomic) NSString *cafeExperimentId; // @dynamic cafeExperimentId;
@property(nonatomic) int cid; // @dynamic cid;
@property(copy, nonatomic) NSString *contentOwnerName; // @dynamic contentOwnerName;
@property(copy, nonatomic) NSString *coreDbp; // @dynamic coreDbp;
@property(copy, nonatomic) NSString *dbp; // @dynamic dbp;
@property(nonatomic) _Bool dclk; // @dynamic dclk;
@property(copy, nonatomic) NSString *dynamicAllocationAdTag; // @dynamic dynamicAllocationAdTag;
@property(copy, nonatomic) NSString *enabledEngageTypes; // @dynamic enabledEngageTypes;
@property(copy, nonatomic) NSString *encodedAdSafetyReason; // @dynamic encodedAdSafetyReason;
@property(copy, nonatomic) NSString *excludedAds; // @dynamic excludedAds;
@property(nonatomic) int fadeInDurationMilliseconds; // @dynamic fadeInDurationMilliseconds;
@property(nonatomic) int fadeInStartMilliseconds; // @dynamic fadeInStartMilliseconds;
@property(nonatomic) int fadeOutDurationMilliseconds; // @dynamic fadeOutDurationMilliseconds;
@property(nonatomic) int fadeOutStartMilliseconds; // @dynamic fadeOutStartMilliseconds;
@property(nonatomic) int forcedSkipOffset; // @dynamic forcedSkipOffset;
@property(nonatomic) _Bool fqsf; // @dynamic fqsf;
@property(copy, nonatomic) NSString *freewheelAdTag; // @dynamic freewheelAdTag;
@property(copy, nonatomic) NSString *fw; // @dynamic fw;
@property(nonatomic) unsigned int gptMigration; // @dynamic gptMigration;
@property(copy, nonatomic) NSString *gutTag; // @dynamic gutTag;
@property(nonatomic) _Bool hasAd3Module; // @dynamic hasAd3Module;
@property(nonatomic) _Bool hasAdAge; // @dynamic hasAdAge;
@property(nonatomic) _Bool hasAdBreaks; // @dynamic hasAdBreaks;
@property(nonatomic) _Bool hasAdDevice; // @dynamic hasAdDevice;
@property(nonatomic) _Bool hasAdFlags; // @dynamic hasAdFlags;
@property(nonatomic) _Bool hasAdGender; // @dynamic hasAdGender;
@property(nonatomic) _Bool hasAdLanguageIso6392; // @dynamic hasAdLanguageIso6392;
@property(nonatomic) _Bool hasAdLoggingFlag; // @dynamic hasAdLoggingFlag;
@property(nonatomic) _Bool hasAdModule; // @dynamic hasAdModule;
@property(nonatomic) _Bool hasAdPreroll; // @dynamic hasAdPreroll;
@property(nonatomic) _Bool hasAdSlots; // @dynamic hasAdSlots;
@property(nonatomic) _Bool hasAdTag; // @dynamic hasAdTag;
@property(nonatomic) _Bool hasAdsenseVideoDocId; // @dynamic hasAdsenseVideoDocId;
@property(nonatomic) _Bool hasAdvideo; // @dynamic hasAdvideo;
@property(nonatomic) _Bool hasAfcRmFallback; // @dynamic hasAfcRmFallback;
@property(nonatomic) _Bool hasAftv; // @dynamic hasAftv;
@property(nonatomic) _Bool hasAfv; // @dynamic hasAfv;
@property(nonatomic) _Bool hasAfvAdTag; // @dynamic hasAfvAdTag;
@property(nonatomic) _Bool hasAfvAdTagRestrictedToInstream; // @dynamic hasAfvAdTagRestrictedToInstream;
@property(nonatomic) _Bool hasAfvInstreamMax; // @dynamic hasAfvInstreamMax;
@property(nonatomic) _Bool hasAfvInvideoAdTag; // @dynamic hasAfvInvideoAdTag;
@property(nonatomic) _Bool hasAfvMergeEnabled; // @dynamic hasAfvMergeEnabled;
@property(nonatomic) _Bool hasAllowAdInAutoplay; // @dynamic hasAllowAdInAutoplay;
@property(nonatomic) _Bool hasAllowAdsPayCreator; // @dynamic hasAllowAdsPayCreator;
@property(nonatomic) _Bool hasAllowBelowThePlayerCompanion; // @dynamic hasAllowBelowThePlayerCompanion;
@property(nonatomic) _Bool hasAllowHtml5Ads; // @dynamic hasAllowHtml5Ads;
@property(nonatomic) _Bool hasAmsBaseTag; // @dynamic hasAmsBaseTag;
@property(nonatomic) _Bool hasApplyFadeOnMidrolls; // @dynamic hasApplyFadeOnMidrolls;
@property(nonatomic) _Bool hasAsLaunchedInCountry; // @dynamic hasAsLaunchedInCountry;
@property(nonatomic) _Bool hasAutoplay; // @dynamic hasAutoplay;
@property(nonatomic) _Bool hasC4; // @dynamic hasC4;
@property(nonatomic) _Bool hasCafeExperimentId; // @dynamic hasCafeExperimentId;
@property(nonatomic) _Bool hasCid; // @dynamic hasCid;
@property(nonatomic) _Bool hasContentOwnerName; // @dynamic hasContentOwnerName;
@property(nonatomic) _Bool hasCoreDbp; // @dynamic hasCoreDbp;
@property(nonatomic) _Bool hasDbp; // @dynamic hasDbp;
@property(nonatomic) _Bool hasDclk; // @dynamic hasDclk;
@property(nonatomic) _Bool hasDynamicAllocationAdTag; // @dynamic hasDynamicAllocationAdTag;
@property(nonatomic) _Bool hasEnabledEngageTypes; // @dynamic hasEnabledEngageTypes;
@property(nonatomic) _Bool hasEncodedAdSafetyReason; // @dynamic hasEncodedAdSafetyReason;
@property(nonatomic) _Bool hasExcludedAds; // @dynamic hasExcludedAds;
@property(nonatomic) _Bool hasFadeInDurationMilliseconds; // @dynamic hasFadeInDurationMilliseconds;
@property(nonatomic) _Bool hasFadeInStartMilliseconds; // @dynamic hasFadeInStartMilliseconds;
@property(nonatomic) _Bool hasFadeOutDurationMilliseconds; // @dynamic hasFadeOutDurationMilliseconds;
@property(nonatomic) _Bool hasFadeOutStartMilliseconds; // @dynamic hasFadeOutStartMilliseconds;
@property(nonatomic) _Bool hasForcedSkipOffset; // @dynamic hasForcedSkipOffset;
@property(nonatomic) _Bool hasFqsf; // @dynamic hasFqsf;
@property(nonatomic) _Bool hasFreewheelAdTag; // @dynamic hasFreewheelAdTag;
@property(nonatomic) _Bool hasFw; // @dynamic hasFw;
@property(nonatomic) _Bool hasGptMigration; // @dynamic hasGptMigration;
@property(nonatomic) _Bool hasGutTag; // @dynamic hasGutTag;
@property(nonatomic) _Bool hasIndependentBreakOffsets; // @dynamic hasIndependentBreakOffsets;
@property(nonatomic) _Bool hasInstream; // @dynamic hasInstream;
@property(nonatomic) _Bool hasInstreamLong; // @dynamic hasInstreamLong;
@property(nonatomic) _Bool hasInvideo; // @dynamic hasInvideo;
@property(nonatomic) _Bool hasLivestream; // @dynamic hasLivestream;
@property(nonatomic) _Bool hasLoeid; // @dynamic hasLoeid;
@property(nonatomic) _Bool hasMaxDynamicAllocationAdTagLength; // @dynamic hasMaxDynamicAllocationAdTagLength;
@property(nonatomic) _Bool hasMidrollFreqcap; // @dynamic hasMidrollFreqcap;
@property(nonatomic) _Bool hasMidrollPrefetchSize; // @dynamic hasMidrollPrefetchSize;
@property(nonatomic) _Bool hasMpu; // @dynamic hasMpu;
@property(nonatomic) _Bool hasMpvid; // @dynamic hasMpvid;
@property(nonatomic) _Bool hasNoAfvInstream; // @dynamic hasNoAfvInstream;
@property(nonatomic) _Bool hasPla; // @dynamic hasPla;
@property(nonatomic) _Bool hasPlaAdTag; // @dynamic hasPlaAdTag;
@property(nonatomic) _Bool hasPostAdRequests; // @dynamic hasPostAdRequests;
@property(nonatomic) _Bool hasPyvAdChannel; // @dynamic hasPyvAdChannel;
@property(nonatomic) _Bool hasPyvInRelatedCafeExperimentId; // @dynamic hasPyvInRelatedCafeExperimentId;
@property(nonatomic) _Bool hasServerPrefetchedVast; // @dynamic hasServerPrefetchedVast;
@property(nonatomic) _Bool hasSffb; // @dynamic hasSffb;
@property(nonatomic) _Bool hasShortform; // @dynamic hasShortform;
@property(nonatomic) _Bool hasShowContentThumbnail; // @dynamic hasShowContentThumbnail;
@property(nonatomic) _Bool hasShowPyvInRelated; // @dynamic hasShowPyvInRelated;
@property(nonatomic) _Bool hasSupportedWithoutAds; // @dynamic hasSupportedWithoutAds;
@property(nonatomic) _Bool hasTagForChildDirected; // @dynamic hasTagForChildDirected;
@property(nonatomic) _Bool hasTpasAdTypeId; // @dynamic hasTpasAdTypeId;
@property(nonatomic) _Bool hasTpasPartnerId; // @dynamic hasTpasPartnerId;
@property(nonatomic) _Bool hasTpasVideoId; // @dynamic hasTpasVideoId;
@property(nonatomic) _Bool hasTrueview; // @dynamic hasTrueview;
@property(nonatomic) _Bool hasTrueviewLactt; // @dynamic hasTrueviewLactt;
@property(nonatomic) _Bool hasUserAge; // @dynamic hasUserAge;
@property(nonatomic) _Bool hasVastAdsModule; // @dynamic hasVastAdsModule;
@property(nonatomic) _Bool hasVmap; // @dynamic hasVmap;
@property(nonatomic) _Bool hasXfp; // @dynamic hasXfp;
@property(nonatomic) _Bool hasXfpTag; // @dynamic hasXfpTag;
@property(copy, nonatomic) NSString *independentBreakOffsets; // @dynamic independentBreakOffsets;
@property(nonatomic) _Bool instream; // @dynamic instream;
@property(nonatomic) _Bool instreamLong; // @dynamic instreamLong;
@property(nonatomic) _Bool invideo; // @dynamic invideo;
@property(nonatomic) unsigned int livestream; // @dynamic livestream;
@property(copy, nonatomic) NSString *loeid; // @dynamic loeid;
@property(nonatomic) int maxDynamicAllocationAdTagLength; // @dynamic maxDynamicAllocationAdTagLength;
@property(nonatomic) float midrollFreqcap; // @dynamic midrollFreqcap;
@property(nonatomic) unsigned int midrollPrefetchSize; // @dynamic midrollPrefetchSize;
@property(nonatomic) _Bool mpu; // @dynamic mpu;
@property(copy, nonatomic) NSString *mpvid; // @dynamic mpvid;
@property(nonatomic) int noAfvInstream; // @dynamic noAfvInstream;
@property(nonatomic) _Bool pla; // @dynamic pla;
@property(copy, nonatomic) NSString *plaAdTag; // @dynamic plaAdTag;
@property(nonatomic) _Bool postAdRequests; // @dynamic postAdRequests;
@property(copy, nonatomic) NSString *pyvAdChannel; // @dynamic pyvAdChannel;
@property(copy, nonatomic) NSString *pyvInRelatedCafeExperimentId; // @dynamic pyvInRelatedCafeExperimentId;
@property(copy, nonatomic) NSString *serverPrefetchedVast; // @dynamic serverPrefetchedVast;
@property(nonatomic) _Bool sffb; // @dynamic sffb;
@property(nonatomic) _Bool shortform; // @dynamic shortform;
@property(nonatomic) _Bool showContentThumbnail; // @dynamic showContentThumbnail;
@property(nonatomic) _Bool showPyvInRelated; // @dynamic showPyvInRelated;
@property(nonatomic) int supportedWithoutAds; // @dynamic supportedWithoutAds;
@property(nonatomic) _Bool tagForChildDirected; // @dynamic tagForChildDirected;
@property(nonatomic) int tpasAdTypeId; // @dynamic tpasAdTypeId;
@property(copy, nonatomic) NSString *tpasPartnerId; // @dynamic tpasPartnerId;
@property(copy, nonatomic) NSString *tpasVideoId; // @dynamic tpasVideoId;
@property(nonatomic) _Bool trueview; // @dynamic trueview;
@property(nonatomic) unsigned int trueviewLactt; // @dynamic trueviewLactt;
@property(copy, nonatomic) NSString *userAge; // @dynamic userAge;
@property(copy, nonatomic) NSString *vastAdsModule; // @dynamic vastAdsModule;
@property(copy, nonatomic) NSString *vmap; // @dynamic vmap;
@property(nonatomic) _Bool xfp; // @dynamic xfp;
@property(copy, nonatomic) NSString *xfpTag; // @dynamic xfpTag;

@end
