//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIAccessibilitySupportedDatas, YTICommand, YTIFormattedString, YTIMusicOfflineItemData, YTIMusicPlaylistItemData, YTIRenderer;

@interface YTIMusicTwoColumnItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibilityData; // @dynamic accessibilityData;
@property(retain, nonatomic) YTIRenderer *customIndexColumn; // @dynamic customIndexColumn;
@property(retain, nonatomic) YTICommand *doubleTapNavigationEndpoint; // @dynamic doubleTapNavigationEndpoint;
@property(nonatomic) _Bool hasAccessibilityData; // @dynamic hasAccessibilityData;
@property(nonatomic) _Bool hasCustomIndexColumn; // @dynamic hasCustomIndexColumn;
@property(nonatomic) _Bool hasDoubleTapNavigationEndpoint; // @dynamic hasDoubleTapNavigationEndpoint;
@property(nonatomic) _Bool hasIndexText; // @dynamic hasIndexText;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasMenuIconDisplayPolicy; // @dynamic hasMenuIconDisplayPolicy;
@property(nonatomic) _Bool hasMusicItemRendererDisplayPolicy; // @dynamic hasMusicItemRendererDisplayPolicy;
@property(nonatomic) _Bool hasMusicOfflineItemData; // @dynamic hasMusicOfflineItemData;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasPlaylistItemData; // @dynamic hasPlaylistItemData;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasSwipeRightToLeftToRevealRenderer; // @dynamic hasSwipeRightToLeftToRevealRenderer;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasThumbnailAspectRatio; // @dynamic hasThumbnailAspectRatio;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *indexText; // @dynamic indexText;
@property(retain, nonatomic) YTIRenderer *menu; // @dynamic menu;
@property(nonatomic) int menuIconDisplayPolicy; // @dynamic menuIconDisplayPolicy;
@property(nonatomic) int musicItemRendererDisplayPolicy; // @dynamic musicItemRendererDisplayPolicy;
@property(retain, nonatomic) YTIMusicOfflineItemData *musicOfflineItemData; // @dynamic musicOfflineItemData;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIRenderer *offlineability; // @dynamic offlineability;
@property(retain, nonatomic) YTIMusicPlaylistItemData *playlistItemData; // @dynamic playlistItemData;
@property(retain, nonatomic) NSMutableArray *potentialThumbnailOverlaysArray; // @dynamic potentialThumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long potentialThumbnailOverlaysArray_Count; // @dynamic potentialThumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) NSMutableArray *subtitleBadgesArray; // @dynamic subtitleBadgesArray;
@property(readonly, nonatomic) unsigned long long subtitleBadgesArray_Count; // @dynamic subtitleBadgesArray_Count;
@property(retain, nonatomic) YTIRenderer *swipeRightToLeftToRevealRenderer; // @dynamic swipeRightToLeftToRevealRenderer;
@property(retain, nonatomic) YTIRenderer *thumbnail; // @dynamic thumbnail;
@property(nonatomic) int thumbnailAspectRatio; // @dynamic thumbnailAspectRatio;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) NSMutableArray *titleBadgesArray; // @dynamic titleBadgesArray;
@property(readonly, nonatomic) unsigned long long titleBadgesArray_Count; // @dynamic titleBadgesArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

