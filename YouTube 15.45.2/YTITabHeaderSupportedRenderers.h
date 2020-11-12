//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIActiveAccountHeaderRenderer, YTIChipCloudRenderer, YTIFeedFilterChipBarRenderer, YTISignInPromoRenderer, YTISignInPromoWithBackgroundRenderer;

@interface YTITabHeaderSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIActiveAccountHeaderRenderer *activeAccountHeaderRenderer; // @dynamic activeAccountHeaderRenderer;
@property(retain, nonatomic) YTIChipCloudRenderer *chipCloudRenderer; // @dynamic chipCloudRenderer;
@property(retain, nonatomic) YTIFeedFilterChipBarRenderer *feedFilterChipBarRenderer; // @dynamic feedFilterChipBarRenderer;
@property(nonatomic) _Bool hasActiveAccountHeaderRenderer; // @dynamic hasActiveAccountHeaderRenderer;
@property(nonatomic) _Bool hasChipCloudRenderer; // @dynamic hasChipCloudRenderer;
@property(nonatomic) _Bool hasFeedFilterChipBarRenderer; // @dynamic hasFeedFilterChipBarRenderer;
@property(nonatomic) _Bool hasSignInPromoRenderer; // @dynamic hasSignInPromoRenderer;
@property(nonatomic) _Bool hasSignInPromoWithBackgroundRenderer; // @dynamic hasSignInPromoWithBackgroundRenderer;
@property(retain, nonatomic) YTISignInPromoRenderer *signInPromoRenderer; // @dynamic signInPromoRenderer;
@property(retain, nonatomic) YTISignInPromoWithBackgroundRenderer *signInPromoWithBackgroundRenderer; // @dynamic signInPromoWithBackgroundRenderer;

@end
