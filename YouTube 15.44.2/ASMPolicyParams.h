//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIDOptions;
@protocol GTMFetcherAuthorizationProtocol;

@interface ASMPolicyParams : NSObject
{
    _Bool _signedOutMode;
    long long _policyScreenID;
    id <GTMFetcherAuthorizationProtocol> _authorizer;
    GIDOptions *_options;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GIDOptions *options; // @synthesize options=_options;
@property(nonatomic) _Bool signedOutMode; // @synthesize signedOutMode=_signedOutMode;
@property(retain, nonatomic) id <GTMFetcherAuthorizationProtocol> authorizer; // @synthesize authorizer=_authorizer;
@property(nonatomic) long long policyScreenID; // @synthesize policyScreenID=_policyScreenID;
- (id)init;

@end

