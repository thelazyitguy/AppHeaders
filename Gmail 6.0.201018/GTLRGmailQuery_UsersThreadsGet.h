//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRGmailQuery.h"

@class NSArray, NSString;

@interface GTLRGmailQuery_UsersThreadsGet : GTLRGmailQuery
{
}

+ (id)queryWithUserId:(id)arg1 identifier:(id)arg2;
+ (id)arrayPropertyToClassMap;
+ (id)parameterNameMap;

// Remaining properties
@property(copy, nonatomic) NSString *format; // @dynamic format;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSArray *metadataHeaders; // @dynamic metadataHeaders;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end
