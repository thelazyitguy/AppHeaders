//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, OrchAddressFormValue;

@interface OrchCreditCardUpdateFormValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchAddressFormValue *billingAddress; // @dynamic billingAddress;
@property(copy, nonatomic) NSString *cardNickname; // @dynamic cardNickname;
@property(copy, nonatomic) NSString *cardholderName; // @dynamic cardholderName;
@property(copy, nonatomic) NSData *dataToken; // @dynamic dataToken;
@property(copy, nonatomic) NSString *eesSessionMaterial; // @dynamic eesSessionMaterial;
@property(copy, nonatomic) NSString *encryptedCvc; // @dynamic encryptedCvc;
@property(nonatomic) _Bool hasBillingAddress; // @dynamic hasBillingAddress;
@property(nonatomic) _Bool hasCardNickname; // @dynamic hasCardNickname;
@property(nonatomic) _Bool hasCardholderName; // @dynamic hasCardholderName;
@property(nonatomic) _Bool hasDataToken; // @dynamic hasDataToken;
@property(nonatomic) _Bool hasEesSessionMaterial; // @dynamic hasEesSessionMaterial;
@property(nonatomic) _Bool hasEncryptedCvc; // @dynamic hasEncryptedCvc;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasLegalDocData; // @dynamic hasLegalDocData;
@property(nonatomic) _Bool hasNewMonth; // @dynamic hasNewMonth;
@property(nonatomic) _Bool hasNewYear; // @dynamic hasNewYear;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *legalDocData; // @dynamic legalDocData;
@property(nonatomic) int newMonth; // @dynamic newMonth;
@property(nonatomic) int newYear; // @dynamic newYear;

@end
