//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSx_GPBMessage.h>

@class GMSx_GMTTDealTreatment, GMSx_GMTTLoggedLink, GMSx_GMTTSHHOccupancy, GMSx_GMTTSHHRateFeatures, NSMutableArray, NSString;

@interface GMSx_GMTTHotelBookingPartner : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMTTLoggedLink *URL; // @dynamic URL;
@property(copy, nonatomic) NSString *clickTargetToken; // @dynamic clickTargetToken;
@property(copy, nonatomic) NSString *clickToCallURL; // @dynamic clickToCallURL;
@property(retain, nonatomic) GMSx_GMTTDealTreatment *dealTreatment; // @dynamic dealTreatment;
@property(nonatomic) _Bool directBookingEnabled; // @dynamic directBookingEnabled;
@property(nonatomic) _Bool exchangeRateApplied; // @dynamic exchangeRateApplied;
@property(copy, nonatomic) NSString *formattedPriceWithTaxes; // @dynamic formattedPriceWithTaxes;
@property(copy, nonatomic) NSString *formattedPriceWithoutTaxes; // @dynamic formattedPriceWithoutTaxes;
@property(copy, nonatomic) NSString *formattedTotalPriceWithTaxes; // @dynamic formattedTotalPriceWithTaxes;
@property(copy, nonatomic) NSString *formattedTotalPriceWithoutTaxes; // @dynamic formattedTotalPriceWithoutTaxes;
@property(nonatomic) _Bool hasClickTargetToken; // @dynamic hasClickTargetToken;
@property(nonatomic) _Bool hasClickToCallURL; // @dynamic hasClickToCallURL;
@property(nonatomic) _Bool hasDealTreatment; // @dynamic hasDealTreatment;
@property(nonatomic) _Bool hasDirectBookingEnabled; // @dynamic hasDirectBookingEnabled;
@property(nonatomic) _Bool hasExchangeRateApplied; // @dynamic hasExchangeRateApplied;
@property(nonatomic) _Bool hasFormattedPriceWithTaxes; // @dynamic hasFormattedPriceWithTaxes;
@property(nonatomic) _Bool hasFormattedPriceWithoutTaxes; // @dynamic hasFormattedPriceWithoutTaxes;
@property(nonatomic) _Bool hasFormattedTotalPriceWithTaxes; // @dynamic hasFormattedTotalPriceWithTaxes;
@property(nonatomic) _Bool hasFormattedTotalPriceWithoutTaxes; // @dynamic hasFormattedTotalPriceWithoutTaxes;
@property(nonatomic) _Bool hasIncompleteTaxesAndFees; // @dynamic hasIncompleteTaxesAndFees;
@property(nonatomic) _Bool hasIsOwner; // @dynamic hasIsOwner;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOccupancy; // @dynamic hasOccupancy;
@property(nonatomic) _Bool hasPartnerIconURL; // @dynamic hasPartnerIconURL;
@property(nonatomic) _Bool hasRateFeatures; // @dynamic hasRateFeatures;
@property(nonatomic) _Bool hasRequireDisclosure; // @dynamic hasRequireDisclosure;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool incompleteTaxesAndFees; // @dynamic incompleteTaxesAndFees;
@property(nonatomic) _Bool isOwner; // @dynamic isOwner;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GMSx_GMTTSHHOccupancy *occupancy; // @dynamic occupancy;
@property(copy, nonatomic) NSString *partnerIconURL; // @dynamic partnerIconURL;
@property(retain, nonatomic) GMSx_GMTTSHHRateFeatures *rateFeatures; // @dynamic rateFeatures;
@property(nonatomic) _Bool requireDisclosure; // @dynamic requireDisclosure;
@property(retain, nonatomic) NSMutableArray *roomArray; // @dynamic roomArray;
@property(readonly, nonatomic) unsigned long long roomArray_Count; // @dynamic roomArray_Count;
@property(retain, nonatomic) NSMutableArray *taglineArray; // @dynamic taglineArray;
@property(readonly, nonatomic) unsigned long long taglineArray_Count; // @dynamic taglineArray_Count;

@end
