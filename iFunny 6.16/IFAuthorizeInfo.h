//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IFAuthorizeInfo : NSObject
{
    _Bool _didLoadAgeBounds;
    unsigned long long _networkType;
    NSString *_email;
    NSString *_username;
    NSString *_photoURL;
    NSString *_clientID;
    NSString *_clientToken;
    NSString *_clientTokenSecret;
    unsigned long long _minAgeBound;
    unsigned long long _maxAgeBound;
    NSString *_oldClientID;
    NSString *_oldClientToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *oldClientToken; // @synthesize oldClientToken=_oldClientToken;
@property(retain, nonatomic) NSString *oldClientID; // @synthesize oldClientID=_oldClientID;
@property(nonatomic) unsigned long long maxAgeBound; // @synthesize maxAgeBound=_maxAgeBound;
@property(nonatomic) unsigned long long minAgeBound; // @synthesize minAgeBound=_minAgeBound;
@property(nonatomic) _Bool didLoadAgeBounds; // @synthesize didLoadAgeBounds=_didLoadAgeBounds;
@property(retain, nonatomic) NSString *clientTokenSecret; // @synthesize clientTokenSecret=_clientTokenSecret;
@property(retain, nonatomic) NSString *clientToken; // @synthesize clientToken=_clientToken;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) NSString *photoURL; // @synthesize photoURL=_photoURL;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) unsigned long long networkType; // @synthesize networkType=_networkType;
- (_Bool)isOver18;

@end
