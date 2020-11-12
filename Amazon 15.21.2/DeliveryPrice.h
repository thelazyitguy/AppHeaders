//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class BoundedDeliveryPrice, NSString, SimpleDeliveryPrice;
@protocol Optional;

@interface DeliveryPrice : JSONModel
{
    NSString<Optional> *_deliveryPriceType;
    SimpleDeliveryPrice<Optional> *_simpleDeliveryPrice;
    BoundedDeliveryPrice<Optional> *_boundedDeliveryPrice;
}

@property(retain, nonatomic) BoundedDeliveryPrice<Optional> *boundedDeliveryPrice; // @synthesize boundedDeliveryPrice=_boundedDeliveryPrice;
@property(retain, nonatomic) SimpleDeliveryPrice<Optional> *simpleDeliveryPrice; // @synthesize simpleDeliveryPrice=_simpleDeliveryPrice;
@property(retain, nonatomic) NSString<Optional> *deliveryPriceType; // @synthesize deliveryPriceType=_deliveryPriceType;
- (void).cxx_destruct;

@end
