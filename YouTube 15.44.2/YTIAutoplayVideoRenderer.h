//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTICommand, YTIFormattedString, YTILikeButtonSupportedRenderers, YTIMenuSupportedRenderers, YTIPlayerResponse, YTIShareButtonSupportedRenderers, YTIThumbnailDetails;

@interface YTIAutoplayVideoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *channelNavigationEndpoint; // @dynamic channelNavigationEndpoint;
@property(retain, nonatomic) YTIThumbnailDetails *channelThumbnail; // @dynamic channelThumbnail;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(nonatomic) _Bool hasChannelNavigationEndpoint; // @dynamic hasChannelNavigationEndpoint;
@property(nonatomic) _Bool hasChannelThumbnail; // @dynamic hasChannelThumbnail;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasLikeButton; // @dynamic hasLikeButton;
@property(nonatomic) _Bool hasLongBylineText; // @dynamic hasLongBylineText;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationConfidence; // @dynamic hasNavigationConfidence;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasPlayerResponse; // @dynamic hasPlayerResponse;
@property(nonatomic) _Bool hasShareButton; // @dynamic hasShareButton;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(retain, nonatomic) YTIFormattedString *lengthText; // @dynamic lengthText;
@property(retain, nonatomic) YTILikeButtonSupportedRenderers *likeButton; // @dynamic likeButton;
@property(retain, nonatomic) YTIFormattedString *longBylineText; // @dynamic longBylineText;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(nonatomic) float navigationConfidence; // @dynamic navigationConfidence;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIPlayerResponse *playerResponse; // @dynamic playerResponse;
@property(retain, nonatomic) YTIShareButtonSupportedRenderers *shareButton; // @dynamic shareButton;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

