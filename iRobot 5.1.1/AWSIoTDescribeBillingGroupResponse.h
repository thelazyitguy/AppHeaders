//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class AWSIoTBillingGroupMetadata, AWSIoTBillingGroupProperties, NSNumber, NSString;

@interface AWSIoTDescribeBillingGroupResponse : AWSModel
{
    NSString *_billingGroupArn;
    NSString *_billingGroupId;
    AWSIoTBillingGroupMetadata *_billingGroupMetadata;
    NSString *_billingGroupName;
    AWSIoTBillingGroupProperties *_billingGroupProperties;
    NSNumber *_version;
}

+ (id)billingGroupPropertiesJSONTransformer;
+ (id)billingGroupMetadataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(retain, nonatomic) AWSIoTBillingGroupProperties *billingGroupProperties; // @synthesize billingGroupProperties=_billingGroupProperties;
@property(retain, nonatomic) NSString *billingGroupName; // @synthesize billingGroupName=_billingGroupName;
@property(retain, nonatomic) AWSIoTBillingGroupMetadata *billingGroupMetadata; // @synthesize billingGroupMetadata=_billingGroupMetadata;
@property(retain, nonatomic) NSString *billingGroupId; // @synthesize billingGroupId=_billingGroupId;
@property(retain, nonatomic) NSString *billingGroupArn; // @synthesize billingGroupArn=_billingGroupArn;
- (void).cxx_destruct;

@end
