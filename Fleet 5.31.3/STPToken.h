//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stripe/STPAPIResponseDecodable-Protocol.h>
#import <Stripe/STPSourceProtocol-Protocol.h>

@class NSDate, NSDictionary, NSString, STPBankAccount, STPCard;

@interface STPToken : NSObject <STPAPIResponseDecodable, STPSourceProtocol>
{
    _Bool _livemode;
    NSString *_tokenId;
    long long _type;
    STPCard *_card;
    STPBankAccount *_bankAccount;
    NSDate *_created;
    NSDictionary *_allResponseFields;
}

+ (long long)_tokenTypeForString:(id)arg1;
+ (_Bool)_isValidRawTokenType:(id)arg1;
+ (id)decodedObjectFromAPIResponse:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *allResponseFields; // @synthesize allResponseFields=_allResponseFields;
@property(retain, nonatomic) NSDate *created; // @synthesize created=_created;
@property(retain, nonatomic) STPBankAccount *bankAccount; // @synthesize bankAccount=_bankAccount;
@property(retain, nonatomic) STPCard *card; // @synthesize card=_card;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool livemode; // @synthesize livemode=_livemode;
@property(retain, nonatomic) NSString *tokenId; // @synthesize tokenId=_tokenId;
@property(readonly, nonatomic) NSString *stripeID;
- (_Bool)isEqualToToken:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly) Class superclass;

@end
