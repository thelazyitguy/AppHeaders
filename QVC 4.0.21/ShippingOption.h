//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PopoverOption-Protocol.h"

@class NSString;

@interface ShippingOption : NSObject <PopoverOption>
{
    NSString *code;
    NSString *method;
    NSString *price;
    NSString *estimatedDelivery;
    _Bool isDefaultForItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDefaultForItem; // @synthesize isDefaultForItem;
@property(retain, nonatomic) NSString *estimatedDelivery; // @synthesize estimatedDelivery;
@property(retain, nonatomic) NSString *price; // @synthesize price;
@property(retain, nonatomic) NSString *method; // @synthesize method;
@property(retain, nonatomic) NSString *code; // @synthesize code;
- (id)popoverOptionValue;
- (id)popoverOptionLabelPrice;
- (id)popoverOptionLabelText;
- (id)popoverOptionLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNoValues;
- (id)initWithValues:(id)arg1 method:(id)arg2 price:(id)arg3 estimatedDelivery:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
