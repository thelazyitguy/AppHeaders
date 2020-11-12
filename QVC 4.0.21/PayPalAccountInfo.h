//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CustomerAddress, NSString;

@interface PayPalAccountInfo : NSObject
{
    NSString *_nonce;
    NSString *_payerID;
    NSString *_emailAddress;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_phone;
    NSString *_countryCode;
    CustomerAddress *_shippingAddress;
    CustomerAddress *_billingAddress;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CustomerAddress *billingAddress; // @synthesize billingAddress=_billingAddress;
@property(retain, nonatomic) CustomerAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) NSString *payerID; // @synthesize payerID=_payerID;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
- (id)commerceNonce;
- (id)detailsDict;
- (id)addressDict:(id)arg1;
- (void)addKey:(id)arg1 value:(id)arg2 toDict:(id)arg3;

@end
