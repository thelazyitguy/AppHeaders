//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterCrashlytics/NSCopying-Protocol.h>
#import <TwitterCrashlytics/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, OIDServiceConfiguration;

@interface OIDRegistrationRequest : NSObject <NSCopying, NSSecureCoding>
{
    OIDServiceConfiguration *_configuration;
    NSString *_initialAccessToken;
    NSString *_applicationType;
    NSArray *_redirectURIs;
    NSArray *_responseTypes;
    NSArray *_grantTypes;
    NSString *_subjectType;
    NSString *_tokenEndpointAuthenticationMethod;
    NSDictionary *_additionalParameters;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *additionalParameters; // @synthesize additionalParameters=_additionalParameters;
@property(readonly, nonatomic) NSString *tokenEndpointAuthenticationMethod; // @synthesize tokenEndpointAuthenticationMethod=_tokenEndpointAuthenticationMethod;
@property(readonly, nonatomic) NSString *subjectType; // @synthesize subjectType=_subjectType;
@property(readonly, nonatomic) NSArray *grantTypes; // @synthesize grantTypes=_grantTypes;
@property(readonly, nonatomic) NSArray *responseTypes; // @synthesize responseTypes=_responseTypes;
@property(readonly, nonatomic) NSArray *redirectURIs; // @synthesize redirectURIs=_redirectURIs;
@property(readonly, nonatomic) NSString *applicationType; // @synthesize applicationType=_applicationType;
@property(readonly, nonatomic) NSString *initialAccessToken; // @synthesize initialAccessToken=_initialAccessToken;
@property(readonly, nonatomic) OIDServiceConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)JSONString;
- (id)URLRequest;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1 redirectURIs:(id)arg2 responseTypes:(id)arg3 grantTypes:(id)arg4 subjectType:(id)arg5 tokenEndpointAuthMethod:(id)arg6 initialAccessToken:(id)arg7 additionalParameters:(id)arg8;
- (id)initWithConfiguration:(id)arg1 redirectURIs:(id)arg2 responseTypes:(id)arg3 grantTypes:(id)arg4 subjectType:(id)arg5 tokenEndpointAuthMethod:(id)arg6 additionalParameters:(id)arg7;
- (id)init;

@end

