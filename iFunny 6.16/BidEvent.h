//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GPBMessage.h>

@class ADCOMAd, AuctionContext, NSString, ORTBResponse_Seatbid_Bid;

@interface BidEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ADCOMAd *ad; // @dynamic ad;
@property(retain, nonatomic) AuctionContext *auctionContext; // @dynamic auctionContext;
@property(retain, nonatomic) ORTBResponse_Seatbid_Bid *bid; // @dynamic bid;
@property(copy, nonatomic) NSString *bidid; // @dynamic bidid;
@property(nonatomic) _Bool hasAd; // @dynamic hasAd;
@property(nonatomic) _Bool hasAuctionContext; // @dynamic hasAuctionContext;
@property(nonatomic) _Bool hasBid; // @dynamic hasBid;
@property(copy, nonatomic) NSString *seat; // @dynamic seat;
@property(copy, nonatomic) NSString *timestamp; // @dynamic timestamp;

@end
