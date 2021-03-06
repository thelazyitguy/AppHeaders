//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRCurrencyAmount, AIRDate, NSDate, NSDictionary, NSNumber, NSString;

@interface AIRReservationAlteration : AIRModel
{
    NSString *_reservationAlterationId;
    NSDate *_createdAt;
    NSDate *_responseAt;
    NSDate *_updatedAt;
    NSDate *_expiresAt;
    AIRDate *_checkIn;
    AIRDate *_checkOut;
    NSNumber *_guests;
    NSNumber *_basePrice;
    NSNumber *_extrasPrice;
    NSDictionary *_pricingQuote;
    AIRCurrencyAmount *_guestPriceDifference;
    NSString *_initiatedBy;
    NSString *_initiatorId;
    NSString *_listingId;
    NSNumber *_possible;
    NSString *_problem;
    NSNumber *_status;
    NSString *_statusString;
    NSString *_paymentURL;
}

+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *paymentURL; // @synthesize paymentURL=_paymentURL;
@property(readonly, copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(readonly, copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *problem; // @synthesize problem=_problem;
@property(readonly, copy, nonatomic) NSNumber *possible; // @synthesize possible=_possible;
@property(readonly, copy, nonatomic) NSString *listingId; // @synthesize listingId=_listingId;
@property(readonly, copy, nonatomic) NSString *initiatorId; // @synthesize initiatorId=_initiatorId;
@property(readonly, copy, nonatomic) NSString *initiatedBy; // @synthesize initiatedBy=_initiatedBy;
@property(readonly, copy, nonatomic) AIRCurrencyAmount *guestPriceDifference; // @synthesize guestPriceDifference=_guestPriceDifference;
@property(readonly, copy, nonatomic) NSDictionary *pricingQuote; // @synthesize pricingQuote=_pricingQuote;
@property(readonly, copy, nonatomic) NSNumber *extrasPrice; // @synthesize extrasPrice=_extrasPrice;
@property(readonly, copy, nonatomic) NSNumber *basePrice; // @synthesize basePrice=_basePrice;
@property(readonly, copy, nonatomic) NSNumber *guests; // @synthesize guests=_guests;
@property(readonly, copy, nonatomic) AIRDate *checkOut; // @synthesize checkOut=_checkOut;
@property(readonly, copy, nonatomic) AIRDate *checkIn; // @synthesize checkIn=_checkIn;
@property(readonly, copy, nonatomic) NSDate *expiresAt; // @synthesize expiresAt=_expiresAt;
@property(readonly, copy, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, copy, nonatomic) NSDate *responseAt; // @synthesize responseAt=_responseAt;
@property(readonly, copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, copy, nonatomic) NSString *reservationAlterationId; // @synthesize reservationAlterationId=_reservationAlterationId;
- (_Bool)isAwaitingPayment;
- (_Bool)isPending;

@end

