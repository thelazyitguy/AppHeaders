//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTIAPEndpoint-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString, YTIAsyncActivityRenderer;

@interface YCHSuperChatPurchaseEndpoint : NSObject <YTIAPEndpoint>
{
    NSDictionary *_clientInfo;
    NSString *_productId;
    NSData *_serializedTransactionFlowLoggingParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *serializedTransactionFlowLoggingParams; // @synthesize serializedTransactionFlowLoggingParams=_serializedTransactionFlowLoggingParams;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) _Bool hasTransactionParams;
@property(readonly, copy, nonatomic) NSString *transactionParams;
@property(readonly, nonatomic) _Bool hasOfferParams;
@property(readonly, copy, nonatomic) NSString *offerParams;
- (id)countryMissmatchErrorStringForPriceLocale:(id)arg1;
- (_Bool)isOfferedInPriceLocale:(id)arg1 enabledTerritories:(id)arg2;
@property(readonly, nonatomic) _Bool isExpired;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) YTIAsyncActivityRenderer *asyncRenderer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

