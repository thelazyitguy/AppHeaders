//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDecimalNumber, NSString;

@interface WalletToken : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSString *billingAddress; // @dynamic billingAddress;
@property(nonatomic, copy) NSString *billingCity; // @dynamic billingCity;
@property(nonatomic, copy) NSString *billingCountry; // @dynamic billingCountry;
@property(nonatomic, copy) NSString *billingStateProvince; // @dynamic billingStateProvince;
@property(nonatomic, copy) NSString *billingZip; // @dynamic billingZip;
@property(nonatomic, copy) NSString *cardHolderName; // @dynamic cardHolderName;
@property(nonatomic) long long customerId; // @dynamic customerId;
@property(nonatomic, copy) NSString *expiration; // @dynamic expiration;
@property(nonatomic, copy) NSString *expirationMonth; // @dynamic expirationMonth;
@property(nonatomic, copy) NSString *expirationYear; // @dynamic expirationYear;
@property(nonatomic, retain) NSDecimalNumber *giftCardBalance; // @dynamic giftCardBalance;
@property(nonatomic) _Bool isGiftCard; // @dynamic isGiftCard;
@property(nonatomic) _Bool isSingleUse; // @dynamic isSingleUse;
@property(nonatomic, copy) NSString *lastFourAccountNumbers; // @dynamic lastFourAccountNumbers;
@property(nonatomic, copy) NSString *paymentMethod; // @dynamic paymentMethod;
@property(nonatomic) long long paymentProviderDbId; // @dynamic paymentProviderDbId;
@property(nonatomic, copy) NSString *paymentProviderId; // @dynamic paymentProviderId;
@property(nonatomic) long long paymentTypeId; // @dynamic paymentTypeId;
@property(nonatomic) long long tokenId; // @dynamic tokenId;
@property(nonatomic, copy) NSString *tokenizedAccountNumber; // @dynamic tokenizedAccountNumber;

@end

