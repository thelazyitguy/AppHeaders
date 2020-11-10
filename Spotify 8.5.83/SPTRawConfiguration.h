//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPBInt64Array, NSDictionary, NSString, SPTRemoteConfiguration_GranularConfiguration;

@interface SPTRawConfiguration : NSObject
{
    GPBInt64Array *_policyGroupIDs;
    long long _rcsFetchTime;
    NSString *_assignmentID;
    NSDictionary *_properties;
    SPTRemoteConfiguration_GranularConfiguration *_granularConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTRemoteConfiguration_GranularConfiguration *granularConfiguration; // @synthesize granularConfiguration=_granularConfiguration;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSString *assignmentID; // @synthesize assignmentID=_assignmentID;
@property(readonly, nonatomic) long long rcsFetchTime; // @synthesize rcsFetchTime=_rcsFetchTime;
@property(readonly, nonatomic) GPBInt64Array *policyGroupIDs; // @synthesize policyGroupIDs=_policyGroupIDs;
- (id)propertyFromProtobuf:(id)arg1;
- (id)createPropertiesFromConfiguration:(id)arg1;
- (id)createGroupIDsFromConfiguration:(id)arg1;
@property(readonly, nonatomic) _Bool isDefaultConfiguration;
- (id)initWithConfiguration:(id)arg1;

@end

