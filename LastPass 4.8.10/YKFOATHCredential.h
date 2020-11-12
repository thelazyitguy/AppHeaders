//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface YKFOATHCredential : NSObject
{
    unsigned int _counter;
    unsigned long long _type;
    unsigned long long _algorithm;
    NSString *_label;
    NSData *_secret;
    NSString *_issuer;
    unsigned long long _digits;
    unsigned long long _period;
    NSString *_account;
    NSString *_key;
}

@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(nonatomic) unsigned int counter; // @synthesize counter=_counter;
@property(nonatomic) unsigned long long period; // @synthesize period=_period;
@property(nonatomic) unsigned long long digits; // @synthesize digits=_digits;
@property(retain, nonatomic) NSString *issuer; // @synthesize issuer=_issuer;
@property(retain, nonatomic) NSData *secret; // @synthesize secret=_secret;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)queryParameterValueForName:(id)arg1 inUrlComponents:(id)arg2;
- (_Bool)parserTOTPParamsFromUrlComponents:(id)arg1;
- (_Bool)parserHOTPParamsFromUrlComponents:(id)arg1;
- (_Bool)parseTypeFromUrlComponents:(id)arg1;
- (_Bool)parseLabelFromUrlComponents:(id)arg1;
- (_Bool)parseSecretFromUrlComponents:(id)arg1;
- (_Bool)parseIssuerFromUrlComponents:(id)arg1;
- (_Bool)parseAlgorithmFromUrlComponents:(id)arg1;
- (_Bool)parseDigitsFromUrlComponents:(id)arg1;
- (_Bool)parseUrl:(id)arg1;
- (id)initWithURL:(id)arg1;

@end
