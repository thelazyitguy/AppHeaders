//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPBannerCustomEvent.h>

#import <Funny/AdIdentifierEvent-Protocol.h>
#import <Funny/AdInfoContainer-Protocol.h>
#import <Funny/BiddingEvent-Protocol.h>
#import <Funny/KeywordsEvent-Protocol.h>
#import <Funny/TierIdEvent-Protocol.h>

@class Bid, NSDecimalNumber, NSDictionary, NSNumber, NSString, _TtC15FCAdvertisement20Mopub2InstanceLoader;

@interface AmazonBannerBiddingCustomEvent : MPBannerCustomEvent <AdInfoContainer, KeywordsEvent, TierIdEvent, AdIdentifierEvent, BiddingEvent>
{
    NSString *_adIdentifier;
    NSString *_originalAdIdentifier;
    NSNumber *_biddingPrice;
    NSDecimalNumber *_biddingWinnerPrice;
    NSDecimalNumber *_biddingWinnerPriceLastAuction;
    Bid *_bid;
    _TtC15FCAdvertisement20Mopub2InstanceLoader *_loader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC15FCAdvertisement20Mopub2InstanceLoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) Bid *bid; // @synthesize bid=_bid;
@property(retain, nonatomic) NSDecimalNumber *biddingWinnerPriceLastAuction; // @synthesize biddingWinnerPriceLastAuction=_biddingWinnerPriceLastAuction;
@property(retain, nonatomic) NSDecimalNumber *biddingWinnerPrice; // @synthesize biddingWinnerPrice=_biddingWinnerPrice;
@property(retain, nonatomic) NSNumber *biddingPrice; // @synthesize biddingPrice=_biddingPrice;
@property(copy, nonatomic) NSString *originalAdIdentifier; // @synthesize originalAdIdentifier=_originalAdIdentifier;
@property(copy, nonatomic) NSString *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
@property(readonly, nonatomic) NSString *tierId;
@property(readonly, nonatomic) NSDictionary *keywords;
@property(readonly, nonatomic) unsigned long long biddingType;
- (double)requestsLoadingTimeout;
- (void)requestAdWithSize:(struct CGSize)arg1 customEventInfo:(id)arg2 adMarkup:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
