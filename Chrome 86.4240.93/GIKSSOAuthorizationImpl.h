//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/GIKSSOAuthorization-Protocol.h>

@class NSString;
@protocol GIPAccountID, SSOAuthorization;

@interface GIKSSOAuthorizationImpl : NSObject <GIKSSOAuthorization>
{
    id <GIPAccountID> _accountID;
    id <SSOAuthorization> _authorizer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SSOAuthorization> authorizer; // @synthesize authorizer=_authorizer;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
- (id)initWithAccountID:(id)arg1 authorizer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
