//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasePaymentMethod.h"

@class NSString;

@interface CustomerGiftCard : BasePaymentMethod
{
    NSString *cardNumber;
    NSString *securityIDNumber;
    NSString *amount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *amount; // @synthesize amount;
@property(retain, nonatomic) NSString *securityIDNumber; // @synthesize securityIDNumber;
@property(retain, nonatomic) NSString *cardNumber; // @synthesize cardNumber;

@end
