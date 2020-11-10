//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTILiveBadgeRenderer, YTIMetadataBadgeRenderer, YTIShelfFeaturedTextBadgeRenderer, YTIVerifiedBadgeRenderer;

@interface YTIShelfBadgeSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLiveBadgeRenderer; // @dynamic hasLiveBadgeRenderer;
@property(nonatomic) _Bool hasMetadataBadgeRenderer; // @dynamic hasMetadataBadgeRenderer;
@property(nonatomic) _Bool hasShelfFeaturedTextBadgeRenderer; // @dynamic hasShelfFeaturedTextBadgeRenderer;
@property(nonatomic) _Bool hasVerifiedBadgeRenderer; // @dynamic hasVerifiedBadgeRenderer;
@property(retain, nonatomic) YTILiveBadgeRenderer *liveBadgeRenderer; // @dynamic liveBadgeRenderer;
@property(retain, nonatomic) YTIMetadataBadgeRenderer *metadataBadgeRenderer; // @dynamic metadataBadgeRenderer;
@property(retain, nonatomic) YTIShelfFeaturedTextBadgeRenderer *shelfFeaturedTextBadgeRenderer; // @dynamic shelfFeaturedTextBadgeRenderer;
@property(retain, nonatomic) YTIVerifiedBadgeRenderer *verifiedBadgeRenderer; // @dynamic verifiedBadgeRenderer;

@end

