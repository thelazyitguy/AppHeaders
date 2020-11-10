//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIMembershipOfferRenderer, YTISponsorshipsOfferListRenderer, YTITvfilmOffersRenderer, YTITvfilmRichOffersRenderer, YTIYPCTransactionErrorMessageRenderer, YTIYpcOffersListRenderer;

@interface YTITransactionOffersSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIYPCTransactionErrorMessageRenderer *errorMessageRenderer; // @dynamic errorMessageRenderer;
@property(nonatomic) _Bool hasErrorMessageRenderer; // @dynamic hasErrorMessageRenderer;
@property(retain, nonatomic) YTIMembershipOfferRenderer *membershipOfferRenderer; // @dynamic membershipOfferRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTISponsorshipsOfferListRenderer *sponsorshipsOfferListRenderer; // @dynamic sponsorshipsOfferListRenderer;
@property(retain, nonatomic) YTITvfilmOffersRenderer *tvfilmOffersRenderer; // @dynamic tvfilmOffersRenderer;
@property(retain, nonatomic) YTITvfilmRichOffersRenderer *tvfilmRichOffersRenderer; // @dynamic tvfilmRichOffersRenderer;
@property(retain, nonatomic) YTIYpcOffersListRenderer *ypcOffersListRenderer; // @dynamic ypcOffersListRenderer;

@end

