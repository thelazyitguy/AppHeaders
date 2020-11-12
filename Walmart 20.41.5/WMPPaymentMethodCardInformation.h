//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/WMPResponseObject.h>

@class NSDate, NSNumber, NSString;

@interface WMPPaymentMethodCardInformation : WMPResponseObject
{
    _Bool _isDefault;
    _Bool _requiresCvvVerification;
    _Bool _cardAccountLinked;
    _Bool _isSavingsCatcher;
    NSString *_paymentMethodType;
    NSString *_cardID;
    NSString *_lastFour;
    NSString *_cardType;
    NSDate *_cardExpiryDate;
    NSString *_displayLabel;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_addressLineOne;
    NSString *_addressLineTwo;
    NSString *_city;
    NSString *_state;
    NSString *_postalCode;
    NSString *_phone;
    NSNumber *_billingNumber;
    NSNumber *_balance;
    NSString *_currency;
    NSString *_label;
    NSString *_fundingProgram;
    NSString *_pmId;
    NSNumber *_optOut;
    NSString *_firstTwelve;
}

+ (id)chasePayInformation;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSavingsCatcher; // @synthesize isSavingsCatcher=_isSavingsCatcher;
@property(copy, nonatomic) NSString *firstTwelve; // @synthesize firstTwelve=_firstTwelve;
@property(readonly, nonatomic) NSNumber *optOut; // @synthesize optOut=_optOut;
@property(copy, nonatomic) NSString *pmId; // @synthesize pmId=_pmId;
@property(copy, nonatomic) NSString *fundingProgram; // @synthesize fundingProgram=_fundingProgram;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSNumber *balance; // @synthesize balance=_balance;
@property(retain, nonatomic) NSNumber *billingNumber; // @synthesize billingNumber=_billingNumber;
@property(nonatomic) _Bool cardAccountLinked; // @synthesize cardAccountLinked=_cardAccountLinked;
@property(nonatomic) _Bool requiresCvvVerification; // @synthesize requiresCvvVerification=_requiresCvvVerification;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *addressLineTwo; // @synthesize addressLineTwo=_addressLineTwo;
@property(copy, nonatomic) NSString *addressLineOne; // @synthesize addressLineOne=_addressLineOne;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *displayLabel; // @synthesize displayLabel=_displayLabel;
@property(copy, nonatomic) NSDate *cardExpiryDate; // @synthesize cardExpiryDate=_cardExpiryDate;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *lastFour; // @synthesize lastFour=_lastFour;
@property(copy, nonatomic) NSString *cardID; // @synthesize cardID=_cardID;
@property(copy, nonatomic) NSString *paymentMethodType; // @synthesize paymentMethodType=_paymentMethodType;
@property(readonly, nonatomic) _Bool isChasePay;
- (void)updateRequiresCvvVerification:(id)arg1;
- (_Bool)cardTypeIsUnknownOrAmex;
- (_Bool)securityCodeOnTheBack;
- (long long)securityCodeLength;
- (_Bool)cardIsExpired;
- (_Bool)cardTypeRequiresExpiration;
- (void)p_setCardExpiryDate:(id)arg1;
- (id)expiryDateWithFormat:(id)arg1;
@property(readonly, nonatomic) NSString *balanceString;
- (id)formattedSecureCardNumber;
- (id)formattedGiftCardNumber;
- (id)firstTwelveNumber;
- (_Bool)validModel;
- (id)mappingDictionaryForData:(id)arg1;

@end
