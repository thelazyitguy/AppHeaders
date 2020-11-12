//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stripe/STPAPIResponseDecodable-Protocol.h>

@class NSDictionary, NSString;

@interface STPPaymentMethodBacsDebit : NSObject <STPAPIResponseDecodable>
{
    NSDictionary *_allResponseFields;
    NSString *_fingerprint;
    NSString *_last4;
    NSString *_sortCode;
}

+ (id)decodedObjectFromAPIResponse:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sortCode; // @synthesize sortCode=_sortCode;
@property(readonly, nonatomic) NSString *last4; // @synthesize last4=_last4;
@property(readonly, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(readonly, copy, nonatomic) NSDictionary *allResponseFields; // @synthesize allResponseFields=_allResponseFields;
- (id)initWithDictionary:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
