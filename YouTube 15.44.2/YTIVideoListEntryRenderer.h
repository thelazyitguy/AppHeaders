//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTICommand, YTIFormattedString, YTIThumbnailDetails, YTIVideoManagerPrivacyDisplay, YTIVideoManagerVideoMetrics, YTIVideoManagerVideoTitle;

@interface YTIVideoListEntryRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(nonatomic) _Bool canEdit; // @dynamic canEdit;
@property(retain, nonatomic) NSMutableArray *centralColumnAttributesArray; // @dynamic centralColumnAttributesArray;
@property(readonly, nonatomic) unsigned long long centralColumnAttributesArray_Count; // @dynamic centralColumnAttributesArray_Count;
@property(retain, nonatomic) YTIFormattedString *channelTitle; // @dynamic channelTitle;
@property(nonatomic) _Bool hasCanEdit; // @dynamic hasCanEdit;
@property(nonatomic) _Bool hasChannelTitle; // @dynamic hasChannelTitle;
@property(nonatomic) _Bool hasLengthString; // @dynamic hasLengthString;
@property(nonatomic) _Bool hasMetrics; // @dynamic hasMetrics;
@property(nonatomic) _Bool hasPlayVideoEndpoint; // @dynamic hasPlayVideoEndpoint;
@property(nonatomic) _Bool hasPrivacy; // @dynamic hasPrivacy;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUseRefreshedLayout; // @dynamic hasUseRefreshedLayout;
@property(nonatomic) _Bool hasVideoDetailEndpoint; // @dynamic hasVideoDetailEndpoint;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(retain, nonatomic) NSMutableArray *lastColumnAttributesArray; // @dynamic lastColumnAttributesArray;
@property(readonly, nonatomic) unsigned long long lastColumnAttributesArray_Count; // @dynamic lastColumnAttributesArray_Count;
@property(retain, nonatomic) YTIFormattedString *lengthString; // @dynamic lengthString;
@property(retain, nonatomic) YTIVideoManagerVideoMetrics *metrics; // @dynamic metrics;
@property(retain, nonatomic) NSMutableArray *notificationsArray; // @dynamic notificationsArray;
@property(readonly, nonatomic) unsigned long long notificationsArray_Count; // @dynamic notificationsArray_Count;
@property(retain, nonatomic) YTICommand *playVideoEndpoint; // @dynamic playVideoEndpoint;
@property(retain, nonatomic) YTIVideoManagerPrivacyDisplay *privacy; // @dynamic privacy;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) NSMutableArray *thumbnailIconsArray; // @dynamic thumbnailIconsArray;
@property(readonly, nonatomic) unsigned long long thumbnailIconsArray_Count; // @dynamic thumbnailIconsArray_Count;
@property(retain, nonatomic) YTIVideoManagerVideoTitle *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) _Bool useRefreshedLayout; // @dynamic useRefreshedLayout;
@property(retain, nonatomic) YTICommand *videoDetailEndpoint; // @dynamic videoDetailEndpoint;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) NSMutableArray *videoNotificationsArray; // @dynamic videoNotificationsArray;
@property(readonly, nonatomic) unsigned long long videoNotificationsArray_Count; // @dynamic videoNotificationsArray_Count;

@end
