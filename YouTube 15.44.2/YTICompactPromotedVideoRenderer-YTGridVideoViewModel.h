//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTICompactPromotedVideoRenderer.h>

#import "YTGridVideoViewModel-Protocol.h"
#import "YTProminentThumbnailViewModel-Protocol.h"

@class NSArray, NSString, YTIFormattedString, YTIGridPromotedVideoCTASupportedRenderers, YTIPlaylistCollageThumbnailRenderer, YTIRenderer, YTIStandaloneBadgeSupportedRenderers, YTIThumbnailDetails, YTIUpcomingEventData;

@interface YTICompactPromotedVideoRenderer (YTGridVideoViewModel) <YTGridVideoViewModel, YTProminentThumbnailViewModel>
@property(readonly, nonatomic) YTIPlaylistCollageThumbnailRenderer *collageThumbnail;
@property(readonly, nonatomic) _Bool hasCollageThumbnail;
@property(readonly, nonatomic) YTIRenderer *rejectedVideoButton;
@property(readonly, nonatomic) _Bool hasRejectedVideoButton;
@property(readonly, nonatomic) int titleMaxLineCount;
@property(readonly, nonatomic) _Bool hasTitleMaxLineCount;
@property(readonly, nonatomic) YTIFormattedString *publishedTimeText;
@property(readonly, nonatomic) _Bool hasPublishedTimeText;
@property(readonly, nonatomic) YTIFormattedString *videoCountShortText;
@property(readonly, nonatomic) _Bool hasVideoCountShortText;
@property(readonly, nonatomic) YTIFormattedString *videoCountText;
@property(readonly, nonatomic) _Bool hasVideoCountText;
@property(readonly, nonatomic) YTIUpcomingEventData *upcomingEventData;
@property(readonly, nonatomic) _Bool hasUpcomingEventData;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *bottomStandaloneBadge;
@property(readonly, nonatomic) _Bool hasBottomStandaloneBadge;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge;
@property(readonly, nonatomic) _Bool hasTopStandaloneBadge;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *standaloneBadge;
@property(readonly, nonatomic) _Bool hasStandaloneBadge;
@property(readonly, nonatomic) _Bool isNarrow;
@property(readonly, nonatomic) _Bool isRadio;
@property(readonly, nonatomic) _Bool isWatched;
@property(readonly, nonatomic) _Bool shouldShowAdBadge;
@property(readonly, nonatomic) NSArray *badgesArray;
@property(readonly, nonatomic) NSArray *thumbnailOverlaysArray;
@property(readonly, nonatomic) NSArray *thumbnailBadgesArray;
@property(readonly, nonatomic) NSArray *endSwipeContentsArray;
- (_Bool)hasProminentThumbnailParams;
- (id)prominentThumbnailParams;

// Remaining properties
@property(readonly, nonatomic) YTIThumbnailDetails *channelThumbnail;
@property(readonly, nonatomic) YTIGridPromotedVideoCTASupportedRenderers *ctaRenderer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasLongBylineText;
@property(readonly, nonatomic) _Bool hasMenu;
@property(readonly, nonatomic) _Bool hasShortBylineText;
@property(readonly, nonatomic) _Bool hasShortViewCountText;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasViewCountText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) YTIFormattedString *lengthText;
@property(readonly, nonatomic) YTIFormattedString *longBylineText;
@property(readonly, nonatomic) YTIFormattedString *shortBylineText;
@property(readonly, nonatomic) YTIFormattedString *shortViewCountText;
@property(readonly) Class superclass;
@property(readonly, nonatomic) YTIThumbnailDetails *thumbnail;
@property(readonly, nonatomic) YTIFormattedString *title;
@property(readonly, nonatomic) YTIFormattedString *viewCountText;
@end

