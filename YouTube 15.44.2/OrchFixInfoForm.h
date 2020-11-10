//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, OrchAddressForm, OrchCreditCardUpdateForm, OrchFormHeader, OrchInstrumentForm;

@interface OrchFixInfoForm : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchFormHeader *formHeader; // @dynamic formHeader;
@property(nonatomic) _Bool hasFormHeader; // @dynamic hasFormHeader;
@property(nonatomic) _Bool hasInstrumentForm; // @dynamic hasInstrumentForm;
@property(nonatomic) _Bool hasScreenDetailsId; // @dynamic hasScreenDetailsId;
@property(nonatomic) _Bool hasUpdateExpirationDateForm; // @dynamic hasUpdateExpirationDateForm;
@property(nonatomic) _Bool hasUpgradeBillingAddressForm; // @dynamic hasUpgradeBillingAddressForm;
@property(retain, nonatomic) OrchInstrumentForm *instrumentForm; // @dynamic instrumentForm;
@property(copy, nonatomic) NSString *screenDetailsId; // @dynamic screenDetailsId;
@property(retain, nonatomic) OrchCreditCardUpdateForm *updateExpirationDateForm; // @dynamic updateExpirationDateForm;
@property(retain, nonatomic) OrchAddressForm *upgradeBillingAddressForm; // @dynamic upgradeBillingAddressForm;

@end
