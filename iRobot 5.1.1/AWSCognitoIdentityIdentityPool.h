//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AWSCognitoIdentityIdentityPool : AWSRequest
{
    NSNumber *_allowClassicFlow;
    NSNumber *_allowUnauthenticatedIdentities;
    NSArray *_cognitoIdentityProviders;
    NSString *_developerProviderName;
    NSString *_identityPoolId;
    NSString *_identityPoolName;
    NSDictionary *_identityPoolTags;
    NSArray *_openIdConnectProviderARNs;
    NSArray *_samlProviderARNs;
    NSDictionary *_supportedLoginProviders;
}

+ (id)cognitoIdentityProvidersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDictionary *supportedLoginProviders; // @synthesize supportedLoginProviders=_supportedLoginProviders;
@property(retain, nonatomic) NSArray *samlProviderARNs; // @synthesize samlProviderARNs=_samlProviderARNs;
@property(retain, nonatomic) NSArray *openIdConnectProviderARNs; // @synthesize openIdConnectProviderARNs=_openIdConnectProviderARNs;
@property(retain, nonatomic) NSDictionary *identityPoolTags; // @synthesize identityPoolTags=_identityPoolTags;
@property(retain, nonatomic) NSString *identityPoolName; // @synthesize identityPoolName=_identityPoolName;
@property(retain, nonatomic) NSString *identityPoolId; // @synthesize identityPoolId=_identityPoolId;
@property(retain, nonatomic) NSString *developerProviderName; // @synthesize developerProviderName=_developerProviderName;
@property(retain, nonatomic) NSArray *cognitoIdentityProviders; // @synthesize cognitoIdentityProviders=_cognitoIdentityProviders;
@property(retain, nonatomic) NSNumber *allowUnauthenticatedIdentities; // @synthesize allowUnauthenticatedIdentities=_allowUnauthenticatedIdentities;
@property(retain, nonatomic) NSNumber *allowClassicFlow; // @synthesize allowClassicFlow=_allowClassicFlow;
- (void).cxx_destruct;

@end
