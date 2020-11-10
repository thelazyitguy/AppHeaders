//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTICommand, YTIFormattedString, YTILikeButtonSupportedRenderers, YTIMenuSupportedRenderers, YTIRenderer, YTIShareButtonSupportedRenderers, YTIStandaloneBadgeSupportedRenderers, YTISubscriptionButton, YTIThumbnailDetails, YTIVideoMainCaptionsMetadataSupportedRenderers, YTIVideoMainContentAddToButtonSupportedRenderers, YTIVideoMainContentSubscribeButtonSupportedRenderers, YTIVideoMainMetadataRowContainerSupportedRenderers, YTIVideoMainVideoViewCountSupportedRenderers;

@interface YTIVideoMainContentRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *accountLinkingButton; // @dynamic accountLinkingButton;
@property(retain, nonatomic) YTIVideoMainContentAddToButtonSupportedRenderers *addToButton; // @dynamic addToButton;
@property(nonatomic) _Bool allowRatings; // @dynamic allowRatings;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIVideoMainCaptionsMetadataSupportedRenderers *captionsMetadata; // @dynamic captionsMetadata;
@property(retain, nonatomic) YTIFormattedString *category; // @dynamic category;
@property(retain, nonatomic) YTICommand *channelNavigationEndpoint; // @dynamic channelNavigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *dateText; // @dynamic dateText;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) int dislikesCount; // @dynamic dislikesCount;
@property(retain, nonatomic) YTIFormattedString *dislikesCountText; // @dynamic dislikesCountText;
@property(retain, nonatomic) YTIRenderer *flagButton; // @dynamic flagButton;
@property(nonatomic) _Bool hasAccountLinkingButton; // @dynamic hasAccountLinkingButton;
@property(nonatomic) _Bool hasAddToButton; // @dynamic hasAddToButton;
@property(nonatomic) _Bool hasAllowRatings; // @dynamic hasAllowRatings;
@property(nonatomic) _Bool hasCaptionsMetadata; // @dynamic hasCaptionsMetadata;
@property(nonatomic) _Bool hasCategory; // @dynamic hasCategory;
@property(nonatomic) _Bool hasCcLicense; // @dynamic hasCcLicense;
@property(nonatomic) _Bool hasChannelNavigationEndpoint; // @dynamic hasChannelNavigationEndpoint;
@property(nonatomic) _Bool hasDateText; // @dynamic hasDateText;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDislikesCount; // @dynamic hasDislikesCount;
@property(nonatomic) _Bool hasDislikesCountText; // @dynamic hasDislikesCountText;
@property(nonatomic) _Bool hasFlagButton; // @dynamic hasFlagButton;
@property(nonatomic) _Bool hasHasCcLicense; // @dynamic hasHasCcLicense;
@property(nonatomic) _Bool hasIsLimitedState; // @dynamic hasIsLimitedState;
@property(nonatomic) _Bool hasLikeButton; // @dynamic hasLikeButton;
@property(nonatomic) _Bool hasLikeStatus; // @dynamic hasLikeStatus;
@property(nonatomic) _Bool hasLikesCount; // @dynamic hasLikesCount;
@property(nonatomic) _Bool hasLikesCountText; // @dynamic hasLikesCountText;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasMetadataLanguage; // @dynamic hasMetadataLanguage;
@property(nonatomic) _Bool hasMetadataRowContainer; // @dynamic hasMetadataRowContainer;
@property(nonatomic) _Bool hasPrivacyStatus; // @dynamic hasPrivacyStatus;
@property(nonatomic) _Bool hasShareButton; // @dynamic hasShareButton;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasShortViewCountText; // @dynamic hasShortViewCountText;
@property(nonatomic) _Bool hasStatsButtonStatus; // @dynamic hasStatsButtonStatus;
@property(nonatomic) _Bool hasSubscribeButton; // @dynamic hasSubscribeButton;
@property(nonatomic) _Bool hasSubscriberCountText; // @dynamic hasSubscriberCountText;
@property(nonatomic) _Bool hasSubscriptionButton; // @dynamic hasSubscriptionButton;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTopStandaloneBadge; // @dynamic hasTopStandaloneBadge;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnderTitleStandaloneBadge; // @dynamic hasUnderTitleStandaloneBadge;
@property(nonatomic) _Bool hasVideoCountText; // @dynamic hasVideoCountText;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasViewCount; // @dynamic hasViewCount;
@property(nonatomic) _Bool hasViewCountText; // @dynamic hasViewCountText;
@property(nonatomic) _Bool isLimitedState; // @dynamic isLimitedState;
@property(retain, nonatomic) YTILikeButtonSupportedRenderers *likeButton; // @dynamic likeButton;
@property(nonatomic) int likeStatus; // @dynamic likeStatus;
@property(nonatomic) int likesCount; // @dynamic likesCount;
@property(retain, nonatomic) YTIFormattedString *likesCountText; // @dynamic likesCountText;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(copy, nonatomic) NSString *metadataLanguage; // @dynamic metadataLanguage;
@property(retain, nonatomic) YTIVideoMainMetadataRowContainerSupportedRenderers *metadataRowContainer; // @dynamic metadataRowContainer;
@property(retain, nonatomic) NSMutableArray *ownerBadgesArray; // @dynamic ownerBadgesArray;
@property(readonly, nonatomic) unsigned long long ownerBadgesArray_Count; // @dynamic ownerBadgesArray_Count;
@property(nonatomic) int privacyStatus; // @dynamic privacyStatus;
@property(retain, nonatomic) YTIShareButtonSupportedRenderers *shareButton; // @dynamic shareButton;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(retain, nonatomic) YTIFormattedString *shortViewCountText; // @dynamic shortViewCountText;
@property(nonatomic) int statsButtonStatus; // @dynamic statsButtonStatus;
@property(retain, nonatomic) YTIVideoMainContentSubscribeButtonSupportedRenderers *subscribeButton; // @dynamic subscribeButton;
@property(retain, nonatomic) YTIFormattedString *subscriberCountText; // @dynamic subscriberCountText;
@property(retain, nonatomic) YTISubscriptionButton *subscriptionButton; // @dynamic subscriptionButton;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge; // @dynamic topStandaloneBadge;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *underTitleStandaloneBadge; // @dynamic underTitleStandaloneBadge;
@property(retain, nonatomic) YTIFormattedString *videoCountText; // @dynamic videoCountText;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) YTIVideoMainVideoViewCountSupportedRenderers *viewCount; // @dynamic viewCount;
@property(retain, nonatomic) YTIFormattedString *viewCountText; // @dynamic viewCountText;

@end

