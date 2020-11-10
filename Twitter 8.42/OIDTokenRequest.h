//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterCrashlytics/NSCopying-Protocol.h>
#import <TwitterCrashlytics/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSURL, OIDServiceConfiguration;

@interface OIDTokenRequest : NSObject <NSCopying, NSSecureCoding>
{
    OIDServiceConfiguration *_configuration;
    NSString *_grantType;
    NSString *_authorizationCode;
    NSURL *_redirectURL;
    NSString *_clientID;
    NSString *_clientSecret;
    NSString *_scope;
    NSString *_refreshToken;
    NSString *_codeVerifier;
    NSDictionary *_additionalParameters;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *additionalParameters; // @synthesize additionalParameters=_additionalParameters;
@property(readonly, nonatomic) NSString *codeVerifier; // @synthesize codeVerifier=_codeVerifier;
@property(readonly, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) NSString *clientSecret; // @synthesize clientSecret=_clientSecret;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(readonly, nonatomic) NSString *authorizationCode; // @synthesize authorizationCode=_authorizationCode;
@property(readonly, nonatomic) NSString *grantType; // @synthesize grantType=_grantType;
@property(readonly, nonatomic) OIDServiceConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)URLRequest;
- (id)tokenRequestBody;
- (id)tokenRequestURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1 grantType:(id)arg2 authorizationCode:(id)arg3 redirectURL:(id)arg4 clientID:(id)arg5 clientSecret:(id)arg6 scope:(id)arg7 refreshToken:(id)arg8 codeVerifier:(id)arg9 additionalParameters:(id)arg10;
- (id)initWithConfiguration:(id)arg1 grantType:(id)arg2 authorizationCode:(id)arg3 redirectURL:(id)arg4 clientID:(id)arg5 clientSecret:(id)arg6 scopes:(id)arg7 refreshToken:(id)arg8 codeVerifier:(id)arg9 additionalParameters:(id)arg10;
- (id)init;

@end

