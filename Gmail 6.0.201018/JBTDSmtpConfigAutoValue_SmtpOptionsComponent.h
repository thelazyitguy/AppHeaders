//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTDSmtpConfigSmtpOptionsComponent.h"

@class ComGoogleCommonBaseOptional, JBTDSmtpConfigSmtpOptionsComponent_AuthenticationMechanism, NSString;
@protocol JBTDAuthfailedAuthenticationFailedHandler;

@interface JBTDSmtpConfigAutoValue_SmtpOptionsComponent : JBTDSmtpConfigSmtpOptionsComponent
{
    id <JBTDAuthfailedAuthenticationFailedHandler> authenticationFailedHandler_;
    JBTDSmtpConfigSmtpOptionsComponent_AuthenticationMechanism *authenticationMechanism_;
    NSString *emailAddress_;
    NSString *smtpHostAddress_;
    int smtpHostPort_;
    ComGoogleCommonBaseOptional *smtpOAuthTokenProducer_;
    _Bool smtpStartWithSsl_;
    ComGoogleCommonBaseOptional *passwordForPlainAuthentication_;
}

- (void)dealloc;
- (id)toBuilder;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)passwordForPlainAuthentication;
- (_Bool)smtpStartWithSsl;
- (id)smtpOAuthTokenProducer;
- (int)smtpHostPort;
- (id)smtpHostAddress;
- (id)emailAddress;
- (id)authenticationMechanism;
- (id)authenticationFailedHandler;

@end
