//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateInterval, NSString;

@interface YKFOATHCredentialCalculateResult : NSObject
{
    unsigned long long _type;
    NSString *_account;
    NSString *_issuer;
    unsigned long long _period;
    NSDateInterval *_validity;
    NSString *_otp;
    NSString *_key;
}

@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *otp; // @synthesize otp=_otp;
@property(retain, nonatomic) NSDateInterval *validity; // @synthesize validity=_validity;
@property(nonatomic) unsigned long long period; // @synthesize period=_period;
@property(retain, nonatomic) NSString *issuer; // @synthesize issuer=_issuer;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
