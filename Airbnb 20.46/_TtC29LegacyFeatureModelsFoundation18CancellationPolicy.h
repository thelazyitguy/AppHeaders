//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSArray, NSNumber, NSString;

@interface _TtC29LegacyFeatureModelsFoundation18CancellationPolicy : AIRModel
{
    // Error parsing type: , name: linkText
    // Error parsing type: , name: milestones
    // Error parsing type: , name: policyID
    // Error parsing type: , name: policyName
    // Error parsing type: , name: policyPageTexts
    // Error parsing type: , name: priceFactor
    // Error parsing type: , name: priceType
    // Error parsing type: , name: subtitle
    // Error parsing type: , name: title
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
@property(nonatomic, copy) NSString *title;
@property(nonatomic, copy) NSString *subtitle;
@property(nonatomic, copy) NSString *priceType;
@property(nonatomic, retain) NSNumber *priceFactor; // @synthesize priceFactor;
@property(nonatomic, copy) NSArray *policyPageTexts;
@property(nonatomic, copy) NSString *policyName;
@property(nonatomic, retain) NSNumber *policyID; // @synthesize policyID;
@property(nonatomic, copy) NSArray *milestones;
@property(nonatomic, copy) NSString *linkText;

@end
