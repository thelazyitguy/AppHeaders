//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AmazonOOUserIdentifier.h"

#import "AMAWebRequestDelegate-Protocol.h"

@class NSString;

@interface AmazonOOMAPUserIdentifier : AmazonOOUserIdentifier <AMAWebRequestDelegate>
{
    _Bool _isIdModule;
    NSString *_accessToken;
}

@property(nonatomic) _Bool isIdModule; // @synthesize isIdModule=_isIdModule;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (void)identityViewControllerShouldDismiss;
- (void)identityViewControllerDidCreated:(id)arg1;
- (void)didFailAccessTokenRetrievalWithError:(id)arg1;
- (void)didRetrieveAccessToken:(id)arg1;
- (void)errorReceived:(id)arg1 withStatusCode:(long long)arg2;
- (void)responseReceived:(id)arg1;
- (void)makeIdentifyUserCallWithAccessToken:(id)arg1;
- (id)overrides;
- (void)makeIdentifyUserCall;
- (void)identifyUserWithAccessToken:(id)arg1;
- (void)identifyUser;
- (id)initForIdModule;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
