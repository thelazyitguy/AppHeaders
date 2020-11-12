//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPBannerCustomEvent.h>

#import <Funny/ASAdViewDelegate-Protocol.h>
#import <Funny/AdInfoContainer-Protocol.h>
#import <Funny/BiddingEvent-Protocol.h>
#import <Funny/KeywordsEvent-Protocol.h>
#import <Funny/_TtP15FCAdvertisement26LocalExtrasContainingEvent_-Protocol.h>

@class ASAdView, Bid, NSDecimalNumber, NSDictionary, NSNumber, NSString;

@interface InMobiBannerBiddingCustomEvent : MPBannerCustomEvent <ASAdViewDelegate, KeywordsEvent, BiddingEvent, _TtP15FCAdvertisement26LocalExtrasContainingEvent_, AdInfoContainer>
{
    Bid *_bid;
    NSNumber *_biddingPrice;
    NSDecimalNumber *_biddingWinnerPrice;
    NSDecimalNumber *_biddingWinnerPriceLastAuction;
    ASAdView *_bannerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASAdView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSDecimalNumber *biddingWinnerPriceLastAuction; // @synthesize biddingWinnerPriceLastAuction=_biddingWinnerPriceLastAuction;
@property(retain, nonatomic) NSDecimalNumber *biddingWinnerPrice; // @synthesize biddingWinnerPrice=_biddingWinnerPrice;
@property(retain, nonatomic) NSNumber *biddingPrice; // @synthesize biddingPrice=_biddingPrice;
@property(retain, nonatomic) Bid *bid; // @synthesize bid=_bid;
- (void)adViewAdImpression:(id)arg1;
- (void)adWasClicked:(id)arg1;
- (void)willLeaveApplicationFromAd:(id)arg1;
- (void)didDismissModalViewForAd:(id)arg1;
- (void)willPresentModalViewForAd:(id)arg1;
- (void)adViewDidFailToLoadAd:(id)arg1 withError:(id)arg2;
- (id)viewControllerForPresentingModalView;
@property(readonly, nonatomic) unsigned long long biddingType;
- (id)eventLocalExtras;
@property(readonly, nonatomic) NSDictionary *keywords;
- (double)requestsLoadingTimeout;
- (_Bool)enableAutomaticImpressionAndClickTracking;
- (void)requestAdWithSize:(struct CGSize)arg1;
- (void)requestAdWithSize:(struct CGSize)arg1 customEventInfo:(id)arg2 adMarkup:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
