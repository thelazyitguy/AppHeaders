//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRCurrencyAmount, NSString;

@interface AIRDepositOptInMessageData : AIRModel
{
    AIRCurrencyAmount *_bookingPrice;
    AIRCurrencyAmount *_bookingPriceWithoutAirbnbCredit;
    NSString *_lastChargeDate;
    AIRCurrencyAmount *_lastChargePrice;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRCurrencyAmount *lastChargePrice; // @synthesize lastChargePrice=_lastChargePrice;
@property(readonly, copy, nonatomic) NSString *lastChargeDate; // @synthesize lastChargeDate=_lastChargeDate;
@property(readonly, copy, nonatomic) AIRCurrencyAmount *bookingPriceWithoutAirbnbCredit; // @synthesize bookingPriceWithoutAirbnbCredit=_bookingPriceWithoutAirbnbCredit;
@property(readonly, copy, nonatomic) AIRCurrencyAmount *bookingPrice; // @synthesize bookingPrice=_bookingPrice;

@end
