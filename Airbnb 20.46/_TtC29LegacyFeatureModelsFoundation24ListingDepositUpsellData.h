//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class _TtC29LegacyFeatureModelsFoundation27ListingDepositPriceSchedule, _TtC29LegacyFeatureModelsFoundation30ListingDepositLearnMoreContent, _TtC29LegacyFeatureModelsFoundation32ListingPaymentsDepositUpsellData;

@interface _TtC29LegacyFeatureModelsFoundation24ListingDepositUpsellData : AIRModel
{
    // Error parsing type: , name: priceSchedule
    // Error parsing type: , name: learnMoreContent
    // Error parsing type: , name: paymentsDepositUpsellData
}

+ (id)customKeyPathMapping;
+ (id)customTransformers;
+ (id)idAttributeName;
+ (_Bool)mergeable;
+ (_Bool)cacheable;
- (void).cxx_destruct;
- (id)initWithExternalRepresentation:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;
@property(nonatomic, retain) _TtC29LegacyFeatureModelsFoundation32ListingPaymentsDepositUpsellData *paymentsDepositUpsellData; // @synthesize paymentsDepositUpsellData;
@property(nonatomic, retain) _TtC29LegacyFeatureModelsFoundation30ListingDepositLearnMoreContent *learnMoreContent; // @synthesize learnMoreContent;
@property(nonatomic, retain) _TtC29LegacyFeatureModelsFoundation27ListingDepositPriceSchedule *priceSchedule; // @synthesize priceSchedule;

@end

