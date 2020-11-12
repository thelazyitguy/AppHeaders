//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRListing, AIRUser, NSArray, NSDate, NSNumber, NSString;

@interface AIRCohostingContract : AIRModel
{
    _Bool _includeCleaningFee;
    _Bool _canAccessResolutionCenter;
    NSString *_contractID;
    NSNumber *_percentage;
    NSNumber *_fixedAmount;
    NSString *_currency;
    NSNumber *_ammountCurrency;
    NSNumber *_cleaningFee;
    NSNumber *_cleaningFeeCurrency;
    NSDate *_startedAt;
    NSDate *_endedAt;
    NSDate *_acceptedAt;
    NSDate *_createdAt;
    NSNumber *_source;
    NSNumber *_minimumFee;
    NSNumber *_maximumFee;
    NSString *_formattedMaximumFee;
    NSString *_formattedMinimumFee;
    NSString *_payoutSplitRuleDescriptionLight;
    AIRUser *_owner;
    AIRUser *_cohost;
    NSArray *_services;
    NSString *_listingId;
    AIRListing *_listingDetails;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRListing *listingDetails; // @synthesize listingDetails=_listingDetails;
@property(readonly, copy, nonatomic) NSString *listingId; // @synthesize listingId=_listingId;
@property(readonly, copy, nonatomic) NSArray *services; // @synthesize services=_services;
@property(readonly, copy, nonatomic) AIRUser *cohost; // @synthesize cohost=_cohost;
@property(readonly, copy, nonatomic) AIRUser *owner; // @synthesize owner=_owner;
@property(readonly, copy, nonatomic) NSString *payoutSplitRuleDescriptionLight; // @synthesize payoutSplitRuleDescriptionLight=_payoutSplitRuleDescriptionLight;
@property(readonly, copy, nonatomic) NSString *formattedMinimumFee; // @synthesize formattedMinimumFee=_formattedMinimumFee;
@property(readonly, copy, nonatomic) NSString *formattedMaximumFee; // @synthesize formattedMaximumFee=_formattedMaximumFee;
@property(readonly, copy, nonatomic) NSNumber *maximumFee; // @synthesize maximumFee=_maximumFee;
@property(readonly, copy, nonatomic) NSNumber *minimumFee; // @synthesize minimumFee=_minimumFee;
@property(readonly, copy, nonatomic) NSNumber *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, copy, nonatomic) NSDate *acceptedAt; // @synthesize acceptedAt=_acceptedAt;
@property(readonly, copy, nonatomic) NSDate *endedAt; // @synthesize endedAt=_endedAt;
@property(readonly, copy, nonatomic) NSDate *startedAt; // @synthesize startedAt=_startedAt;
@property(readonly, copy, nonatomic) NSNumber *cleaningFeeCurrency; // @synthesize cleaningFeeCurrency=_cleaningFeeCurrency;
@property(readonly, copy, nonatomic) NSNumber *cleaningFee; // @synthesize cleaningFee=_cleaningFee;
@property(readonly, copy, nonatomic) NSNumber *ammountCurrency; // @synthesize ammountCurrency=_ammountCurrency;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, nonatomic) _Bool canAccessResolutionCenter; // @synthesize canAccessResolutionCenter=_canAccessResolutionCenter;
@property(readonly, nonatomic) _Bool includeCleaningFee; // @synthesize includeCleaningFee=_includeCleaningFee;
@property(readonly, copy, nonatomic) NSNumber *fixedAmount; // @synthesize fixedAmount=_fixedAmount;
@property(readonly, copy, nonatomic) NSNumber *percentage; // @synthesize percentage=_percentage;
@property(readonly, copy, nonatomic) NSString *contractID; // @synthesize contractID=_contractID;

@end
