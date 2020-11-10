//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppAuth/NSSecureCoding-Protocol.h>

@class NSDate, NSError, NSMutableArray, NSString, OIDAuthorizationResponse, OIDRegistrationResponse, OIDTokenResponse;
@protocol OIDAuthStateChangeDelegate, OIDAuthStateErrorDelegate;

@interface OIDAuthState : NSObject <NSSecureCoding>
{
    NSMutableArray *_pendingActions;
    id _pendingActionsSyncObject;
    _Bool _needsTokenRefresh;
    NSString *_refreshToken;
    NSString *_scope;
    OIDAuthorizationResponse *_lastAuthorizationResponse;
    OIDTokenResponse *_lastTokenResponse;
    OIDRegistrationResponse *_lastRegistrationResponse;
    NSError *_authorizationError;
    id <OIDAuthStateChangeDelegate> _stateChangeDelegate;
    id <OIDAuthStateErrorDelegate> _errorDelegate;
}

+ (_Bool)supportsSecureCoding;
+ (id)authStateByPresentingAuthorizationRequest:(id)arg1 externalUserAgent:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)authStateByPresentingAuthorizationRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)authStateByPresentingAuthorizationRequest:(id)arg1 presentingViewController:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <OIDAuthStateErrorDelegate> errorDelegate; // @synthesize errorDelegate=_errorDelegate;
@property(nonatomic) __weak id <OIDAuthStateChangeDelegate> stateChangeDelegate; // @synthesize stateChangeDelegate=_stateChangeDelegate;
@property(readonly, nonatomic) NSError *authorizationError; // @synthesize authorizationError=_authorizationError;
@property(readonly, nonatomic) OIDRegistrationResponse *lastRegistrationResponse; // @synthesize lastRegistrationResponse=_lastRegistrationResponse;
@property(readonly, nonatomic) OIDTokenResponse *lastTokenResponse; // @synthesize lastTokenResponse=_lastTokenResponse;
@property(readonly, nonatomic) OIDAuthorizationResponse *lastAuthorizationResponse; // @synthesize lastAuthorizationResponse=_lastAuthorizationResponse;
@property(readonly, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
- (_Bool)isTokenFresh;
- (void)performActionWithFreshTokens:(CDUnknownBlockType)arg1 additionalRefreshParameters:(id)arg2 dispatchQueue:(id)arg3;
- (void)performActionWithFreshTokens:(CDUnknownBlockType)arg1 additionalRefreshParameters:(id)arg2;
- (void)performActionWithFreshTokens:(CDUnknownBlockType)arg1;
- (void)setNeedsTokenRefresh;
- (void)didChangeState;
- (id)tokenRefreshRequestWithAdditionalParameters:(id)arg1;
- (id)tokenRefreshRequest;
- (void)updateWithAuthorizationError:(id)arg1;
- (void)updateWithTokenResponse:(id)arg1 error:(id)arg2;
- (void)updateWithAuthorizationResponse:(id)arg1 error:(id)arg2;
- (void)updateWithRegistrationResponse:(id)arg1;
@property(readonly, nonatomic) _Bool isAuthorized;
@property(readonly, nonatomic) NSString *idToken;
@property(readonly, nonatomic) NSDate *accessTokenExpirationDate;
- (id)tokenType;
@property(readonly, nonatomic) NSString *accessToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithAuthorizationResponse:(id)arg1 tokenResponse:(id)arg2 registrationResponse:(id)arg3;
- (id)initWithRegistrationResponse:(id)arg1;
- (id)initWithAuthorizationResponse:(id)arg1 tokenResponse:(id)arg2;
- (id)initWithAuthorizationResponse:(id)arg1;
- (id)init;

@end

