//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIBannerEditorErrorSupportedRenderers, YTIResponseContext, YTIThumbnailDetails;

@interface YTIEditChannelBannerResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *banner; // @dynamic banner;
@property(retain, nonatomic) YTIBannerEditorErrorSupportedRenderers *error; // @dynamic error;
@property(nonatomic) _Bool hasBanner; // @dynamic hasBanner;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasMobileBanner; // @dynamic hasMobileBanner;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasTvBanner; // @dynamic hasTvBanner;
@property(retain, nonatomic) YTIThumbnailDetails *mobileBanner; // @dynamic mobileBanner;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(retain, nonatomic) YTIThumbnailDetails *tvBanner; // @dynamic tvBanner;

@end

