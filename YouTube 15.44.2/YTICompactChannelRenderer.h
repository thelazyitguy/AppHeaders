//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIAssociatedGameSupportedRenderers, YTICommand, YTICompactChannelSubscribeButtonSupportedRenderers, YTIFormattedString, YTIMainAppCompactRendererStyle, YTIMenuSupportedRenderers, YTISubscriptionButton, YTIThumbnailDetails;

@interface YTICompactChannelRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAssociatedGameSupportedRenderers *associatedGame; // @dynamic associatedGame;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(nonatomic) unsigned int concurrentViewerCount; // @dynamic concurrentViewerCount;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(retain, nonatomic) YTIFormattedString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool hasAssociatedGame; // @dynamic hasAssociatedGame;
@property(nonatomic) _Bool hasChannelId; // @dynamic hasChannelId;
@property(nonatomic) _Bool hasConcurrentViewerCount; // @dynamic hasConcurrentViewerCount;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasMainAppStyle; // @dynamic hasMainAppStyle;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasSubscribeButton; // @dynamic hasSubscribeButton;
@property(nonatomic) _Bool hasSubscriberCountText; // @dynamic hasSubscriberCountText;
@property(nonatomic) _Bool hasSubscriptionButton; // @dynamic hasSubscriptionButton;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasTvBanner; // @dynamic hasTvBanner;
@property(nonatomic) _Bool hasVideoCountText; // @dynamic hasVideoCountText;
@property(retain, nonatomic) YTIMainAppCompactRendererStyle *mainAppStyle; // @dynamic mainAppStyle;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) NSMutableArray *ownerBadgesArray; // @dynamic ownerBadgesArray;
@property(readonly, nonatomic) unsigned long long ownerBadgesArray_Count; // @dynamic ownerBadgesArray_Count;
@property(retain, nonatomic) NSMutableArray *serviceEndpointsArray; // @dynamic serviceEndpointsArray;
@property(readonly, nonatomic) unsigned long long serviceEndpointsArray_Count; // @dynamic serviceEndpointsArray_Count;
@property(retain, nonatomic) YTICompactChannelSubscribeButtonSupportedRenderers *subscribeButton; // @dynamic subscribeButton;
@property(retain, nonatomic) YTIFormattedString *subscriberCountText; // @dynamic subscriberCountText;
@property(retain, nonatomic) YTISubscriptionButton *subscriptionButton; // @dynamic subscriptionButton;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *tvBanner; // @dynamic tvBanner;
@property(retain, nonatomic) YTIFormattedString *videoCountText; // @dynamic videoCountText;

@end

