//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CISAuthorizationService-Protocol.h"

@class NSString;
@protocol SSOService;

@interface CISSSOAuthorizationService : NSObject <CISAuthorizationService>
{
    id <SSOService> _signInService;
}

+ (id)accountsFrom:(id)arg1;
- (void).cxx_destruct;
- (id)privateAuthorizerForUserID:(id)arg1 scopes:(id)arg2;
- (void)getAccessTokenForUserID:(id)arg1 scopes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 completionHandlerQueue:(id)arg4;
- (id)accountsRequiringReauth;
- (id)accounts;
- (id)authorizerForUserID:(id)arg1 scopes:(id)arg2;
- (id)initWithSignInService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
