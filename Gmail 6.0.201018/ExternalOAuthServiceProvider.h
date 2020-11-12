//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface ExternalOAuthServiceProvider : NSObject
{
    _Bool _useOAuthRFC7636Code;
    unsigned long long _providerType;
    NSURL *_authenticationEndpoint;
    NSString *_clientId;
    NSString *_clientSecret;
    NSURL *_redirectUri;
    NSString *_scopes;
    NSURL *_tokenEndpoint;
    NSString *_emailHintParameterKey;
    NSString *_hostWhitelistRegularExpression;
    NSString *_pathBlacklistRegularExpression;
    long long _imapHostConnectionType;
    long long _imapHostPort;
    NSString *_imapHostUrl;
    long long _smtpHostConnectionType;
    long long _smtpHostPort;
    NSString *_smtpHostUrl;
}

+ (id)providerSettingsFor:(unsigned long long)arg1;
+ (id)mailRuProvider;
+ (id)yandexProvider;
+ (id)yahooProvider;
+ (id)outlookProvider;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *smtpHostUrl; // @synthesize smtpHostUrl=_smtpHostUrl;
@property(readonly, nonatomic) long long smtpHostPort; // @synthesize smtpHostPort=_smtpHostPort;
@property(readonly, nonatomic) long long smtpHostConnectionType; // @synthesize smtpHostConnectionType=_smtpHostConnectionType;
@property(readonly, copy, nonatomic) NSString *imapHostUrl; // @synthesize imapHostUrl=_imapHostUrl;
@property(readonly, nonatomic) long long imapHostPort; // @synthesize imapHostPort=_imapHostPort;
@property(readonly, nonatomic) long long imapHostConnectionType; // @synthesize imapHostConnectionType=_imapHostConnectionType;
@property(readonly, nonatomic) _Bool useOAuthRFC7636Code; // @synthesize useOAuthRFC7636Code=_useOAuthRFC7636Code;
@property(readonly, copy, nonatomic) NSString *pathBlacklistRegularExpression; // @synthesize pathBlacklistRegularExpression=_pathBlacklistRegularExpression;
@property(readonly, copy, nonatomic) NSString *hostWhitelistRegularExpression; // @synthesize hostWhitelistRegularExpression=_hostWhitelistRegularExpression;
@property(readonly, copy, nonatomic) NSString *emailHintParameterKey; // @synthesize emailHintParameterKey=_emailHintParameterKey;
@property(readonly, nonatomic) NSURL *tokenEndpoint; // @synthesize tokenEndpoint=_tokenEndpoint;
@property(readonly, copy, nonatomic) NSString *scopes; // @synthesize scopes=_scopes;
@property(readonly, nonatomic) NSURL *redirectUri; // @synthesize redirectUri=_redirectUri;
@property(readonly, copy, nonatomic) NSString *clientSecret; // @synthesize clientSecret=_clientSecret;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(readonly, nonatomic) NSURL *authenticationEndpoint; // @synthesize authenticationEndpoint=_authenticationEndpoint;
@property(readonly, nonatomic) unsigned long long providerType; // @synthesize providerType=_providerType;
- (id)createAuthorizationRequest;
- (id)createAuthorizationRequestWithEmailHint:(id)arg1;
- (id)createAuthorizationRequestWithAdditionalParameters:(id)arg1;
- (id)initWithProviderType:(unsigned long long)arg1 clientId:(id)arg2 clientSecret:(id)arg3 scopes:(id)arg4 redirectUri:(id)arg5 authenticationEndpoint:(id)arg6 tokenEndpoint:(id)arg7 emailHintParameterKey:(id)arg8 hostWhitelistRegularExpression:(id)arg9 pathBlacklistRegularExpression:(id)arg10 useOAuthRFC7636Code:(_Bool)arg11 imapHostUrl:(id)arg12 imapHostPort:(long long)arg13 imapHostConnectionType:(long long)arg14 smtpHostUrl:(id)arg15 smtpHostPort:(long long)arg16 smtpHostConnectionType:(long long)arg17;

@end
