//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AIMAPAppleIDCredential : NSObject
{
    NSString *_authorizationCode;
    NSString *_identityToken;
    NSString *_userToken;
}

@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(retain, nonatomic) NSString *identityToken; // @synthesize identityToken=_identityToken;
@property(retain, nonatomic) NSString *authorizationCode; // @synthesize authorizationCode=_authorizationCode;
- (void).cxx_destruct;
- (id)generateUserTokenWithFullName:(id)arg1;
- (_Bool)isValid;
- (id)initWithAuthorizationCode:(id)arg1 identityToken:(id)arg2 fullName:(id)arg3;

@end
