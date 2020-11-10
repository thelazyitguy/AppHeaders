//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/SUPAuthManager-Protocol.h>

@class NSString;
@protocol GTMFetcherAuthorizationProtocol;

@interface SUPSimpleAuthManager : NSObject <SUPAuthManager>
{
    id <GTMFetcherAuthorizationProtocol> _authorizer;
}

- (void).cxx_destruct;
- (id)authorizers;
- (void)presentSignInViewControllerFromViewController:(id)arg1 inDarkMode:(_Bool)arg2 withCallback:(CDUnknownBlockType)arg3;
- (_Bool)canAddAccount;
- (id)initWithAuthorizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

