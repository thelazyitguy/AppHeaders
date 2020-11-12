//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/PaymentMethodsDatasource.h>

@class NSArray, NSMutableSet, NSNumber, NSString;
@protocol NSString, PMPaymentMethodCardInformation;

@interface PMPaymentMethodManagementDatasource : PaymentMethodsDatasource
{
    NSArray<PMPaymentMethodCardInformation> *_creditCards;
    NSArray<PMPaymentMethodCardInformation> *_giftCards;
    NSString *_preferredPaymentMethodID;
    NSArray *_externalWallets;
    NSMutableSet<NSString> *_unverifiableCreditCards;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet<NSString> *unverifiableCreditCards; // @synthesize unverifiableCreditCards=_unverifiableCreditCards;
@property(copy, nonatomic) NSArray *externalWallets; // @synthesize externalWallets=_externalWallets;
@property(retain, nonatomic) NSString *preferredPaymentMethodID; // @synthesize preferredPaymentMethodID=_preferredPaymentMethodID;
@property(copy, nonatomic) NSArray<PMPaymentMethodCardInformation> *giftCards; // @synthesize giftCards=_giftCards;
@property(copy, nonatomic) NSArray<PMPaymentMethodCardInformation> *creditCards; // @synthesize creditCards=_creditCards;
- (id)filteredCreditCards:(_Bool)arg1;
- (_Bool)isCardUnverifiable:(id)arg1;
- (void)removeUnverifiableCardId:(id)arg1;
- (void)addUnverifiableCardId:(id)arg1;
- (void)p_notifyDelegate;
- (_Bool)refreshDataCachedIfAvailable:(_Bool)arg1;
- (void)parseServiceResponse:(id)arg1;
- (void)invalidateCache;
@property(readonly, nonatomic) NSNumber *totalGiftCardBalance;
@property(readonly, nonatomic) NSString *totalGiftCardBalanceFormatted;
@property(readonly, nonatomic) _Bool externalWalletsAvailable;
@property(readonly, nonatomic) _Bool paymentMethodsAvailable;
@property(readonly, nonatomic) _Bool paymentMethodsFailedToLoad;
@property(readonly, nonatomic) _Bool giftCardsFound;
@property(readonly, nonatomic) _Bool hasCapitalOneCard;
- (id)initWithConsumer:(id)arg1;

@end
