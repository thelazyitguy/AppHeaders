//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stripe/NSCopying-Protocol.h>

@class NSSet, NSString;

@interface STPPaymentConfiguration : NSObject <NSCopying>
{
    _Bool _verifyPrefilledShippingAddress;
    _Bool _canDeletePaymentOptions;
    NSString *_publishableKey;
    NSString *_stripeAccount;
    unsigned long long _additionalPaymentOptions;
    unsigned long long _requiredBillingAddressFields;
    NSSet *_requiredShippingAddressFields;
    unsigned long long _shippingType;
    NSSet *_availableCountries;
    NSString *_companyName;
    NSString *_appleMerchantIdentifier;
}

+ (id)sharedConfiguration;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool canDeletePaymentOptions; // @synthesize canDeletePaymentOptions=_canDeletePaymentOptions;
@property(copy, nonatomic) NSString *appleMerchantIdentifier; // @synthesize appleMerchantIdentifier=_appleMerchantIdentifier;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(copy, nonatomic) NSSet *availableCountries; // @synthesize availableCountries=_availableCountries;
@property(nonatomic) unsigned long long shippingType; // @synthesize shippingType=_shippingType;
@property(nonatomic) _Bool verifyPrefilledShippingAddress; // @synthesize verifyPrefilledShippingAddress=_verifyPrefilledShippingAddress;
@property(copy, nonatomic) NSSet *requiredShippingAddressFields; // @synthesize requiredShippingAddressFields=_requiredShippingAddressFields;
@property(nonatomic) unsigned long long requiredBillingAddressFields; // @synthesize requiredBillingAddressFields=_requiredBillingAddressFields;
@property(nonatomic) unsigned long long additionalPaymentOptions; // @synthesize additionalPaymentOptions=_additionalPaymentOptions;
@property(copy, nonatomic) NSString *stripeAccount; // @synthesize stripeAccount=_stripeAccount;
@property(copy, nonatomic) NSString *publishableKey; // @synthesize publishableKey=_publishableKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) NSSet *_availableCountries;
@property(readonly, nonatomic) _Bool applePayEnabled;
- (id)init;

@end
