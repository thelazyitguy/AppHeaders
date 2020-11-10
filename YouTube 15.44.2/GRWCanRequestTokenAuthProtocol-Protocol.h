//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSString;
@protocol GRWUserAccountsTokenRequester, SSOService;

@protocol GRWCanRequestTokenAuthProtocol <NSObject>
@property(readonly, nonatomic) id <GRWUserAccountsTokenRequester> tokenRequester;
@property(readonly, nonatomic) id <SSOService> authService;
@property(copy, nonatomic) NSString *signedInHashUserID;
@property(nonatomic) long long signedInState;
@end

