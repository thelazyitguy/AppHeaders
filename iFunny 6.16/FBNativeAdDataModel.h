//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/FBAdDataModel.h>

#import <Funny/FBAdCreativeURLContaining-Protocol.h>
#import <Funny/FBAdReportingData-Protocol.h>

@class FBAdAssetSetData, FBAdColorInfo, FBAdImage, FBAdToolbarConfiguration, FBNativeAdViewAttributes, FBPlayableAdDataModel, NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface FBNativeAdDataModel : FBAdDataModel <FBAdReportingData, FBAdCreativeURLContaining>
{
    long long _cachedType;
    _Bool _showEndCard;
    _Bool _viewJSONLoggingEnabled;
    _Bool _viewSnapshotLoggingEnabled;
    _Bool _fullyClickable;
    _Bool _audioMuted;
    _Bool _videoHasAudio;
    _Bool _isWatchAndBrowse;
    _Bool _allowsVideoReplay;
    _Bool _isDSL;
    _Bool _showIntroCardTransition;
    _Bool _showExitTransition;
    NSDictionary *_metadata;
    long long _placementType;
    NSURL *_destinationURL;
    NSString *_headline;
    NSString *_linkDescription;
    NSString *_advertiserName;
    NSString *_sponsoredTranslation;
    NSString *_adTranslation;
    NSString *_promotedTranslation;
    NSString *_localizedDelayClickText;
    NSString *_localizedCancelText;
    NSString *_localizedSponsoredText;
    NSString *_localizedSkipText;
    NSString *_localizedRewardInText;
    NSString *_localizedGenericRewardText;
    NSString *_localizedKeepWatchingAdText;
    NSString *_localizedBackToGameText;
    NSArray *_screenshots;
    NSNumber *_starRatingValue;
    NSNumber *_starRatingCount;
    NSString *_category;
    NSString *_title;
    NSString *_subtitle;
    NSString *_socialContext;
    NSString *_callToAction;
    FBAdImage *_icon;
    NSURL *_iconURL;
    FBAdImage *_image;
    NSURL *_imageURL;
    NSString *_body;
    NSURL *_commandURL;
    long long _snapshotDelayPostInSecond;
    double _snapshotCompressionQuality;
    FBAdImage *_adChoicesIcon;
    FBAdImage *_ctaButtonIcon;
    NSURL *_adChoicesLinkURL;
    NSString *_adChoicesText;
    NSURL *_videoURL;
    NSNumber *_videoAutoplayEnabled;
    long long _orientation;
    FBNativeAdViewAttributes *_adViewAttributes;
    NSArray *_multiProductAdContent;
    FBPlayableAdDataModel *_playableAdDataModel;
    NSString *_adCreativeType;
    NSURL *_replayIconURL;
    FBAdToolbarConfiguration *_toolbarConfiguration;
    NSNumber *_mediaAspectRatio;
    FBAdColorInfo *_colorInfo;
    FBAdAssetSetData *_assets;
    CDStruct_1b6d18a9 _forcedViewTime;
    CDStruct_1b6d18a9 _watchTimeRequiredForReward;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) FBAdAssetSetData *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) FBAdColorInfo *colorInfo; // @synthesize colorInfo=_colorInfo;
@property(readonly, nonatomic) CDStruct_1b6d18a9 watchTimeRequiredForReward; // @synthesize watchTimeRequiredForReward=_watchTimeRequiredForReward;
@property(readonly, nonatomic) _Bool showExitTransition; // @synthesize showExitTransition=_showExitTransition;
@property(readonly, nonatomic) _Bool showIntroCardTransition; // @synthesize showIntroCardTransition=_showIntroCardTransition;
@property(nonatomic) _Bool isDSL; // @synthesize isDSL=_isDSL;
@property(readonly, nonatomic) NSNumber *mediaAspectRatio; // @synthesize mediaAspectRatio=_mediaAspectRatio;
@property(readonly, nonatomic) _Bool allowsVideoReplay; // @synthesize allowsVideoReplay=_allowsVideoReplay;
@property(retain, nonatomic) FBAdToolbarConfiguration *toolbarConfiguration; // @synthesize toolbarConfiguration=_toolbarConfiguration;
@property(readonly, copy, nonatomic) NSURL *replayIconURL; // @synthesize replayIconURL=_replayIconURL;
@property(readonly, copy, nonatomic) NSString *adCreativeType; // @synthesize adCreativeType=_adCreativeType;
@property(readonly, nonatomic) _Bool isWatchAndBrowse; // @synthesize isWatchAndBrowse=_isWatchAndBrowse;
@property(readonly, nonatomic) FBPlayableAdDataModel *playableAdDataModel; // @synthesize playableAdDataModel=_playableAdDataModel;
@property(readonly, nonatomic) _Bool videoHasAudio; // @synthesize videoHasAudio=_videoHasAudio;
@property(readonly, copy, nonatomic) NSArray *multiProductAdContent; // @synthesize multiProductAdContent=_multiProductAdContent;
@property(readonly, nonatomic) FBNativeAdViewAttributes *adViewAttributes; // @synthesize adViewAttributes=_adViewAttributes;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) CDStruct_1b6d18a9 forcedViewTime; // @synthesize forcedViewTime=_forcedViewTime;
@property(readonly, nonatomic) _Bool audioMuted; // @synthesize audioMuted=_audioMuted;
@property(readonly, copy, nonatomic) NSNumber *videoAutoplayEnabled; // @synthesize videoAutoplayEnabled=_videoAutoplayEnabled;
@property(readonly, copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, nonatomic) _Bool fullyClickable; // @synthesize fullyClickable=_fullyClickable;
@property(readonly, copy, nonatomic) NSString *adChoicesText; // @synthesize adChoicesText=_adChoicesText;
@property(readonly, copy, nonatomic) NSURL *adChoicesLinkURL; // @synthesize adChoicesLinkURL=_adChoicesLinkURL;
@property(readonly, nonatomic) FBAdImage *ctaButtonIcon; // @synthesize ctaButtonIcon=_ctaButtonIcon;
@property(readonly, nonatomic) FBAdImage *adChoicesIcon; // @synthesize adChoicesIcon=_adChoicesIcon;
@property(readonly, nonatomic) double snapshotCompressionQuality; // @synthesize snapshotCompressionQuality=_snapshotCompressionQuality;
@property(readonly, nonatomic) long long snapshotDelayPostInSecond; // @synthesize snapshotDelayPostInSecond=_snapshotDelayPostInSecond;
@property(readonly, nonatomic) _Bool viewSnapshotLoggingEnabled; // @synthesize viewSnapshotLoggingEnabled=_viewSnapshotLoggingEnabled;
@property(readonly, nonatomic) _Bool viewJSONLoggingEnabled; // @synthesize viewJSONLoggingEnabled=_viewJSONLoggingEnabled;
@property(readonly, copy, nonatomic) NSURL *commandURL; // @synthesize commandURL=_commandURL;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) FBAdImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, nonatomic) FBAdImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *callToAction; // @synthesize callToAction=_callToAction;
@property(readonly, copy, nonatomic) NSString *socialContext; // @synthesize socialContext=_socialContext;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool showEndCard; // @synthesize showEndCard=_showEndCard;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSNumber *starRatingCount; // @synthesize starRatingCount=_starRatingCount;
@property(readonly, copy, nonatomic) NSNumber *starRatingValue; // @synthesize starRatingValue=_starRatingValue;
@property(readonly, copy, nonatomic) NSArray *screenshots; // @synthesize screenshots=_screenshots;
@property(readonly, copy, nonatomic) NSString *localizedBackToGameText; // @synthesize localizedBackToGameText=_localizedBackToGameText;
@property(readonly, copy, nonatomic) NSString *localizedKeepWatchingAdText; // @synthesize localizedKeepWatchingAdText=_localizedKeepWatchingAdText;
@property(readonly, copy, nonatomic) NSString *localizedGenericRewardText; // @synthesize localizedGenericRewardText=_localizedGenericRewardText;
@property(readonly, copy, nonatomic) NSString *localizedRewardInText; // @synthesize localizedRewardInText=_localizedRewardInText;
@property(readonly, copy, nonatomic) NSString *localizedSkipText; // @synthesize localizedSkipText=_localizedSkipText;
@property(readonly, copy, nonatomic) NSString *localizedSponsoredText; // @synthesize localizedSponsoredText=_localizedSponsoredText;
@property(readonly, copy, nonatomic) NSString *localizedCancelText; // @synthesize localizedCancelText=_localizedCancelText;
@property(readonly, copy, nonatomic) NSString *localizedDelayClickText; // @synthesize localizedDelayClickText=_localizedDelayClickText;
@property(readonly, copy, nonatomic) NSString *promotedTranslation; // @synthesize promotedTranslation=_promotedTranslation;
@property(readonly, copy, nonatomic) NSString *adTranslation; // @synthesize adTranslation=_adTranslation;
@property(readonly, copy, nonatomic) NSString *sponsoredTranslation; // @synthesize sponsoredTranslation=_sponsoredTranslation;
@property(readonly, copy, nonatomic) NSString *advertiserName; // @synthesize advertiserName=_advertiserName;
@property(readonly, copy, nonatomic) NSString *linkDescription; // @synthesize linkDescription=_linkDescription;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(nonatomic) long long placementType; // @synthesize placementType=_placementType;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *adViewType;
@property(readonly, nonatomic) long long type;
- (id)processMultiProductAdMetadata:(id)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)cacheKeysForCreatives;
- (id)initWithMetadata:(id)arg1 placementType:(long long)arg2;
- (id)initWithMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *encryptedAdID;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *inlineClientToken;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSNumber *xoutPeriod;

@end
