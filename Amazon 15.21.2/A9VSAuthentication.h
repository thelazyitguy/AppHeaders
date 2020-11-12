//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface A9VSAuthentication : NSObject
{
    NSDate *_lastAuthTokenGeneration;
    NSString *_cachedAuthToken;
    NSString *_user;
    NSString *_application;
    NSString *_token;
}

@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *application; // @synthesize application=_application;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *cachedAuthToken; // @synthesize cachedAuthToken=_cachedAuthToken;
@property(retain, nonatomic) NSDate *lastAuthTokenGeneration; // @synthesize lastAuthTokenGeneration=_lastAuthTokenGeneration;
- (void).cxx_destruct;
- (id)SHA512StringFromString:(id)arg1;
- (id)stringFromHashData:(char *)arg1 digestLength:(unsigned long long)arg2;
- (unsigned long long)unixEpochForDate:(id)arg1;
- (id)authtokenWithUser:(id)arg1 application:(id)arg2 token:(id)arg3 date:(id)arg4;
- (id)authtoken;
- (id)authtokenWithUser:(id)arg1 application:(id)arg2 token:(id)arg3;
- (id)initWithUser:(id)arg1 application:(id)arg2 token:(id)arg3;

@end
