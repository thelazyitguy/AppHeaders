//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface OrchCreditCardInputResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cardholderName; // @dynamic cardholderName;
@property(copy, nonatomic) NSString *cardholderRawName; // @dynamic cardholderRawName;
@property(nonatomic) int dominantColor; // @dynamic dominantColor;
@property(copy, nonatomic) NSString *eesSessionMaterial; // @dynamic eesSessionMaterial;
@property(copy, nonatomic) NSString *encryptedCardNumber; // @dynamic encryptedCardNumber;
@property(nonatomic) int expMonth; // @dynamic expMonth;
@property(nonatomic) int expYear; // @dynamic expYear;
@property(nonatomic) _Bool hasCardholderName; // @dynamic hasCardholderName;
@property(nonatomic) _Bool hasCardholderRawName; // @dynamic hasCardholderRawName;
@property(nonatomic) _Bool hasDominantColor; // @dynamic hasDominantColor;
@property(nonatomic) _Bool hasEesSessionMaterial; // @dynamic hasEesSessionMaterial;
@property(nonatomic) _Bool hasEncryptedCardNumber; // @dynamic hasEncryptedCardNumber;
@property(nonatomic) _Bool hasExpMonth; // @dynamic hasExpMonth;
@property(nonatomic) _Bool hasExpYear; // @dynamic hasExpYear;

@end

