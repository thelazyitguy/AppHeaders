//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIBadgeSupportedRenderers, YTICommand, YTIFormattedString, YTIMenuSupportedRenderers, YTIRenderer, YTIThumbnailDetails, YTIUnpluggedCompactVideoRenderer_ClientStateSyncData;

@interface YTIUnpluggedCompactVideoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIBadgeSupportedRenderers *badge; // @dynamic badge;
@property(retain, nonatomic) YTIUnpluggedCompactVideoRenderer_ClientStateSyncData *clientStateSyncData; // @dynamic clientStateSyncData;
@property(retain, nonatomic) YTIFormattedString *contentRating; // @dynamic contentRating;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(retain, nonatomic) YTIRenderer *downloadButton; // @dynamic downloadButton;
@property(retain, nonatomic) YTIFormattedString *duration; // @dynamic duration;
@property(nonatomic) unsigned long long endTimeSeconds; // @dynamic endTimeSeconds;
@property(retain, nonatomic) YTIFormattedString *episodeNumber; // @dynamic episodeNumber;
@property(retain, nonatomic) YTIFormattedString *episodeTitle; // @dynamic episodeTitle;
@property(retain, nonatomic) YTIFormattedString *expandedStateSecondaryText; // @dynamic expandedStateSecondaryText;
@property(nonatomic) _Bool hasBadge; // @dynamic hasBadge;
@property(nonatomic) _Bool hasClientStateSyncData; // @dynamic hasClientStateSyncData;
@property(nonatomic) _Bool hasContentRating; // @dynamic hasContentRating;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDownloadButton; // @dynamic hasDownloadButton;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;
@property(nonatomic) _Bool hasEndTimeSeconds; // @dynamic hasEndTimeSeconds;
@property(nonatomic) _Bool hasEpisodeNumber; // @dynamic hasEpisodeNumber;
@property(nonatomic) _Bool hasEpisodeTitle; // @dynamic hasEpisodeTitle;
@property(nonatomic) _Bool hasExpandedStateSecondaryText; // @dynamic hasExpandedStateSecondaryText;
@property(nonatomic) _Bool hasHideDivider; // @dynamic hasHideDivider;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOverflowMenuButton; // @dynamic hasOverflowMenuButton;
@property(nonatomic) _Bool hasPrimaryText; // @dynamic hasPrimaryText;
@property(nonatomic) _Bool hasQuaternaryText; // @dynamic hasQuaternaryText;
@property(nonatomic) _Bool hasSecondaryBadge; // @dynamic hasSecondaryBadge;
@property(nonatomic) _Bool hasSecondaryText; // @dynamic hasSecondaryText;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(nonatomic) _Bool hasStartTimeSeconds; // @dynamic hasStartTimeSeconds;
@property(nonatomic) _Bool hasStationName; // @dynamic hasStationName;
@property(nonatomic) _Bool hasStatusText; // @dynamic hasStatusText;
@property(nonatomic) _Bool hasTertiaryText; // @dynamic hasTertiaryText;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUltraHighDefinitionBadge; // @dynamic hasUltraHighDefinitionBadge;
@property(nonatomic) _Bool hasVersionBadge; // @dynamic hasVersionBadge;
@property(nonatomic) _Bool hasVideoVersionList; // @dynamic hasVideoVersionList;
@property(nonatomic) _Bool hasWatchedPercentageForDisplay; // @dynamic hasWatchedPercentageForDisplay;
@property(nonatomic) _Bool hideDivider; // @dynamic hideDivider;
@property(retain, nonatomic) YTIRenderer *hint; // @dynamic hint;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIRenderer *overflowMenuButton; // @dynamic overflowMenuButton;
@property(retain, nonatomic) YTIFormattedString *primaryText; // @dynamic primaryText;
@property(retain, nonatomic) YTIFormattedString *quaternaryText; // @dynamic quaternaryText;
@property(retain, nonatomic) YTIBadgeSupportedRenderers *secondaryBadge; // @dynamic secondaryBadge;
@property(retain, nonatomic) YTIFormattedString *secondaryText; // @dynamic secondaryText;
@property(retain, nonatomic) YTIFormattedString *startTime; // @dynamic startTime;
@property(nonatomic) unsigned long long startTimeSeconds; // @dynamic startTimeSeconds;
@property(retain, nonatomic) YTIFormattedString *stationName; // @dynamic stationName;
@property(retain, nonatomic) YTIFormattedString *statusText; // @dynamic statusText;
@property(retain, nonatomic) YTIFormattedString *tertiaryText; // @dynamic tertiaryText;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIBadgeSupportedRenderers *ultraHighDefinitionBadge; // @dynamic ultraHighDefinitionBadge;
@property(retain, nonatomic) YTIRenderer *versionBadge; // @dynamic versionBadge;
@property(retain, nonatomic) YTIRenderer *videoVersionList; // @dynamic videoVersionList;
@property(nonatomic) int watchedPercentageForDisplay; // @dynamic watchedPercentageForDisplay;

@end
