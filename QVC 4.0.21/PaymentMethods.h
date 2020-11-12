//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseQVCItem.h"

@class NSMutableArray;

@interface PaymentMethods : BaseQVCItem
{
    NSMutableArray *creditCards;
    NSMutableArray *qvcCards;
    NSMutableArray *giftCards;
    NSMutableArray *otherMethods;
    float availableCredit;
}

- (void).cxx_destruct;
@property(nonatomic) float availableCredit; // @synthesize availableCredit;
@property(retain, nonatomic) NSMutableArray *otherMethods; // @synthesize otherMethods;
@property(retain, nonatomic) NSMutableArray *giftCards; // @synthesize giftCards;
@property(retain, nonatomic) NSMutableArray *qvcCards; // @synthesize qvcCards;
@property(retain, nonatomic) NSMutableArray *creditCards; // @synthesize creditCards;
- (id)init;

@end
