//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSNetworkingConfiguration.h>

@class AWSEndpoint, NSArray, NSString;
@protocol AWSCredentialsProvider;

@interface AWSServiceConfiguration : AWSNetworkingConfiguration
{
    long long _regionType;
    id <AWSCredentialsProvider> _credentialsProvider;
    AWSEndpoint *_endpoint;
    NSArray *_userAgentProductTokens;
}

+ (void)addGlobalUserAgentProductToken:(id)arg1;
+ (id)baseUserAgent;
+ (id)configurationWithRegion:(long long)arg1 credentialsProvider:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *userAgentProductTokens; // @synthesize userAgentProductTokens=_userAgentProductTokens;
@property(retain, nonatomic) AWSEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) id <AWSCredentialsProvider> credentialsProvider; // @synthesize credentialsProvider=_credentialsProvider;
@property(nonatomic) long long regionType; // @synthesize regionType=_regionType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addUserAgentProductToken:(id)arg1;
@property(readonly, nonatomic) NSString *userAgent;
- (id)initWithRegion:(long long)arg1 credentialsProvider:(id)arg2;
- (id)init;

@end
