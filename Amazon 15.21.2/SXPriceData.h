//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SRDSSearchNativeBadgeModel;

@interface SXPriceData : NSObject
{
    NSString *_buyPrice;
    NSString *_listPrice;
    NSString *_unitPrice;
    NSString *_mapPriceMessage;
    NSString *_badgeAssetID;
    NSString *_badgeAssetText;
    SRDSSearchNativeBadgeModel *_badge;
    NSArray *_savings;
}

+ (id)shippingStatusFromPrimeShippingStatus:(id)arg1;
+ (id)primaryShippingStatusForShipping:(id)arg1;
+ (id)priceWithEditionsPriceInfo:(id)arg1 shippingStatusOverride:(id)arg2;
+ (id)priceWithPriceInfo:(id)arg1 shippingStatusOverride:(id)arg2;
@property(readonly, nonatomic) NSArray *savings; // @synthesize savings=_savings;
@property(readonly, nonatomic) SRDSSearchNativeBadgeModel *badge; // @synthesize badge=_badge;
@property(readonly, nonatomic) NSString *badgeAssetText; // @synthesize badgeAssetText=_badgeAssetText;
@property(readonly, nonatomic) NSString *badgeAssetID; // @synthesize badgeAssetID=_badgeAssetID;
@property(readonly, nonatomic) NSString *mapPriceMessage; // @synthesize mapPriceMessage=_mapPriceMessage;
@property(readonly, nonatomic) NSString *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(readonly, nonatomic) NSString *listPrice; // @synthesize listPrice=_listPrice;
@property(readonly, nonatomic) NSString *buyPrice; // @synthesize buyPrice=_buyPrice;
- (void).cxx_destruct;
- (id)initWithEditionsPriceInfo:(id)arg1 shippingStatusOverride:(id)arg2;
- (id)initWithPriceInfo:(id)arg1 shippingStatusOverride:(id)arg2;

@end
