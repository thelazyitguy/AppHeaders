//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class NSDictionary, NSString;

@interface AWSIoTUpdateAuthorizerRequest : AWSRequest
{
    NSString *_authorizerFunctionArn;
    NSString *_authorizerName;
    long long _status;
    NSString *_tokenKeyName;
    NSDictionary *_tokenSigningPublicKeys;
}

+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDictionary *tokenSigningPublicKeys; // @synthesize tokenSigningPublicKeys=_tokenSigningPublicKeys;
@property(retain, nonatomic) NSString *tokenKeyName; // @synthesize tokenKeyName=_tokenKeyName;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *authorizerName; // @synthesize authorizerName=_authorizerName;
@property(retain, nonatomic) NSString *authorizerFunctionArn; // @synthesize authorizerFunctionArn=_authorizerFunctionArn;
- (void).cxx_destruct;

@end
