//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSArray, NSNumber, NSString;

@interface AWSKMSCreateKeyRequest : AWSRequest
{
    NSNumber *_bypassPolicyLockoutSafetyCheck;
    NSString *_customKeyStoreId;
    NSString *_detail;
    long long _keyUsage;
    long long _origin;
    NSString *_policy;
    NSArray *_tags;
}

+ (id)tagsJSONTransformer;
+ (id)originJSONTransformer;
+ (id)keyUsageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *policy; // @synthesize policy=_policy;
@property(nonatomic) long long origin; // @synthesize origin=_origin;
@property(nonatomic) long long keyUsage; // @synthesize keyUsage=_keyUsage;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *customKeyStoreId; // @synthesize customKeyStoreId=_customKeyStoreId;
@property(retain, nonatomic) NSNumber *bypassPolicyLockoutSafetyCheck; // @synthesize bypassPolicyLockoutSafetyCheck=_bypassPolicyLockoutSafetyCheck;
- (void).cxx_destruct;

@end

