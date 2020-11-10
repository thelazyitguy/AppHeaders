//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIChannelRenderer, YTICounterfactualRenderer, YTIPlaylistRenderer, YTIRadioRenderer, YTIShowRenderer, YTIVideoRenderer;

@interface YTIChannelFeaturedContentSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIChannelRenderer *channelRenderer; // @dynamic channelRenderer;
@property(retain, nonatomic) YTICounterfactualRenderer *counterfactualRenderer; // @dynamic counterfactualRenderer;
@property(nonatomic) _Bool hasChannelRenderer; // @dynamic hasChannelRenderer;
@property(nonatomic) _Bool hasCounterfactualRenderer; // @dynamic hasCounterfactualRenderer;
@property(nonatomic) _Bool hasPlaylistRenderer; // @dynamic hasPlaylistRenderer;
@property(nonatomic) _Bool hasRadioRenderer; // @dynamic hasRadioRenderer;
@property(nonatomic) _Bool hasShowRenderer; // @dynamic hasShowRenderer;
@property(nonatomic) _Bool hasVideoRenderer; // @dynamic hasVideoRenderer;
@property(retain, nonatomic) YTIPlaylistRenderer *playlistRenderer; // @dynamic playlistRenderer;
@property(retain, nonatomic) YTIRadioRenderer *radioRenderer; // @dynamic radioRenderer;
@property(retain, nonatomic) YTIShowRenderer *showRenderer; // @dynamic showRenderer;
@property(retain, nonatomic) YTIVideoRenderer *videoRenderer; // @dynamic videoRenderer;

@end

