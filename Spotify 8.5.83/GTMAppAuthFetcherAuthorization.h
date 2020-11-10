//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTMFetcherAuthorizationProtocol-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSMutableArray, NSString, OIDAuthState;
@protocol GTMAppAuthFetcherAuthorizationTokenRefreshDelegate, GTMSessionFetcherServiceProtocol;

@interface GTMAppAuthFetcherAuthorization : NSObject <GTMFetcherAuthorizationProtocol, NSSecureCoding>
{
    NSMutableArray *_authorizationQueue;
    _Bool _shouldAuthorizeAllRequests;
    OIDAuthState *_authState;
    NSString *_serviceProvider;
    NSString *_userID;
    NSString *_userEmailIsVerified;
    NSString *_userEmail;
    id <GTMSessionFetcherServiceProtocol> _fetcherService;
    id <GTMAppAuthFetcherAuthorizationTokenRefreshDelegate> _tokenRefreshDelegate;
}

+ (_Bool)supportsSecureCoding;
+ (id)configurationForGoogle;
+ (_Bool)saveAuthorization:(id)arg1 toKeychainForName:(id)arg2;
+ (_Bool)removeAuthorizationFromKeychainForName:(id)arg1;
+ (id)authorizationFromKeychainForName:(id)arg1;
@property(nonatomic) __weak id <GTMAppAuthFetcherAuthorizationTokenRefreshDelegate> tokenRefreshDelegate; // @synthesize tokenRefreshDelegate=_tokenRefreshDelegate;
@property __weak id <GTMSessionFetcherServiceProtocol> fetcherService; // @synthesize fetcherService=_fetcherService;
@property _Bool shouldAuthorizeAllRequests; // @synthesize shouldAuthorizeAllRequests=_shouldAuthorizeAllRequests;
@property(readonly) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(readonly, nonatomic) NSString *userEmailIsVerified; // @synthesize userEmailIsVerified=_userEmailIsVerified;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, nonatomic) NSString *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(readonly, nonatomic) OIDAuthState *authState; // @synthesize authState=_authState;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)primeForRefresh;
- (void)authorizeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) _Bool canAuthorize;
- (_Bool)isAuthorizedRequest:(id)arg1;
- (_Bool)isAuthorizingRequest:(id)arg1;
- (void)stopAuthorizationForRequest:(id)arg1;
- (void)stopAuthorization;
- (void)authorizeRequest:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3;
- (void)invokeCallbackArgs:(id)arg1;
- (_Bool)authorizeRequestImmediateArgs:(id)arg1 accessToken:(id)arg2 error:(id)arg3;
- (void)authorizeRequestArgs:(id)arg1;
- (id)initWithAuthState:(id)arg1 serviceProvider:(id)arg2 userID:(id)arg3 userEmail:(id)arg4 userEmailIsVerified:(id)arg5;
- (id)initWithAuthState:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

