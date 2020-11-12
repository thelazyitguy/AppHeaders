//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AIAuthenticationDelegate-Protocol.h"
#import "AMICartService-Protocol.h"

@class AMIAAPICartServiceErrorManager, AMIAAPIRequestBuilder, NSString, NSURLSession, NSUserDefaults;

@interface AMIAAPICartServiceHTTPImpl : NSObject <AIAuthenticationDelegate, AMICartService>
{
    NSURLSession *_session;
    NSUserDefaults *_userDefaults;
    AMIAAPIRequestBuilder *_requestBuilder;
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
    CDUnknownBlockType _successCallbackWithCartStoreIdentifier;
    CDUnknownBlockType _failureCallbackWithCartStoreIdentifier;
    AMIAAPICartServiceErrorManager *_errorManager;
    NSString *_cartStoreIdentifier;
}

+ (_Bool)TEST_HOOK_ISFIRSTCARTCALL;
+ (void)TEST_HOOK_SET_STATIC_VARIABLE_TO_NO;
+ (void)TEST_HOOK_RESET_STATIC_VARIABLE_TO_YES;
@property(retain) NSString *cartStoreIdentifier; // @synthesize cartStoreIdentifier=_cartStoreIdentifier;
@property(retain, nonatomic) AMIAAPICartServiceErrorManager *errorManager; // @synthesize errorManager=_errorManager;
@property(copy, nonatomic) CDUnknownBlockType failureCallbackWithCartStoreIdentifier; // @synthesize failureCallbackWithCartStoreIdentifier=_failureCallbackWithCartStoreIdentifier;
@property(copy, nonatomic) CDUnknownBlockType successCallbackWithCartStoreIdentifier; // @synthesize successCallbackWithCartStoreIdentifier=_successCallbackWithCartStoreIdentifier;
@property(copy, nonatomic) CDUnknownBlockType failureCallback; // @synthesize failureCallback=_failureCallback;
@property(copy, nonatomic) CDUnknownBlockType successCallback; // @synthesize successCallback=_successCallback;
@property(readonly, nonatomic) AMIAAPIRequestBuilder *requestBuilder; // @synthesize requestBuilder=_requestBuilder;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)callCartCountServiceWithRequest:(id)arg1;
- (void)callCartServiceWithAccessToken:(id)arg1;
- (void)callFailureCallbackWithErrorValue:(id)arg1;
- (void)callSuccessCallbackWithCountValue:(id)arg1;
- (void)didFailAccessTokenRetrievalWithError:(id)arg1;
- (void)didRetrieveAccessToken:(id)arg1;
- (void)checkForColdStartAndCallCartService;
- (void)getCountWithCartStoreIdentifier:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getCountSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
