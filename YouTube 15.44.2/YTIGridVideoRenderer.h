//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTClientBindingData-Protocol.h>
#import <Module_Framework/YTRendererForOfflineVideo-Protocol.h>

@class NSData, NSMutableArray, NSString, YTIAssociatedGameSupportedRenderers, YTICommand, YTIFormattedString, YTIGridVideoRenderer_GridVideoOfflineabilitySupportedRenderers, YTIGridVideoRichThumbnailSupportedRenderers, YTIGridVideoStyle, YTIIosClientOfflineData, YTIMainAppGridRendererStyle, YTIMenuSupportedRenderers, YTIStandaloneBadgeSupportedRenderers, YTIThumbnailDetails, YTIUpcomingEventData, YTIVideoClientBindingData;

@interface YTIGridVideoRenderer : GPBMessage <YTRendererForOfflineVideo, YTClientBindingData>
{
}

+ (id)descriptor;
- (void)setIosClientOfflineData:(id)arg1;
@property(readonly, nonatomic) YTIIosClientOfflineData *iosClientOfflineData;
@property(readonly, nonatomic) _Bool hasIosClientOfflineData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *bindingPlaylistID;
@property(readonly, nonatomic) NSString *bindingVideoID;

// Remaining properties
@property(retain, nonatomic) YTIAssociatedGameSupportedRenderers *associatedGame; // @dynamic associatedGame;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *bottomStandaloneBadge; // @dynamic bottomStandaloneBadge;
@property(retain, nonatomic) NSMutableArray *buttonsArray; // @dynamic buttonsArray;
@property(readonly, nonatomic) unsigned long long buttonsArray_Count; // @dynamic buttonsArray_Count;
@property(retain, nonatomic) YTIThumbnailDetails *channelThumbnail; // @dynamic channelThumbnail;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTICommand *editMetadataEndpoint; // @dynamic editMetadataEndpoint;
@property(nonatomic) _Bool hasAssociatedGame; // @dynamic hasAssociatedGame;
@property(nonatomic) _Bool hasBottomStandaloneBadge; // @dynamic hasBottomStandaloneBadge;
@property(nonatomic) _Bool hasChannelThumbnail; // @dynamic hasChannelThumbnail;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasEditMetadataEndpoint; // @dynamic hasEditMetadataEndpoint;
@property(nonatomic) _Bool hasInlinePlaybackEndpoint; // @dynamic hasInlinePlaybackEndpoint;
@property(nonatomic) _Bool hasIsWatched; // @dynamic hasIsWatched;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasLongBylineText; // @dynamic hasLongBylineText;
@property(nonatomic) _Bool hasMainAppStyle; // @dynamic hasMainAppStyle;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasPlaylistIndexText; // @dynamic hasPlaylistIndexText;
@property(nonatomic) _Bool hasPublishedTimeText; // @dynamic hasPublishedTimeText;
@property(nonatomic) _Bool hasRichThumbnail; // @dynamic hasRichThumbnail;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasShortViewCountText; // @dynamic hasShortViewCountText;
@property(nonatomic) _Bool hasStandaloneBadge; // @dynamic hasStandaloneBadge;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTopStandaloneBadge; // @dynamic hasTopStandaloneBadge;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUpcomingEventData; // @dynamic hasUpcomingEventData;
@property(nonatomic) _Bool hasVideoClientBindingData; // @dynamic hasVideoClientBindingData;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasViewCountText; // @dynamic hasViewCountText;
@property(retain, nonatomic) YTICommand *inlinePlaybackEndpoint; // @dynamic inlinePlaybackEndpoint;
@property(nonatomic) _Bool isWatched; // @dynamic isWatched;
@property(retain, nonatomic) YTIFormattedString *lengthText; // @dynamic lengthText;
@property(retain, nonatomic) YTIFormattedString *longBylineText; // @dynamic longBylineText;
@property(retain, nonatomic) YTIMainAppGridRendererStyle *mainAppStyle; // @dynamic mainAppStyle;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIGridVideoRenderer_GridVideoOfflineabilitySupportedRenderers *offlineability; // @dynamic offlineability;
@property(retain, nonatomic) NSMutableArray *ownerBadgesArray; // @dynamic ownerBadgesArray;
@property(readonly, nonatomic) unsigned long long ownerBadgesArray_Count; // @dynamic ownerBadgesArray_Count;
@property(retain, nonatomic) YTIFormattedString *playlistIndexText; // @dynamic playlistIndexText;
@property(retain, nonatomic) YTIFormattedString *publishedTimeText; // @dynamic publishedTimeText;
@property(retain, nonatomic) YTIGridVideoRichThumbnailSupportedRenderers *richThumbnail; // @dynamic richThumbnail;
@property(retain, nonatomic) NSMutableArray *serviceEndpointsArray; // @dynamic serviceEndpointsArray;
@property(readonly, nonatomic) unsigned long long serviceEndpointsArray_Count; // @dynamic serviceEndpointsArray_Count;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(retain, nonatomic) YTIFormattedString *shortViewCountText; // @dynamic shortViewCountText;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *standaloneBadge; // @dynamic standaloneBadge;
@property(retain, nonatomic) YTIGridVideoStyle *style; // @dynamic style;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) NSMutableArray *thumbnailBadgesArray; // @dynamic thumbnailBadgesArray;
@property(readonly, nonatomic) unsigned long long thumbnailBadgesArray_Count; // @dynamic thumbnailBadgesArray_Count;
@property(retain, nonatomic) NSMutableArray *thumbnailOverlaysArray; // @dynamic thumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count; // @dynamic thumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge; // @dynamic topStandaloneBadge;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIUpcomingEventData *upcomingEventData; // @dynamic upcomingEventData;
@property(retain, nonatomic) YTIVideoClientBindingData *videoClientBindingData; // @dynamic videoClientBindingData;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) YTIFormattedString *viewCountText; // @dynamic viewCountText;

@end
