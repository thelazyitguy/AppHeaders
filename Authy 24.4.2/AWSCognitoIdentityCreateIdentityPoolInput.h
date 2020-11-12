//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AWSCognitoIdentityCreateIdentityPoolInput : AWSRequest
{
    NSNumber *_allowUnauthenticatedIdentities;
    NSString *_developerProviderName;
    NSString *_identityPoolName;
    NSArray *_openIdConnectProviderARNs;
    NSDictionary *_supportedLoginProviders;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *supportedLoginProviders; // @synthesize supportedLoginProviders=_supportedLoginProviders;
@property(retain, nonatomic) NSArray *openIdConnectProviderARNs; // @synthesize openIdConnectProviderARNs=_openIdConnectProviderARNs;
@property(retain, nonatomic) NSString *identityPoolName; // @synthesize identityPoolName=_identityPoolName;
@property(retain, nonatomic) NSString *developerProviderName; // @synthesize developerProviderName=_developerProviderName;
@property(retain, nonatomic) NSNumber *allowUnauthenticatedIdentities; // @synthesize allowUnauthenticatedIdentities=_allowUnauthenticatedIdentities;

@end
