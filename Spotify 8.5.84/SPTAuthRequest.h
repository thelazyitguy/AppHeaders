//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAuthLegacySessionObserver-Protocol.h"
#import "SPTAuthViewControllerDelegate-Protocol.h"

@class NSString, NSTimer, SPTAuthAccountsRequest, SPTAuthLegacySession, SPTHermesController;
@protocol SPTAuthRequestDelegate, SPTAuthTestManager, SPTContainerUIService;

@interface SPTAuthRequest : NSObject <SPTAuthLegacySessionObserver, SPTAuthViewControllerDelegate>
{
    _Bool _shouldDoSilentAuth;
    _Bool _shouldPerformRequest;
    _Bool _isCancelled;
    id <SPTAuthRequestDelegate> _delegate;
    NSString *_identifier;
    id <SPTContainerUIService> _containerUIService;
    SPTAuthAccountsRequest *_accountsRequest;
    NSTimer *_authenticationTimeoutTimer;
    SPTAuthLegacySession *_session;
    SPTHermesController *_hermesController;
    long long _retryCount;
    id <SPTAuthTestManager> _testManager;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) id <SPTAuthTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool shouldPerformRequest; // @synthesize shouldPerformRequest=_shouldPerformRequest;
@property(retain, nonatomic) SPTHermesController *hermesController; // @synthesize hermesController=_hermesController;
@property(nonatomic) __weak SPTAuthLegacySession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSTimer *authenticationTimeoutTimer; // @synthesize authenticationTimeoutTimer=_authenticationTimeoutTimer;
@property(retain, nonatomic) SPTAuthAccountsRequest *accountsRequest; // @synthesize accountsRequest=_accountsRequest;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) _Bool shouldDoSilentAuth; // @synthesize shouldDoSilentAuth=_shouldDoSilentAuth;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <SPTAuthRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authViewControllerUserDidCancel:(id)arg1;
- (void)authViewController:(id)arg1 didFinishWithResponseURL:(id)arg2;
- (void)sessionLoginModeChanged:(id)arg1;
- (_Bool)canSendRequestNow;
- (void)redirectToURL:(id)arg1;
- (void)startAuthorizeFlowWithCookie:(id)arg1;
- (void)handlePreFlightResponse:(long long)arg1 redirectURL:(id)arg2 cookie:(id)arg3;
- (void)sendPreFlightRequest:(id)arg1;
- (void)handleBakeryResponse:(id)arg1 error:(id)arg2;
- (void)sendAuthenticationRequest;
- (void)authenticateWithURL:(id)arg1 sourceApplication:(id)arg2;
- (void)authenticationFailedDueToTimeout:(id)arg1;
- (_Bool)timeoutTimerExpired;
- (void)stopTimeoutTimer;
- (void)startTimeoutTimer;
- (double)timeoutTimerInterval;
- (void)cancel;
- (void)dealloc;
- (id)initWithSession:(id)arg1 hermesController:(id)arg2 containerUIService:(id)arg3 testManager:(id)arg4 shouldDoSilentAuth:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
