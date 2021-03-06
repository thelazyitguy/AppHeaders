//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STPAPIResponseDecodable-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, STPIntentAction, STPPaymentIntentLastPaymentError, STPPaymentMethod;

@interface STPPaymentIntent : NSObject <STPAPIResponseDecodable>
{
    _Bool _livemode;
    NSString *_stripeId;
    NSString *_clientSecret;
    NSNumber *_amount;
    NSDate *_canceledAt;
    long long _captureMethod;
    long long _confirmationMethod;
    NSDate *_created;
    NSString *_currency;
    NSString *_stripeDescription;
    STPIntentAction *_nextAction;
    NSString *_receiptEmail;
    NSString *_sourceId;
    NSString *_paymentMethodId;
    long long _status;
    NSArray *_paymentMethodTypes;
    long long _setupFutureUsage;
    STPPaymentIntentLastPaymentError *_lastPaymentError;
    STPPaymentMethod *_paymentMethod;
    NSDictionary *_allResponseFields;
}

+ (id)decodedObjectFromAPIResponse:(id)arg1;
+ (long long)setupFutureUsageFromString:(id)arg1;
+ (long long)confirmationMethodFromString:(id)arg1;
+ (long long)captureMethodFromString:(id)arg1;
+ (long long)statusFromString:(id)arg1;
+ (id)idFromClientSecret:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *allResponseFields; // @synthesize allResponseFields=_allResponseFields;
@property(retain, nonatomic) STPPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(retain, nonatomic) STPPaymentIntentLastPaymentError *lastPaymentError; // @synthesize lastPaymentError=_lastPaymentError;
@property(nonatomic) long long setupFutureUsage; // @synthesize setupFutureUsage=_setupFutureUsage;
@property(copy, nonatomic) NSArray *paymentMethodTypes; // @synthesize paymentMethodTypes=_paymentMethodTypes;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *paymentMethodId; // @synthesize paymentMethodId=_paymentMethodId;
@property(copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(copy, nonatomic) NSString *receiptEmail; // @synthesize receiptEmail=_receiptEmail;
@property(retain, nonatomic) STPIntentAction *nextAction; // @synthesize nextAction=_nextAction;
@property(nonatomic) _Bool livemode; // @synthesize livemode=_livemode;
@property(copy, nonatomic) NSString *stripeDescription; // @synthesize stripeDescription=_stripeDescription;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSDate *created; // @synthesize created=_created;
@property(nonatomic) long long confirmationMethod; // @synthesize confirmationMethod=_confirmationMethod;
@property(nonatomic) long long captureMethod; // @synthesize captureMethod=_captureMethod;
@property(retain, nonatomic) NSDate *canceledAt; // @synthesize canceledAt=_canceledAt;
@property(copy, nonatomic) NSNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *clientSecret; // @synthesize clientSecret=_clientSecret;
@property(copy, nonatomic) NSString *stripeId; // @synthesize stripeId=_stripeId;
@property(readonly, nonatomic) STPIntentAction *nextSourceAction;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

