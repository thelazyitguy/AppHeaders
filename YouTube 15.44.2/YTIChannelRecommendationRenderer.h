//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIChannelRecommendationSubscribeButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIThumbnailDetails;

@interface YTIChannelRecommendationRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *avatar; // @dynamic avatar;
@property(retain, nonatomic) YTIThumbnailDetails *backgroundImage; // @dynamic backgroundImage;
@property(retain, nonatomic) YTIFormattedString *channelCategory; // @dynamic channelCategory;
@property(retain, nonatomic) YTIFormattedString *channelDescription; // @dynamic channelDescription;
@property(retain, nonatomic) YTIFormattedString *channelTitle; // @dynamic channelTitle;
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasAvatar; // @dynamic hasAvatar;
@property(nonatomic) _Bool hasBackgroundImage; // @dynamic hasBackgroundImage;
@property(nonatomic) _Bool hasChannelCategory; // @dynamic hasChannelCategory;
@property(nonatomic) _Bool hasChannelDescription; // @dynamic hasChannelDescription;
@property(nonatomic) _Bool hasChannelTitle; // @dynamic hasChannelTitle;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasSubscribeButton; // @dynamic hasSubscribeButton;
@property(nonatomic) _Bool hasSubscriberCount; // @dynamic hasSubscriberCount;
@property(retain, nonatomic) YTIChannelRecommendationSubscribeButtonSupportedRenderers *subscribeButton; // @dynamic subscribeButton;
@property(retain, nonatomic) YTIFormattedString *subscriberCount; // @dynamic subscriberCount;

@end

