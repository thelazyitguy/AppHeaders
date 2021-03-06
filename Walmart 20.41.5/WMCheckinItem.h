//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOSShared/SDModelObject.h>

@class NSNumber, NSString, NSURL;

@interface WMCheckinItem : SDModelObject
{
    NSString *_currency;
    NSURL *_normalDisplayImageURL;
    NSURL *_smallDisplayImageURL;
    unsigned long long _fulfillmentType;
    NSNumber *_price;
    NSString *_productId;
    NSString *_productName;
    NSNumber *_quantity;
    unsigned long long _status;
    NSString *_upc;
    NSString *_wmItemNumber;
    unsigned long long _locationType;
    NSString *_accessCode;
}

+ (id)statusStringForItemStatus:(unsigned long long)arg1;
+ (id)currencyFormatter;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accessCode; // @synthesize accessCode=_accessCode;
@property(nonatomic) unsigned long long locationType; // @synthesize locationType=_locationType;
@property(copy, nonatomic) NSString *wmItemNumber; // @synthesize wmItemNumber=_wmItemNumber;
@property(copy, nonatomic) NSString *upc; // @synthesize upc=_upc;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSNumber *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(nonatomic) unsigned long long fulfillmentType; // @synthesize fulfillmentType=_fulfillmentType;
@property(copy, nonatomic) NSURL *smallDisplayImageURL; // @synthesize smallDisplayImageURL=_smallDisplayImageURL;
@property(copy, nonatomic) NSURL *normalDisplayImageURL; // @synthesize normalDisplayImageURL=_normalDisplayImageURL;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
- (id)priceString;
- (void)mapStatus:(id)arg1;
- (void)mapLocationType:(id)arg1;
- (void)mapFulfillmentType:(id)arg1;
- (void)mapSmallDisplayImageURL:(id)arg1;
- (void)mapNormalDisplayImageURL:(id)arg1;
- (_Bool)validModel;
- (id)mappingDictionaryForData:(id)arg1;

@end

