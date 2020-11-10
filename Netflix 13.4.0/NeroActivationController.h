//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RegistrationHandler-Protocol.h"

@class NIDTokens, NSString;
@protocol DataBrokerDataProviderProtocol;

@interface NeroActivationController : NSObject <RegistrationHandler>
{
    _Bool _unauthorizedSession;
    _Bool _isNonMemberTokenActivation;
    _Bool _isNonMemberPlayback;
    id <DataBrokerDataProviderProtocol> _delegate;
    NIDTokens *_interimTokens;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NIDTokens *interimTokens; // @synthesize interimTokens=_interimTokens;
@property _Bool isNonMemberPlayback; // @synthesize isNonMemberPlayback=_isNonMemberPlayback;
@property _Bool isNonMemberTokenActivation; // @synthesize isNonMemberTokenActivation=_isNonMemberTokenActivation;
@property _Bool unauthorizedSession; // @synthesize unauthorizedSession=_unauthorizedSession;
@property(nonatomic) __weak id <DataBrokerDataProviderProtocol> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasInterimCredentials;
- (void)refreshCredentialsForProfileGUID:(id)arg1 tokens:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)refreshCredentials:(CDUnknownBlockType)arg1;
- (void)refreshTokens:(CDUnknownBlockType)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)loadWebViewForBadUserWithEmail:(id)arg1 password:(id)arg2;
- (void)signUpCompleted:(id)arg1;
- (void)handleDidDeactivateWithResult:(id)arg1;
- (void)handleActivationErrorAfterSignIn:(id)arg1;
- (void)onActivationError:(id)arg1;
- (void)handleDidActivateWithResult:(id)arg1;
- (void)handlePrepareServiceSuccess;
- (void)performActionsAfterProfileSwitchToProfileGUID:(id)arg1 nrdEvent:(id)arg2 tokens:(id)arg3 cookies:(id)arg4 objectContext:(id)arg5 withCallback:(CDUnknownBlockType)arg6;
- (void)prepareRegistrationControllerWithTokens:(id)arg1 profileId:(id)arg2 objectContext:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)prepareServicesAfterProfileSelection:(id)arg1 objectContext:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)loadConfigForNonMember:(CDUnknownBlockType)arg1;
- (void)prepareServicesAfterLogout:(CDUnknownBlockType)arg1;
- (void)prepareServicesAfterLogin:(CDUnknownBlockType)arg1;
- (void)unregisterRegistrationHandler;
- (void)registerRegistrationHandler;
- (id)registrationController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

