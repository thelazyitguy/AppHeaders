//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSHTTPCookie, NSString;

@interface _TtC10RedditCore18CredentialsManager : NSObject
{
    // Error parsing type: , name: keychain
    // Error parsing type: , name: identity
    // Error parsing type: , name: lock
}

- (void).cxx_destruct;
- (id)init;
- (void)clearAllValues;
- (void)expireTokenNow;
@property(nonatomic, readonly) NSHTTPCookie *modMailCookie;
@property(nonatomic, readonly) _Bool isExpired;
@property(nonatomic, readonly) _Bool isNotExpiringSoon;
@property(nonatomic, readonly) NSDate *expirationDate;
@property(nonatomic, readonly) NSString *refreshTokenString;
@property(nonatomic, readonly) NSString *tokenString;
- (_Bool)updateWithData:(id)arg1 error:(id *)arg2;
- (_Bool)changeUsername:(id)arg1 error:(id *)arg2;
- (id)initWithAccount:(id)arg1;

@end

