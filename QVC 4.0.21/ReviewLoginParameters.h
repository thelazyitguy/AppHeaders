//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QCRequestParameters.h"

@class NSString;

@interface ReviewLoginParameters : QCRequestParameters
{
    NSString *action;
    NSString *authToken;
    NSString *Output;
    NSString *LoginId;
    NSString *LoginPin;
    NSString *includeNickname;
    NSString *UserName;
    NSString *catalogId;
    NSString *storeId;
    NSString *langId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *langId; // @synthesize langId;
@property(copy, nonatomic) NSString *storeId; // @synthesize storeId;
@property(copy, nonatomic) NSString *catalogId; // @synthesize catalogId;
@property(copy, nonatomic) NSString *UserName; // @synthesize UserName;
@property(copy, nonatomic) NSString *includeNickname; // @synthesize includeNickname;
@property(copy, nonatomic) NSString *LoginPin; // @synthesize LoginPin;
@property(copy, nonatomic) NSString *LoginId; // @synthesize LoginId;
@property(copy, nonatomic) NSString *Output; // @synthesize Output;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken;
@property(copy, nonatomic) NSString *action; // @synthesize action;
- (id)initWithLoginId:(id)arg1 loginPin:(id)arg2 action:(id)arg3 sessionId:(id)arg4 andNickname:(id)arg5;

@end
