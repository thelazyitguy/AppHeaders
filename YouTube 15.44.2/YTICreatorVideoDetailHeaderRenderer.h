//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTICommand, YTIFormattedString, YTIRenderer, YTIThumbnailDetails, YTIVideoManagerVideoMetrics;

@interface YTICreatorVideoDetailHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTICommand *editVideoEndpoint; // @dynamic editVideoEndpoint;
@property(retain, nonatomic) YTIFormattedString *editVideoLabel; // @dynamic editVideoLabel;
@property(nonatomic) _Bool hasEditVideoEndpoint; // @dynamic hasEditVideoEndpoint;
@property(nonatomic) _Bool hasEditVideoLabel; // @dynamic hasEditVideoLabel;
@property(nonatomic) _Bool hasMetrics; // @dynamic hasMetrics;
@property(nonatomic) _Bool hasPlayVideoEndpoint; // @dynamic hasPlayVideoEndpoint;
@property(nonatomic) _Bool hasPlayVideoLabel; // @dynamic hasPlayVideoLabel;
@property(nonatomic) _Bool hasPlayable; // @dynamic hasPlayable;
@property(nonatomic) _Bool hasSchedule; // @dynamic hasSchedule;
@property(nonatomic) _Bool hasShareVideoEndpoint; // @dynamic hasShareVideoEndpoint;
@property(nonatomic) _Bool hasShareVideoLabel; // @dynamic hasShareVideoLabel;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasVideoThumbnail; // @dynamic hasVideoThumbnail;
@property(nonatomic) _Bool hasVideoTitle; // @dynamic hasVideoTitle;
@property(retain, nonatomic) NSMutableArray *headerRenderersArray; // @dynamic headerRenderersArray;
@property(readonly, nonatomic) unsigned long long headerRenderersArray_Count; // @dynamic headerRenderersArray_Count;
@property(retain, nonatomic) YTIVideoManagerVideoMetrics *metrics; // @dynamic metrics;
@property(retain, nonatomic) YTICommand *playVideoEndpoint; // @dynamic playVideoEndpoint;
@property(retain, nonatomic) YTIFormattedString *playVideoLabel; // @dynamic playVideoLabel;
@property(nonatomic) _Bool playable; // @dynamic playable;
@property(retain, nonatomic) YTIRenderer *schedule; // @dynamic schedule;
@property(retain, nonatomic) YTICommand *shareVideoEndpoint; // @dynamic shareVideoEndpoint;
@property(retain, nonatomic) YTIFormattedString *shareVideoLabel; // @dynamic shareVideoLabel;
@property(retain, nonatomic) NSMutableArray *thumbnailIconsArray; // @dynamic thumbnailIconsArray;
@property(readonly, nonatomic) unsigned long long thumbnailIconsArray_Count; // @dynamic thumbnailIconsArray_Count;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) NSMutableArray *videoNotificationsArray; // @dynamic videoNotificationsArray;
@property(readonly, nonatomic) unsigned long long videoNotificationsArray_Count; // @dynamic videoNotificationsArray_Count;
@property(retain, nonatomic) YTIThumbnailDetails *videoThumbnail; // @dynamic videoThumbnail;
@property(retain, nonatomic) YTIFormattedString *videoTitle; // @dynamic videoTitle;

@end

