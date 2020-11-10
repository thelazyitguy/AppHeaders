//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSURLRequestProcessor-Protocol.h>
#import <RedditCore/NSURLResponseProcessor-Protocol.h>

@class NSDate, NSString;
@protocol UserDefaultsProtocol;

@interface SessionTracker : NSObject <NSURLRequestProcessor, NSURLResponseProcessor>
{
    NSString *_pk;
    id <UserDefaultsProtocol> _userDefaults;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <UserDefaultsProtocol> userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void)processResponse:(id)arg1;
- (void)processRequest:(id)arg1;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) NSString *sessionId;
@property(copy, nonatomic) NSString *fullString;
@property(readonly, nonatomic) NSString *userDefaultsKey;
- (void)reset;
- (id)initWithAccountPk:(id)arg1 userDefaults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

