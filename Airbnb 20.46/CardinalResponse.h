//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CardinalPayment, NSDictionary, NSString;

@interface CardinalResponse : NSObject
{
    _Bool _isValidated;
    CardinalPayment *_payment;
    unsigned long long _actionCode;
    long long _errorNumber;
    NSString *_errorDescription;
}

+ (id)timeoutResponse;
+ (id)cancelResponse;
+ (id)errorResponseWithError:(id)arg1;
+ (id)errorResponseWithNumber:(long long)arg1 description:(id)arg2;
@property(copy, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) long long errorNumber; // @synthesize errorNumber=_errorNumber;
@property(nonatomic) unsigned long long actionCode; // @synthesize actionCode=_actionCode;
@property(retain, nonatomic) CardinalPayment *payment; // @synthesize payment=_payment;
@property(nonatomic) _Bool isValidated; // @synthesize isValidated=_isValidated;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (_Bool)populateWithDictionaryRepresentation:(id)arg1;
- (unsigned long long)actionCodeForString:(id)arg1;
- (id)stringForActionCode:(unsigned long long)arg1;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithActionCode:(unsigned long long)arg1 errorNumber:(long long)arg2 description:(id)arg3;

@end
