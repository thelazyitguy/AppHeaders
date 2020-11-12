//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class AWSIoTThingGroupProperties, NSArray, NSString;

@interface AWSIoTCreateDynamicThingGroupRequest : AWSRequest
{
    NSString *_indexName;
    NSString *_queryString;
    NSString *_queryVersion;
    NSArray *_tags;
    NSString *_thingGroupName;
    AWSIoTThingGroupProperties *_thingGroupProperties;
}

+ (id)thingGroupPropertiesJSONTransformer;
+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWSIoTThingGroupProperties *thingGroupProperties; // @synthesize thingGroupProperties=_thingGroupProperties;
@property(retain, nonatomic) NSString *thingGroupName; // @synthesize thingGroupName=_thingGroupName;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *queryVersion; // @synthesize queryVersion=_queryVersion;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain, nonatomic) NSString *indexName; // @synthesize indexName=_indexName;
- (void).cxx_destruct;

@end
