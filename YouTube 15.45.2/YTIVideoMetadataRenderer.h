//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIAchievementsMetadataSupportedRenderers, YTICommand, YTIFormattedString, YTILikeButtonSupportedRenderers, YTIShareButtonSupportedRenderers, YTIStandaloneBadgeSupportedRenderers, YTIThumbnailDetails, YTIVideoMetadataAddToButtonSupportedRenderers, YTIVideoMetadataCaptionsMetadataSupportedRenderers, YTIVideoMetadataDonateButtonSupportedRenderers, YTIVideoMetadataOfflineButtonTooltipSupportedRenderers, YTIVideoMetadataRowContainerSupportedRenderers, YTIVideoMetadataVideoOwnerSupportedRenderers, YTIVideoMetadataVideoViewCountSupportedRenderers;

@interface YTIVideoMetadataRenderer : GPBMessage
{
}

+ (id)descriptor;
+ (id)videoMetadataRendererFromOfflineVideo:(id)arg1;

// Remaining properties
@property(retain, nonatomic) YTIAchievementsMetadataSupportedRenderers *achievements; // @dynamic achievements;
@property(retain, nonatomic) YTIVideoMetadataAddToButtonSupportedRenderers *addToButton; // @dynamic addToButton;
@property(nonatomic) _Bool allowActions; // @dynamic allowActions;
@property(nonatomic) _Bool allowPlaybackRouteButton; // @dynamic allowPlaybackRouteButton;
@property(nonatomic) _Bool allowRatings; // @dynamic allowRatings;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIVideoMetadataCaptionsMetadataSupportedRenderers *captionsMetadata; // @dynamic captionsMetadata;
@property(retain, nonatomic) YTIFormattedString *dateText; // @dynamic dateText;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(retain, nonatomic) YTIFormattedString *dislikesCount; // @dynamic dislikesCount;
@property(retain, nonatomic) YTIFormattedString *dislikesCountWithDislike; // @dynamic dislikesCountWithDislike;
@property(retain, nonatomic) YTIVideoMetadataDonateButtonSupportedRenderers *donateButton; // @dynamic donateButton;
@property(nonatomic) _Bool hasAchievements; // @dynamic hasAchievements;
@property(nonatomic) _Bool hasAddToButton; // @dynamic hasAddToButton;
@property(nonatomic) _Bool hasAllowActions; // @dynamic hasAllowActions;
@property(nonatomic) _Bool hasAllowPlaybackRouteButton; // @dynamic hasAllowPlaybackRouteButton;
@property(nonatomic) _Bool hasAllowRatings; // @dynamic hasAllowRatings;
@property(nonatomic) _Bool hasCaptionsMetadata; // @dynamic hasCaptionsMetadata;
@property(nonatomic) _Bool hasDateText; // @dynamic hasDateText;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDislikesCount; // @dynamic hasDislikesCount;
@property(nonatomic) _Bool hasDislikesCountWithDislike; // @dynamic hasDislikesCountWithDislike;
@property(nonatomic) _Bool hasDonateButton; // @dynamic hasDonateButton;
@property(nonatomic) _Bool hasIsLimitedState; // @dynamic hasIsLimitedState;
@property(nonatomic) _Bool hasIsMetadataExpanded; // @dynamic hasIsMetadataExpanded;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasLikeButton; // @dynamic hasLikeButton;
@property(nonatomic) _Bool hasLikeStatus; // @dynamic hasLikeStatus;
@property(nonatomic) _Bool hasLikesCount; // @dynamic hasLikesCount;
@property(nonatomic) _Bool hasLikesCountWithLike; // @dynamic hasLikesCountWithLike;
@property(nonatomic) _Bool hasMetadataLanguage; // @dynamic hasMetadataLanguage;
@property(nonatomic) _Bool hasMetadataRowContainer; // @dynamic hasMetadataRowContainer;
@property(nonatomic) _Bool hasOfflineButtonPoorConnectivityTooltip; // @dynamic hasOfflineButtonPoorConnectivityTooltip;
@property(nonatomic) _Bool hasOfflineButtonTooltip; // @dynamic hasOfflineButtonTooltip;
@property(nonatomic) _Bool hasOwner; // @dynamic hasOwner;
@property(nonatomic) _Bool hasPublishedTimeText; // @dynamic hasPublishedTimeText;
@property(nonatomic) _Bool hasRatingText; // @dynamic hasRatingText;
@property(nonatomic) _Bool hasShareButton; // @dynamic hasShareButton;
@property(nonatomic) _Bool hasShortViewCountText; // @dynamic hasShortViewCountText;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTopStandaloneBadge; // @dynamic hasTopStandaloneBadge;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnderTitleStandaloneBadge; // @dynamic hasUnderTitleStandaloneBadge;
@property(nonatomic) _Bool hasUpdatedMetadataEndpoint; // @dynamic hasUpdatedMetadataEndpoint;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasViewCount; // @dynamic hasViewCount;
@property(nonatomic) _Bool hasViewCountText; // @dynamic hasViewCountText;
@property(nonatomic) _Bool isLimitedState; // @dynamic isLimitedState;
@property(nonatomic) _Bool isMetadataExpanded; // @dynamic isMetadataExpanded;
@property(retain, nonatomic) YTIFormattedString *lengthText; // @dynamic lengthText;
@property(retain, nonatomic) YTILikeButtonSupportedRenderers *likeButton; // @dynamic likeButton;
@property(nonatomic) int likeStatus; // @dynamic likeStatus;
@property(retain, nonatomic) YTIFormattedString *likesCount; // @dynamic likesCount;
@property(retain, nonatomic) YTIFormattedString *likesCountWithLike; // @dynamic likesCountWithLike;
@property(copy, nonatomic) NSString *metadataLanguage; // @dynamic metadataLanguage;
@property(retain, nonatomic) YTIVideoMetadataRowContainerSupportedRenderers *metadataRowContainer; // @dynamic metadataRowContainer;
@property(retain, nonatomic) YTIVideoMetadataOfflineButtonTooltipSupportedRenderers *offlineButtonPoorConnectivityTooltip; // @dynamic offlineButtonPoorConnectivityTooltip;
@property(retain, nonatomic) YTIVideoMetadataOfflineButtonTooltipSupportedRenderers *offlineButtonTooltip; // @dynamic offlineButtonTooltip;
@property(retain, nonatomic) YTIVideoMetadataVideoOwnerSupportedRenderers *owner; // @dynamic owner;
@property(retain, nonatomic) YTIFormattedString *publishedTimeText; // @dynamic publishedTimeText;
@property(retain, nonatomic) YTIFormattedString *ratingText; // @dynamic ratingText;
@property(retain, nonatomic) YTIShareButtonSupportedRenderers *shareButton; // @dynamic shareButton;
@property(retain, nonatomic) YTIFormattedString *shortViewCountText; // @dynamic shortViewCountText;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge; // @dynamic topStandaloneBadge;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *underTitleStandaloneBadge; // @dynamic underTitleStandaloneBadge;
@property(retain, nonatomic) YTICommand *updatedMetadataEndpoint; // @dynamic updatedMetadataEndpoint;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) YTIVideoMetadataVideoViewCountSupportedRenderers *viewCount; // @dynamic viewCount;
@property(retain, nonatomic) YTIFormattedString *viewCountText; // @dynamic viewCountText;

@end
