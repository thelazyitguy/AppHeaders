//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface AuthToken : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsPrimaryAccount; // @dynamic hasIsPrimaryAccount;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(nonatomic) _Bool hasUserIdType; // @dynamic hasUserIdType;
@property(nonatomic) _Bool isPrimaryAccount; // @dynamic isPrimaryAccount;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *token; // @dynamic token;
@property(nonatomic) int userIdType; // @dynamic userIdType;

@end

