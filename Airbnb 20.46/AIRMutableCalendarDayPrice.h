//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRCalendarDayPrice.h"

@class NSNumber, NSString;

@interface AIRMutableCalendarDayPrice : AIRCalendarDayPrice
{
    _Bool _demandBasedPricingOverridden;
    NSNumber *_nativePrice;
    NSString *_type;
}

+ (id)mutableCalendarDayPriceWithCalendarDayPrice:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool demandBasedPricingOverridden; // @synthesize demandBasedPricingOverridden=_demandBasedPricingOverridden;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSNumber *nativePrice; // @synthesize nativePrice=_nativePrice;

@end
