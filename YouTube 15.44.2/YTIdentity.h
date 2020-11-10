//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SSOAuthorization;

@interface YTIdentity : NSObject
{
    id <SSOAuthorization> _authorization;
    NSString *_pageID;
    NSString *_delegationContext;
    NSString *_userID;
    NSString *_ID;
    NSString *_dataSyncID;
    unsigned long long _identityType;
}

+ (id)unauthenticatedIdentityWithSessionID:(id)arg1 type:(unsigned long long)arg2;
+ (id)incognitoWithSessionID:(id)arg1;
+ (id)guestWithSessionID:(id)arg1;
+ (id)accountIdentityWithSSOAuthorization:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long identityType; // @synthesize identityType=_identityType;
- (_Bool)isEqualToIdentity:(id)arg1;
@property(readonly, nonatomic) NSString *delegationContext; // @dynamic delegationContext;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) id <SSOAuthorization> authorization;
@property(readonly, nonatomic) NSString *dataSyncID;
@property(readonly, nonatomic) NSString *ID;
@property(readonly, nonatomic) NSString *pageID;
@property(readonly, nonatomic) NSString *userID;
- (id)initWithSSOAuthorization:(id)arg1 userID:(id)arg2 pageID:(id)arg3 identityID:(id)arg4 dataSyncID:(id)arg5;
- (id)initWithIdentityType:(unsigned long long)arg1 SSOAuthorization:(id)arg2 userID:(id)arg3 pageID:(id)arg4 delegationContext:(id)arg5 identityID:(id)arg6 dataSyncID:(id)arg7;

@end

