//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface VoipAuthorizationToken : NSObject
{
    NSString *_userToken;
    NSString *_userEncToken;
    NSDate *_expirationTime;
}

- (void).cxx_destruct;
@property(retain) NSDate *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(retain) NSString *userEncToken; // @synthesize userEncToken=_userEncToken;
@property(retain) NSString *userToken; // @synthesize userToken=_userToken;

@end
