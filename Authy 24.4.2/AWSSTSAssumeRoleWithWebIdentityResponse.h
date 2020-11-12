//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class AWSSTSAssumedRoleUser, AWSSTSCredentials, NSNumber, NSString;

@interface AWSSTSAssumeRoleWithWebIdentityResponse : AWSModel
{
    AWSSTSAssumedRoleUser *_assumedRoleUser;
    NSString *_audience;
    AWSSTSCredentials *_credentials;
    NSNumber *_packedPolicySize;
    NSString *_provider;
    NSString *_subjectFromWebIdentityToken;
}

+ (id)credentialsJSONTransformer;
+ (id)assumedRoleUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subjectFromWebIdentityToken; // @synthesize subjectFromWebIdentityToken=_subjectFromWebIdentityToken;
@property(retain, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSNumber *packedPolicySize; // @synthesize packedPolicySize=_packedPolicySize;
@property(retain, nonatomic) AWSSTSCredentials *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) NSString *audience; // @synthesize audience=_audience;
@property(retain, nonatomic) AWSSTSAssumedRoleUser *assumedRoleUser; // @synthesize assumedRoleUser=_assumedRoleUser;

@end
