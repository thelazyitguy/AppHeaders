//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRCurrencyAmount, NSString;

@interface _TtC29LegacyFeatureModelsFoundation23ListingDepositPriceItem : AIRModel
{
    // Error parsing type: , name: localizedTitle
    // Error parsing type: , name: total
    // Error parsing type: , name: type
}

+ (id)idAttributeName;
+ (_Bool)mergeable;
+ (_Bool)cacheable;
- (void).cxx_destruct;
- (id)initWithExternalRepresentation:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;
@property(nonatomic, copy) NSString *type;
@property(nonatomic, retain) AIRCurrencyAmount *total; // @synthesize total;
@property(nonatomic, copy) NSString *localizedTitle;

@end
