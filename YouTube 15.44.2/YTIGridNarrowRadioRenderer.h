//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIMenuSupportedRenderers, YTIThumbnailDetails;

@interface YTIGridNarrowRadioRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *bottomButtons; // @dynamic bottomButtons;
@property(nonatomic) _Bool hasBottomButtons; // @dynamic hasBottomButtons;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasSecondaryNavigationEndpoint; // @dynamic hasSecondaryNavigationEndpoint;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleMaxLineCount; // @dynamic hasTitleMaxLineCount;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoCountShortText; // @dynamic hasVideoCountShortText;
@property(nonatomic) _Bool hasVideoCountText; // @dynamic hasVideoCountText;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(retain, nonatomic) YTICommand *secondaryNavigationEndpoint; // @dynamic secondaryNavigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) NSMutableArray *thumbnailOverlaysArray; // @dynamic thumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count; // @dynamic thumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(nonatomic) int titleMaxLineCount; // @dynamic titleMaxLineCount;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *videoCountShortText; // @dynamic videoCountShortText;
@property(retain, nonatomic) YTIFormattedString *videoCountText; // @dynamic videoCountText;

@end

