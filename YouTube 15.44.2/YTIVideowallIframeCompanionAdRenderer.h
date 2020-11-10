//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIAdLayoutLoggingData, YTICommand, YTIRenderer;

@interface YTIVideowallIframeCompanionAdRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *adInfoRenderer; // @dynamic adInfoRenderer;
@property(retain, nonatomic) YTIAdLayoutLoggingData *adLayoutLoggingData; // @dynamic adLayoutLoggingData;
@property(copy, nonatomic) NSString *adVideoId; // @dynamic adVideoId;
@property(retain, nonatomic) NSMutableArray *channelInfoBarClickCommandsArray; // @dynamic channelInfoBarClickCommandsArray;
@property(readonly, nonatomic) unsigned long long channelInfoBarClickCommandsArray_Count; // @dynamic channelInfoBarClickCommandsArray_Count;
@property(retain, nonatomic) YTICommand *clickthroughEndpoint; // @dynamic clickthroughEndpoint;
@property(nonatomic) _Bool hasAdInfoRenderer; // @dynamic hasAdInfoRenderer;
@property(nonatomic) _Bool hasAdLayoutLoggingData; // @dynamic hasAdLayoutLoggingData;
@property(nonatomic) _Bool hasAdVideoId; // @dynamic hasAdVideoId;
@property(nonatomic) _Bool hasClickthroughEndpoint; // @dynamic hasClickthroughEndpoint;
@property(nonatomic) _Bool hasIframeHeight; // @dynamic hasIframeHeight;
@property(nonatomic) _Bool hasIframeURL; // @dynamic hasIframeURL;
@property(nonatomic) _Bool hasIframeWidth; // @dynamic hasIframeWidth;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) unsigned int iframeHeight; // @dynamic iframeHeight;
@property(copy, nonatomic) NSString *iframeURL; // @dynamic iframeURL;
@property(nonatomic) unsigned int iframeWidth; // @dynamic iframeWidth;
@property(retain, nonatomic) NSMutableArray *impressionCommandsArray; // @dynamic impressionCommandsArray;
@property(readonly, nonatomic) unsigned long long impressionCommandsArray_Count; // @dynamic impressionCommandsArray_Count;
@property(retain, nonatomic) NSMutableArray *onClickCommandsArray; // @dynamic onClickCommandsArray;
@property(readonly, nonatomic) unsigned long long onClickCommandsArray_Count; // @dynamic onClickCommandsArray_Count;
@property(retain, nonatomic) NSMutableArray *subscribeButtonClickCommandsArray; // @dynamic subscribeButtonClickCommandsArray;
@property(readonly, nonatomic) unsigned long long subscribeButtonClickCommandsArray_Count; // @dynamic subscribeButtonClickCommandsArray_Count;
@property(retain, nonatomic) NSMutableArray *thumbnailClickCommandsArray; // @dynamic thumbnailClickCommandsArray;
@property(readonly, nonatomic) unsigned long long thumbnailClickCommandsArray_Count; // @dynamic thumbnailClickCommandsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) NSMutableArray *visitAdvertiserLinkClickCommandsArray; // @dynamic visitAdvertiserLinkClickCommandsArray;
@property(readonly, nonatomic) unsigned long long visitAdvertiserLinkClickCommandsArray_Count; // @dynamic visitAdvertiserLinkClickCommandsArray_Count;

@end

