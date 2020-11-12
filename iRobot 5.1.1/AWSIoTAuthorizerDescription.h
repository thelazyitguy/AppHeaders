//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface AWSIoTAuthorizerDescription : AWSModel
{
    NSString *_authorizerArn;
    NSString *_authorizerFunctionArn;
    NSString *_authorizerName;
    NSDate *_creationDate;
    NSDate *_lastModifiedDate;
    NSNumber *_signingDisabled;
    long long _status;
    NSString *_tokenKeyName;
    NSDictionary *_tokenSigningPublicKeys;
}

+ (id)statusJSONTransformer;
+ (id)lastModifiedDateJSONTransformer;
+ (id)creationDateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDictionary *tokenSigningPublicKeys; // @synthesize tokenSigningPublicKeys=_tokenSigningPublicKeys;
@property(retain, nonatomic) NSString *tokenKeyName; // @synthesize tokenKeyName=_tokenKeyName;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *signingDisabled; // @synthesize signingDisabled=_signingDisabled;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *authorizerName; // @synthesize authorizerName=_authorizerName;
@property(retain, nonatomic) NSString *authorizerFunctionArn; // @synthesize authorizerFunctionArn=_authorizerFunctionArn;
@property(retain, nonatomic) NSString *authorizerArn; // @synthesize authorizerArn=_authorizerArn;
- (void).cxx_destruct;

@end
