//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AIAuthenticationDelegate-Protocol.h"
#import "CIPServiceCall-Protocol.h"

@class NSString, NSURLSessionTask;
@protocol CIPAuthProvider;

@interface CIPServiceHTTPCall : NSObject <CIPServiceCall, AIAuthenticationDelegate>
{
    _Bool _cancelled;
    NSURLSessionTask *_task;
    id <CIPAuthProvider> _authProvider;
    CDUnknownBlockType _authSuccess;
    CDUnknownBlockType _authFailure;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType authFailure; // @synthesize authFailure=_authFailure;
@property(readonly, copy, nonatomic) CDUnknownBlockType authSuccess; // @synthesize authSuccess=_authSuccess;
@property(readonly, nonatomic) id <CIPAuthProvider> authProvider; // @synthesize authProvider=_authProvider;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)didFailAccessTokenRetrievalWithError:(id)arg1;
- (void)didRetrieveAccessToken:(id)arg1;
- (void)cancel;
- (void)start;
- (id)initWithTask:(id)arg1 authProvider:(id)arg2 authSuccess:(CDUnknownBlockType)arg3 authFailure:(CDUnknownBlockType)arg4;
- (id)initWithTask:(id)arg1;
- (id)initWithAuthProvider:(id)arg1 authSuccess:(CDUnknownBlockType)arg2 authFailure:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

