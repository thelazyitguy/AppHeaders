//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stripe/STPFormEncodable-Protocol.h>
#import <Stripe/STPPaymentOption-Protocol.h>

@class NSDictionary, NSString, STPPaymentMethodAUBECSDebitParams, STPPaymentMethodAlipayParams, STPPaymentMethodBacsDebitParams, STPPaymentMethodBancontactParams, STPPaymentMethodBillingDetails, STPPaymentMethodCardParams, STPPaymentMethodEPSParams, STPPaymentMethodFPXParams, STPPaymentMethodGiropayParams, STPPaymentMethodPrzelewy24Params, STPPaymentMethodSEPADebitParams, STPPaymentMethodiDEALParams, UIImage;

@interface STPPaymentMethodParams : NSObject <STPFormEncodable, STPPaymentOption>
{
    NSDictionary *_additionalAPIParameters;
    NSString *_rawTypeString;
    STPPaymentMethodBillingDetails *_billingDetails;
    STPPaymentMethodCardParams *_card;
    STPPaymentMethodAlipayParams *_alipay;
    STPPaymentMethodiDEALParams *_iDEAL;
    STPPaymentMethodFPXParams *_fpx;
    STPPaymentMethodSEPADebitParams *_sepaDebit;
    STPPaymentMethodBacsDebitParams *_bacsDebit;
    STPPaymentMethodAUBECSDebitParams *_auBECSDebit;
    STPPaymentMethodGiropayParams *_giropay;
    STPPaymentMethodPrzelewy24Params *_przelewy24;
    STPPaymentMethodEPSParams *_eps;
    STPPaymentMethodBancontactParams *_bancontact;
    NSDictionary *_metadata;
}

+ (id)propertyNamesToFormFieldNamesMapping;
+ (id)rootObjectName;
+ (id)paramsWithSingleUsePaymentMethod:(id)arg1;
+ (id)paramsWithAlipay:(id)arg1 billingDetails:(id)arg2 metadata:(id)arg3;
+ (id)paramsWithBancontact:(id)arg1 billingDetails:(id)arg2 metadata:(id)arg3;
+ (id)paramsWithPrzelewy24:(id)arg1 billingDetails:(id)arg2 metadata:(id)arg3;
+ (id)paramsWithEPS:(id)arg1 billingDetails:(id)arg2 metadata:(id)arg3;
+ (id)paramsWithGiropay:(id)arg1 billingDetails:(id)arg2 metadata:(id)arg3;
+ (id)paramsWithAUBECSDebit:(id)arg1 billingDetails:(id)arg2 metadata:(id)arg3;
+ (id)paramsWithBacsDebit:(id)arg1 billingDetails:(id)arg2 metadata:(id)arg3;
+ (id)paramsWithSEPADebit:(id)arg1 billingDetails:(id)arg2 metadata:(id)arg3;
+ (id)paramsWithFPX:(id)arg1 billingDetails:(id)arg2 metadata:(id)arg3;
+ (id)paramsWithiDEAL:(id)arg1 billingDetails:(id)arg2 metadata:(id)arg3;
+ (id)paramsWithCard:(id)arg1 billingDetails:(id)arg2 metadata:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) STPPaymentMethodBancontactParams *bancontact; // @synthesize bancontact=_bancontact;
@property(retain, nonatomic) STPPaymentMethodEPSParams *eps; // @synthesize eps=_eps;
@property(retain, nonatomic) STPPaymentMethodPrzelewy24Params *przelewy24; // @synthesize przelewy24=_przelewy24;
@property(retain, nonatomic) STPPaymentMethodGiropayParams *giropay; // @synthesize giropay=_giropay;
@property(retain, nonatomic) STPPaymentMethodAUBECSDebitParams *auBECSDebit; // @synthesize auBECSDebit=_auBECSDebit;
@property(retain, nonatomic) STPPaymentMethodBacsDebitParams *bacsDebit; // @synthesize bacsDebit=_bacsDebit;
@property(retain, nonatomic) STPPaymentMethodSEPADebitParams *sepaDebit; // @synthesize sepaDebit=_sepaDebit;
@property(retain, nonatomic) STPPaymentMethodFPXParams *fpx; // @synthesize fpx=_fpx;
@property(retain, nonatomic) STPPaymentMethodiDEALParams *iDEAL; // @synthesize iDEAL=_iDEAL;
@property(retain, nonatomic) STPPaymentMethodAlipayParams *alipay; // @synthesize alipay=_alipay;
@property(retain, nonatomic) STPPaymentMethodCardParams *card; // @synthesize card=_card;
@property(retain, nonatomic) STPPaymentMethodBillingDetails *billingDetails; // @synthesize billingDetails=_billingDetails;
@property(copy, nonatomic) NSString *rawTypeString; // @synthesize rawTypeString=_rawTypeString;
@property(copy, nonatomic) NSDictionary *additionalAPIParameters; // @synthesize additionalAPIParameters=_additionalAPIParameters;
@property(readonly, nonatomic, getter=isReusable) _Bool reusable;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) UIImage *templateImage;
@property(readonly, nonatomic) UIImage *image;
- (void)setType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
