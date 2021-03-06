//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSIdentityProvider-Protocol.h>

@class AWSTask, NSDictionary, NSString;

@protocol AWSCognitoIdentityProvider <AWSIdentityProvider>
@property(retain, nonatomic) NSDictionary *logins;
@property(retain, nonatomic) NSString *identityId;
@property(readonly, nonatomic) NSString *identityPoolId;
- (void)clear;
- (_Bool)isAuthenticated;
- (AWSTask *)getIdentityId;

@optional
@property(readonly, nonatomic) NSString *accountId;
@end

