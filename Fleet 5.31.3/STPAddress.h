//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stripe/NSCopying-Protocol.h>
#import <Stripe/STPAPIResponseDecodable-Protocol.h>
#import <Stripe/STPFormEncodable-Protocol.h>

@class NSDictionary, NSString;

@interface STPAddress : NSObject <STPAPIResponseDecodable, STPFormEncodable, NSCopying>
{
    NSDictionary *additionalAPIParameters;
    NSString *_name;
    NSString *_line1;
    NSString *_line2;
    NSString *_city;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
    NSString *_phone;
    NSString *_email;
    NSDictionary *_allResponseFields;
    NSString *_givenName;
    NSString *_familyName;
}

+ (id)propertyNamesToFormFieldNamesMapping;
+ (id)rootObjectName;
+ (id)decodedObjectFromAPIResponse:(id)arg1;
+ (id)pkContactFieldsFromStripeContactFields:(id)arg1;
+ (id)applePayContactFieldsFromBillingAddressFields:(unsigned long long)arg1;
+ (unsigned long long)pkAddressFieldsFromStripeContactFields:(id)arg1;
+ (unsigned long long)applePayAddressFieldsFromBillingAddressFields:(unsigned long long)arg1;
+ (id)shippingInfoForChargeWithAddress:(id)arg1 shippingMethod:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSDictionary *allResponseFields; // @synthesize allResponseFields=_allResponseFields;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *line2; // @synthesize line2=_line2;
@property(copy, nonatomic) NSString *line1; // @synthesize line1=_line1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSDictionary *additionalAPIParameters; // @synthesize additionalAPIParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasPartialPostalAddress;
- (_Bool)hasValidPostalAddress;
- (_Bool)containsContentForShippingAddressFields:(id)arg1;
- (_Bool)containsRequiredShippingAddressFields:(id)arg1;
- (_Bool)containsContentForBillingAddressFields:(unsigned long long)arg1;
- (_Bool)containsRequiredFields:(unsigned long long)arg1;
- (id)street;
- (id)lastName;
- (id)firstName;
- (id)PKContactValue;
- (void)setAddressFromCNPostalAddress:(id)arg1;
- (id)initWithPKContact:(id)arg1;
- (id)initWithCNContact:(id)arg1;
- (id)initWithPaymentMethodBillingDetails:(id)arg1;
- (id)sanitizedPhoneStringFromCNPhoneNumber:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
